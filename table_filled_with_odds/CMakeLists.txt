cmake_minimum_required(VERSION 3.15)

project(table_filled_with_odds )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories( ${CMAKE_SOURCE_DIR}/include)

add_executable(odds_table main.cpp)