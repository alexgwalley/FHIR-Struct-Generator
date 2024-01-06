
Rng1U64 R1U64(U64 min, U64 max)
{
 Rng1U64 result = { min, max };
 if(result.max < result.min)
 {
  Swap(U64, result.min, result.max);
 }
 return result;
}

////////////////////////////////
//~ rjf: Scratch Memory
per_thread ThreadCtx *tl_tctx = 0;

no_name_mangle void
SetThreadCtx(ThreadCtx *tctx)
{
 tl_tctx = tctx;
}

no_name_mangle ThreadCtx *
GetThreadCtx(void)
{
 return tl_tctx;
}

Temp
ScratchBegin(Arena **conflicts, U64 conflict_count)
{
 Temp scratch = {0};
 ThreadCtx *tctx = GetThreadCtx();
 for(U64 tctx_idx = 0; tctx_idx < ArrayCount(tctx->scratch_arenas); tctx_idx += 1)
 {
  B32 is_conflicting = 0;
  for(Arena **conflict = conflicts; conflict < conflicts+conflict_count; conflict += 1)
  {
   if(*conflict == tctx->scratch_arenas[tctx_idx])
   {
    is_conflicting = 1;
    break;
   }
  }
  if(is_conflicting == 0)
  {
   scratch.arena = tctx->scratch_arenas[tctx_idx];
   scratch.pos = scratch.arena->pos;
   break;
  }
 }
 return scratch;
}
