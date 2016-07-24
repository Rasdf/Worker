cmake_minimum_required(VERSION 2.8)
project(Euler04)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES sayings1.cpp strngbad.cpp strngbad.h)
add_executable(strngbad ${SOURCE_FILES})	

