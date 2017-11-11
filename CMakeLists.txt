cmake_minimum_required(VERSION 3.8)
project(AlgorithmsProgramming)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Matrix.cpp Matrix.h Eratosthenes.h Eratosthenes.cpp QuadraticEquation.cpp QuadraticEquation.h ArithmeticMeanKahan.cpp ArithmeticMeanKahan.h)
add_executable(AlgorithmsProgramming ${SOURCE_FILES})