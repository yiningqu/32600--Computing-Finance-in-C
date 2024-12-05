cmake_minimum_required(VERSION 3.15)
project(Example1)

set(CMAKE_CXX_STANDARD 14)

add_executable(example1 Source.cpp Person.cpp Student.cpp Employee.cpp)