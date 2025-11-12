cmake_minimum_required(VERSION 3.16)
project(FeeOnWin C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

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

# Platform-specific configuration
if(WIN32)
    message(STATUS "Configuring for Windows with Visual Studio 2022 (32-bit)")
    
    # Enable MSVC specific settings
    if(MSVC)
        # Set compiler definitions for MSVC
        target_compile_definitions(${PROJECT_NAME} PRIVATE
            _DEBUG
            _CONSOLE
            _CRT_SECURE_NO_WARNINGS
        )
        
        # Set compiler options for MSVC
        target_compile_options(${PROJECT_NAME} PRIVATE
            /W3  # Warning level 3
            /WX- # Don't treat warnings as errors
        )
        
        # Set linker options for MSVC
        target_link_options(${PROJECT_NAME} PRIVATE
            /SUBSYSTEM:CONSOLE
            /MACHINE:X86
        )
    endif()
else()
    message(STATUS "Configuring for Linux with Ninja")
    
    # Set 32-bit compilation
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -m32")

    # Set Ninja as the generator for Linux
    set(CMAKE_GENERATOR "Ninja")
    
    # Compiler definitions
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        _DEBUG
        _CONSOLE
    )
    
    # Compiler options for GCC/Clang
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
endif()