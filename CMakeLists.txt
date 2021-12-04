cmake_minimum_required(VERSION 3.20)
project(Cpp2_project2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cpp2_project2
        donors_data.txt
        InputHandler.h
        Main.cpp)
