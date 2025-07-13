cmake_minimum_required(VERSION 3.31)
project(dice_simulator_dnd)

set(CMAKE_CXX_STANDARD 20)

add_executable(dice_simulator_dnd main.cpp
        Die.h)
