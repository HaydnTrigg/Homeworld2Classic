#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\Race.h>
#include <Mathlib\mathutil.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\BuildManager.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\Ship\Formation.h>
#include <Engine\gameRandom.h>
#include <Engine\Ship\FormationPattern.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <math.h>
#include <Engine\dbdefines.h>
#include <list>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\Ship\FormationController.h>
#include <Engine\pathpoints.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Collision\BVH\octree.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Collision\BVH\span.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\random.h>
#include <Engine\pch.h>
#include <Engine\MoveToTargetAndShootAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\SquadronList.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Collision\Primitives\capsule.h>
#include <Engine\Universe.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const MoveToTargetAndShootAttackStyle::m_saveToken[0]; // 0x7B9438
extern SaveData const MoveToTargetAndShootAttackStyle::m_saveData[7]; // 0x7B9358

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6AF625(MoveToTargetAndShootAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
MoveToTargetAndShootAttackStyle::MoveToTargetAndShootAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6AF625
{
    mangled_assert("??0MoveToTargetAndShootAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6AF625(this, arg, arg, arg, arg);
}

_extern void _sub_6AF70E(MoveToTargetAndShootAttackStyle *const);
MoveToTargetAndShootAttackStyle::~MoveToTargetAndShootAttackStyle() // 0x6AF70E
{
    mangled_assert("??1MoveToTargetAndShootAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6AF70E(this);
}

_extern void _sub_6AF779(MoveToTargetAndShootAttackStyle *const);
void MoveToTargetAndShootAttackStyle::SetStateToStart() // 0x6AF779
{
    mangled_assert("?SetStateToStart@MoveToTargetAndShootAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6AF779(this);
}

_extern void _sub_6AFE3E(MoveToTargetAndShootAttackStyle *const, Sob const *);
void MoveToTargetAndShootAttackStyle::moveToTarget(Sob const *) // 0x6AFE3E
{
    mangled_assert("?moveToTarget@MoveToTargetAndShootAttackStyle@@AAEXPBVSob@@@Z");
    todo("implement");
    _sub_6AFE3E(this, arg);
}

_extern void _sub_6AFC84(MoveToTargetAndShootAttackStyle *const, Sob const *, float);
void MoveToTargetAndShootAttackStyle::moveToLevelOffsetWithTarget(Sob const *, float) // 0x6AFC84
{
    mangled_assert("?moveToLevelOffsetWithTarget@MoveToTargetAndShootAttackStyle@@AAEXPBVSob@@M@Z");
    todo("implement");
    _sub_6AFC84(this, arg, arg);
}

_extern bool _sub_6AF7BA(MoveToTargetAndShootAttackStyle const *const, Ship *, Sob *);
bool MoveToTargetAndShootAttackStyle::aboveTarget(Ship *, Sob *) const // 0x6AF7BA
{
    mangled_assert("?aboveTarget@MoveToTargetAndShootAttackStyle@@ABE_NPAVShip@@PAVSob@@@Z");
    todo("implement");
    bool __result = _sub_6AF7BA(this, arg, arg);
    return __result;
}

_extern void _sub_6AF8BD(MoveToTargetAndShootAttackStyle *const, Ship *, WeaponTargetInfo const &);
void MoveToTargetAndShootAttackStyle::clearLineOfFire(Ship *, WeaponTargetInfo const &) // 0x6AF8BD
{
    mangled_assert("?clearLineOfFire@MoveToTargetAndShootAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_6AF8BD(this, arg, arg);
}

_extern void _sub_6AF9B6(MoveToTargetAndShootAttackStyle *const, Ship *, WeaponTargetInfo const &, float);
void MoveToTargetAndShootAttackStyle::flyToAboveTarget(Ship *, WeaponTargetInfo const &, float) // 0x6AF9B6
{
    mangled_assert("?flyToAboveTarget@MoveToTargetAndShootAttackStyle@@AAEXPAVShip@@ABVWeaponTargetInfo@@M@Z");
    todo("implement");
    _sub_6AF9B6(this, arg, arg, arg);
}

_extern bool _sub_6AFFBA(MoveToTargetAndShootAttackStyle *const, Sob *);
bool MoveToTargetAndShootAttackStyle::shouldWeTryToGetAboveTarget(Sob *) // 0x6AFFBA
{
    mangled_assert("?shouldWeTryToGetAboveTarget@MoveToTargetAndShootAttackStyle@@AAE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_6AFFBA(this, arg);
    return __result;
}

_extern AttackStyle::AttackStyleResult _sub_6B004B(MoveToTargetAndShootAttackStyle *const, float);
AttackStyle::AttackStyleResult MoveToTargetAndShootAttackStyle::update(float) // 0x6B004B
{
    mangled_assert("?update@MoveToTargetAndShootAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6B004B(this, arg);
    return __result;
}

_extern bool _sub_6AFAE4(MoveToTargetAndShootAttackStyle *const, vector3 const &);
bool MoveToTargetAndShootAttackStyle::handleMoveRequest(vector3 const &) // 0x6AFAE4
{
    mangled_assert("?handleMoveRequest@MoveToTargetAndShootAttackStyle@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6AFAE4(this, arg);
    return __result;
}

_extern bool _sub_6AF85C(MoveToTargetAndShootAttackStyle const *const);
bool MoveToTargetAndShootAttackStyle::canHandleMoveRequests() const // 0x6AF85C
{
    mangled_assert("?canHandleMoveRequests@MoveToTargetAndShootAttackStyle@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6AF85C(this);
    return __result;
}

_extern void _sub_6AFF9D(MoveToTargetAndShootAttackStyle *const, MoveToTargetAndShootAttackStyle::AttackState);
void MoveToTargetAndShootAttackStyle::setState(MoveToTargetAndShootAttackStyle::AttackState) // 0x6AFF9D
{
    mangled_assert("?setState@MoveToTargetAndShootAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
    _sub_6AFF9D(this, arg);
}

_extern void _sub_6AFFE6(MoveToTargetAndShootAttackStyle *const, MoveToTargetAndShootAttackStyle::AttackState);
void MoveToTargetAndShootAttackStyle::transitionToState(MoveToTargetAndShootAttackStyle::AttackState) // 0x6AFFE6
{
    mangled_assert("?transitionToState@MoveToTargetAndShootAttackStyle@@AAEXW4AttackState@1@@Z");
    todo("implement");
    _sub_6AFFE6(this, arg);
}

_extern _sub_6AF606(MoveToTargetAndShootAttackStyle *const, SaveGameData *);
MoveToTargetAndShootAttackStyle::MoveToTargetAndShootAttackStyle(SaveGameData *) // 0x6AF606
{
    mangled_assert("??0MoveToTargetAndShootAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AF606(this, arg);
}

_extern void _sub_6AF970(MoveToTargetAndShootAttackStyle *const);
void MoveToTargetAndShootAttackStyle::defaultSettings() // 0x6AF970
{
    mangled_assert("?defaultSettings@MoveToTargetAndShootAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6AF970(this);
}

_extern void _sub_6AFEFE(MoveToTargetAndShootAttackStyle *const);
void MoveToTargetAndShootAttackStyle::postRestore() // 0x6AFEFE
{
    mangled_assert("?postRestore@MoveToTargetAndShootAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6AFEFE(this);
}

_extern bool _sub_6AFF03(MoveToTargetAndShootAttackStyle *const, SaveGameData *);
bool MoveToTargetAndShootAttackStyle::restore(SaveGameData *) // 0x6AFF03
{
    mangled_assert("?restore@MoveToTargetAndShootAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AFF03(this, arg);
    return __result;
}

_extern bool _sub_6AFF50(MoveToTargetAndShootAttackStyle *const, SaveGameData *, SaveType);
bool MoveToTargetAndShootAttackStyle::save(SaveGameData *, SaveType) // 0x6AFF50
{
    mangled_assert("?save@MoveToTargetAndShootAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AFF50(this, arg, arg);
    return __result;
}

_extern _sub_6AF695(MoveToTargetAndShootStatic *const);
MoveToTargetAndShootStatic::MoveToTargetAndShootStatic() // 0x6AF695
{
    mangled_assert("??0MoveToTargetAndShootStatic@@QAE@XZ");
    todo("implement");
    _sub_6AF695(this);
}

_extern bool _sub_6AFBA3(MoveToTargetAndShootStatic *const, LuaConfig &);
bool MoveToTargetAndShootStatic::loadData(LuaConfig &) // 0x6AFBA3
{
    mangled_assert("?loadData@MoveToTargetAndShootStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6AFBA3(this, arg);
    return __result;
}

/* ---------- private code */
#endif
