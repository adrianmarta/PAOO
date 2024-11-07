# CMakeLists.txt pentru Order
add_library(Order STATIC 
    Order.cpp
    Order.h
)

# Include pentru Order
target_include_directories(Order PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Legăm Order de Product
target_link_libraries(Order PUBLIC Product)
target_link_libraries(Order PUBLIC Item)
