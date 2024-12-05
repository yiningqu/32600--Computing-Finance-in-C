cmake_minimum_required(VERSION 3.27)
project(Assignment4__Black_Scholes_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment4__Black_Scholes_ main.cpp
        Option.h
        Option.cpp
        EuropeanCall.h
        EuropeanPut.h
        EuropeanCall.cpp
        EuropeanPut.cpp
        portfolio.cpp)
