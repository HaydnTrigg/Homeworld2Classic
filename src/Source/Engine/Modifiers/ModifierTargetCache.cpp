#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <savegamedata.h>
#include <selection.h>
#include <savegamedef.h>
#include <savestream.h>
#include <Modifiers\ModifierTargetCache.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ModifierTargetCache::m_saveToken[20]; // 0x7A0684
extern SaveData const ModifierTargetCache::m_saveData[1]; // 0x7A0698

/* ---------- private variables */

/* ---------- public code */

ModifierTargetCache::ModifierTargetCache(unsigned __int32) // 0x56ED5B
{
    mangled_assert("??0ModifierTargetCache@@QAE@I@Z");
    todo("implement");
}

ModifierTargetCache::~ModifierTargetCache() // 0x56EDE0
{
    mangled_assert("??1ModifierTargetCache@@UAE@XZ");
    todo("implement");
}

void ModifierTargetCache::postRestore() // 0x56EFED
{
    mangled_assert("?postRestore@ModifierTargetCache@@UAEXXZ");
    todo("implement");
}

bool ModifierTargetCache::restore(SaveGameData *) // 0x56F092
{
    mangled_assert("?restore@ModifierTargetCache@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ModifierTargetCache::save(SaveGameData *, SaveType) // 0x56F0D0
{
    mangled_assert("?save@ModifierTargetCache@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ModifierTargetCache::saveModifierCache(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x56EB0B
{
    mangled_assert("?saveModifierCache@ModifierTargetCache@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ModifierTargetCache::loadModifierCache(void *objectPtr, SaveGameData *saveGameData) // 0x56EB67
{
    mangled_assert("?loadModifierCache@ModifierTargetCache@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
