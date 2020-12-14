project(BasicIO_SimpleTest)

set(BIN_NAME "simple_test")

include_directories(
    ${CMAKE_SOURCE_DIR}
)

add_executable(${BIN_NAME} simple_test.cpp)
target_link_libraries(${BIN_NAME} basicio_impl)
add_dependencies(${BIN_NAME} basicio_impl)
