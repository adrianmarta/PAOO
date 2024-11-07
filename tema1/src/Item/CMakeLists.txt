# CMakeLists.txt for Item

# Define the Item library (static library)
add_library(Item STATIC 
    Item.h
)

# Include directories for Item
target_include_directories(Item PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Optionally, you could link this with other libraries if needed (e.g., Product, Order)
