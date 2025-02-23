
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2


#include "AssemblyListener.h"
#include "AssemblyVisitor.h"

#include "AssemblyParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct AssemblyParserStaticData final {
  AssemblyParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AssemblyParserStaticData(const AssemblyParserStaticData&) = delete;
  AssemblyParserStaticData(AssemblyParserStaticData&&) = delete;
  AssemblyParserStaticData& operator=(const AssemblyParserStaticData&) = delete;
  AssemblyParserStaticData& operator=(AssemblyParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag assemblyParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<AssemblyParserStaticData> assemblyParserStaticData = nullptr;

void assemblyParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (assemblyParserStaticData != nullptr) {
    return;
  }
#else
  assert(assemblyParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<AssemblyParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "addStatement", "subStatement", "register", 
      "operand"
    },
    std::vector<std::string>{
      "", "'add'", "','", "'\\n'", "'sub'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "VALID_NAME", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,43,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,5,0,14,8,
  	0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,3,5,41,8,5,1,5,0,0,6,0,2,4,6,
  	8,10,0,0,39,0,15,1,0,0,0,2,22,1,0,0,0,4,24,1,0,0,0,6,30,1,0,0,0,8,36,
  	1,0,0,0,10,40,1,0,0,0,12,14,3,2,1,0,13,12,1,0,0,0,14,17,1,0,0,0,15,13,
  	1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,0,1,19,1,
  	1,0,0,0,20,23,3,4,2,0,21,23,3,6,3,0,22,20,1,0,0,0,22,21,1,0,0,0,23,3,
  	1,0,0,0,24,25,5,1,0,0,25,26,3,8,4,0,26,27,5,2,0,0,27,28,3,10,5,0,28,29,
  	5,3,0,0,29,5,1,0,0,0,30,31,5,4,0,0,31,32,3,8,4,0,32,33,5,2,0,0,33,34,
  	3,10,5,0,34,35,5,3,0,0,35,7,1,0,0,0,36,37,5,5,0,0,37,9,1,0,0,0,38,41,
  	3,8,4,0,39,41,5,6,0,0,40,38,1,0,0,0,40,39,1,0,0,0,41,11,1,0,0,0,3,15,
  	22,40
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  assemblyParserStaticData = std::move(staticData);
}

}

AssemblyParser::AssemblyParser(TokenStream *input) : AssemblyParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

AssemblyParser::AssemblyParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  AssemblyParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *assemblyParserStaticData->atn, assemblyParserStaticData->decisionToDFA, assemblyParserStaticData->sharedContextCache, options);
}

AssemblyParser::~AssemblyParser() {
  delete _interpreter;
}

const atn::ATN& AssemblyParser::getATN() const {
  return *assemblyParserStaticData->atn;
}

std::string AssemblyParser::getGrammarFileName() const {
  return "Assembly.g4";
}

const std::vector<std::string>& AssemblyParser::getRuleNames() const {
  return assemblyParserStaticData->ruleNames;
}

