cmake_minimum_required(VERSION 3.13)  # CMake version check
project(PhysicalProg)                 # Create project ""
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp complexclass.cpp complexclass.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(PhysicalProg ${SOURCE_FILES})
