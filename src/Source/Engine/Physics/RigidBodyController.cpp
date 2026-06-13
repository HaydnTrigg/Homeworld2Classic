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

_extern void _sub_475D2A(RigidBodyController *const);
void RigidBodyController::defaultSettings() // 0x475D2A
{
    mangled_assert("?defaultSettings@RigidBodyController@@IAEXXZ");
    todo("implement");
    _sub_475D2A(this);
}

_extern void _sub_475D3B(RigidBodyController *const);
void RigidBodyController::postRestore() // 0x475D3B
{
    mangled_assert("?postRestore@RigidBodyController@@MAEXXZ");
    todo("implement");
    _sub_475D3B(this);
}

_extern bool _sub_475D3C(RigidBodyController *const, SaveGameData *);
bool RigidBodyController::restore(SaveGameData *) // 0x475D3C
{
    mangled_assert("?restore@RigidBodyController@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_475D3C(this, arg);
    return __result;
}

_extern bool _sub_475D7A(RigidBodyController *const, SaveGameData *, SaveType);
bool RigidBodyController::save(SaveGameData *, SaveType) // 0x475D7A
{
    mangled_assert("?save@RigidBodyController@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_475D7A(this, arg, arg);
    return __result;
}

_extern _sub_475CE9(RigidBodyController *const);
RigidBodyController::RigidBodyController() // 0x475CE9
{
    mangled_assert("??0RigidBodyController@@QAE@XZ");
    todo("implement");
    _sub_475CE9(this);
}

_extern _sub_475CD3(RigidBodyController *const, SaveGameData *);
RigidBodyController::RigidBodyController(SaveGameData *) // 0x475CD3
{
    mangled_assert("??0RigidBodyController@@IAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_475CD3(this, arg);
}

_extern void _sub_475CFD(RigidBodyController *const);
RigidBodyController::~RigidBodyController() // 0x475CFD
{
    mangled_assert("??1RigidBodyController@@UAE@XZ");
    todo("implement");
    _sub_475CFD(this);
}

_extern void _sub_475DB5(RigidBodyController *const, RigidBody *);
void RigidBodyController::setRigidBody(RigidBody *) // 0x475DB5
{
    mangled_assert("?setRigidBody@RigidBodyController@@QAEXPAVRigidBody@@@Z");
    todo("implement");
    _sub_475DB5(this, arg);
}

_extern RigidBody *_sub_475D2B(RigidBodyController *const);
RigidBody *RigidBodyController::getRigidBody() // 0x475D2B
{
    mangled_assert("?getRigidBody@RigidBodyController@@QAEPAVRigidBody@@XZ");
    todo("implement");
    RigidBody * __result = _sub_475D2B(this);
    return __result;
}

_extern bool _sub_475D2F(RigidBodyController *const);
bool RigidBodyController::isControllingRigidBody() // 0x475D2F
{
    mangled_assert("?isControllingRigidBody@RigidBodyController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_475D2F(this);
    return __result;
}

/* ---------- private code */
#endif
