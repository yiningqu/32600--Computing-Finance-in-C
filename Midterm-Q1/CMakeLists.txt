cmake_minimum_required(VERSION 3.27)
project(Midterm_Q1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Midterm_Q1 main.cpp
        currency.cpp
        currency.h
        CurrencyFactory.cpp
        CurrencyFactory.h
        partb.cpp)
