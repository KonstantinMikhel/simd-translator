#include "CustomAssemblyVisitor.h"


antlrcpp::Any CustomAssemblyVisitor::visitAddStatement(AssemblyParser::AddStatementContext* context) {
    std::string register_ = context->register_()->getText();
    std::string operand = context->operand()->getText();
    std::cout << "Parsed ADD Operation: "
              << "Register: " << register_
              << ", Operand: " << operand
              << "\n";
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