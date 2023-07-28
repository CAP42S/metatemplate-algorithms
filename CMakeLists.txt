cmake_minimum_required(VERSION 3.25)
project(metatemplate_algorithms C)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
include_directories(src/Data_Structures)
include_directories(include/metatemplate_algorithms/cute)
include_directories(include/metatemplate_algorithms/cute/include)

add_executable(main
        include/metatemplate_algorithms/cute/debug.hpp test/cute/utility_test.cpp)
