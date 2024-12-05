cmake_minimum_required(VERSION 3.27)
project(L2_example)

set(CMAKE_CXX_STANDARD 17)

add_executable(L2_example main.cpp
        Increment.cpp
        Increment.h)
