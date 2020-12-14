cmake_minimum_required(VERSION 2.6)

project(UnitTestPrimer_core)


include_directories(
    ${PROJECT_SOURCE_DIR}
    #${CMAKE_SOURCE_DIR}
)


set(LIB_NAME "unittest_core")
set(LIB_SRC_FILE
    "./TemperatureProvide.cpp"
)

add_library(${LIB_NAME} ${LIB_SRC_FILE})

