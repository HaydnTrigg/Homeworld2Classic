#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <Objects\Objects.h>
#include <Objects\Objects.pch>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool objectToggleGoblins(bool on);
extern void objectGoblinTol(float tol);
extern void objectDetailLevel(float level);
extern void objectMinLOD(float min);
extern bool objectToggleTerrainGoblins(bool state);
extern void objectTerrainGoblinTol(float tol);

/* ---------- globals */

extern bool g_renderGoblins; // 0x1010D8E8
extern float g_goblinTol; // 0x1010D8EC
extern bool g_renderTerrainGoblins; // 0x1010D8E9
extern float g_terrainGoblinTol; // 0x1010D8F0
extern float g_twkDetailLevel; // 0x1010D8F4
extern float g_twkMinLOD; // 0x1010D8F8

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_100877D0(bool);
bool objectToggleGoblins(bool on) // 0x100877D0
{
    mangled_assert("?objectToggleGoblins@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_100877D0(on);
    return __result;
}

_extern void _sub_10087770(float);
void objectGoblinTol(float tol) // 0x10087770
{
    mangled_assert("?objectGoblinTol@@YGXM@Z");
    todo("implement");
    _sub_10087770(tol);
}

_extern void _sub_10087750(float);
void objectDetailLevel(float level) // 0x10087750
{
    mangled_assert("?objectDetailLevel@@YGXM@Z");
    todo("implement");
    _sub_10087750(level);
}

_extern void _sub_10087790(float);
void objectMinLOD(float min) // 0x10087790
{
    mangled_assert("?objectMinLOD@@YGXM@Z");
    todo("implement");
    _sub_10087790(min);
}

_extern bool _sub_100877F0(bool);
bool objectToggleTerrainGoblins(bool state) // 0x100877F0
{
    mangled_assert("?objectToggleTerrainGoblins@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_100877F0(state);
    return __result;
}

_extern void _sub_100877B0(float);
void objectTerrainGoblinTol(float tol) // 0x100877B0
{
    mangled_assert("?objectTerrainGoblinTol@@YGXM@Z");
    todo("implement");
    _sub_100877B0(tol);
}

/* ---------- private code */
#endif
