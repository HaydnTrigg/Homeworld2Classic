#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <Engine\Ship\Formation.h>
#include <xstring>
#include <Engine\gameRandom.h>
#include <Mathlib\mathutil.h>
#include <Engine\Ship\FormationPattern.h>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <Engine\SOBGroupManager.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <xhash>
#include <math.h>
#include <list>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector3.h>
#include <platform\timer.h>
#include <map>
#include <platform\platformexports.h>
#include <xtree>
#include <Mathlib\quat.h>
#include <Engine\random.h>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\pch.h>
#include <Engine\FlyRoundAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\SquadronList.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FlyRoundAttackStyle::m_saveToken[0]; // 0x7B9C30
extern SaveData const FlyRoundAttackStyle::m_saveData[7]; // 0x7B9B50

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6B25D2(FlyRoundAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
FlyRoundAttackStyle::FlyRoundAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B25D2
{
    mangled_assert("??0FlyRoundAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6B25D2(this, arg, arg, arg, arg);
}

_extern void _sub_6B267C(FlyRoundAttackStyle *const);
FlyRoundAttackStyle::~FlyRoundAttackStyle() // 0x6B267C
{
    mangled_assert("??1FlyRoundAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6B267C(this);
}

_extern void _sub_6B2B2D(FlyRoundAttackStyle *const, Ship *, Sob *);
void FlyRoundAttackStyle::recalculateCircle(Ship *, Sob *) // 0x6B2B2D
{
    mangled_assert("?recalculateCircle@FlyRoundAttackStyle@@AAEXPAVShip@@PAVSob@@@Z");
    todo("implement");
    _sub_6B2B2D(this, arg, arg);
}

_extern vector3 _sub_6B2713(FlyRoundAttackStyle *const);
vector3 FlyRoundAttackStyle::calculateNextCirclePoint() // 0x6B2713
{
    mangled_assert("?calculateNextCirclePoint@FlyRoundAttackStyle@@AAE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_6B2713(this);
    return __result;
}

_extern AttackStyle::AttackStyleResult _sub_6B3365(FlyRoundAttackStyle *const, float);
AttackStyle::AttackStyleResult FlyRoundAttackStyle::update(float) // 0x6B3365
{
    mangled_assert("?update@FlyRoundAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6B3365(this, arg);
    return __result;
}

_extern _sub_6B2586(FlyRoundAttackStyle *const, SaveGameData *);
FlyRoundAttackStyle::FlyRoundAttackStyle(SaveGameData *) // 0x6B2586
{
    mangled_assert("??0FlyRoundAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B2586(this, arg);
}

_extern void _sub_6B29AA(FlyRoundAttackStyle *const);
void FlyRoundAttackStyle::defaultSettings() // 0x6B29AA
{
    mangled_assert("?defaultSettings@FlyRoundAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6B29AA(this);
}

_extern void _sub_6B2B28(FlyRoundAttackStyle *const);
void FlyRoundAttackStyle::postRestore() // 0x6B2B28
{
    mangled_assert("?postRestore@FlyRoundAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B2B28(this);
}

_extern bool _sub_6B32CB(FlyRoundAttackStyle *const, SaveGameData *);
bool FlyRoundAttackStyle::restore(SaveGameData *) // 0x6B32CB
{
    mangled_assert("?restore@FlyRoundAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B32CB(this, arg);
    return __result;
}

_extern bool _sub_6B3318(FlyRoundAttackStyle *const, SaveGameData *, SaveType);
bool FlyRoundAttackStyle::save(SaveGameData *, SaveType) // 0x6B3318
{
    mangled_assert("?save@FlyRoundAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B3318(this, arg, arg);
    return __result;
}

_extern _sub_6B2627(FlyRoundStatic *const);
FlyRoundStatic::FlyRoundStatic() // 0x6B2627
{
    mangled_assert("??0FlyRoundStatic@@QAE@XZ");
    todo("implement");
    _sub_6B2627(this);
}

_extern bool _sub_6B2A1A(FlyRoundStatic *const, LuaConfig &);
bool FlyRoundStatic::loadData(LuaConfig &) // 0x6B2A1A
{
    mangled_assert("?loadData@FlyRoundStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6B2A1A(this, arg);
    return __result;
}

/* ---------- private code */
#endif
