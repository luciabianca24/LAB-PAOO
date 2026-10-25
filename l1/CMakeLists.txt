cmake_minimum_required(VERSION 3.5)
project(Tema1PAOO)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(PROJECT_SOURCES 
    src/main.cpp 
    src/MotionSensor.cpp 
    inc/MotionSensor.hpp
)
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
include_directories(inc)