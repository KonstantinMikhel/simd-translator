#include <iostream>
#include "antlr4-runtime.h"
#include "AssemblyLexer.h"
#include "AssemblyParser.h"
#include "CustomAssemblyVisitor.h"


std::vector<uint8_t> generateELF(const std::vector<uint8_t> &code) {
    std::vector<uint8_t> elf = {
        0x7F, 'E', 'L', 'F',   // ELF magic
        0x01, 0x01, 0x01, 0x00, // 32-bit, little-endian, version 1
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Unused
        0x02, 0x00, 0x03, 0x00, // Type = EXEC (2), Machine = x86 (3)
        0x01, 0x00, 0x00, 0x00, // ELF version 1
        0x54, 0x80, 0x04, 0x08, // Entry point (offset 0x80 в бинарнике)
        0x34, 0x00, 0x00, 0x00, // Program header offset
        0x00, 0x00, 0x00, 0x00, // Section header offset (не используем)
        0x00, 0x00, 0x00, 0x00, // Flags
        0x34, 0x00, 0x20, 0x00, // ELF header size (0x34), Program header size (0x20)
        0x01, 0x00, 0x00, 0x00, // 1 программный заголовок
        0x00, 0x00, 0x00, 0x00, // No section headers
    };

    uint32_t segment_size = 0x54 + code.size();  // ELF заголовки + код

    std::vector<uint8_t> phdr = {
        0x01, 0x00, 0x00, 0x00, // PT_LOAD (1)
        0x54, 0x00, 0x00, 0x00, // Offset в файле
        0x54, 0x80, 0x04, 0x08, // Виртуальный адрес (0x80)
        0x80, 0x00, 0x00, 0x00, // Физический адрес (не важен)
        static_cast<uint8_t>(segment_size), 0x00, 0x00, 0x00, // Размер в файле
        static_cast<uint8_t>(segment_size), 0x00, 0x00, 0x00, // Размер в памяти
        0x07, 0x00, 0x00, 0x00  // Флаги: RWX (чтение, запись, исполнение)
    };

    elf.insert(elf.end(), phdr.begin(), phdr.end());  // Добавляем Program Header
    elf.resize(0x54, 0x00);  // Выравниваем до entry point
    elf.insert(elf.end(), code.begin(), code.end());  // Добавляем наш код
    
    // // mov eax, 1 (sys_exit)
    // std::array<uint8_t, 5> sysExit = { 0xB8, 0x01, 0x00, 0x00, 0x00 };
    // elf.insert(elf.end(), sysExit.begin(), sysExit.end());

    // // mov ebx, 0 (exit code)
    // std::array<uint8_t, 5> exitCode = { 0xBB, 0x00, 0x00, 0x00, 0x00 };
    // elf.insert(elf.end(), exitCode.begin(), exitCode.end());

    // // int 0x80 (вызов system exit)
    // std::array<uint8_t, 2> systemExit = { 0xCD, 0x80 };
    // elf.insert(elf.end(), systemExit.begin(), systemExit.end());

    // mov [0x90], eax  (Сохранение eax в память)
    std::array<uint8_t, 5> saveEax = { 0xA3, 0x90, 0x80, 0x04, 0x08 };
    elf.insert(elf.end(), saveEax.begin(), saveEax.end());

    // mov eax, 4 (sys_write)
    std::array<uint8_t, 5> sysWrite = { 0xB8, 0x04, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), sysWrite.begin(), sysWrite.end());

    // mov ebx, 1 (stdout)
    std::array<uint8_t, 5> stdoutFd = { 0xBB, 0x01, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), stdoutFd.begin(), stdoutFd.end());

    // mov ecx, 0x90 (адрес буфера)
    std::array<uint8_t, 5> bufferAddr = { 0xB9, 0x90, 0x80, 0x04, 0x08 };
    elf.insert(elf.end(), bufferAddr.begin(), bufferAddr.end());

    // mov edx, 4 (длина буфера, 4 байта)
    std::array<uint8_t, 5> bufferSize = { 0xBA, 0x04, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), bufferSize.begin(), bufferSize.end());

    // int 0x80 (вызов sys_write)
    std::array<uint8_t, 2> syscallWrite = { 0xCD, 0x80 };
    elf.insert(elf.end(), syscallWrite.begin(), syscallWrite.end());

    // mov eax, 1 (sys_exit)
    std::array<uint8_t, 5> sysExit = { 0xB8, 0x01, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), sysExit.begin(), sysExit.end());

    // mov ebx, 0 (exit code)
    std::array<uint8_t, 5> exitCode = { 0xBB, 0x00, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), exitCode.begin(), exitCode.end());

    // int 0x80 (вызов system exit)
    std::array<uint8_t, 2> systemExit = { 0xCD, 0x80 };
    elf.insert(elf.end(), systemExit.begin(), systemExit.end());

    // Добавляем буфер (4 байта, инициализируем нулями)
    std::array<uint8_t, 4> buffer = { 0x00, 0x00, 0x00, 0x00 };
    elf.insert(elf.end(), buffer.begin(), buffer.end());

    return elf;
}


void saveBinary(const std::string& filename, const std::vector<uint8_t>& data) {
    std::ofstream file{ filename, std::ios::binary };
    file.write(reinterpret_cast<const char*>(data.data()), data.size());
    file.close();
}


int main() {
    std::stringstream ss;
    ss << "add eax, 5\n";
    ss << "add eax, 3\n";
    // ss << "add eax, 10\n";
    // ss << "sub eax, eab\n";
    // ss << "sub eab, -3\n";
    // ss << "cmp eax, 0\n";
    // ss << "cmp eab, eax\n";
    // ss << "jz _compare_label\n";
    std::string input = ss.str();

    antlr4::ANTLRInputStream inputStream{ input };
    AssemblyLexer lexer{ &inputStream };

    antlr4::CommonTokenStream tokens{ &lexer };
    AssemblyParser parser{ &tokens };

    AssemblyParser::ProgramContext *tree = parser.program();

    CustomAssemblyVisitor visitor;
    visitor.visit(tree);

    const auto& code = visitor.getMachineCode();
    auto elf = generateELF(code);

    saveBinary("executable", elf);

    return 0;
}