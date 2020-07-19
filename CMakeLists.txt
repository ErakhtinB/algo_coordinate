cmake_minimum_required(VERSION 3.5)

project(algo_coordinate LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinate.cpp	
)

set(HEADERS
   ${CMAKE_CURRENT_SOURCE_DIR}/coordinate.h
)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(algo_coordinate ${SOURCE} ${HEADERS})
