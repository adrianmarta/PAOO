# Item module
add_library(Item Item.cpp)

# Specify the include directories for the Item library
target_include_directories(Item 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# If Item.h or other files are in a subdirectory, adjust this accordingly:
# target_include_directories(Item PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
