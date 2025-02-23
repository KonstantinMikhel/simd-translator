
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AssemblyParser.
 */
class  AssemblyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(AssemblyParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(AssemblyParser::ProgramContext *ctx) = 0;

  virtual void enterAddStatement(AssemblyParser::AddStatementContext *ctx) = 0;
  virtual void exitAddStatement(AssemblyParser::AddStatementContext *ctx) = 0;

  virtual void enterSubStatement(AssemblyParser::SubStatementContext *ctx) = 0;
  virtual void exitSubStatement(AssemblyParser::SubStatementContext *ctx) = 0;


};

