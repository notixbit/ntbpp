cmake_minimum_required(VERSION 3.1)

project(ntbpp)

set(CMAKE_CXX_STANDARD 17)
set(TESTS_DIR tests)

enable_testing()

add_executable(colors_test ${TESTS_DIR}/colors.cpp)
set_target_properties(colors_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${TESTS_DIR}")
add_test(colors_test ${TESTS_DIR}/colors_test)

add_executable(templates_test ${TESTS_DIR}/templates.cpp)
set_target_properties(templates_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${TESTS_DIR}")
add_test(templates_test ${TESTS_DIR}/templates_test)

add_executable(types_test ${TESTS_DIR}/types.cpp)
set_target_properties(types_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${TESTS_DIR}")
add_test(types_test ${TESTS_DIR}/types_test)

install(FILES
        notixbit.h
        DESTINATION include/notixbit/ntbpp)

install(DIRECTORY
        colors
        templates
        types
        DESTINATION include/notixbit/ntbpp)
