cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(BasicIO_Core)

add_definitions("-fPIC")

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

set(LIB_NAME "basicio_core")
set(LIB_SRC_FILE "./src/BasicIO.cpp")

add_library(${LIB_NAME} ${LIB_SRC_FILE})
