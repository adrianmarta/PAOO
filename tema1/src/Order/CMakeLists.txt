# Order module
add_library(Order Order.cpp)

# Link with Item and Inventory since Order depends on both
target_link_libraries(Order PRIVATE Item Inventory)
target_include_directories(Order PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
