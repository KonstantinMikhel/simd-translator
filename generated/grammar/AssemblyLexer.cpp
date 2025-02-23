
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "VALID_NAME", "INT", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'add'", "','", "'\\n'", "'sub'", "'cmp'", "'jz'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "VALID_NAME", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,60,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,5,6,41,8,6,10,6,12,6,44,9,6,1,7,3,7,47,
  	8,7,1,7,4,7,50,8,7,11,7,12,7,51,1,8,4,8,55,8,8,11,8,12,8,56,1,8,1,8,0,
  	0,9,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,1,0,4,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,13,13,32,32,63,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,1,19,1,0,0,0,3,23,1,0,0,0,5,
  	25,1,0,0,0,7,27,1,0,0,0,9,31,1,0,0,0,11,35,1,0,0,0,13,38,1,0,0,0,15,46,
  	1,0,0,0,17,54,1,0,0,0,19,20,5,97,0,0,20,21,5,100,0,0,21,22,5,100,0,0,
  	22,2,1,0,0,0,23,24,5,44,0,0,24,4,1,0,0,0,25,26,5,10,0,0,26,6,1,0,0,0,
  	27,28,5,115,0,0,28,29,5,117,0,0,29,30,5,98,0,0,30,8,1,0,0,0,31,32,5,99,
  	0,0,32,33,5,109,0,0,33,34,5,112,0,0,34,10,1,0,0,0,35,36,5,106,0,0,36,
  	37,5,122,0,0,37,12,1,0,0,0,38,42,7,0,0,0,39,41,7,1,0,0,40,39,1,0,0,0,
  	41,44,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,14,1,0,0,0,44,42,1,0,0,0,
  	45,47,5,45,0,0,46,45,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,0,48,50,7,2,0,
  	0,49,48,1,0,0,0,50,51,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,16,1,0,0,
  	0,53,55,7,3,0,0,54,53,1,0,0,0,55,56,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,
  	0,57,58,1,0,0,0,58,59,6,8,0,0,59,18,1,0,0,0,5,0,42,46,51,56,1,6,0,0
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
