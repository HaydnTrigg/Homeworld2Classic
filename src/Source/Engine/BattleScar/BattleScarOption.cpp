#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <BattleScar\BattleScarOption.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void BattleScarOption::SetEnable(bool bEnable);
extern bool BattleScarOption::GetEnable();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bEnable; // 0x839B2B
}

/* ---------- public code */

_extern void _sub_55CC21(bool);
void BattleScarOption::SetEnable(bool bEnable) // 0x55CC21
{
    mangled_assert("?SetEnable@BattleScarOption@@YGX_N@Z");
    todo("implement");
    _sub_55CC21(bEnable);
}

_extern bool _sub_55CC1B();
bool BattleScarOption::GetEnable() // 0x55CC1B
{
    mangled_assert("?GetEnable@BattleScarOption@@YG_NXZ");
    todo("implement");
    bool __result = _sub_55CC1B();
    return __result;
}

/* ---------- private code */
#endif
