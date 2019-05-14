cmake_minimum_required(VERSION 3.14)
project(Game)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(Game main.cpp Game.cpp tests.cpp)
target_link_libraries(Game gtest gtest_main)