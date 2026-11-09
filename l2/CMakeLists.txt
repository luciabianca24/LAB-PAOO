cmake_minimum_required(VERSION 3.5)
project(l2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_SOURCES 
    src/main.cpp 
    src/Item4.cpp
    src/Item5.cpp
    src/Item6.cpp
    inc/Item4.hpp
    inc/Item5.hpp
    inc/Item6.hpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
include_directories(inc)