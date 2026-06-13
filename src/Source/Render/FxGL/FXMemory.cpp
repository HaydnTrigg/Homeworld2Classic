#if 0
/* ---------- headers */

#include "decomp.h"
#include <memory\memorypool.h>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\FXMemory.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned short const FXMemory::SIGNATURE_ALLOCATED; // 0x7BEEF0
extern unsigned short const FXMemory::SIGNATURE_FREED; // 0x7BEEF4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F7312(FXMemory *const);
FXMemory::FXMemory() // 0x6F7312
{
    mangled_assert("??0FXMemory@@QAE@XZ");
    todo("implement");
    _sub_6F7312(this);
}

_extern void _sub_6F733D(FXMemory *const);
FXMemory::~FXMemory() // 0x6F733D
{
    mangled_assert("??1FXMemory@@QAE@XZ");
    todo("implement");
    _sub_6F733D(this);
}

_extern FXMemory::Handle _sub_6F7385(FXMemory *const);
FXMemory::Handle FXMemory::Alloc() // 0x6F7385
{
    mangled_assert("?Alloc@FXMemory@@QAE?AUHandle@1@XZ");
    todo("implement");
    FXMemory::Handle __result = _sub_6F7385(this);
    return __result;
}

_extern void _sub_6F743A(FXMemory *const, FXMemory::Handle);
void FXMemory::Release(FXMemory::Handle) // 0x6F743A
{
    mangled_assert("?Release@FXMemory@@QAEXUHandle@1@@Z");
    todo("implement");
    _sub_6F743A(this, arg);
}

_extern bool _sub_6F73D6(FXMemory const *const, FXMemory::Handle);
bool FXMemory::HandleInUse(FXMemory::Handle) const // 0x6F73D6
{
    mangled_assert("?HandleInUse@FXMemory@@QBE_NUHandle@1@@Z");
    todo("implement");
    bool __result = _sub_6F73D6(this, arg);
    return __result;
}

/* ---------- private code */
#endif
