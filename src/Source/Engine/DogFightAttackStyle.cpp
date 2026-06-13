#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\SOBGroupManager.h>
#include <luaconfig\luabinding.h>
#include <new>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <platform\timer.h>
#include <xutility>
#include <platform\platformexports.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\random.h>
#include <xhash>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <util\types.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\pch.h>
#include <Engine\DogFightAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\Ship\Formation.h>
#include <Engine\gameRandom.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DogFightAttackStyle::m_saveToken[0]; // 0x7B9218
extern SaveData const DogFightAttackStyle::m_saveData[1]; // 0x7B91F8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6AF321(DogFightAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
DogFightAttackStyle::DogFightAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6AF321
{
    mangled_assert("??0DogFightAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6AF321(this, arg, arg, arg, arg);
}

_extern void _sub_6AF365(DogFightAttackStyle *const);
DogFightAttackStyle::~DogFightAttackStyle() // 0x6AF365
{
    mangled_assert("??1DogFightAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6AF365(this);
}

_extern AttackStyle::AttackStyleResult _sub_6AF4A2(DogFightAttackStyle *const, float);
AttackStyle::AttackStyleResult DogFightAttackStyle::update(float) // 0x6AF4A2
{
    mangled_assert("?update@DogFightAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
    AttackStyle::AttackStyleResult __result = _sub_6AF4A2(this, arg);
    return __result;
}

_extern _sub_6AF302(DogFightAttackStyle *const, SaveGameData *);
DogFightAttackStyle::DogFightAttackStyle(SaveGameData *) // 0x6AF302
{
    mangled_assert("??0DogFightAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AF302(this, arg);
}

_extern void _sub_6AF3CB(DogFightAttackStyle *const);
void DogFightAttackStyle::defaultSettings() // 0x6AF3CB
{
    mangled_assert("?defaultSettings@DogFightAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6AF3CB(this);
}

_extern void _sub_6AF403(DogFightAttackStyle *const);
void DogFightAttackStyle::postRestore() // 0x6AF403
{
    mangled_assert("?postRestore@DogFightAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6AF403(this);
}

_extern bool _sub_6AF408(DogFightAttackStyle *const, SaveGameData *);
bool DogFightAttackStyle::restore(SaveGameData *) // 0x6AF408
{
    mangled_assert("?restore@DogFightAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AF408(this, arg);
    return __result;
}

_extern bool _sub_6AF455(DogFightAttackStyle *const, SaveGameData *, SaveType);
bool DogFightAttackStyle::save(SaveGameData *, SaveType) // 0x6AF455
{
    mangled_assert("?save@DogFightAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AF455(this, arg, arg);
    return __result;
}

_extern _sub_6AF34C(DogFightStatic *const);
DogFightStatic::DogFightStatic() // 0x6AF34C
{
    mangled_assert("??0DogFightStatic@@QAE@XZ");
    todo("implement");
    _sub_6AF34C(this);
}

_extern bool _sub_6AF3DE(DogFightStatic *const, LuaConfig &);
bool DogFightStatic::loadData(LuaConfig &) // 0x6AF3DE
{
    mangled_assert("?loadData@DogFightStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6AF3DE(this, arg);
    return __result;
}

/* ---------- private code */
#endif
