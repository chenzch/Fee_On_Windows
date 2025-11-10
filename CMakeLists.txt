cmake_minimum_required(VERSION 3.16)
project(FeeOnWin C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Set Ninja as the generator
set(CMAKE_GENERATOR "Ninja")

# Include directories
include_directories(
    include
    generate/include
    RTD/include
)

# Source files
file(GLOB_RECURSE SOURCES
    "src/*.c"
    "generate/src/*.c"
    "RTD/src/*.c"
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Compiler definitions
target_compile_definitions(${PROJECT_NAME} PRIVATE
    _DEBUG
    _CONSOLE
)

# Compiler options
target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall
    -Wextra
    -pedantic
    -Wno-pointer-to-int-cast
    -Wno-int-to-pointer-cast
    -Wno-unused-but-set-variable
    -Wno-unused-function
    -Wno-unused-parameter
)