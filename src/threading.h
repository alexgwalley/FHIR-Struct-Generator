#ifndef THREADING_H
#define THREADING_H

# define per_thread __declspec(thread)
typedef struct ThreadCtx ThreadCtx;
struct ThreadCtx
{
	Arena *scratch_arenas[2];
	char *file_name;
	U64 line_number;
	U8 thread_name[64];
	U64 thread_name_size;
	B32 is_main_thread;
	//Arena *log_arena;
};

ThreadCtx ThreadCtxAlloc(void);
void ThreadCtxRelease(ThreadCtx *tctx);

#endif