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

_extern void *_sub_47AC7D(unsigned __int32);
void *SobIDShared::operator new(unsigned __int32 size) // 0x47AC7D
{
    mangled_assert("??2SobIDShared@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_47AC7D(size);
    return __result;
}

_extern void _sub_47AC8A(void *, unsigned __int32);
void SobIDShared::operator delete(void *p, unsigned __int32 size) // 0x47AC8A
{
    mangled_assert("??3SobIDShared@@SGXPAXI@Z");
    todo("implement");
    _sub_47AC8A(p, size);
}

_extern _sub_47ABFD(SobIDShared *const, Sob *);
SobIDShared::SobIDShared(Sob *) // 0x47ABFD
{
    mangled_assert("??0SobIDShared@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_47ABFD(this, arg);
}

/* ---------- private code */
#endif
