#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\Race.h>
#include <Engine\HyperspaceManager.h>
#include <Mathlib\matrix3.h>
#include <Engine\BuildManager.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <new>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <math.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\AttackCommand.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\gameRandom.h>
#include <Engine\Player.h>
#include <Mathlib\vector3.h>
#include <Engine\Ship\Formation.h>
#include <Engine\ResearchManager.h>
#include <Engine\Ship\FormationPattern.h>
#include <map>
#include <xtree>
#include <Mathlib\quat.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\distance.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\primitivesfwd.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\FaceTargetAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Mathlib\mathutil.h>
#include <Engine\SquadronList.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\random.h>
#include <assist\stlexsmallvector.h>
#include <boost\detail\shared_count.hpp>
#include <profile\profile.h>
#include <boost\detail\lwm_win32.hpp>
#include <iostream>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Collision\Primitives\capsule.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FaceTargetAttackStyle::m_saveToken[0]; // 0x7B9E40
extern SaveData const FaceTargetAttackStyle::m_saveData[7]; // 0x7B9D60

/* ---------- private variables */

/* ---------- public code */

FaceTargetAttackStyle::FaceTargetAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B35C9
{
    mangled_assert("??0FaceTargetAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

FaceTargetAttackStyle::~FaceTargetAttackStyle() // 0x6B3697
{
    mangled_assert("??1FaceTargetAttackStyle@@UAE@XZ");
    todo("implement");
}

void FaceTargetAttackStyle::flyToTarget(Ship *, WeaponTargetInfo const &) // 0x6B3B79
{
    mangled_assert("?flyToTarget@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

vector3 FaceTargetAttackStyle::getBestFiringPosition(Ship *, WeaponTargetInfo const &) const // 0x6B3D45
{
    mangled_assert("?getBestFiringPosition@FaceTargetAttackStyle@@ABE?AVvector3@@PAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::pointTo(Ship *, WeaponTargetInfo const &, FormationTargetInfo &) // 0x6B476D
{
    mangled_assert("?pointTo@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@AAVFormationTargetInfo@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::moveToOffsetAndMaintain(Ship *, WeaponTargetInfo const &) // 0x6B4640
{
    mangled_assert("?moveToOffsetAndMaintain@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::stopAndFace(Ship *, WeaponTargetInfo const &) // 0x6B493A
{
    mangled_assert("?stopAndFace@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

float FaceTargetAttackStyle::getIdealRangeFromTarget(Ship *, WeaponTargetInfo const &) const // 0x6B3F74
{
    mangled_assert("?getIdealRangeFromTarget@FaceTargetAttackStyle@@ABEMPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::twoHeadingAwayFromOne(Sob *, Sob *) const // 0x6B4A5D
{
    mangled_assert("?twoHeadingAwayFromOne@FaceTargetAttackStyle@@ABE_NPAVSob@@0@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::aboveTarget(Ship *, Sob *) const // 0x6B378D
{
    mangled_assert("?aboveTarget@FaceTargetAttackStyle@@ABE_NPAVShip@@PAVSob@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::clearLineOfFire(Ship *, WeaponTargetInfo const &) // 0x6B3942
{
    mangled_assert("?clearLineOfFire@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::flyToAboveTarget(Ship *, WeaponTargetInfo const &) // 0x6B3A39
{
    mangled_assert("?flyToAboveTarget@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::shouldWeTryToGetAboveTarget(Sob *) // 0x6B490E
{
    mangled_assert("?shouldWeTryToGetAboveTarget@FaceTargetAttackStyle@@AAE_NPAVSob@@@Z");
    todo("implement");
}

AttackStyle::AttackStyleResult FaceTargetAttackStyle::update(float) // 0x6B4B32
{
    mangled_assert("?update@FaceTargetAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::handleMoveRequest(vector3 const &) // 0x6B4092
{
    mangled_assert("?handleMoveRequest@FaceTargetAttackStyle@@UAE_NABVvector3@@@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::canHandleMoveRequests() const // 0x6B382F
{
    mangled_assert("?canHandleMoveRequests@FaceTargetAttackStyle@@UBE_NXZ");
    todo("implement");
}

void FaceTargetAttackStyle::SetStateToStart() // 0x6B374C
{
    mangled_assert("?SetStateToStart@FaceTargetAttackStyle@@UAEXXZ");
    todo("implement");
}

bool FaceTargetAttackStyle::chooseInterpolationTarget() // 0x6B3894
{
    mangled_assert("?chooseInterpolationTarget@FaceTargetAttackStyle@@MAE_NXZ");
    todo("implement");
}

bool FaceTargetAttackStyle::interpolateTarget(float) // 0x6B421A
{
    mangled_assert("?interpolateTarget@FaceTargetAttackStyle@@MAE_NM@Z");
    todo("implement");
}

float FaceTargetAttackStyle::getFacing(Ship *, Sob *) const // 0x6B3EBB
{
    mangled_assert("?getFacing@FaceTargetAttackStyle@@IBEMPAVShip@@PAVSob@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::setState(FaceTargetAttackStyle::AttackState) // 0x6B48F1
{
    mangled_assert("?setState@FaceTargetAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::transitionToState(FaceTargetAttackStyle::AttackState) // 0x6B49F8
{
    mangled_assert("?transitionToState@FaceTargetAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
}

FaceTargetAttackStyle::FaceTargetAttackStyle(SaveGameData *) // 0x6B3583
{
    mangled_assert("??0FaceTargetAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void FaceTargetAttackStyle::defaultSettings() // 0x6B39FA
{
    mangled_assert("?defaultSettings@FaceTargetAttackStyle@@QAEXXZ");
    todo("implement");
}

void FaceTargetAttackStyle::postRestore() // 0x6B4845
{
    mangled_assert("?postRestore@FaceTargetAttackStyle@@UAEXXZ");
    todo("implement");
}

bool FaceTargetAttackStyle::restore(SaveGameData *) // 0x6B484A
{
    mangled_assert("?restore@FaceTargetAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool FaceTargetAttackStyle::save(SaveGameData *, SaveType) // 0x6B4897
{
    mangled_assert("?save@FaceTargetAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

FaceTargetStatic::FaceTargetStatic() // 0x6B3618
{
    mangled_assert("??0FaceTargetStatic@@QAE@XZ");
    todo("implement");
}

FaceTargetStatic::~FaceTargetStatic() // 0x6B36EC
{
    mangled_assert("??1FaceTargetStatic@@UAE@XZ");
    todo("implement");
}

bool FaceTargetStatic::loadData(LuaConfig &) // 0x6B4523
{
    mangled_assert("?loadData@FaceTargetStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
