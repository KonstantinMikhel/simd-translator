#include "CustomAssemblyVisitor.h"


antlrcpp::Any CustomAssemblyVisitor::visitAddStatement(AssemblyParser::AddStatementContext* context) {
    std::string reg = context->register_()->getText();
    std::string value = context->operand()->getText();
    std::cout << "Parsed ADD Operation: "
              << "Register: " << reg
              << ", Operand: " << value
              << "\n";
    return antlrcpp::Any{};
}


antlrcpp::Any CustomAssemblyVisitor::visitSubStatement(AssemblyParser::SubStatementContext* context) {
    std::string reg = context->register_()->getText();
    std::string value = context->operand()->getText();
    std::cout << "Parsed SUB Operation: "
              << "Register: " << reg
              << ", Operand: " << value
              << "\n";
    return antlrcpp::Any{};
}