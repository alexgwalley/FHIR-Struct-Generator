@echo off

mkdir build
echo %cd%
set 
cl /Fo:build\ /DOS_WINDOWS /DBUILD_CORE /DBUILD_CONSOLE_OUTPUT src\main.cc /Zi /Isrc/code 
