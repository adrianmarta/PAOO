# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(tema1)

# Define the search path for header files
include_directories(Inventory)
include_directories(Product)
include_directories(Order)
include_directories(Item)


# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()    

# Define the executable
add_executable(${PROJECT_NAME}
               Product/Product.h
               Product/Product.cpp
               Item/Item.h
               Inventory/Inventory.h
               Inventory/Inventory.cpp
               Order/Order.h
               Order/Order.cpp
               main.cpp
)

