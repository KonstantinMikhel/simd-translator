
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AssemblyParser.
 */
class  AssemblyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AssemblyParser.
   */
    virtual std::any visitProgram(AssemblyParser::ProgramContext *context) = 0;

    virtual std::any visitAddStatement(AssemblyParser::AddStatementContext *context) = 0;

    virtual std::any visitSubStatement(AssemblyParser::SubStatementContext *context) = 0;


};

