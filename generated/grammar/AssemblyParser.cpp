
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
      "program", "statement"
    },
    std::vector<std::string>{
      "", "'add'", "','", "'\\n'", "'sub'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "REGISTER", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,25,2,0,7,0,2,1,7,1,1,0,5,0,6,8,0,10,0,12,0,9,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,23,8,1,1,1,0,0,2,0,2,0,1,1,0,5,
  	6,24,0,7,1,0,0,0,2,22,1,0,0,0,4,6,3,2,1,0,5,4,1,0,0,0,6,9,1,0,0,0,7,5,
  	1,0,0,0,7,8,1,0,0,0,8,10,1,0,0,0,9,7,1,0,0,0,10,11,5,0,0,1,11,1,1,0,0,
  	0,12,13,5,1,0,0,13,14,5,5,0,0,14,15,5,2,0,0,15,16,7,0,0,0,16,23,5,3,0,
  	0,17,18,5,4,0,0,18,19,5,5,0,0,19,20,5,2,0,0,20,21,7,0,0,0,21,23,5,3,0,
  	0,22,12,1,0,0,0,22,17,1,0,0,0,23,3,1,0,0,0,2,7,22
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
    setState(7);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__0

    || _la == AssemblyParser::T__3) {
      setState(4);
      statement();
      setState(9);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(10);
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


size_t AssemblyParser::StatementContext::getRuleIndex() const {
  return AssemblyParser::RuleStatement;
}

void AssemblyParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddStatementContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> AssemblyParser::AddStatementContext::REGISTER() {
  return getTokens(AssemblyParser::REGISTER);
}

tree::TerminalNode* AssemblyParser::AddStatementContext::REGISTER(size_t i) {
  return getToken(AssemblyParser::REGISTER, i);
}

tree::TerminalNode* AssemblyParser::AddStatementContext::INT() {
  return getToken(AssemblyParser::INT, 0);
}

AssemblyParser::AddStatementContext::AddStatementContext(StatementContext *ctx) { copyFrom(ctx); }

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
//----------------- SubStatementContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> AssemblyParser::SubStatementContext::REGISTER() {
  return getTokens(AssemblyParser::REGISTER);
}

tree::TerminalNode* AssemblyParser::SubStatementContext::REGISTER(size_t i) {
  return getToken(AssemblyParser::REGISTER, i);
}

tree::TerminalNode* AssemblyParser::SubStatementContext::INT() {
  return getToken(AssemblyParser::INT, 0);
}

AssemblyParser::SubStatementContext::SubStatementContext(StatementContext *ctx) { copyFrom(ctx); }

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
AssemblyParser::StatementContext* AssemblyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, AssemblyParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AssemblyParser::T__0: {
        _localctx = _tracker.createInstance<AssemblyParser::AddStatementContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(12);
        match(AssemblyParser::T__0);
        setState(13);
        match(AssemblyParser::REGISTER);
        setState(14);
        match(AssemblyParser::T__1);
        setState(15);
        _la = _input->LA(1);
        if (!(_la == AssemblyParser::REGISTER

        || _la == AssemblyParser::INT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(16);
        match(AssemblyParser::T__2);
        break;
      }

      case AssemblyParser::T__3: {
        _localctx = _tracker.createInstance<AssemblyParser::SubStatementContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(17);
        match(AssemblyParser::T__3);
        setState(18);
        match(AssemblyParser::REGISTER);
        setState(19);
        match(AssemblyParser::T__1);
        setState(20);
        _la = _input->LA(1);
        if (!(_la == AssemblyParser::REGISTER

        || _la == AssemblyParser::INT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(21);
        match(AssemblyParser::T__2);
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
