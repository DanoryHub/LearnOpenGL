cmake_minimum_required(VERSION 3.10)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Without this g++ can't find libstdc++-6.dll
add_link_options(-static -static-libgcc -static-libstdc++)

find_package( OpenGL REQUIRED )
find_library(GLFW_LIB
    NAMES glfw3 glfw
    PATHS "${PROJECT_SOURCE_DIR}/src/GLFW"
    REQUIRED
)

message(STATUS "GLFW_LIB found at ${GLFW_LIB}")

set(GLFW_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/src/GLFW/include")

add_subdirectory(src)

add_executable(LearnOpenGL main.cpp)
target_link_libraries(LearnOpenGL
        OpenGL::GL
        HelperFunctions
        HelloTriangle
        HelloWindow
        glad
        ${GLFW_LIB}
)
target_include_directories(LearnOpenGL PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${GLFW_INCLUDE_DIR}"
)