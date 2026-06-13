#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MultiplierTypes.h>
#include <Physics\RigidBody.h>
#include <Physics\PhysicsObject.h>
#include <xutility>
#include <utility>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <DynamicPoint.h>
#include <Mathlib\mathutil.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <Mathlib\quat.h>
#include <profile\profile.h>
#include <iostream>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Ship\AdvRigidBodyController.h>
#include <Physics\RigidBodyController.h>
#include <ITweak.h>
#include <Tactics.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const AdvRigidBodyController::m_saveData[13]; // 0x78D828
extern char const AdvRigidBodyController::m_saveToken[23]; // 0x78D9C8

/* ---------- private variables */

_static
{
    extern float const ThrusterEpsilon; // 0x78D820
    extern float const AngularEpsilon; // 0x78D824
}

/* ---------- public code */

_extern void _sub_4991FB(AdvRigidBodyController *const);
void AdvRigidBodyController::postRestore() // 0x4991FB
{
    mangled_assert("?postRestore@AdvRigidBodyController@@MAEXXZ");
    todo("implement");
    _sub_4991FB(this);
}

_extern bool _sub_49923A(AdvRigidBodyController *const, SaveGameData *);
bool AdvRigidBodyController::restore(SaveGameData *) // 0x49923A
{
    mangled_assert("?restore@AdvRigidBodyController@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_49923A(this, arg);
    return __result;
}

_extern bool _sub_499287(AdvRigidBodyController *const, SaveGameData *, SaveType);
bool AdvRigidBodyController::save(SaveGameData *, SaveType) // 0x499287
{
    mangled_assert("?save@AdvRigidBodyController@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_499287(this, arg, arg);
    return __result;
}

_extern void _sub_498E07(AdvRigidBodyController *const);
void AdvRigidBodyController::defaultSettings() // 0x498E07
{
    mangled_assert("?defaultSettings@AdvRigidBodyController@@IAEXXZ");
    todo("implement");
    _sub_498E07(this);
}

_extern _sub_498162(AdvRigidBodyController *const);
AdvRigidBodyController::AdvRigidBodyController() // 0x498162
{
    mangled_assert("??0AdvRigidBodyController@@QAE@XZ");
    todo("implement");
    _sub_498162(this);
}

_extern _sub_498143(AdvRigidBodyController *const, SaveGameData *);
AdvRigidBodyController::AdvRigidBodyController(SaveGameData *) // 0x498143
{
    mangled_assert("??0AdvRigidBodyController@@IAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_498143(this, arg);
}

_extern void _sub_49817B(AdvRigidBodyController *const);
AdvRigidBodyController::~AdvRigidBodyController() // 0x49817B
{
    mangled_assert("??1AdvRigidBodyController@@UAE@XZ");
    todo("implement");
    _sub_49817B(this);
}

_extern void _sub_4988A4(AdvRigidBodyController *const, float);
void AdvRigidBodyController::applyForcesAndTorques(float) // 0x4988A4
{
    mangled_assert("?applyForcesAndTorques@AdvRigidBodyController@@UAEXM@Z");
    todo("implement");
    _sub_4988A4(this, arg);
}

_extern void _sub_498E77(AdvRigidBodyController *const, float, vector3 const &, float, float, float, float, float *);
void AdvRigidBodyController::doThruster(float, vector3 const &, float, float, float, float, float *) // 0x498E77
{
    mangled_assert("?doThruster@AdvRigidBodyController@@IAEXMABVvector3@@MMMMPAM@Z");
    todo("implement");
    _sub_498E77(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_499021(AdvRigidBodyController *const, float, vector3 const &, float, float, float, float, float *);
void AdvRigidBodyController::doTurnThruster(float, vector3 const &, float, float, float, float, float *) // 0x499021
{
    mangled_assert("?doTurnThruster@AdvRigidBodyController@@IAEXMABVvector3@@MMMMPAM@Z");
    todo("implement");
    _sub_499021(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_499200(AdvRigidBodyController *const);
void AdvRigidBodyController::recalcMaxStopDistance() // 0x499200
{
    mangled_assert("?recalcMaxStopDistance@AdvRigidBodyController@@IAEXXZ");
    todo("implement");
    _sub_499200(this);
}

_extern void _sub_4981BF(AdvRigidBodyController *const, vector3 &, vector3 &);
void AdvRigidBodyController::adjustHeadingAndUpForMaximumAngles(vector3 &, vector3 &) // 0x4981BF
{
    mangled_assert("?adjustHeadingAndUpForMaximumAngles@AdvRigidBodyController@@IAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_4981BF(this, arg, arg);
}

/* ---------- private code */
#endif
