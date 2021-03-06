cmake_minimum_required(VERSION 3.17)
project(ci_example C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_library(utils STATIC utils.c)
target_include_directories(utils PUBLIC include)

add_executable(ci_example main.c)
target_link_libraries(ci_example utils)

find_package(GTest REQUIRED)
add_executable(runTests main_test.cpp)
target_link_libraries(runTests GTest::gtest utils)
