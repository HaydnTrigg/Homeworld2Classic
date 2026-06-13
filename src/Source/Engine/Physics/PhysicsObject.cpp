#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\PhysicsObject.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const PhysicsObject::m_saveToken[0]; // 0x78B348
extern SaveData const PhysicsObject::m_saveData[1]; // 0x78B328

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_4739D4(PhysicsObject *const, SaveGameData *);
bool PhysicsObject::restore(SaveGameData *) // 0x4739D4
{
    mangled_assert("?restore@PhysicsObject@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4739D4(this, arg);
    return __result;
}

_extern bool _sub_473A12(PhysicsObject *const, SaveGameData *, SaveType);
bool PhysicsObject::save(SaveGameData *, SaveType) // 0x473A12
{
    mangled_assert("?save@PhysicsObject@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_473A12(this, arg, arg);
    return __result;
}

_extern _sub_473982(PhysicsObject *const, bool);
PhysicsObject::PhysicsObject(bool) // 0x473982
{
    mangled_assert("??0PhysicsObject@@QAE@_N@Z");
    todo("implement");
    _sub_473982(this, arg);
}

_extern _sub_473968(PhysicsObject *const, SaveGameData *);
PhysicsObject::PhysicsObject(SaveGameData *) // 0x473968
{
    mangled_assert("??0PhysicsObject@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_473968(this, arg);
}

_extern void _sub_4739CB(PhysicsObject *const);
void PhysicsObject::defaultSettings() // 0x4739CB
{
    mangled_assert("?defaultSettings@PhysicsObject@@QAEXXZ");
    todo("implement");
    _sub_4739CB(this);
}

_extern void _sub_4739D3(PhysicsObject *const);
void PhysicsObject::postRestore() // 0x4739D3
{
    mangled_assert("?postRestore@PhysicsObject@@UAEXXZ");
    todo("implement");
    _sub_4739D3(this);
}

/* ---------- private code */
#endif
