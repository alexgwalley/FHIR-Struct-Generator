@echo off

pushd build
cl /Fe:../main.exe /EHsc /MDd ../src/main.cc ../src/arena.c ../src/cJSON.c /Zi /I../src/code
popd build
