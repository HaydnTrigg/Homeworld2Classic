#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <HW2Box_3DNow.h>
#include <HW2Box_SSE.h>
#include <HW2Box_SSE2.h>
#include <HW2Box.h>
#include <cpuid.h>
#include <HW2Box_std.h>
#include <HW2Box.pch>

/* ---------- constants */

/* ---------- definitions */

typedef _processor_info _p_info;

/* ---------- prototypes */

/* ---------- globals */

extern HW2Box *HW2Box::s_pHW2Box; // 0x10004150
extern unsigned __int32 HW2Box::s_refCount; // 0x10004154

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_10001C9A(bool, __int32);
bool HW2Box::Initialize(bool bDisableExtensions, __int32 version) // 0x10001C9A
{
    mangled_assert("?Initialize@HW2Box@@SG_N_NH@Z");
    todo("implement");
    bool __result = _sub_10001C9A(bDisableExtensions, version);
    return __result;
}

_extern void _sub_10001D6A();
void HW2Box::Shutdown() // 0x10001D6A
{
    mangled_assert("?Shutdown@HW2Box@@SGXXZ");
    todo("implement");
    _sub_10001D6A();
}

_extern _sub_10001C6A(HW2Box *const);
HW2Box::HW2Box() // 0x10001C6A
{
    mangled_assert("??0HW2Box@@IAE@XZ");
    todo("implement");
    _sub_10001C6A(this);
}

_extern void _sub_10001C73(HW2Box *const);
HW2Box::~HW2Box() // 0x10001C73
{
    mangled_assert("??1HW2Box@@MAE@XZ");
    todo("implement");
    _sub_10001C73(this);
}

/* ---------- private code */
#endif
