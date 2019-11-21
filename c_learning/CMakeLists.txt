cmake_minimum_required(VERSION 3.15)
project(c_learning C)

set(CMAKE_C_STANDARD 99)

add_executable(c_learning MyMain.c array/arrayTest.h array/arrayTest.c)