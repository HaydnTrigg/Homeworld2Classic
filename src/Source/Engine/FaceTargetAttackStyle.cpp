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

_extern _sub_6B35C9(FaceTargetAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
FaceTargetAttackStyle::FaceTargetAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B35C9
{
    mangled_assert("??0FaceTargetAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6B35C9(this, arg, arg, arg, arg);
}

_extern void _sub_6B3697(FaceTargetAttackStyle *const);
FaceTargetAttackStyle::~FaceTargetAttackStyle() // 0x6B3697
{
    mangled_assert("??1FaceTargetAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6B3697(this);
}

_extern void _sub_6B3B79(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &);
void FaceTargetAttackStyle::flyToTarget(Ship *, WeaponTargetInfo const &) // 0x6B3B79
{
    mangled_assert("?flyToTarget@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6B3B79(this, arg, arg);
}

_extern vector3 _sub_6B3D45(FaceTargetAttackStyle const *const, Ship *, WeaponTargetInfo const &);
vector3 FaceTargetAttackStyle::getBestFiringPosition(Ship *, WeaponTargetInfo const &) const // 0x6B3D45
{
    mangled_assert("?getBestFiringPosition@FaceTargetAttackStyle@@ABE?AVvector3@@PAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    vector3 __result = _sub_6B3D45(this, arg, arg);
    return __result;
}

_extern void _sub_6B476D(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &, FormationTargetInfo &);
void FaceTargetAttackStyle::pointTo(Ship *, WeaponTargetInfo const &, FormationTargetInfo &) // 0x6B476D
{
    mangled_assert("?pointTo@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@AAVFormationTargetInfo@@@Z");
    todo("implement");
    _sub_6B476D(this, arg, arg, arg);
}

_extern void _sub_6B4640(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &);
void FaceTargetAttackStyle::moveToOffsetAndMaintain(Ship *, WeaponTargetInfo const &) // 0x6B4640
{
    mangled_assert("?moveToOffsetAndMaintain@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6B4640(this, arg, arg);
}

_extern void _sub_6B493A(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &);
void FaceTargetAttackStyle::stopAndFace(Ship *, WeaponTargetInfo const &) // 0x6B493A
{
    mangled_assert("?stopAndFace@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6B493A(this, arg, arg);
}

_extern float _sub_6B3F74(FaceTargetAttackStyle const *const, Ship *, WeaponTargetInfo const &);
float FaceTargetAttackStyle::getIdealRangeFromTarget(Ship *, WeaponTargetInfo const &) const // 0x6B3F74
{
    mangled_assert("?getIdealRangeFromTarget@FaceTargetAttackStyle@@ABEMPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    float __result = _sub_6B3F74(this, arg, arg);
    return __result;
}

_extern bool _sub_6B4A5D(FaceTargetAttackStyle const *const, Sob *, Sob *);
bool FaceTargetAttackStyle::twoHeadingAwayFromOne(Sob *, Sob *) const // 0x6B4A5D
{
    mangled_assert("?twoHeadingAwayFromOne@FaceTargetAttackStyle@@ABE_NPAVSob@@0@Z");
    todo("implement");
    bool __result = _sub_6B4A5D(this, arg, arg);
    return __result;
}

_extern bool _sub_6B378D(FaceTargetAttackStyle const *const, Ship *, Sob *);
bool FaceTargetAttackStyle::aboveTarget(Ship *, Sob *) const // 0x6B378D
{
    mangled_assert("?aboveTarget@FaceTargetAttackStyle@@ABE_NPAVShip@@PAVSob@@@Z");
    todo("implement");
    bool __result = _sub_6B378D(this, arg, arg);
    return __result;
}

_extern void _sub_6B3942(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &);
void FaceTargetAttackStyle::clearLineOfFire(Ship *, WeaponTargetInfo const &) // 0x6B3942
{
    mangled_assert("?clearLineOfFire@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6B3942(this, arg, arg);
}

_extern void _sub_6B3A39(FaceTargetAttackStyle *const, Ship *, WeaponTargetInfo const &);
void FaceTargetAttackStyle::flyToAboveTarget(Ship *, WeaponTargetInfo const &) // 0x6B3A39
{
    mangled_assert("?flyToAboveTarget@FaceTargetAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6B3A39(this, arg, arg);
}

_extern bool _sub_6B490E(FaceTargetAttackStyle *const, Sob *);
bool FaceTargetAttackStyle::shouldWeTryToGetAboveTarget(Sob *) // 0x6B490E
{
    mangled_assert("?shouldWeTryToGetAboveTarget@FaceTargetAttackStyle@@AAE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_6B490E(this, arg);
    return __result;
}

_extern AttackStyle::AttackStyleResult _sub_6B4B32(FaceTargetAttackStyle *const, float);
AttackStyle::AttackStyleResult FaceTargetAttackStyle::update(float) // 0x6B4B32
{
    mangled_assert("?update@FaceTargetAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6B4B32(this, arg);
    return __result;
}

_extern bool _sub_6B4092(FaceTargetAttackStyle *const, vector3 const &);
bool FaceTargetAttackStyle::handleMoveRequest(vector3 const &) // 0x6B4092
{
    mangled_assert("?handleMoveRequest@FaceTargetAttackStyle@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6B4092(this, arg);
    return __result;
}

_extern bool _sub_6B382F(FaceTargetAttackStyle const *const);
bool FaceTargetAttackStyle::canHandleMoveRequests() const // 0x6B382F
{
    mangled_assert("?canHandleMoveRequests@FaceTargetAttackStyle@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6B382F(this);
    return __result;
}

_extern void _sub_6B374C(FaceTargetAttackStyle *const);
void FaceTargetAttackStyle::SetStateToStart() // 0x6B374C
{
    mangled_assert("?SetStateToStart@FaceTargetAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B374C(this);
}

_extern bool _sub_6B3894(FaceTargetAttackStyle *const);
bool FaceTargetAttackStyle::chooseInterpolationTarget() // 0x6B3894
{
    mangled_assert("?chooseInterpolationTarget@FaceTargetAttackStyle@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_6B3894(this);
    return __result;
}

_extern bool _sub_6B421A(FaceTargetAttackStyle *const, float);
bool FaceTargetAttackStyle::interpolateTarget(float) // 0x6B421A
{
    mangled_assert("?interpolateTarget@FaceTargetAttackStyle@@MAE_NM@Z");
    todo("implement");
    bool __result = _sub_6B421A(this, arg);
    return __result;
}

_extern float _sub_6B3EBB(FaceTargetAttackStyle const *const, Ship *, Sob *);
float FaceTargetAttackStyle::getFacing(Ship *, Sob *) const // 0x6B3EBB
{
    mangled_assert("?getFacing@FaceTargetAttackStyle@@IBEMPAVShip@@PAVSob@@@Z");
    todo("implement");
    float __result = _sub_6B3EBB(this, arg, arg);
    return __result;
}

_extern void _sub_6B48F1(FaceTargetAttackStyle *const, FaceTargetAttackStyle::AttackState);
void FaceTargetAttackStyle::setState(FaceTargetAttackStyle::AttackState) // 0x6B48F1
{
    mangled_assert("?setState@FaceTargetAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
    _sub_6B48F1(this, arg);
}

_extern void _sub_6B49F8(FaceTargetAttackStyle *const, FaceTargetAttackStyle::AttackState);
void FaceTargetAttackStyle::transitionToState(FaceTargetAttackStyle::AttackState) // 0x6B49F8
{
    mangled_assert("?transitionToState@FaceTargetAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
    _sub_6B49F8(this, arg);
}

_extern _sub_6B3583(FaceTargetAttackStyle *const, SaveGameData *);
FaceTargetAttackStyle::FaceTargetAttackStyle(SaveGameData *) // 0x6B3583
{
    mangled_assert("??0FaceTargetAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B3583(this, arg);
}

_extern void _sub_6B39FA(FaceTargetAttackStyle *const);
void FaceTargetAttackStyle::defaultSettings() // 0x6B39FA
{
    mangled_assert("?defaultSettings@FaceTargetAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6B39FA(this);
}

_extern void _sub_6B4845(FaceTargetAttackStyle *const);
void FaceTargetAttackStyle::postRestore() // 0x6B4845
{
    mangled_assert("?postRestore@FaceTargetAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B4845(this);
}

_extern bool _sub_6B484A(FaceTargetAttackStyle *const, SaveGameData *);
bool FaceTargetAttackStyle::restore(SaveGameData *) // 0x6B484A
{
    mangled_assert("?restore@FaceTargetAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B484A(this, arg);
    return __result;
}

_extern bool _sub_6B4897(FaceTargetAttackStyle *const, SaveGameData *, SaveType);
bool FaceTargetAttackStyle::save(SaveGameData *, SaveType) // 0x6B4897
{
    mangled_assert("?save@FaceTargetAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B4897(this, arg, arg);
    return __result;
}

_extern _sub_6B3618(FaceTargetStatic *const);
FaceTargetStatic::FaceTargetStatic() // 0x6B3618
{
    mangled_assert("??0FaceTargetStatic@@QAE@XZ");
    todo("implement");
    _sub_6B3618(this);
}

_extern void _sub_6B36EC(FaceTargetStatic *const);
FaceTargetStatic::~FaceTargetStatic() // 0x6B36EC
{
    mangled_assert("??1FaceTargetStatic@@UAE@XZ");
    todo("implement");
    _sub_6B36EC(this);
}

_extern bool _sub_6B4523(FaceTargetStatic *const, LuaConfig &);
bool FaceTargetStatic::loadData(LuaConfig &) // 0x6B4523
{
    mangled_assert("?loadData@FaceTargetStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6B4523(this, arg);
    return __result;
}

/* ---------- private code */
#endif
