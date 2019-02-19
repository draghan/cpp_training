cmake_minimum_required(VERSION 3.13)
project(user_defined_conversion)

set(CMAKE_CXX_STANDARD 14)

add_executable(user_defined_conversion main.cpp RoundSeal.hpp Types.hpp RoundSeal.cpp Potato.cpp Potato.hpp)