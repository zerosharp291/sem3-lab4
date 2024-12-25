cmake_minimum_required(VERSION 3.28)


set(CMAKE_CXX_STANDARD 17)

include_directories(include)

project(lab4)

add_executable(
    change_of_strategy
    src/change_of_strategy.cpp
)
