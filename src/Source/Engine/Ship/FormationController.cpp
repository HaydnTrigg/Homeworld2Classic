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
#include <xutility>
#include <utility>
#include <ITweak.h>
#include <Tactics.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <DynamicPoint.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <MultiplierTypes.h>
#include <Physics\RigidBody.h>
#include <Physics\PhysicsObject.h>
#include <Mathlib\quat.h>
#include <Mathlib\fastmath.h>
#include <savegameimpl.h>
#include <Mathlib\mathutil.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Ship\FormationController.h>
#include <Ship\AdvRigidBodyController.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationController::m_saveToken[0]; // 0x790E6C
extern SaveData const FormationController::m_saveData[19]; // 0x790E80

/* ---------- private variables */

_static
{
    extern float const stabilizeFormationChangePitchThreshold; // 0x790E60
    extern float const stabilizeFormationChangeHeadingThreshold; // 0x790E64
    extern float const HeadingEpsilon; // 0x790E68
}

/* ---------- public code */

_extern _sub_4B3BB5(FormationController *const);
FormationController::FormationController() // 0x4B3BB5
{
    mangled_assert("??0FormationController@@QAE@XZ");
    todo("implement");
    _sub_4B3BB5(this);
}

_extern _sub_4B3B60(FormationController *const, SaveGameData *);
FormationController::FormationController(SaveGameData *) // 0x4B3B60
{
    mangled_assert("??0FormationController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B3B60(this, arg);
}

_extern void _sub_4B3C05(FormationController *const);
FormationController::~FormationController() // 0x4B3C05
{
    mangled_assert("??1FormationController@@UAE@XZ");
    todo("implement");
    _sub_4B3C05(this);
}

_extern bool _sub_4B54B9(FormationController const *const, bool, float);
bool FormationController::reachedGoal(bool, float) const // 0x4B54B9
{
    mangled_assert("?reachedGoal@FormationController@@QBE_N_NM@Z");
    todo("implement");
    bool __result = _sub_4B54B9(this, arg, arg);
    return __result;
}

_extern void _sub_4B5033(FormationController *const, float);
void FormationController::doStabilize(float) // 0x4B5033
{
    mangled_assert("?doStabilize@FormationController@@MAEXM@Z");
    todo("implement");
    _sub_4B5033(this, arg);
}

_extern void _sub_4B405E(FormationController *const, float);
void FormationController::doBehaviour(float) // 0x4B405E
{
    mangled_assert("?doBehaviour@FormationController@@MAEXM@Z");
    todo("implement");
    _sub_4B405E(this, arg);
}

_extern void _sub_4B44E6(FormationController *const, float);
void FormationController::doFarFromDestinationBehaviour(float) // 0x4B44E6
{
    mangled_assert("?doFarFromDestinationBehaviour@FormationController@@IAEXM@Z");
    todo("implement");
    _sub_4B44E6(this, arg);
}

_extern void _sub_4B3D1B(FormationController *const, vector3 &, vector3 &);
void FormationController::doAngleToTarget(vector3 &, vector3 &) // 0x4B3D1B
{
    mangled_assert("?doAngleToTarget@FormationController@@IAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_4B3D1B(this, arg, arg);
}

_extern void _sub_4B415C(FormationController *const, float);
void FormationController::doCloseToDestinationBehaviour(float) // 0x4B415C
{
    mangled_assert("?doCloseToDestinationBehaviour@FormationController@@IAEXM@Z");
    todo("implement");
    _sub_4B415C(this, arg);
}

_extern void _sub_4B5682(FormationController *const, DynamicPoint const &);
void FormationController::setGoal(DynamicPoint const &) // 0x4B5682
{
    mangled_assert("?setGoal@FormationController@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
    _sub_4B5682(this, arg);
}

_extern void _sub_4B4D78(FormationController *const, vector3 const &, vector3 const &);
void FormationController::doHeading(vector3 const &, vector3 const &) // 0x4B4D78
{
    mangled_assert("?doHeading@FormationController@@IAEXABVvector3@@0@Z");
    todo("implement");
    _sub_4B4D78(this, arg, arg);
}

_extern void _sub_4B537B(FormationController *const);
void FormationController::mirror() // 0x4B537B
{
    mangled_assert("?mirror@FormationController@@QAEXXZ");
    todo("implement");
    _sub_4B537B(this);
}

_extern void _sub_4B56AC(FormationController *const);
void FormationController::stop() // 0x4B56AC
{
    mangled_assert("?stop@FormationController@@QAEXXZ");
    todo("implement");
    _sub_4B56AC(this);
}

_extern bool _sub_4B526F(FormationController *const, vector3 const &);
bool FormationController::isTargetInDescentPath(vector3 const &) // 0x4B526F
{
    mangled_assert("?isTargetInDescentPath@FormationController@@IAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_4B526F(this, arg);
    return __result;
}

_extern void _sub_4B54B4(FormationController *const);
void FormationController::postRestore() // 0x4B54B4
{
    mangled_assert("?postRestore@FormationController@@UAEXXZ");
    todo("implement");
    _sub_4B54B4(this);
}

_extern bool _sub_4B55E8(FormationController *const, SaveGameData *);
bool FormationController::restore(SaveGameData *) // 0x4B55E8
{
    mangled_assert("?restore@FormationController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B55E8(this, arg);
    return __result;
}

_extern bool _sub_4B5635(FormationController *const, SaveGameData *, SaveType);
bool FormationController::save(SaveGameData *, SaveType) // 0x4B5635
{
    mangled_assert("?save@FormationController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B5635(this, arg, arg);
    return __result;
}

_extern void _sub_4B3CAA(FormationController *const);
void FormationController::defaultSettings() // 0x4B3CAA
{
    mangled_assert("?defaultSettings@FormationController@@QAEXXZ");
    todo("implement");
    _sub_4B3CAA(this);
}

/* ---------- private code */
#endif
