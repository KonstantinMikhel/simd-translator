
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyListener.h"


/**
 * This class provides an empty implementation of AssemblyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AssemblyBaseListener : public AssemblyListener {
public:

  virtual void enterProgram(AssemblyParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(AssemblyParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(AssemblyParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(AssemblyParser::StatementContext * /*ctx*/) override { }

  virtual void enterAddStatement(AssemblyParser::AddStatementContext * /*ctx*/) override { }
  virtual void exitAddStatement(AssemblyParser::AddStatementContext * /*ctx*/) override { }

  virtual void enterSubStatement(AssemblyParser::SubStatementContext * /*ctx*/) override { }
  virtual void exitSubStatement(AssemblyParser::SubStatementContext * /*ctx*/) override { }

  virtual void enterCmpStatement(AssemblyParser::CmpStatementContext * /*ctx*/) override { }
  virtual void exitCmpStatement(AssemblyParser::CmpStatementContext * /*ctx*/) override { }

  virtual void enterJzStatement(AssemblyParser::JzStatementContext * /*ctx*/) override { }
  virtual void exitJzStatement(AssemblyParser::JzStatementContext * /*ctx*/) override { }

  virtual void enterRegister(AssemblyParser::RegisterContext * /*ctx*/) override { }
  virtual void exitRegister(AssemblyParser::RegisterContext * /*ctx*/) override { }

  virtual void enterOperand(AssemblyParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(AssemblyParser::OperandContext * /*ctx*/) override { }

  virtual void enterLabel(AssemblyParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(AssemblyParser::LabelContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

