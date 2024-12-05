cmake_minimum_required(VERSION 3.15)
project(Example1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Example1 main.cpp Add.cpp
        ../UnitTest/UnitTest.cpp)