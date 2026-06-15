#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <Memory\MemoryPool.h>
#include <Memory\mmCRT.h>
#include <Memory\memoryalloc.h>
#include <.h>
#include <Memory\mmWriteHeap.h>
#include <debug\db.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern char const *mmFormatAllocation(_HMEMPOOL *const &pool, MEMBLOCKINFO const &inf, unsigned __int32 depth);
extern void mmWriteHeap(char const *fname, unsigned long maxstackdepth);
extern void mmWritePoolAppend(_HMEMPOOL *const &pool, char const *fname, unsigned long maxstackdepth);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

char const *mmFormatAllocation(_HMEMPOOL *const &pool, MEMBLOCKINFO const &inf, unsigned __int32 depth) // 0x10006210
{
    mangled_assert("?mmFormatAllocation@@YGPBDABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@I@Z");
    todo("implement");
}

void mmWriteHeap(char const *fname, unsigned long maxstackdepth) // 0x10006220
{
    mangled_assert("?mmWriteHeap@@YGXPBDK@Z");
    todo("implement");
}

void mmWritePoolAppend(_HMEMPOOL *const &pool, char const *fname, unsigned long maxstackdepth) // 0x10006230
{
    mangled_assert("?mmWritePoolAppend@@YGXABQAU_HMEMPOOL@@PBDK@Z");
    todo("implement");
}

/* ---------- private code */
#endif
