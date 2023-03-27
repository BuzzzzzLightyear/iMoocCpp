cmake_minimum_required(VERSION 3.17)
project(iMoocCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(iMoocCpp main.cpp)

add_executable(operator_priority operator_priority/operator_priority.cpp)

add_executable(data_type data_type/data_type.cpp)
add_executable(pointer pointer/pointer.cpp)
add_executable(array array/array.cpp)
add_executable(string string/string.cpp)
add_executable(struct struct/struct.cpp)
add_executable(quick_sort sort/quick_sort.cpp)
add_executable(class class/class.cpp)
add_executable(simple_str string/simple_str.cpp)