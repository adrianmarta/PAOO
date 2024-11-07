# Inventory module
add_library(Inventory Inventory.cpp)

# Link with Item as Inventory depends on Item
target_link_libraries(Inventory PRIVATE Item)
target_include_directories(Inventory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
