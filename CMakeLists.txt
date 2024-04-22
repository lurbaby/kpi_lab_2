cmake_minimum_required(VERSION 3.27)
project(lab2_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab2_cpp
        array.cpp
        array.h
        main.cpp)
