cmake_minimum_required(VERSION 3.15)
project(Example2)

set(CMAKE_CXX_STANDARD 14)

add_executable(example2 main.cpp Base1.cpp Derived1.cpp)