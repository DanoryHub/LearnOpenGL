cmake_minimum_required(VERSION 4.0)
project(HelloTriangle)

add_library(HelloTriangle HelloTriangle.cpp HelloTriangle.h)
target_include_directories(HelloTriangle PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloTriangle PUBLIC HelperFunctions)