#include <cinttypes>
#define root_function static

#define Bytes(n)      (n)
#define Kilobytes(n)  (n << 10)
#define Megabytes(n)  (n << 20)
#define Gigabytes(n)  (((U64)n) << 30)
#define Terabytes(n)  (((U64)n) << 40)

#define ArrayCount(a) (sizeof(a) / sizeof((a)[0]))

//- rjf: linked list helpers

#define CheckNull(p) ((p)==0)
#define SetNull(p) ((p)=0)

#define QueuePush_NZ(f,l,n,next,zchk,zset) (zchk(f)?\
(((f)=(l)=(n)), zset((n)->next)):\
((l)->next=(n),(l)=(n),zset((n)->next)))
#define QueuePushFront_NZ(f,l,n,next,zchk,zset) (zchk(f) ? (((f) = (l) = (n)), zset((n)->next)) :\
((n)->next = (f)), ((f) = (n)))
#define QueuePop_NZ(f,l,next,zset) ((f)==(l)?\
(zset(f),zset(l)):\
((f)=(f)->next))
#define StackPush_N(f,n,next) ((n)->next=(f),(f)=(n))
#define StackPop_NZ(f,next,zchk) (zchk(f)?0:((f)=(f)->next))

#define DLLInsert_NPZ(f,l,p,n,next,prev,zchk,zset) \
(zchk(f) ? (((f) = (l) = (n)), zset((n)->next), zset((n)->prev)) :\
zchk(p) ? (zset((n)->prev), (n)->next = (f), (zchk(f) ? (0) : ((f)->prev = (n))), (f) = (n)) :\
((zchk((p)->next) ? (0) : (((p)->next->prev) = (n))), (n)->next = (p)->next, (n)->prev = (p), (p)->next = (n),\
((p) == (l) ? (l) = (n) : (0))))
#define DLLPushBack_NPZ(f,l,n,next,prev,zchk,zset) DLLInsert_NPZ(f,l,l,n,next,prev,zchk,zset)
#define DLLRemove_NPZ(f,l,n,next,prev,zchk,zset) (((f)==(n))?\
((f)=(f)->next, (zchk(f) ? (zset(l)) : zset((f)->prev))):\
((l)==(n))?\
((l)=(l)->prev, (zchk(l) ? (zset(f)) : zset((l)->next))):\
((zchk((n)->next) ? (0) : ((n)->next->prev=(n)->prev)),\
(zchk((n)->prev) ? (0) : ((n)->prev->next=(n)->next))))


#define QueuePush(f,l,n)         QueuePush_NZ(f,l,n,next,CheckNull,SetNull)
#define QueuePushFront(f,l,n)    QueuePushFront_NZ(f,l,n,next,CheckNull,SetNull)
#define QueuePop(f,l)            QueuePop_NZ(f,l,next,SetNull)
#define StackPush(f,n)           StackPush_N(f,n,next)
#define StackPop(f)              StackPop_NZ(f,next,CheckNull)
#define DLLPushBack(f,l,n)       DLLPushBack_NPZ(f,l,n,next,prev,CheckNull,SetNull)
#define DLLPushFront(f,l,n)      DLLPushBack_NPZ(l,f,n,prev,next,CheckNull,SetNull)
#define DLLInsert(f,l,p,n)       DLLInsert_NPZ(f,l,p,n,next,prev,CheckNull,SetNull)
#define DLLRemove(f,l,n)         DLLRemove_NPZ(f,l,n,next,prev,CheckNull,SetNull)

#if defined(_MSC_VER)
#define DebugBreak __debugbreak()
#else
#include <signal.h>
#define DebugBreak raise(SIGTRAP)
#endif

#define Assert(b) do { if(!(b)) { DebugBreak; } } while(0)

#define Min(a, b) (((a)<(b)) ? (a) : (b))
#define Max(a, b) (((a)>(b)) ? (a) : (b))
#define Clamp(a, x, b) (((a)>(x))?(a):((b)<(x))?(b):(x))

#define MemoryCopy memcpy
#define MemoryMove memmove
#define MemorySet  memset

#define MemoryZero(ptr, size) MemorySet((ptr), 0, (size))

#define Swap(type, a, b) do{ type _swapper_ = a; a = b; b = _swapper_; }while(0)
#define global         static
#define local_persist  static
# define no_name_mangle extern "C"

#if defined(_MSC_VER)
# pragma section(".roglob", read)
#define read_only __declspec(allocate(".roglob"))
#else
#define read_only
#endif

#define DeferLoop(start, end) for(int _i_ = ((start), 0); _i_ == 0; _i_ += 1, (end))

////////////////////////////////
//~ rjf: Base-Types
typedef int8_t   S8;
typedef int16_t  S16;
typedef int32_t  S32;
typedef int64_t  S64;
typedef uint8_t  U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef S8       B8;
typedef S16      B16;
typedef S32      B32;
typedef S64      B64;
typedef float    F32;
typedef double   F64;
typedef void VoidFunction(void);
typedef struct U128 U128;
struct U128 {U64 u64[2];};


typedef union Rng1U64 Rng1U64;
union Rng1U64
{
    struct
    {
        U64 min;
        U64 max;
    };
    U64 v[2];
};

Rng1U64 R1U64(U64 min, U64 max);