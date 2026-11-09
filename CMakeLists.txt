cmake_minimum_required(VERSION 4.4)
project(SortClassObjects)

set(CMAKE_CXX_STANDARD 20)

add_executable(SortClassObjects main.cpp
        SortObject.cpp
        SortObject.h)
