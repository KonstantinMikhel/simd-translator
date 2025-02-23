#include <iostream>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"

using namespace antlr4;

int main() {
    std::string input = "3 + 4";
    ANTLRInputStream inputStream(input);
    ExprLexer lexer(&inputStream);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    
    tree::ParseTree* tree = parser.expr();
    std::cout << "Parsed: " << tree->toStringTree(&parser) << std::endl;

    return 0;
}