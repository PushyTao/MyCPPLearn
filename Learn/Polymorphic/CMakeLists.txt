cmake_minimum_required(VERSION 3.23)
project(Polymorphic)

set(CMAKE_CXX_STANDARD 11)

add_executable(Polymorphic main.cpp AirPlane.h AirPlane.cpp FightPlane.h FightPlane.cpp NonePlane.h NonePlane.cpp)
