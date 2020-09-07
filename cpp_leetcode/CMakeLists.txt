
cmake_minimum_required(VERSION 2.0)
project(cpp_leetcode)

#aux_source_directory(. SRCS)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(top_freq TopFrequence.cpp)