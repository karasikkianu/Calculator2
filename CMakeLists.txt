cmake_minimum_required(VERSION 3.13)
project(Calculator2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calculator2 main.cpp Calculator.cpp Calculator.h Input.cpp Input.h Help.cpp Help.h Action.cpp Action.h)