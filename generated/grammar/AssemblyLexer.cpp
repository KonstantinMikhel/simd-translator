
// Generated from grammar/Assembly.g4 by ANTLR 4.13.2


#include "AssemblyLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct AssemblyLexerStaticData final {
  AssemblyLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AssemblyLexerStaticData(const AssemblyLexerStaticData&) = delete;
  AssemblyLexerStaticData(AssemblyLexerStaticData&&) = delete;
  AssemblyLexerStaticData& operator=(const AssemblyLexerStaticData&) = delete;
  AssemblyLexerStaticData& operator=(AssemblyLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag assemblylexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<AssemblyLexerStaticData> assemblylexerLexerStaticData = nullptr;

void assemblylexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (assemblylexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(assemblylexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<AssemblyLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "REGISTER", "INT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'add'", "','", "'\\n'", "'sub'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "REGISTER", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,7,49,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,5,4,30,8,4,10,
  	4,12,4,33,9,4,1,5,3,5,36,8,5,1,5,4,5,39,8,5,11,5,12,5,40,1,6,4,6,44,8,
  	6,11,6,12,6,45,1,6,1,6,0,0,7,1,1,3,2,5,3,7,4,9,5,11,6,13,7,1,0,4,3,0,
  	65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,13,
  	13,32,32,52,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,
  	0,0,11,1,0,0,0,0,13,1,0,0,0,1,15,1,0,0,0,3,19,1,0,0,0,5,21,1,0,0,0,7,
  	23,1,0,0,0,9,27,1,0,0,0,11,35,1,0,0,0,13,43,1,0,0,0,15,16,5,97,0,0,16,
  	17,5,100,0,0,17,18,5,100,0,0,18,2,1,0,0,0,19,20,5,44,0,0,20,4,1,0,0,0,
  	21,22,5,10,0,0,22,6,1,0,0,0,23,24,5,115,0,0,24,25,5,117,0,0,25,26,5,98,
  	0,0,26,8,1,0,0,0,27,31,7,0,0,0,28,30,7,1,0,0,29,28,1,0,0,0,30,33,1,0,
  	0,0,31,29,1,0,0,0,31,32,1,0,0,0,32,10,1,0,0,0,33,31,1,0,0,0,34,36,5,45,
  	0,0,35,34,1,0,0,0,35,36,1,0,0,0,36,38,1,0,0,0,37,39,7,2,0,0,38,37,1,0,
  	0,0,39,40,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,12,1,0,0,0,42,44,7,3,
  	0,0,43,42,1,0,0,0,44,45,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,47,1,0,
  	0,0,47,48,6,6,0,0,48,14,1,0,0,0,5,0,31,35,40,45,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  assemblylexerLexerStaticData = std::move(staticData);
}

}

AssemblyLexer::AssemblyLexer(CharStream *input) : Lexer(input) {
  AssemblyLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *assemblylexerLexerStaticData->atn, assemblylexerLexerStaticData->decisionToDFA, assemblylexerLexerStaticData->sharedContextCache);
}

AssemblyLexer::~AssemblyLexer() {
  delete _interpreter;
}

std::string AssemblyLexer::getGrammarFileName() const {
  return "Assembly.g4";
}

const std::vector<std::string>& AssemblyLexer::getRuleNames() const {
  return assemblylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& AssemblyLexer::getChannelNames() const {
  return assemblylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& AssemblyLexer::getModeNames() const {
  return assemblylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& AssemblyLexer::getVocabulary() const {
  return assemblylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AssemblyLexer::getSerializedATN() const {
  return assemblylexerLexerStaticData->serializedATN;
}

const atn::ATN& AssemblyLexer::getATN() const {
  return *assemblylexerLexerStaticData->atn;
}




void AssemblyLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  assemblylexerLexerInitialize();
#else
  ::antlr4::internal::call_once(assemblylexerLexerOnceFlag, assemblylexerLexerInitialize);
#endif
}
