cmake_minimum_required(VERSION 3.15)
project(unit_test)
include_directories(../Calculator/)

add_executable(unit_test UnitTest.cpp ../Calculator/Add.cpp)
