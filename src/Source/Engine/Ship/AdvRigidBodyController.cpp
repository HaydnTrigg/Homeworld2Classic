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

void AdvRigidBodyController::postRestore() // 0x4991FB
{
    mangled_assert("?postRestore@AdvRigidBodyController@@MAEXXZ");
    todo("implement");
}

bool AdvRigidBodyController::restore(SaveGameData *) // 0x49923A
{
    mangled_assert("?restore@AdvRigidBodyController@@MAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool AdvRigidBodyController::save(SaveGameData *, SaveType) // 0x499287
{
    mangled_assert("?save@AdvRigidBodyController@@MAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void AdvRigidBodyController::defaultSettings() // 0x498E07
{
    mangled_assert("?defaultSettings@AdvRigidBodyController@@IAEXXZ");
    todo("implement");
}

AdvRigidBodyController::AdvRigidBodyController() // 0x498162
{
    mangled_assert("??0AdvRigidBodyController@@QAE@XZ");
    todo("implement");
}

AdvRigidBodyController::AdvRigidBodyController(SaveGameData *) // 0x498143
{
    mangled_assert("??0AdvRigidBodyController@@IAE@PAVSaveGameData@@@Z");
    todo("implement");
}

AdvRigidBodyController::~AdvRigidBodyController() // 0x49817B
{
    mangled_assert("??1AdvRigidBodyController@@UAE@XZ");
    todo("implement");
}

void AdvRigidBodyController::applyForcesAndTorques(float) // 0x4988A4
{
    mangled_assert("?applyForcesAndTorques@AdvRigidBodyController@@UAEXM@Z");
    todo("implement");
}

void AdvRigidBodyController::doThruster(float, vector3 const &, float, float, float, float, float *) // 0x498E77
{
    mangled_assert("?doThruster@AdvRigidBodyController@@IAEXMABVvector3@@MMMMPAM@Z");
    todo("implement");
}

void AdvRigidBodyController::doTurnThruster(float, vector3 const &, float, float, float, float, float *) // 0x499021
{
    mangled_assert("?doTurnThruster@AdvRigidBodyController@@IAEXMABVvector3@@MMMMPAM@Z");
    todo("implement");
}

void AdvRigidBodyController::recalcMaxStopDistance() // 0x499200
{
    mangled_assert("?recalcMaxStopDistance@AdvRigidBodyController@@IAEXXZ");
    todo("implement");
}

void AdvRigidBodyController::adjustHeadingAndUpForMaximumAngles(vector3 &, vector3 &) // 0x4981BF
{
    mangled_assert("?adjustHeadingAndUpForMaximumAngles@AdvRigidBodyController@@IAEXAAVvector3@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
