# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(HelloC LANGUAGES C)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Collect all .c files in src/
file(GLOB SOURCES "src/*.c")

# Add executable with all sources
add_executable(Application ${SOURCES})

# Add an executable target
# add_executable(Application src/main.c src/RingBuffer.c)

# Add include directory so headers in `include/` are visible to the compiler
target_include_directories(Application PRIVATE ${CMAKE_SOURCE_DIR}/include)