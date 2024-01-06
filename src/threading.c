ThreadCtx
ThreadCtxAlloc(void)
{
	ThreadCtx tctx = {0};
	for(U64 arena_idx = 0; arena_idx < ArrayCount(tctx.scratch_arenas); arena_idx += 1)
	{
		tctx.scratch_arenas[arena_idx] = ArenaAlloc(Gigabytes(8));
	}
	//tctx.log_arena = ArenaAlloc(Megabytes(64));
	return tctx;
}

void
ThreadCtxRelease(ThreadCtx *tctx)
{
 for(U64 arena_idx = 0; arena_idx < ArrayCount(tctx->scratch_arenas); arena_idx += 1)
 {
  ArenaRelease(tctx->scratch_arenas[arena_idx]);
 }
}