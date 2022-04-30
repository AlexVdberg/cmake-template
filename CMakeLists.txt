cmake_minimum_required(VERSION 3.10)

project(cmake-template)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

add_subdirectory(test)
