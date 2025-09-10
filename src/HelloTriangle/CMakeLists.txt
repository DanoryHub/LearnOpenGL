include_directories(HelperFunctions
        "${CMAKE_SOURCE_DIR}/src/glad"
        "${CMAKE_SOURCE_DIR}/src/GLFW/include"
)

add_library(HelloTriangle HelloTriangle.cpp HelloTriangle.h)
target_include_directories(HelloTriangle PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloTriangle PUBLIC HelperFunctions)