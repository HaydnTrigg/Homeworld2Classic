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

bool HW2Box::Initialize(bool bDisableExtensions, __int32 version) // 0x10001C9A
{
    mangled_assert("?Initialize@HW2Box@@SG_N_NH@Z");
    todo("implement");
}

void HW2Box::Shutdown() // 0x10001D6A
{
    mangled_assert("?Shutdown@HW2Box@@SGXXZ");
    todo("implement");
}

HW2Box::HW2Box() // 0x10001C6A
{
    mangled_assert("??0HW2Box@@IAE@XZ");
    todo("implement");
}

HW2Box::~HW2Box() // 0x10001C73
{
    mangled_assert("??1HW2Box@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
