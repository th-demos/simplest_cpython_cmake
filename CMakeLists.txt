cmake_minimum_required(VERSION 3.14)

project(test_cpython)

find_package(Python3 REQUIRED COMPONENTS Development)

include_directories(${Python3_INCLUDE_DIRS})
add_executable(test_cpython main.cc)
target_link_libraries(test_cpython ${Python3_LIBRARIES})