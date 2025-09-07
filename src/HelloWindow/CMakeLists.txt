cmake_minimum_required(VERSION 4.0)
project(HelloWindow)

add_library(HelloWindow HelloWindow.cpp HelloWindow.h)
target_include_directories(HelloWindow PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloWindow PUBLIC HelperFunctions)