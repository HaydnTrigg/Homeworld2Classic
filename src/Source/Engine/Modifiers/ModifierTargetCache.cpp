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

_extern _sub_56ED5B(ModifierTargetCache *const, unsigned __int32);
ModifierTargetCache::ModifierTargetCache(unsigned __int32) // 0x56ED5B
{
    mangled_assert("??0ModifierTargetCache@@QAE@I@Z");
    todo("implement");
    _sub_56ED5B(this, arg);
}

_extern void _sub_56EDE0(ModifierTargetCache *const);
ModifierTargetCache::~ModifierTargetCache() // 0x56EDE0
{
    mangled_assert("??1ModifierTargetCache@@UAE@XZ");
    todo("implement");
    _sub_56EDE0(this);
}

_extern void _sub_56EFED(ModifierTargetCache *const);
void ModifierTargetCache::postRestore() // 0x56EFED
{
    mangled_assert("?postRestore@ModifierTargetCache@@UAEXXZ");
    todo("implement");
    _sub_56EFED(this);
}

_extern bool _sub_56F092(ModifierTargetCache *const, SaveGameData *);
bool ModifierTargetCache::restore(SaveGameData *) // 0x56F092
{
    mangled_assert("?restore@ModifierTargetCache@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_56F092(this, arg);
    return __result;
}

_extern bool _sub_56F0D0(ModifierTargetCache *const, SaveGameData *, SaveType);
bool ModifierTargetCache::save(SaveGameData *, SaveType) // 0x56F0D0
{
    mangled_assert("?save@ModifierTargetCache@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_56F0D0(this, arg, arg);
    return __result;
}

_extern void _sub_56EB0B(void *, SaveGameData *, SaveType);
void ModifierTargetCache::saveModifierCache(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x56EB0B
{
    mangled_assert("?saveModifierCache@ModifierTargetCache@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_56EB0B(objectPtr, saveGameData, savetype);
}

_extern void _sub_56EB67(void *, SaveGameData *);
void ModifierTargetCache::loadModifierCache(void *objectPtr, SaveGameData *saveGameData) // 0x56EB67
{
    mangled_assert("?loadModifierCache@ModifierTargetCache@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_56EB67(objectPtr, saveGameData);
}

/* ---------- private code */
#endif
