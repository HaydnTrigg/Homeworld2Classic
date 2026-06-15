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

bool objectToggleGoblins(bool on) // 0x100877D0
{
    mangled_assert("?objectToggleGoblins@@YG_N_N@Z");
    todo("implement");
}

void objectGoblinTol(float tol) // 0x10087770
{
    mangled_assert("?objectGoblinTol@@YGXM@Z");
    todo("implement");
}

void objectDetailLevel(float level) // 0x10087750
{
    mangled_assert("?objectDetailLevel@@YGXM@Z");
    todo("implement");
}

void objectMinLOD(float min) // 0x10087790
{
    mangled_assert("?objectMinLOD@@YGXM@Z");
    todo("implement");
}

bool objectToggleTerrainGoblins(bool state) // 0x100877F0
{
    mangled_assert("?objectToggleTerrainGoblins@@YG_N_N@Z");
    todo("implement");
}

void objectTerrainGoblinTol(float tol) // 0x100877B0
{
    mangled_assert("?objectTerrainGoblinTol@@YGXM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
