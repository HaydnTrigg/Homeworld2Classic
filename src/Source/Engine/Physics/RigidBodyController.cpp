#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <savegameimpl.h>
#include <savegamedef.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const RigidBodyController::m_saveData[1]; // 0x78B544
extern char const RigidBodyController::m_saveToken[20]; // 0x78B564

/* ---------- private variables */

/* ---------- public code */

void RigidBodyController::defaultSettings() // 0x475D2A
{
    mangled_assert("?defaultSettings@RigidBodyController@@IAEXXZ");
    todo("implement");
}

void RigidBodyController::postRestore() // 0x475D3B
{
    mangled_assert("?postRestore@RigidBodyController@@MAEXXZ");
    todo("implement");
}

bool RigidBodyController::restore(SaveGameData *) // 0x475D3C
{
    mangled_assert("?restore@RigidBodyController@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool RigidBodyController::save(SaveGameData *, SaveType) // 0x475D7A
{
    mangled_assert("?save@RigidBodyController@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

RigidBodyController::RigidBodyController() // 0x475CE9
{
    mangled_assert("??0RigidBodyController@@QAE@XZ");
    todo("implement");
}

RigidBodyController::RigidBodyController(SaveGameData *) // 0x475CD3
{
    mangled_assert("??0RigidBodyController@@IAE@PAVSaveGameData@@@Z");
    todo("implement");
}

RigidBodyController::~RigidBodyController() // 0x475CFD
{
    mangled_assert("??1RigidBodyController@@UAE@XZ");
    todo("implement");
}

void RigidBodyController::setRigidBody(RigidBody *) // 0x475DB5
{
    mangled_assert("?setRigidBody@RigidBodyController@@QAEXPAVRigidBody@@@Z");
    todo("implement");
}

RigidBody *RigidBodyController::getRigidBody() // 0x475D2B
{
    mangled_assert("?getRigidBody@RigidBodyController@@QAEPAVRigidBody@@XZ");
    todo("implement");
}

bool RigidBodyController::isControllingRigidBody() // 0x475D2F
{
    mangled_assert("?isControllingRigidBody@RigidBodyController@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
