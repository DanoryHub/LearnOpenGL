cmake_minimum_required(VERSION 3.10)
project(GLFW)

add_library(GLFW STATIC IMPORTED)

set_target_properties(GLFW PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw3.lib"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include"
)