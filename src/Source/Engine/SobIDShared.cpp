#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <memory\mmfixedpool.h>
#include <new>
#include <boost\static_assert.hpp>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <boost\config.hpp>
#include <assert.h>
#include <boost\shared_ptr.hpp>
#include <SobIDShared.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<SobIDShared,2000> s_SobIDSharedAllocator; // 0x843BAC
}

/* ---------- public code */

void *SobIDShared::operator new(unsigned __int32 size) // 0x47AC7D
{
    mangled_assert("??2SobIDShared@@SGPAXI@Z");
    todo("implement");
}

void SobIDShared::operator delete(void *p, unsigned __int32 size) // 0x47AC8A
{
    mangled_assert("??3SobIDShared@@SGXPAXI@Z");
    todo("implement");
}

SobIDShared::SobIDShared(Sob *) // 0x47ABFD
{
    mangled_assert("??0SobIDShared@@QAE@PAVSob@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
