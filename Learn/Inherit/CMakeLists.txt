cmake_minimum_required(VERSION 3.23)
project(Inherit)

set(CMAKE_CXX_STANDARD 11)

add_executable(Inherit main.cpp AirPlane.h AirPlane.cpp FightPlane.h FightPlane.cpp TaoPlane.h TaoPlane.cpp NewPlane.cpp NewPlane.h)
