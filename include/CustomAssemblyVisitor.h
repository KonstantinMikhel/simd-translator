#ifndef CUSTOM_ASSEMBLY_VISITOR_H
#define CUSTOM_ASSEMBLY_VISITOR_H

#include "AssemblyBaseVisitor.h"

class CustomAssemblyVisitor : public AssemblyBaseVisitor {
public:
    antlrcpp::Any visitAddStatement(AssemblyParser::AddStatementContext* context) override;
    antlrcpp::Any visitSubStatement(AssemblyParser::SubStatementContext* context) override;
};

#endif  // CUSTOM_ASSEMBLY_VISITOR_H