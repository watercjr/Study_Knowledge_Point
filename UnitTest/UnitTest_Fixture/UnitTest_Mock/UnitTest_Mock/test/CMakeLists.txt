cmake_minimum_required(VERSION 2.6)

project(Unit_Test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)

add_subdirectory(googletest)
#find_package(GTest CONFIG REQUIRED)

set(BIN_NAME "unit_test")
set(BIN_SRC_FILE
    "./Test_Func.cpp"
    "./Test_Class_TemperatureProvide.cpp"
    "../src/Client.cpp"
    "../core/TemperatureProvide.cpp"
)

add_executable(${BIN_NAME} ${BIN_SRC_FILE})
target_link_libraries(${BIN_NAME}  gmock gtest gtest_main)
#add_dependencies(${BIN_NAME} unittest_core)