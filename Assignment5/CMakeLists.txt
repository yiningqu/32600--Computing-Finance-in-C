cmake_minimum_required(VERSION 3.27)
project(Assignment5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment5 main.cpp
        MCPricer.h
        MCPricer.cpp
        EuropeanPut.cpp
        EuropeanCall.cpp
        Option.cpp
        BoxMuller.h
        BoxMuller.cpp
)
