# FeeOnWin

Flash EEPROM Emulation (Fee) implementation for Windows

## Build Instructions

### For Windows (Visual Studio 2022 - 32-bit)
1. Run `build_windows.bat` script
2. Or use CMake directly:
   ```
   mkdir build
   cd build
   cmake .. -G "Visual Studio 17 2022" -A Win32
   cmake --build . --config Debug
   ```

> Note: This builds a 32-bit application. The executable will be located at `build/Debug/FeeOnWin.exe`.

### For Linux (Ninja)
1. Make sure you have CMake and Ninja installed
2. Run `build_linux.sh` script
3. Or use CMake directly:
   ```
   mkdir build
   cd build
   cmake .. -G Ninja
   cmake --build .
   ```

## Platform Detection
The CMakeLists.txt file automatically detects the platform and applies the appropriate configuration:
- Windows: Uses Visual Studio 2022 with MSVC compiler (32-bit)
- Linux: Uses Ninja generator with GCC/Clang compiler
