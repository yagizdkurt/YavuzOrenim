@echo off
set BUILD_DIR=build

REM Clean previous build
if exist %BUILD_DIR% rmdir /s /q %BUILD_DIR%
mkdir %BUILD_DIR%

REM Add MinGW to PATH (adjust path if needed)
set PATH=C:\msys64\mingw64\bin;%PATH%

REM Generate project with MinGW
cmake -G "MinGW Makefiles" -B %BUILD_DIR% -S .

REM Build project
cmake --build %BUILD_DIR% -- -j4

REM Copy exe to root
copy "%CD%\%BUILD_DIR%\bin\prg.exe" "%CD%\prg.exe"

pause
