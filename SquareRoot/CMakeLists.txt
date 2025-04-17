cmake_minimum_required(VERSION 3.10)

project(SquareRoot VERSION 1.0
        DESCRIPTION "Square Root Calculation"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(SquareRootConfig.h.in SquareRootConfig.h)

add_executable(SquareRoot SquareRoot.cpp)

target_include_directories(SquareRoot PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

