# 告诉CMake 构建这个项目的最低版本要求，如果不符合会报告信息给用户
cmake_minimum_required(VERSION 2.6)


# 设置项目名称
project(UnitTestPrimer)


# 包含编译该项目要用到的头文件
include_directories(
    #${PROJECT_SOURCE_DIR}/include
)


# 设置变量为某个值或某些值，相对的命令为 unset()；
# 变量可以是环境变量，也可以是自定义的
# 范围可以通过-P 设置为绑定到当前目录
# 参考：https://cmake.org/cmake/help/latest/manual/cmake-language.7.html#cmake-language-variables
set(BIN_NAME "main")
set(BIN_SRC_FILE
    "./main.cpp"
    #"./src/BasicIO_FILE.cpp"
    #"./src/BasicIO_STDOUT.cpp"
)

# 生成可执行文件
add_executable(${BIN_NAME} ${BIN_SRC_FILE})


#add_library(${LIB_NAME} ${LIB_SRC_FILE})

# 把编译后的文件输出到build目录（你执行cmake的路径）中某个子目录下：下面指的就是 build/lib/ 
#install(TARGETS ${LIB_NAME} LIBRARY DESTINATION "lib")