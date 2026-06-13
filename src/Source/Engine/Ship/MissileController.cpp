#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <type_traits>
#include <utility>
#include <math.h>
#include <Mathlib\vector3.h>
#include <DynamicPoint.h>
#include <sobid.h>
#include <Mathlib\quat.h>
#include <Mathlib\mathutil.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <gameRandom.h>
#include <random.h>
#include <Physics\RigidBody.h>
#include <Physics\PhysicsObject.h>
#include <Ship\MissileController.h>
#include <Ship\ShipController.h>
#include <Ship\AdvRigidBodyController.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const MissileController::m_saveToken[0]; // 0x78E020
extern SaveData const MissileController::m_saveData[5]; // 0x78DF80

/* ---------- private variables */

/* ---------- public code */

_extern _sub_49B2FA(MissileController *const, SaveGameData *);
MissileController::MissileController(SaveGameData *) // 0x49B2FA
{
    mangled_assert("??0MissileController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_49B2FA(this, arg);
}

_extern void _sub_49B346(MissileController *const);
void MissileController::defaultSettings() // 0x49B346
{
    mangled_assert("?defaultSettings@MissileController@@QAEXXZ");
    todo("implement");
    _sub_49B346(this);
}

_extern void _sub_49B87B(MissileController *const);
void MissileController::postRestore() // 0x49B87B
{
    mangled_assert("?postRestore@MissileController@@UAEXXZ");
    todo("implement");
    _sub_49B87B(this);
}

_extern bool _sub_49B884(MissileController *const, SaveGameData *);
bool MissileController::restore(SaveGameData *) // 0x49B884
{
    mangled_assert("?restore@MissileController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_49B884(this, arg);
    return __result;
}

_extern bool _sub_49B8D1(MissileController *const, SaveGameData *, SaveType);
bool MissileController::save(SaveGameData *, SaveType) // 0x49B8D1
{
    mangled_assert("?save@MissileController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_49B8D1(this, arg, arg);
    return __result;
}

_extern _sub_49B1EB(MissileController *const, float, float, float, float, float);
MissileController::MissileController(float, float, float, float, float) // 0x49B1EB
{
    mangled_assert("??0MissileController@@QAE@MMMMM@Z");
    todo("implement");
    _sub_49B1EB(this, arg, arg, arg, arg, arg);
}

_extern void _sub_49B319(MissileController *const);
MissileController::~MissileController() // 0x49B319
{
    mangled_assert("??1MissileController@@UAE@XZ");
    todo("implement");
    _sub_49B319(this);
}

_extern vector3 _sub_49B523(MissileController *const, float);
vector3 MissileController::getSwayingGoal(float) // 0x49B523
{
    mangled_assert("?getSwayingGoal@MissileController@@IAE?AVvector3@@M@Z");
    todo("implement");
    vector3 __result = _sub_49B523(this, arg);
    return __result;
}

_extern void _sub_49B36D(MissileController *const, float);
void MissileController::doBehaviour(float) // 0x49B36D
{
    mangled_assert("?doBehaviour@MissileController@@UAEXM@Z");
    todo("implement");
    _sub_49B36D(this, arg);
}

/* ---------- private code */
#endif
