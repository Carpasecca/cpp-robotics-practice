# CMakeLists.txt
cmake_minimum_required(VERSION 3.16)
project(module_2 CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -Wpedantic)
add_executable(module_2 main.cpp)