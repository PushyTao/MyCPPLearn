cmake_minimum_required(VERSION 3.23)
project(MediaServer)

set(CMAKE_CXX_STANDARD 11)

add_executable(MediaServer main.cpp Human.h Human.cpp)
