add_library(HelloWindow HelloWindow.cpp)

target_include_directories(HelloWindow PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloWindow PUBLIC HelperFunctions)