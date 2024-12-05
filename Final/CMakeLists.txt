cmake_minimum_required(VERSION 3.27)
project(Final)

set(CMAKE_CXX_STANDARD 17)

add_executable(Final main.cpp
        Algorithms.cpp
        Algorithms.h
        BoxMuller.h
        BoxMuller.cpp
        Summation.cpp
        Summation.h
        Polar.h
        Polar.cpp
)
