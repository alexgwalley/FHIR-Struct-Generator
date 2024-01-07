
#if defined(_MSC_VER)

OS_CreateDirectory(String8 path)
{
    
}

FileEntries
OS_EnumerateDirectory(Arena *arena, String8 file_path)
{
    FileEntries ent = {};
    dirent **entries = NULL;
    ent.count = scandir(file_path.str, &entries, NULL, NULL);
    
    ent.file_names = PushArray(arena, String8, ent.count);
    
    for(int i = 0; i < count; i++)
    {
        ent.v[i].file_name = Str8C(entries[i]->d_name);
        stat file_stat;
        state(entries[i]->d_name, &file_stat);
        if(S_ISDIR(file_stat.st_mode))
        {
            ent.v[i].attr = FileAttributes::Directory;
        }
        
        free(entries[i]);
    }
    
    free(entries);
}

FileAttributes
OS_GetFileAttributes(String8 file_path)
{
    
}

#else
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>


bool
OS_CreateDirectory(String8 path)
{
    mkdir((char*)path.str, S_IFREG | S_IFDIR);
}


FileAttributes
OS_GetFileAttributes(String8 file_path)
{
    FileAttributes attrib = 0;
    struct stat file_stat;
    stat((char*)file_path.str, &file_stat);
    
    if(S_ISDIR(file_stat.st_mode))
    {
        attrib |= FileAttributes_Directory;
    }
    
    return attrib;
}


FileEntries
OS_EnumerateDirectory(Arena *arena, String8 file_path)
{
    FileEntries ent = {};
    struct dirent **entries = NULL;
    ent.count = scandir((char*)file_path.str, &entries, NULL, NULL);
    
    ent.v = PushArray(arena, FileEntry, ent.count);
    
    for(int i = 0; i < ent.count; i++)
    {
        ent.v[i].file_name = Str8C(entries[i]->d_name);
        ent.v[i].attr = OS_GetFileAttributes(Str8C(entries[i]->d_name));
        free(entries[i]);
    }
    
    free(entries);
}




#endif