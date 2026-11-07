cmake_minimum_required(VERSION 3.16)
project(game CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(raylib CONFIG REQUIRED)

add_executable(game main.cpp)
target_link_libraries(game raylib)