const dfa::Vocabulary& AssemblyParser::getVocabulary() const {
  return assemblyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AssemblyParser::getSerializedATN() const {
  return assemblyParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

AssemblyParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::ProgramContext::EOF() {
  return getToken(AssemblyParser::EOF, 0);
}

std::vector<AssemblyParser::StatementContext *> AssemblyParser::ProgramContext::statement() {
  return getRuleContexts<AssemblyParser::StatementContext>();
}

AssemblyParser::StatementContext* AssemblyParser::ProgramContext::statement(size_t i) {
  return getRuleContext<AssemblyParser::StatementContext>(i);
}


size_t AssemblyParser::ProgramContext::getRuleIndex() const {
  return AssemblyParser::RuleProgram;
}

void AssemblyParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void AssemblyParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any AssemblyParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ProgramContext* AssemblyParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AssemblyParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__0

    || _la == AssemblyParser::T__3) {
      setState(12);
      statement();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(AssemblyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AssemblyParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AssemblyParser::AddStatementContext* AssemblyParser::StatementContext::addStatement() {
  return getRuleContext<AssemblyParser::AddStatementContext>(0);
}

AssemblyParser::SubStatementContext* AssemblyParser::StatementContext::subStatement() {
  return getRuleContext<AssemblyParser::SubStatementContext>(0);
}


size_t AssemblyParser::StatementContext::getRuleIndex() const {
  return AssemblyParser::RuleStatement;
}

void AssemblyParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void AssemblyParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any AssemblyParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::StatementContext* AssemblyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, AssemblyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AssemblyParser::T__0: {
        setState(20);
        addStatement();
        break;
      }

      case AssemblyParser::T__3: {
        setState(21);
        subStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddStatementContext ------------------------------------------------------------------

AssemblyParser::AddStatementContext::AddStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AssemblyParser::RegisterContext* AssemblyParser::AddStatementContext::register_() {
  return getRuleContext<AssemblyParser::RegisterContext>(0);
}

AssemblyParser::OperandContext* AssemblyParser::AddStatementContext::operand() {
  return getRuleContext<AssemblyParser::OperandContext>(0);
}


size_t AssemblyParser::AddStatementContext::getRuleIndex() const {
  return AssemblyParser::RuleAddStatement;
}

void AssemblyParser::AddStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddStatement(this);
}

void AssemblyParser::AddStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddStatement(this);
}


std::any AssemblyParser::AddStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitAddStatement(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::AddStatementContext* AssemblyParser::addStatement() {
  AddStatementContext *_localctx = _tracker.createInstance<AddStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, AssemblyParser::RuleAddStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(AssemblyParser::T__0);
    setState(25);
    register_();
    setState(26);
    match(AssemblyParser::T__1);
    setState(27);
    operand();
    setState(28);
    match(AssemblyParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubStatementContext ------------------------------------------------------------------

AssemblyParser::SubStatementContext::SubStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AssemblyParser::RegisterContext* AssemblyParser::SubStatementContext::register_() {
  return getRuleContext<AssemblyParser::RegisterContext>(0);
}

AssemblyParser::OperandContext* AssemblyParser::SubStatementContext::operand() {
  return getRuleContext<AssemblyParser::OperandContext>(0);
}


size_t AssemblyParser::SubStatementContext::getRuleIndex() const {
  return AssemblyParser::RuleSubStatement;
}

void AssemblyParser::SubStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubStatement(this);
}

void AssemblyParser::SubStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubStatement(this);
}


std::any AssemblyParser::SubStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSubStatement(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SubStatementContext* AssemblyParser::subStatement() {
  SubStatementContext *_localctx = _tracker.createInstance<SubStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, AssemblyParser::RuleSubStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(AssemblyParser::T__3);
    setState(31);
    register_();
    setState(32);
    match(AssemblyParser::T__1);
    setState(33);
    operand();
    setState(34);
    match(AssemblyParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterContext ------------------------------------------------------------------

AssemblyParser::RegisterContext::RegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::RegisterContext::VALID_NAME() {
  return getToken(AssemblyParser::VALID_NAME, 0);
}


size_t AssemblyParser::RegisterContext::getRuleIndex() const {
  return AssemblyParser::RuleRegister;
}

void AssemblyParser::RegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegister(this);
}

void AssemblyParser::RegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegister(this);
}


std::any AssemblyParser::RegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitRegister(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::RegisterContext* AssemblyParser::register_() {
  RegisterContext *_localctx = _tracker.createInstance<RegisterContext>(_ctx, getState());
  enterRule(_localctx, 8, AssemblyParser::RuleRegister);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(AssemblyParser::VALID_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

AssemblyParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AssemblyParser::RegisterContext* AssemblyParser::OperandContext::register_() {
  return getRuleContext<AssemblyParser::RegisterContext>(0);
}

tree::TerminalNode* AssemblyParser::OperandContext::INT() {
  return getToken(AssemblyParser::INT, 0);
}


size_t AssemblyParser::OperandContext::getRuleIndex() const {
  return AssemblyParser::RuleOperand;
}

void AssemblyParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void AssemblyParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}


std::any AssemblyParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::OperandContext* AssemblyParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 10, AssemblyParser::RuleOperand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AssemblyParser::VALID_NAME: {
        setState(38);
        register_();
        break;
      }

      case AssemblyParser::INT: {
        setState(39);
        match(AssemblyParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void AssemblyParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  assemblyParserInitialize();
#else
  ::antlr4::internal::call_once(assemblyParserOnceFlag, assemblyParserInitialize);
#endif
}
