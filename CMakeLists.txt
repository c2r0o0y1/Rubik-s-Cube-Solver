cmake_minimum_required(VERSION 3.28)
project(Rubik_sCubeSolver)

set(CMAKE_CXX_STANDARD 14)

add_executable(Rubik_sCubeSolver main.cpp
        Model/RubiksCube.h
        Model/RubiksCube.cpp
        Model/RubiksCube3dArray.cpp
        Model/RubiksCube1dArray.cpp
        Model/RubiksCubeBitBoard.cpp
        Model/PatternDatabase/PatternDatabase.h
        Solver/BFSSolver.h
        Solver/DFSSolver.h
        Solver/IDDFSSolver.h
        PatternDatabases/NibbleArray.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/PatternDatabase.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/Math.h
        PatternDatabases/Math.cpp
        PatternDatabases/PermutationIndexer.h
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/CornerPatternDatabase.cpp
)
