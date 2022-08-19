cmake_minimum_required(VERSION 3.23)
project(EasyServer)

set(CMAKE_CXX_STANDARD 11)

add_executable(EasyServer main.cpp server.h server.cpp)
