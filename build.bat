@echo off
set BUILD_DIR=build
if exist %BUILD_DIR% rmdir /s /q %BUILD_DIR%
mkdir %BUILD_DIR%
cd %BUILD_DIR%

REM Generate Visual Studio solution
cmake -G "Visual Studio 17 2022" -A x64 ..

REM Build
cmake --build . --config Release
cd ..

REM Copy exe to root
copy "%CD%\build\bin\Release\prg.exe" "%CD%\prg.exe"
pause
