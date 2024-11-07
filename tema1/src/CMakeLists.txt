# CMake version requirement
cmake_minimum_required(VERSION 3.10)

# Numele proiectului
project(tema1)

# Setăm standardul C++
set(CMAKE_CXX_STANDARD 17)

# Adăugăm subdirectoarele
add_subdirectory(Item)
add_subdirectory(Product)
add_subdirectory(Order)
add_subdirectory(Inventory)

# Adăugăm fișierul principal
add_executable(tema1 main.cpp)

# Legăm toate bibliotecile
target_link_libraries(tema1
    Item
    Product
    Order
    Inventory
)
