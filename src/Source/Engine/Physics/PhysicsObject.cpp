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

bool PhysicsObject::restore(SaveGameData *) // 0x4739D4
{
    mangled_assert("?restore@PhysicsObject@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PhysicsObject::save(SaveGameData *, SaveType) // 0x473A12
{
    mangled_assert("?save@PhysicsObject@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PhysicsObject::PhysicsObject(bool) // 0x473982
{
    mangled_assert("??0PhysicsObject@@QAE@_N@Z");
    todo("implement");
}

PhysicsObject::PhysicsObject(SaveGameData *) // 0x473968
{
    mangled_assert("??0PhysicsObject@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PhysicsObject::defaultSettings() // 0x4739CB
{
    mangled_assert("?defaultSettings@PhysicsObject@@QAEXXZ");
    todo("implement");
}

void PhysicsObject::postRestore() // 0x4739D3
{
    mangled_assert("?postRestore@PhysicsObject@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
