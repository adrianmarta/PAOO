# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(tema1)

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

# Add subdirectories for each component
add_subdirectory(Item)
add_subdirectory(Product)
add_subdirectory(Inventory)
add_subdirectory(Order)

# Define the executable and link libraries from subdirectories
add_executable(${PROJECT_NAME} main.cpp)

# Link the libraries defined in each subdirectory
target_link_libraries(${PROJECT_NAME} Item Product Inventory Order)
