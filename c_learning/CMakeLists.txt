cmake_minimum_required(VERSION 3.15)
project(c_learning C)

set(CMAKE_C_STANDARD 99)

add_executable(c_learning MyMain.c array/arrayTest.h array/arrayTest.c pointer/pointerTest.h pointer/pointerTest.c alloc/allocTest.h alloc/allocTest.c function/funcTest.h function/funcTest.c function/funcTest2.h function/funcTest2.c string/stringTest.h string/stringTest.c struct/structTest.h struct/structTest.c union/unionTest.h union/unionTest.c enum/enumTest.h enum/enumTest.c)
