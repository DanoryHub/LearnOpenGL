include_directories(HelperFunctions
        "${CMAKE_SOURCE_DIR}/src/glad"
        "${CMAKE_SOURCE_DIR}/src/GLFW/include"
)

add_library(HelperFunctions HelperFunctions.cpp HelperFunctions.h)
target_include_directories(HelperFunctions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelperFunctions PUBLIC glad glfw3)