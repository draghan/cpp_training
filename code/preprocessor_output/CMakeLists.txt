cmake_minimum_required(VERSION 3.13)
project(preprocessor_output)

set(CMAKE_CXX_STANDARD 14)

add_executable(preprocessor_output main.cpp super_math.cpp super_math.hpp)
add_executable(preprocessor_output_ main.preprocessor.cpp ./supermath.preprocessor.cpp super_math.hpp)