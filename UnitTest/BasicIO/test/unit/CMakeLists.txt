project(BasicIO_UnitTest)

set(BIN_NAME "unit_test")

include_directories(
    ${CMAKE_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}
)

add_subdirectory(googletest)
enable_testing()

add_executable(${BIN_NAME} unit_test.cpp)
target_link_libraries(${BIN_NAME} basicio_core gmock gtest gtest_main)
add_dependencies(${BIN_NAME} basicio_core)
