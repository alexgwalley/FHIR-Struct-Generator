@echo off

echo %cd%
set 
cl /Fo:build\ /DOS_WINDOWS /DBUILD_CORE /DBUILD_CONSOLE_OUTPUT simple_use.cc /Zi /Isrc/code