
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

  virtual void enterStatement(AssemblyParser::StatementContext *ctx) = 0;
  virtual void exitStatement(AssemblyParser::StatementContext *ctx) = 0;

  virtual void enterAddStatement(AssemblyParser::AddStatementContext *ctx) = 0;
  virtual void exitAddStatement(AssemblyParser::AddStatementContext *ctx) = 0;

  virtual void enterSubStatement(AssemblyParser::SubStatementContext *ctx) = 0;
  virtual void exitSubStatement(AssemblyParser::SubStatementContext *ctx) = 0;

  virtual void enterCmpStatement(AssemblyParser::CmpStatementContext *ctx) = 0;
  virtual void exitCmpStatement(AssemblyParser::CmpStatementContext *ctx) = 0;

  virtual void enterJzStatement(AssemblyParser::JzStatementContext *ctx) = 0;
  virtual void exitJzStatement(AssemblyParser::JzStatementContext *ctx) = 0;

  virtual void enterRegister(AssemblyParser::RegisterContext *ctx) = 0;
  virtual void exitRegister(AssemblyParser::RegisterContext *ctx) = 0;

  virtual void enterOperand(AssemblyParser::OperandContext *ctx) = 0;
  virtual void exitOperand(AssemblyParser::OperandContext *ctx) = 0;

  virtual void enterLabel(AssemblyParser::LabelContext *ctx) = 0;
  virtual void exitLabel(AssemblyParser::LabelContext *ctx) = 0;


};

