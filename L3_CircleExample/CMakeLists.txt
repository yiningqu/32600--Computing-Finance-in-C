cmake_minimum_required(VERSION 3.27)
project(L3_CircleExample)

set(CMAKE_CXX_STANDARD 17)

add_executable(L3_CircleExample main.cpp
        circle.h
        circle.cpp
        Rectangle.h
        Rectangle.cpp)
