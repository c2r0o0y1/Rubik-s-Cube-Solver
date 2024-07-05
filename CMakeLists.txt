cmake_minimum_required(VERSION 3.28)
project(Rubik_sCubeSolver)

set(CMAKE_CXX_STANDARD 14)

add_executable(Rubik_sCubeSolver main.cpp
        Model/RubiksCube.h
        Model/RubiksCube.cpp)
