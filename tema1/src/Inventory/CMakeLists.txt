# CMakeLists.txt pentru Inventory
add_library(Inventory STATIC 
    Inventory.cpp
    Inventory.h
)

# Include pentru Inventory
target_include_directories(Inventory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Legăm Inventory de Item
target_link_libraries(Inventory PUBLIC Item)
