cmake_minimum_required(VERSION 3.0)
project(samframework)


set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c99 -Wall")


set(SOURCE_FILES
    src/core/config.c
    src/core/index.c)

add_executable(samframework ${SOURCE_FILES})