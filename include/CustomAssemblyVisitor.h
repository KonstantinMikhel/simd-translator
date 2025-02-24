#ifndef CUSTOM_ASSEMBLY_VISITOR_H
#define CUSTOM_ASSEMBLY_VISITOR_H

#include "AssemblyBaseVisitor.h"

class CustomAssemblyVisitor : public AssemblyBaseVisitor {
public:
    antlrcpp::Any visitAddStatement(AssemblyParser::AddStatementContext* context) override;
    antlrcpp::Any visitSubStatement(AssemblyParser::SubStatementContext* context) override;
    antlrcpp::Any visitCmpStatement(AssemblyParser::CmpStatementContext* context) override;
    antlrcpp::Any visitJzStatement(AssemblyParser::JzStatementContext* context) override;

    const std::vector<uint8_t>& getMachineCode() const {
        return machineCode;
    }
private:
    std::vector<uint8_t> machineCode;
};

#endif  // CUSTOM_ASSEMBLY_VISITOR_H