cmake_minimum_required(VERSION 3.22)
project(FindLibrary LANGUAGES CXX C)
add_executable(${PROJECT_NAME} main.cpp)

find_library(mylib glew REQUIRED NAMES glew2 GLEW GLEW2 PATHS "glew/")
if (${mylib} STREQUAL mylib-NOTFOUND)
    message(FATAL_ERROR "lib not found")
else ()
    message(STATUS "lib found")
endif ()
target_include_directories(${PROJECT_NAME} PUBLIC ${EXTRA_INCLUDE_DIR})
target_link_directories(${PROJECT_NAME} PUBLIC "glew/auto/src" ${EXTRA_LIB_DIR})