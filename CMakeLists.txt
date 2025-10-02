cmake_minimum_required(VERSION 3.10)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package( OpenGL REQUIRED )
set(GLFW_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/src/GLFW/include")

add_subdirectory(src)

add_executable(LearnOpenGL main.cpp
        src/stb_image/stb_image.h
        src/stb_image/stb_image.cpp
)
target_link_libraries(LearnOpenGL
        OpenGL::GL
        Shader
        HelperFunctions
        HelloTriangle
        HelloWindow
        glad
        glfw3
)
target_include_directories(LearnOpenGL PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${GLFW_INCLUDE_DIR}"
)