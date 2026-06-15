#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Graphics\AutoLODOption.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void AutoLODOption::SetGoblinEnable(bool bEnable);
extern bool AutoLODOption::GetGoblinEnable();
extern void AutoLODOption::SetScalingEnable(bool bEnable);
extern bool AutoLODOption::GetScalingEnable();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bGoblinEnable; // 0x839BD4
    extern bool s_bScalingEnable; // 0x839BD5
}

/* ---------- public code */

void AutoLODOption::SetGoblinEnable(bool bEnable) // 0x56AEC4
{
    mangled_assert("?SetGoblinEnable@AutoLODOption@@YGX_N@Z");
    todo("implement");
}

bool AutoLODOption::GetGoblinEnable() // 0x56AEB8
{
    mangled_assert("?GetGoblinEnable@AutoLODOption@@YG_NXZ");
    todo("implement");
}

void AutoLODOption::SetScalingEnable(bool bEnable) // 0x56AED0
{
    mangled_assert("?SetScalingEnable@AutoLODOption@@YGX_N@Z");
    todo("implement");
}

bool AutoLODOption::GetScalingEnable() // 0x56AEBE
{
    mangled_assert("?GetScalingEnable@AutoLODOption@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
