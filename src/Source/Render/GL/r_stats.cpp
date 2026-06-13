#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Render\GL\r_stats.h>
#include <Render\GL\r_defines.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool rglAreStatsEnabled();
extern void rglClearAllStats();
extern void rglClearStat(__int32 stat);
extern __int32 rglGetStat(__int32 stat);
extern void rglIncStat(__int32 stat);
extern void rglAddStat(__int32 stat, __int32 num);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_10011494();
bool rglAreStatsEnabled() // 0x10011494
{
    mangled_assert("?rglAreStatsEnabled@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10011494();
    return __result;
}

_extern void _sub_10011497();
void rglClearAllStats() // 0x10011497
{
    mangled_assert("?rglClearAllStats@@YGXXZ");
    todo("implement");
    _sub_10011497();
}

_extern void _sub_10011498(__int32);
void rglClearStat(__int32 stat) // 0x10011498
{
    mangled_assert("?rglClearStat@@YGXH@Z");
    todo("implement");
    _sub_10011498(stat);
}

_extern __int32 _sub_1001149B(__int32);
__int32 rglGetStat(__int32 stat) // 0x1001149B
{
    mangled_assert("?rglGetStat@@YGHH@Z");
    todo("implement");
    __int32 __result = _sub_1001149B(stat);
    return __result;
}

_extern void _sub_100114A0(__int32);
void rglIncStat(__int32 stat) // 0x100114A0
{
    mangled_assert("?rglIncStat@@YGXH@Z");
    todo("implement");
    _sub_100114A0(stat);
}

_extern void _sub_10011491(__int32, __int32);
void rglAddStat(__int32 stat, __int32 num) // 0x10011491
{
    mangled_assert("?rglAddStat@@YGXHH@Z");
    todo("implement");
    _sub_10011491(stat, num);
}

/* ---------- private code */
#endif
