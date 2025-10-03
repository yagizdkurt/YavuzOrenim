cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0079 NEW)

# Project metadata
project(prg VERSION 1.0 LANGUAGES CXX)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add subdirectories
add_subdirectory(bin)
add_subdirectory(src)
add_subdirectory(outsrc)

# root CMakeLists.txt
set(OUTPUT_DIR "${CMAKE_SOURCE_DIR}/bin")
set(OUTSRC_DIR "${CMAKE_SOURCE_DIR}/outsrc")
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR})

