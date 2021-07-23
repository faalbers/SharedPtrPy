cmake_minimum_required(VERSION 3.4)
project(SharedPtrPy)

set(CMAKE_CXX_STANDARD 11)

execute_process(COMMAND git submodule update --init --recursive
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_definitions(CLASS_DEBUG)
#add_compile_definitions(SHARED_POINTER_DEBUG)

find_package (Python3 COMPONENTS Interpreter Development)
add_subdirectory(extern/pybind11)
add_subdirectory(extern/GFA)

add_executable(test test.cpp classes.cpp)
install(TARGETS test DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})

pybind11_add_module(sharedPtrPy sharedPtrPy.cpp classes.cpp)
install(TARGETS sharedPtrPy DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
