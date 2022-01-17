cmake_minimum_required(VERSION 3.20)
project(graph)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE "Debug")
include("vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(GTest CONFIG REQUIRED)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
