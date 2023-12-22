@echo off

mkdir build
pushd build
echo %cd%
cl ..\src\generate_fhir.c ..\src\string_list.c ..\src\\string_builder.c ..\src\arena.c ..\src\\cJSON.c /Zi
popd
