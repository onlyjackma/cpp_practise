cmake_minimum_required(VERSION 2.0)
project(cpp_basic_practise)

#aux_source_directory(. SRCS)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(helloworld HelloWorld.cpp)
add_executable(test test.cpp)
add_executable(cpp_alogrithm cpp_alogrithms.cpp)





