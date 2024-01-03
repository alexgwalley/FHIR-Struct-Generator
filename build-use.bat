@echo off

echo %cd%
set 
cl /O2 /EHsc /Fe:simple_use.exe /Fo:build\ /DOS_WINDOWS /DBUILD_CORE /DBUILD_CONSOLE_OUTPUT src/yyjson.c simple_use.cc /Zi /Isrc/code
