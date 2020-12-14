# 告诉CMake 构建这个项目的最低版本要求，如果不符合会报告信息给用户
cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 添加你需要build的源码（CMakeLists.txt和code）或者二进制文件目录路径（绝对or相对都OK）
add_subdirectory(src)
add_subdirectory(core)
add_subdirectory(test)