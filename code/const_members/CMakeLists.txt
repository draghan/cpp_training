cmake_minimum_required(VERSION 3.13)
project(const_members)

set(CMAKE_CXX_STANDARD 14)

add_executable(const_members main.cpp Types.hpp Potato.hpp Potato.cpp)