add_library(HelperFunctions HelperFunctions.cpp)

target_include_directories(HelperFunctions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelperFunctions PUBLIC glad glfw3)