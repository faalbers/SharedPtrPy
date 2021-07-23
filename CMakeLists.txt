cmake_minimum_required(VERSION 3.4)
project(SharedPtrPy)

set(CMAKE_CXX_STANDARD 11)

execute_process(COMMAND git submodule update --init --recursive
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

find_package (Python3 COMPONENTS Interpreter Development)
add_subdirectory(extern/pybind11)

add_executable(test test.cpp classes.cpp)
install(TARGETS test DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})

pybind11_add_module(sharedPtrPy sharedPtrPy.cpp classes.cpp)
install(TARGETS sharedPtrPy DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})

pybind11_add_module(example example.cpp)
install(TARGETS example DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
