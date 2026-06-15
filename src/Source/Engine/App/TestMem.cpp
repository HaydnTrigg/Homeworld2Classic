#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <new>
#include <memory\memorypool.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <list>
#include <memory\mmwriteheap.h>
#include <map>
#include <xtree>
#include <memory\memoryalloc.h>
#include <App\TestMem.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 TestMem::numAllocations; // 0x844504
extern unsigned __int32 TestMem::amountOfBytes; // 0x844508
extern TestMem TestMem::s_instance; // 0x837064

/* ---------- private variables */

/* ---------- public code */

_inline Profile::MemHook::MemHook() // 0x506695
{
    mangled_assert("??0MemHook@Profile@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline TestMem::TestMem() // 0x50669E
{
    mangled_assert("??0TestMem@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

unsigned __int32 TestMem::getNumberOfAllocations() const // 0x5066C3
{
    mangled_assert("?getNumberOfAllocations@TestMem@@UBEIXZ");
    todo("implement");
}

unsigned __int32 TestMem::getNumberOfBytesAllocated() const // 0x5066C9
{
    mangled_assert("?getNumberOfBytesAllocated@TestMem@@UBEIXZ");
    todo("implement");
}

void TestMem::TestMemoryLibCB(_HMEMPOOL *const &pool, MEMBLOCKINFO const &inf) // 0x5066AD
{
    mangled_assert("?TestMemoryLibCB@TestMem@@CGXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z");
    todo("implement");
}

bool TestMem::Startup() // 0x5066AA
{
    mangled_assert("?Startup@TestMem@@SG_NXZ");
    todo("implement");
}

bool TestMem::Shutdown() // 0x5066A7
{
    mangled_assert("?Shutdown@TestMem@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
