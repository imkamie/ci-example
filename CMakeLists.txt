cmake_minimum_required(VERSION 3.16)
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


#find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})
#
## Link runTests with what we want to test and the GTest and pthread library
#add_executable(runTests tests.cpp)
#target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)