@echo off
REM Clean old build
if exist build rmdir /s /q build
mkdir build
cd build

REM Use MinGW Makefiles generator
cmake .. -G "MinGW Makefiles"

REM Build the project
cmake --build .

cd ..
echo Build complete! Executable is in build folder.
pause
