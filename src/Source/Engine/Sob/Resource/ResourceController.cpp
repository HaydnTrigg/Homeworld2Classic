#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\quat.h>
#include <savegamedef.h>
#include <Physics\RigidBody.h>
#include <Sob\Resource\ResourceController.h>
#include <Physics\PhysicsObject.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ResourceController::m_saveToken[0]; // 0x78FF60
extern SaveData const ResourceController::m_saveData[4]; // 0x78FEE0

/* ---------- private variables */

/* ---------- public code */

ResourceController::ResourceController() // 0x4B0FC6
{
    mangled_assert("??0ResourceController@@QAE@XZ");
    todo("implement");
}

_inline ResourceController::~ResourceController() // 0x4B0FDF
{
    mangled_assert("??1ResourceController@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

ResourceController::ResourceController(SaveGameData *) // 0x4B0FA7
{
    mangled_assert("??0ResourceController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void ResourceController::defaultSettings() // 0x4B10F7
{
    mangled_assert("?defaultSettings@ResourceController@@QAEXXZ");
    todo("implement");
}

void ResourceController::postRestore() // 0x4B1111
{
    mangled_assert("?postRestore@ResourceController@@UAEXXZ");
    todo("implement");
}

void ResourceController::applyForcesAndTorques(float) // 0x4B1000
{
    mangled_assert("?applyForcesAndTorques@ResourceController@@UAEXM@Z");
    todo("implement");
}

bool ResourceController::restore(SaveGameData *) // 0x4B1116
{
    mangled_assert("?restore@ResourceController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ResourceController::save(SaveGameData *, SaveType) // 0x4B1163
{
    mangled_assert("?save@ResourceController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
