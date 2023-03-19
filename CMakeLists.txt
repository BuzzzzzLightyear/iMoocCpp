cmake_minimum_required(VERSION 3.17)
project(iMoocCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(iMoocCpp main.cpp)

add_executable(operator_priority operator_priority/operator_priority.cpp)

add_executable(data_type data_type/data_type.cpp)
add_executable(pointer pointer/pointer.cpp)