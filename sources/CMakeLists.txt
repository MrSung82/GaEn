cmake_minimum_required(VERSION 3.11)

project(gaen)

file(GLOB test1_src test1/*.cpp)
message(${test1_src})
add_executable(test1 ${test1_src})