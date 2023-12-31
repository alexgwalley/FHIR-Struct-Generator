@echo off

@rem read compile mode, can be either "debug" or "release" (without quotes)
set compile_mode=%1

@rem pushd build
echo %cd%
@rem wd5033 is to remove "register" warning from gperf
if %compile_mode%==release cl /std:c++17 /O2 /EHsc /wd5033 /Fe:simple_use.exe src/third_party/simdjson.cpp simple_use.cc /Zi /Isrc
if %compile_mode%==debug cl /std:c++17 /Zi /DDEBUG /wd5033 /EHsc /MDd /DEBUG /Fe:simple_use.exe src/third_party/simdjson.cpp simple_use.cc /Isrc /link /DEBUG:FULL
@rem popd
