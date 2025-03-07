cmake_minimum_required(VERSION 3.22)
project(FindLibrary LANGUAGES CXX C)

find_library(mylib glew REQUIRED NAMES glew2 GLEW GLEW2)
if (${mylib} STREQUAL mylib-NOTFOUND)
    message(FATAL_ERROR "lib not found")
else ()
    message(STATUS "lib found")
endif ()
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${mylib})
