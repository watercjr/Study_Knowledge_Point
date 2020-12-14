cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -D_GLIBCXX_USE_NANOSLEEP")

add_subdirectory(core)
add_subdirectory(impl)
add_subdirectory(test)
