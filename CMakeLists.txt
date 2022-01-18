cmake_minimum_required(VERSION 3.20)
project(graph)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE "Debug")


find_package(GTest CONFIG REQUIRED)

enable_testing()

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
