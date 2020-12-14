cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(BasicIO_Impl)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}
)

set(LIB_NAME "basicio_impl")

set(LIB_SRC_FILE
    "./src/BasicIO_FILE.cpp"
    "./src/BasicIO_STDOUT.cpp"
)

add_library(${LIB_NAME} SHARED ${LIB_SRC_FILE})
target_link_libraries(${LIB_NAME} basicio_core)
add_dependencies(${LIB_NAME} basicio_core)

install(TARGETS ${LIB_NAME} LIBRARY DESTINATION "lib")
