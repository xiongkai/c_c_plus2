cmake_minimum_required(VERSION 3.15)
project(cplus2_learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(cplus2_learning main.cpp hello hello.cpp namespace/namespaceA.h namespace/namesapceA.cpp namespace/namesapceB.cpp struct/structTest.h struct/structTest.cpp memory/memoryTest.h memory/memoryTest.cpp reference/referenceTest.h reference/referenceTest.cpp function/functionTest.h function/functionTest.cpp class/classTest.h class/classTest.cpp operator/operatorTest.h operator/operatorTest.cpp)