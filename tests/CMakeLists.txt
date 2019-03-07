cmake_minimum_required(VERSION 3.13)
project(tests)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)

include_directories(lib/googletest-master/googletest/include)

add_executable(
        tests
        main.cpp
        ../Calculator.h
        ../Calculator.cpp
        TestCalculator.cpp
        )

target_link_libraries(tests gtest)