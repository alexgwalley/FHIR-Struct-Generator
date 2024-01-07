/* date = January 7th 2024 4:51 pm */

#ifndef OS_H
#define OS_H
#include <stdint.h>

#define FileAttributes_DoesNotExist 0
#define FileAttributes_Directory 1
typedef uint8_t FileAttributes;

struct FileEntry
{
    String8 file_name;
    FileAttributes attr;
};

struct FileEntries
{
    int count;
    FileEntry *v;
};


bool OS_CreateDirectory(String8 path);
FileEntries 
OS_EnumerateDirectory(Arena *arena, String8 file_path);
FileAttributes 
OS_GetFileAttributes(String8 file_path);

#endif //OS_H
