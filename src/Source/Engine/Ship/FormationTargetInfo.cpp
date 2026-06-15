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

FormationTargetInfo::FormationTargetInfo() // 0x4B641D
{
    mangled_assert("??0FormationTargetInfo@@QAE@XZ");
    todo("implement");
}

_inline FormationTargetInfo::~FormationTargetInfo() // 0x4B64A4
{
    mangled_assert("??1FormationTargetInfo@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

DynamicPoint const &FormationTargetInfo::getDynamicPoint() const // 0x4B6517
{
    mangled_assert("?getDynamicPoint@FormationTargetInfo@@QBEABVDynamicPoint@@XZ");
    todo("implement");
}

void FormationTargetInfo::setDynamicPoint(DynamicPoint const &) // 0x4B6602
{
    mangled_assert("?setDynamicPoint@FormationTargetInfo@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
}

float FormationTargetInfo::getMinVelocity() const // 0x4B6537
{
    mangled_assert("?getMinVelocity@FormationTargetInfo@@QBEMXZ");
    todo("implement");
}

void FormationTargetInfo::setMinVelocity(float) // 0x4B6644
{
    mangled_assert("?setMinVelocity@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
}

float FormationTargetInfo::getMaxVelocity() const // 0x4B6530
{
    mangled_assert("?getMaxVelocity@FormationTargetInfo@@QBEMXZ");
    todo("implement");
}

void FormationTargetInfo::setMaxVelocity(float) // 0x4B6633
{
    mangled_assert("?setMaxVelocity@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
}

bool FormationTargetInfo::getSlowDownAtGoal() const // 0x4B6553
{
    mangled_assert("?getSlowDownAtGoal@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setSlowDownAtGoal(bool) // 0x4B667A
{
    mangled_assert("?setSlowDownAtGoal@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

bool FormationTargetInfo::getMoveInfinitelyClose() const // 0x4B653E
{
    mangled_assert("?getMoveInfinitelyClose@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setMoveInfinitelyClose(bool) // 0x4B6655
{
    mangled_assert("?setMoveInfinitelyClose@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

bool FormationTargetInfo::getEnforceMaxAngles() const // 0x4B651B
{
    mangled_assert("?getEnforceMaxAngles@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setEnforceMaxAngles(bool) // 0x4B660A
{
    mangled_assert("?setEnforceMaxAngles@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

ForceBehaviour FormationTargetInfo::getForceBehaviour() const // 0x4B6522
{
    mangled_assert("?getForceBehaviour@FormationTargetInfo@@QBE?AW4ForceBehaviour@@XZ");
    todo("implement");
}

void FormationTargetInfo::setForceBehaviour(ForceBehaviour const &) // 0x4B6617
{
    mangled_assert("?setForceBehaviour@FormationTargetInfo@@QAEXABW4ForceBehaviour@@@Z");
    todo("implement");
}

FormationTargetInfo::PointToTargetState FormationTargetInfo::getPointToTargetState() const // 0x4B654C
{
    mangled_assert("?getPointToTargetState@FormationTargetInfo@@QBE?AW4PointToTargetState@1@XZ");
    todo("implement");
}

void FormationTargetInfo::setPointToTargetState(FormationTargetInfo::PointToTargetState) // 0x4B666D
{
    mangled_assert("?setPointToTargetState@FormationTargetInfo@@QAEXW4PointToTargetState@1@@Z");
    todo("implement");
}

DynamicPoint const &FormationTargetInfo::getPointToTarget() const // 0x4B6545
{
    mangled_assert("?getPointToTarget@FormationTargetInfo@@QBEABVDynamicPoint@@XZ");
    todo("implement");
}

void FormationTargetInfo::setPointToTarget(DynamicPoint const &) // 0x4B6662
{
    mangled_assert("?setPointToTarget@FormationTargetInfo@@QAEXABVDynamicPoint@@@Z");
    todo("implement");
}

float FormationTargetInfo::getAngleToTarget() const // 0x4B6502
{
    mangled_assert("?getAngleToTarget@FormationTargetInfo@@QBEMXZ");
    todo("implement");
}

void FormationTargetInfo::setAngleToTarget(float) // 0x4B65D7
{
    mangled_assert("?setAngleToTarget@FormationTargetInfo@@QAEXM@Z");
    todo("implement");
}

bool FormationTargetInfo::getMatchGoalHeading() const // 0x4B6529
{
    mangled_assert("?getMatchGoalHeading@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setMatchGoalHeading(bool) // 0x4B6626
{
    mangled_assert("?setMatchGoalHeading@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

bool FormationTargetInfo::getDoPathFinding() const // 0x4B6510
{
    mangled_assert("?getDoPathFinding@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setDoPathFinding(bool) // 0x4B65F5
{
    mangled_assert("?setDoPathFinding@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

bool FormationTargetInfo::getDisableFlightManeuvers() const // 0x4B6509
{
    mangled_assert("?getDisableFlightManeuvers@FormationTargetInfo@@QBE_NXZ");
    todo("implement");
}

void FormationTargetInfo::setDisableFlightManeuvers(bool) // 0x4B65E8
{
    mangled_assert("?setDisableFlightManeuvers@FormationTargetInfo@@QAEX_N@Z");
    todo("implement");
}

void FormationTargetInfo::postRestore() // 0x4B655D
{
    mangled_assert("?postRestore@FormationTargetInfo@@UAEXXZ");
    todo("implement");
}

bool FormationTargetInfo::restore(SaveGameData *) // 0x4B655E
{
    mangled_assert("?restore@FormationTargetInfo@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool FormationTargetInfo::save(SaveGameData *, SaveType) // 0x4B659C
{
    mangled_assert("?save@FormationTargetInfo@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
