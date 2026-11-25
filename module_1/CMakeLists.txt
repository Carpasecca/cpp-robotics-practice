# CMakeLists.txt
cmake_minimum_required(VERSION 3.16)
project(cpp_robotics CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -Wpedantic)
add_executable(hello main.cpp utils.cpp)