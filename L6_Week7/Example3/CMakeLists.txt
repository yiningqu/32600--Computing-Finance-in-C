cmake_minimum_required(VERSION 3.15)
project(Example3)

set(CMAKE_CXX_STANDARD 14)

add_executable(example3 main.cpp Derived2.cpp)