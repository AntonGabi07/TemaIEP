# CMake version
cmake_minimum_required(VERSION 3.16)

# Project name
project(MyString)

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


# Define the search path for header files
include_directories(inc)

# Define the executable
add_executable(exe1
               inc/myString1.hpp 
               src/main1.cpp
               src/myString1.cpp)

add_executable(exe2
               inc/myString2.hpp 
               src/main2.cpp
               src/myString2.cpp)

