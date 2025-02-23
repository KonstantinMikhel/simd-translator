
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyVisitor.h"


/**
 * This class provides an empty implementation of AssemblyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AssemblyBaseVisitor : public AssemblyVisitor {
public:

  virtual std::any visitProgram(AssemblyParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AssemblyParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddStatement(AssemblyParser::AddStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubStatement(AssemblyParser::SubStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpStatement(AssemblyParser::CmpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJzStatement(AssemblyParser::JzStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegister(AssemblyParser::RegisterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperand(AssemblyParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(AssemblyParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }


};

