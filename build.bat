@echo off
set BUILD_DIR=build

REM Clean previous build
if exist %BUILD_DIR% rmdir /s /q %BUILD_DIR%
mkdir %BUILD_DIR%

REM Add MinGW to PATH
set PATH=C:\msys64\mingw64\bin;%PATH%

REM Generate project with MinGW and SFML paths if needed
cmake -S . -B %BUILD_DIR% -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH=outsrc/SFML

REM Build
cmake --build %BUILD_DIR% -- -j4

REM Copy exe to root (executable is in build/bin/ due to CMAKE_RUNTIME_OUTPUT_DIRECTORY)
copy "%CD%\%BUILD_DIR%\bin\prg.exe" "%CD%\prg.exe"

pause
