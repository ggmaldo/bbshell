cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

project(bbshell  VERSION 1.0)
add_executable(bbshell src/main.cpp src/commands.cpp)
