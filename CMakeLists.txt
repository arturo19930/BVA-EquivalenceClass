cmake_minimum_required(VERSION 3.12)
project(BVA_EquivalenceClass)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(./lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(BVA_EquivalenceClass main.cpp lib/test.cpp lib/Triangle.h lib/Date.h)

target_link_libraries(BVA_EquivalenceClass gtest gtest_main)