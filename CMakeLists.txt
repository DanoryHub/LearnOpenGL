cmake_minimum_required(VERSION 4.0)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Without this g++ can't find libstdc++-6.dll
add_link_options(-static -static-libgcc -static-libstdc++)

add_subdirectory(src)

add_executable(LearnOpenGL main.cpp
        src/glad.h)
target_link_libraries(LearnOpenGL PUBLIC
                        HelperFunctions
                        HelloTriangle
                        HelloWindow
)
target_include_directories(LearnOpenGL PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src/HelperFunctions"
        "${PROJECT_SOURCE_DIR}/src/HelloTriangle"
        "${PROJECT_SOURCE_DIR}/src/HelloWindow"
)