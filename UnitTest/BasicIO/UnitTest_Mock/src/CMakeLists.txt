cmake_minimum_required(VERSION 2.6)

project(UnitTestPrimer_main)


# 包含编译该项目要用到的头文件
include_directories(
    ${CMAKE_SOURCE_DIR}
    #${PROJECT_SOURCE_DIR}
)


set(BIN_NAME "main")
set(BIN_SRC_FILE
    "./main.cpp"
    "./Client.cpp"
)

add_executable(${BIN_NAME} ${BIN_SRC_FILE})
target_link_libraries(${BIN_NAME} unittest_core)
