cmake_minimum_required(VERSION 4.0)
project(GLFW)

add_library(GLFW STATIC IMPORTED)

set_target_properties(GLFW PROPERTIES
    IMPORTED_LOCATION "glfw3.lib"
)