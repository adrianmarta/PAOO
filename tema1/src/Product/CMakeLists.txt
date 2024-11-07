# CMakeLists.txt pentru Product
add_library(Product STATIC 
    Product.cpp
    Product.h
)

# Include pentru Product
target_include_directories(Product PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Legăm Product de Item
target_link_libraries(Product PUBLIC Item)
