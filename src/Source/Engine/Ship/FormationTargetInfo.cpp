#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <type_traits>
#include <utility>
#include <Mathlib\vector3.h>
#include <savegameimpl.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <Ship\FormationController.h>
#include <Ship\AdvRigidBodyController.h>
#include <savegamedef.h>
#include <Physics\RigidBodyController.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Ship\FormationTargetInfo.h>
#include <DynamicPoint.h>
#include <sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationTargetInfo::m_saveToken[0]; // 0x791370
extern SaveData const FormationTargetInfo::m_saveData[14]; // 0x791388

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B641D(FormationTargetInfo *const);
FormationTargetInfo::FormationTargetInfo() // 0x4B641D
{
    mangled_assert("??0FormationTargetInfo@@QAE@XZ");
    todo("implement");
    _sub_4B641D(this);
}

_extern void _sub_4B64A4(FormationTargetInfo *const);
_inline FormationTargetInfo::~FormationTargetInfo() // 0x4B64A4
{
    mangled_assert("??1FormationTargetInfo@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B64A4(this);
}

_extern DynamicPoint const &_sub_4B6517(FormationTargetInfo const *const);
DynamicPoint const &FormationTargetInfo::getDynamicPoint() const // 0x4B6517
{
    mangled_assert("?getDynamicPoint@FormationTargetInfo@@QBEABVDynamicPoint@@XZ");
    todo("implement");
    DynamicPoint const & __result = _sub_4B6517(this);
    return __result;
}

_extern void _sub_4B6602(FormationTargetInfo *const, DynamicPoint const &);
void FormationTargetInfo::setDynamicPoint(DynamicPoint const &) // 0x4B6602
{
    mangled_assert("?setDynamicPoint@FormationTargetInfo@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
    _sub_4B6602(this, arg);
}

_extern float _sub_4B6537(FormationTargetInfo const *const);
float FormationTargetInfo::getMinVelocity() const // 0x4B6537
{
    mangled_assert("?getMinVelocity@FormationTargetInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B6537(this);
    return __result;
}

_extern void _sub_4B6644(FormationTargetInfo *const, float);
void FormationTargetInfo::setMinVelocity(float) // 0x4B6644
{
    mangled_assert("?setMinVelocity@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
    _sub_4B6644(this, arg);
}

_extern float _sub_4B6530(FormationTargetInfo const *const);
float FormationTargetInfo::getMaxVelocity() const // 0x4B6530
{
    mangled_assert("?getMaxVelocity@FormationTargetInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B6530(this);
    return __result;
}

_extern void _sub_4B6633(FormationTargetInfo *const, float);
void FormationTargetInfo::setMaxVelocity(float) // 0x4B6633
{
    mangled_assert("?setMaxVelocity@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
    _sub_4B6633(this, arg);
}

_extern bool _sub_4B6553(FormationTargetInfo const *const);
bool FormationTargetInfo::getSlowDownAtGoal() const // 0x4B6553
{
    mangled_assert("?getSlowDownAtGoal@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B6553(this);
    return __result;
}

_extern void _sub_4B667A(FormationTargetInfo *const, bool);
void FormationTargetInfo::setSlowDownAtGoal(bool) // 0x4B667A
{
    mangled_assert("?setSlowDownAtGoal@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B667A(this, arg);
}

_extern bool _sub_4B653E(FormationTargetInfo const *const);
bool FormationTargetInfo::getMoveInfinitelyClose() const // 0x4B653E
{
    mangled_assert("?getMoveInfinitelyClose@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B653E(this);
    return __result;
}

_extern void _sub_4B6655(FormationTargetInfo *const, bool);
void FormationTargetInfo::setMoveInfinitelyClose(bool) // 0x4B6655
{
    mangled_assert("?setMoveInfinitelyClose@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B6655(this, arg);
}

_extern bool _sub_4B651B(FormationTargetInfo const *const);
bool FormationTargetInfo::getEnforceMaxAngles() const // 0x4B651B
{
    mangled_assert("?getEnforceMaxAngles@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B651B(this);
    return __result;
}

_extern void _sub_4B660A(FormationTargetInfo *const, bool);
void FormationTargetInfo::setEnforceMaxAngles(bool) // 0x4B660A
{
    mangled_assert("?setEnforceMaxAngles@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B660A(this, arg);
}

_extern ForceBehaviour _sub_4B6522(FormationTargetInfo const *const);
ForceBehaviour FormationTargetInfo::getForceBehaviour() const // 0x4B6522
{
    mangled_assert("?getForceBehaviour@FormationTargetInfo@@QBE?AW4ForceBehaviour@@XZ");
    todo("implement");
    ForceBehaviour __result = _sub_4B6522(this);
    return __result;
}

_extern void _sub_4B6617(FormationTargetInfo *const, ForceBehaviour const &);
void FormationTargetInfo::setForceBehaviour(ForceBehaviour const &) // 0x4B6617
{
    mangled_assert("?setForceBehaviour@FormationTargetInfo@@QAEXABW4ForceBehaviour@@@Z");
    todo("implement");
    _sub_4B6617(this, arg);
}

_extern FormationTargetInfo::PointToTargetState _sub_4B654C(FormationTargetInfo const *const);
FormationTargetInfo::PointToTargetState FormationTargetInfo::getPointToTargetState() const // 0x4B654C
{
    mangled_assert("?getPointToTargetState@FormationTargetInfo@@QBE?AW4PointToTargetState@1@XZ");
    todo("implement");
    FormationTargetInfo::PointToTargetState __result = _sub_4B654C(this);
    return __result;
}

_extern void _sub_4B666D(FormationTargetInfo *const, FormationTargetInfo::PointToTargetState);
void FormationTargetInfo::setPointToTargetState(FormationTargetInfo::PointToTargetState) // 0x4B666D
{
    mangled_assert("?setPointToTargetState@FormationTargetInfo@@QAEXW4PointToTargetState@1@@Z");
    todo("implement");
    _sub_4B666D(this, arg);
}

_extern DynamicPoint const &_sub_4B6545(FormationTargetInfo const *const);
DynamicPoint const &FormationTargetInfo::getPointToTarget() const // 0x4B6545
{
    mangled_assert("?getPointToTarget@FormationTargetInfo@@QBEABVDynamicPoint@@XZ");
    todo("implement");
    DynamicPoint const & __result = _sub_4B6545(this);
    return __result;
}

_extern void _sub_4B6662(FormationTargetInfo *const, DynamicPoint const &);
void FormationTargetInfo::setPointToTarget(DynamicPoint const &) // 0x4B6662
{
    mangled_assert("?setPointToTarget@FormationTargetInfo@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
    _sub_4B6662(this, arg);
}

_extern float _sub_4B6502(FormationTargetInfo const *const);
float FormationTargetInfo::getAngleToTarget() const // 0x4B6502
{
    mangled_assert("?getAngleToTarget@FormationTargetInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B6502(this);
    return __result;
}

_extern void _sub_4B65D7(FormationTargetInfo *const, float);
void FormationTargetInfo::setAngleToTarget(float) // 0x4B65D7
{
    mangled_assert("?setAngleToTarget@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
    _sub_4B65D7(this, arg);
}

_extern bool _sub_4B6529(FormationTargetInfo const *const);
bool FormationTargetInfo::getMatchGoalHeading() const // 0x4B6529
{
    mangled_assert("?getMatchGoalHeading@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B6529(this);
    return __result;
}

_extern void _sub_4B6626(FormationTargetInfo *const, bool);
void FormationTargetInfo::setMatchGoalHeading(bool) // 0x4B6626
{
    mangled_assert("?setMatchGoalHeading@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B6626(this, arg);
}

_extern bool _sub_4B6510(FormationTargetInfo const *const);
bool FormationTargetInfo::getDoPathFinding() const // 0x4B6510
{
    mangled_assert("?getDoPathFinding@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B6510(this);
    return __result;
}

_extern void _sub_4B65F5(FormationTargetInfo *const, bool);
void FormationTargetInfo::setDoPathFinding(bool) // 0x4B65F5
{
    mangled_assert("?setDoPathFinding@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B65F5(this, arg);
}

_extern bool _sub_4B6509(FormationTargetInfo const *const);
bool FormationTargetInfo::getDisableFlightManeuvers() const // 0x4B6509
{
    mangled_assert("?getDisableFlightManeuvers@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B6509(this);
    return __result;
}

_extern void _sub_4B65E8(FormationTargetInfo *const, bool);
void FormationTargetInfo::setDisableFlightManeuvers(bool) // 0x4B65E8
{
    mangled_assert("?setDisableFlightManeuvers@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
    _sub_4B65E8(this, arg);
}

_extern void _sub_4B655D(FormationTargetInfo *const);
void FormationTargetInfo::postRestore() // 0x4B655D
{
    mangled_assert("?postRestore@FormationTargetInfo@@UAEXXZ");
    todo("implement");
    _sub_4B655D(this);
}

_extern bool _sub_4B655E(FormationTargetInfo *const, SaveGameData *);
bool FormationTargetInfo::restore(SaveGameData *) // 0x4B655E
{
    mangled_assert("?restore@FormationTargetInfo@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B655E(this, arg);
    return __result;
}

_extern bool _sub_4B659C(FormationTargetInfo *const, SaveGameData *, SaveType);
bool FormationTargetInfo::save(SaveGameData *, SaveType) // 0x4B659C
{
    mangled_assert("?save@FormationTargetInfo@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B659C(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
