# Fucking shit of a library, if you want to add static imported INNER library, you should
# add GLOBAL keyword
add_library(glfw3 STATIC IMPORTED GLOBAL)

set_target_properties(glfw3 PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw3.lib"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include"
)