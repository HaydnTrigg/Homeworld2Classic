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

FXMemory::FXMemory() // 0x6F7312
{
    mangled_assert("??0FXMemory@@QAE@XZ");
    todo("implement");
}

FXMemory::~FXMemory() // 0x6F733D
{
    mangled_assert("??1FXMemory@@QAE@XZ");
    todo("implement");
}

FXMemory::Handle FXMemory::Alloc() // 0x6F7385
{
    mangled_assert("?Alloc@FXMemory@@QAE?AUHandle@1@XZ");
    todo("implement");
}

void FXMemory::Release(FXMemory::Handle) // 0x6F743A
{
    mangled_assert("?Release@FXMemory@@QAEXUHandle@1@@Z");
    todo("implement");
}

bool FXMemory::HandleInUse(FXMemory::Handle) const // 0x6F73D6
{
    mangled_assert("?HandleInUse@FXMemory@@QBE_NUHandle@1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
