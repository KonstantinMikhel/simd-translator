cmake_minimum_required(VERSION 3.10)
project(SimdTranslator)

set(CMAKE_CXX_STANDARD 17)

set(ANTLR4_INCLUDE_DIR /usr/local/include/antlr4-runtime)
set(ANTLR4_LIBRARY /usr/local/lib/libantlr4-runtime.so)

include_directories(include)
include_directories(${ANTLR4_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/generated/grammar)

file(GLOB ANTLR4_GENERATED_SOURCES "generated/grammar/*.cpp")

add_executable(SimdTranslator 
    src/main.cpp
    ${ANTLR4_GENERATED_SOURCES}
    src/CustomAssemblyVisitor.cpp
)
target_link_libraries(SimdTranslator ${ANTLR4_LIBRARY})