cmake_minimum_required(VERSION 2.8)
project(Euler04)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES worktest.cpp worker0.cpp worker0.h)
add_executable(worktest ${SOURCE_FILES})	

