#include "CustomAssemblyVisitor.h"


antlrcpp::Any CustomAssemblyVisitor::visitAddStatement(AssemblyParser::AddStatementContext* context) {
    std::string register_ = context->register_()->getText();
    std::string operand = context->operand()->getText();

    uint8_t opcode = 0x83;
    uint8_t modrm = 0xC0; // MODRM byte for EAX register
    if (register_ == "ebx") modrm = 0xC3;
    else if (register_ == "ecx") modrm = 0xC1;
    else if (register_ == "edx") modrm = 0xC2;

    machineCode.push_back(opcode);
    machineCode.push_back(modrm);
    machineCode.push_back(static_cast<uint8_t>(std::stoi(operand)));

    std::cout << "Generated: " 
              << std::hex << static_cast<int>(opcode) << " "
              << static_cast<int>(modrm) << " "
              << static_cast<int>(std::stoi(operand)) << std::endl;

    return antlrcpp::Any{};
}


antlrcpp::Any CustomAssemblyVisitor::visitSubStatement(AssemblyParser::SubStatementContext* context) {
    std::string register_ = context->register_()->getText();
    std::string operand = context->operand()->getText();
    std::cout << "Parsed SUB Operation: "
              << "Register: " << register_
              << ", Operand: " << operand
              << "\n";
    return antlrcpp::Any{};
}


antlrcpp::Any CustomAssemblyVisitor::visitCmpStatement(AssemblyParser::CmpStatementContext* context) {
    std::string register_ = context->register_()->getText();
    std::string operand = context->operand()->getText();
    std::cout << "Parsed CMP Operation: "
              << "Register: " << register_
              << ", Operand: " << operand
              << "\n";
    return antlrcpp::Any{};
}


antlrcpp::Any CustomAssemblyVisitor::visitJzStatement(AssemblyParser::JzStatementContext* context) {
    std::string label = context->label()->getText();
    std::cout << "Parsed JZ Operation: "
              << "Label: " << label
              << "\n";
    return antlrcpp::Any{};
}