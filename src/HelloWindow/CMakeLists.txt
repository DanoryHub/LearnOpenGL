cmake_minimum_required(VERSION 4.0)
project(HelloWindow)

include_directories(HelperFunctions
        "${CMAKE_SOURCE_DIR}/src/glad"
        "${CMAKE_SOURCE_DIR}/src/GLFW/include"
)

add_library(HelloWindow HelloWindow.cpp HelloWindow.h)
target_include_directories(HelloWindow PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloWindow PUBLIC HelperFunctions)