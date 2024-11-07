# Product module
add_library(Product Product.cpp)

# Link with Item since Product depends on Item
target_link_libraries(Product PRIVATE Item)
target_include_directories(Product PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
