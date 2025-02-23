#include <iostream>
#include "antlr4-runtime.h"
#include "AssemblyLexer.h"
#include "AssemblyParser.h"
#include "CustomAssemblyVisitor.h"


int main() {
    std::stringstream ss;
    ss << "add eax, 5\n";
    ss << "sub eax, eab\n";
    ss << "sub eab, -3\n";
    ss << "cmp eax, 0\n";
    ss << "cmp eab, eax\n";
    ss << "jz _compare_label\n";
    std::string input = ss.str();

    antlr4::ANTLRInputStream inputStream{ input };
    AssemblyLexer lexer{ &inputStream };

    antlr4::CommonTokenStream tokens{ &lexer };
    AssemblyParser parser{ &tokens };

    AssemblyParser::ProgramContext *tree = parser.program();

    CustomAssemblyVisitor visitor;
    visitor.visit(tree);

    return 0;
}