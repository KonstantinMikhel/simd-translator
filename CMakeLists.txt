cmake_minimum_required(VERSION 3.10)
project(SimdTranslator)

set(CMAKE_CXX_STANDARD 17)

set(ANTLR4_JAR "${CMAKE_SOURCE_DIR}/lib/antlr4/antlr-4.13.2-complete.jar")
set(ANTLR4_GRAMMAR_FILE "${CMAKE_SOURCE_DIR}/grammar/Assembly.g4")
set(ANTLR4_GENERATED_SRC_DIR "${CMAKE_SOURCE_DIR}/generated")

file(MAKE_DIRECTORY ${ANTLR4_GENERATED_SRC_DIR})
file(GLOB ANTLR4_GENERATED_SOURCES 
    "${ANTLR4_GENERATED_SRC_DIR}/*.h" 
    "${ANTLR4_GENERATED_SRC_DIR}/*.cpp"
)

add_custom_command(
    OUTPUT ${ANTLR4_GENERATED_SRC_DIR}/antlr4_generated.stamp
    COMMAND java -jar ${ANTLR4_JAR} -Dlanguage=Cpp -visitor -o ${ANTLR4_GENERATED_SRC_DIR} ${ANTLR4_GRAMMAR_FILE}
    COMMAND touch ${ANTLR4_GENERATED_SRC_DIR}/antlr4_generated.stamp
    DEPENDS ${ANTLR4_GRAMMAR_FILE}
    COMMENT "Generating ANTLR4 C++ files"
    VERBATIM
)

add_custom_target(generate_antlr4 DEPENDS ${ANTLR4_GENERATED_SRC_DIR}/antlr4_generated.stamp)

set(ANTLR4_INCLUDE_DIR /usr/local/include/antlr4-runtime)
set(ANTLR4_LIBRARY /usr/local/lib/libantlr4-runtime.so)

include_directories(include)
include_directories(${ANTLR4_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/generated)

add_executable(SimdTranslator 
    src/main.cpp
    src/CustomAssemblyVisitor.cpp
)

target_sources(SimdTranslator PRIVATE ${ANTLR4_GENERATED_SOURCES})

add_dependencies(SimdTranslator generate_antlr4)

target_link_libraries(SimdTranslator ${ANTLR4_LIBRARY})