cmake_minimum_required(VERSION 3.30)
project(add_libraries)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_subdirectory(Math)
add_executable(add_libraries main.cpp)
target_link_libraries(add_libraries PUBLIC MATH_LIB)