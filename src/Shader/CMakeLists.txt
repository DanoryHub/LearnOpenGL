add_library(Shader Shader.cpp)

target_include_directories(Shader PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(Shader PUBLIC glad)