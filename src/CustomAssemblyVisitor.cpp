#include "CustomAssemblyVisitor.h"


antlrcpp::Any CustomAssemblyVisitor::visitAddStatement(AssemblyParser::AddStatementContext* context) {
    std::string reg;
    std::string value;
    if (context->REGISTER().size() == 1) {
        reg = context->REGISTER().front()->getText();
        value = context->INT()->getText();
    } else if (context->REGISTER().size() == 2) {
        reg = context->REGISTER().front()->getText();
        value = context->REGISTER().back()->getText();
    } else {
        std::cout << "Wrong format\n";
        return antlrcpp::Any{};
    }
    std::cout << "Parsed ADD Operation: "
              << "Register: " << reg
              << ", Value: " << value
              << "\n";
    return antlrcpp::Any{};
}


antlrcpp::Any CustomAssemblyVisitor::visitSubStatement(AssemblyParser::SubStatementContext* context) {
    std::string reg;
    std::string value;
    if (context->REGISTER().size() == 1) {
        reg = context->REGISTER().front()->getText();
        value = context->INT()->getText();
    } else if (context->REGISTER().size() == 2) {
        reg = context->REGISTER().front()->getText();
        value = context->REGISTER().back()->getText();
    } else {
        std::cout << "Wrong format\n";
        return antlrcpp::Any{};
    }
    std::cout << "Parsed SUB Operation: "
              << "Register: " << reg
              << ", Value: " << value
              << "\n";
    return antlrcpp::Any{};
}