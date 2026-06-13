#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\scripting.h>
#include <Engine\scriptaccess.h>
#include <Engine\scripttypedef.h>
#include <lua\lua.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <util\colour.h>
#include <Engine\Ship\Formation.h>
#include <Engine\gameRandom.h>
#include <Engine\Ship\FormationPattern.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\CircleStrafe.h>
#include <Engine\CircleStrafeBase.h>
#include <Mathlib\vector2.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\random.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const CircleStrafeAttackStyle::m_saveToken[0]; // 0x7B910C
extern SaveData const CircleStrafeAttackStyle::m_saveData[1]; // 0x7B90EC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6AF00E(CircleStrafeAttackStyle *const, FormationAttackCommand const *, Formation *, Selection const &, __int32);
CircleStrafeAttackStyle::CircleStrafeAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6AF00E
{
    mangled_assert("??0CircleStrafeAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
    _sub_6AF00E(this, arg, arg, arg, arg);
}

_extern void _sub_6AF06B(CircleStrafeAttackStyle *const);
CircleStrafeAttackStyle::~CircleStrafeAttackStyle() // 0x6AF06B
{
    mangled_assert("??1CircleStrafeAttackStyle@@UAE@XZ");
    todo("implement");
    _sub_6AF06B(this);
}

_extern vector3 _sub_6AF10C(CircleStrafeAttackStyle *const);
vector3 CircleStrafeAttackStyle::getAxisOfCircle() // 0x6AF10C
{
    mangled_assert("?getAxisOfCircle@CircleStrafeAttackStyle@@UAE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_6AF10C(this);
    return __result;
}

_extern float _sub_6AF135(CircleStrafeAttackStyle *const);
float CircleStrafeAttackStyle::getHeightOfCircle() // 0x6AF135
{
    mangled_assert("?getHeightOfCircle@CircleStrafeAttackStyle@@UAEMXZ");
    todo("implement");
    float __result = _sub_6AF135(this);
    return __result;
}

_extern float _sub_6AF188(CircleStrafeAttackStyle *const);
float CircleStrafeAttackStyle::getRadiusOfCircle() // 0x6AF188
{
    mangled_assert("?getRadiusOfCircle@CircleStrafeAttackStyle@@UAEMXZ");
    todo("implement");
    float __result = _sub_6AF188(this);
    return __result;
}

_extern bool _sub_6AF121(CircleStrafeAttackStyle *const);
bool CircleStrafeAttackStyle::getClockwiseCircle() // 0x6AF121
{
    mangled_assert("?getClockwiseCircle@CircleStrafeAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AF121(this);
    return __result;
}

_extern _sub_6AEFF6(CircleStrafeAttackStyle *const, SaveGameData *);
CircleStrafeAttackStyle::CircleStrafeAttackStyle(SaveGameData *) // 0x6AEFF6
{
    mangled_assert("??0CircleStrafeAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AEFF6(this, arg);
}

_extern void _sub_6AF108(CircleStrafeAttackStyle *const);
void CircleStrafeAttackStyle::defaultSettings() // 0x6AF108
{
    mangled_assert("?defaultSettings@CircleStrafeAttackStyle@@QAEXXZ");
    todo("implement");
    _sub_6AF108(this);
}

_extern void _sub_6AF263(CircleStrafeAttackStyle *const);
void CircleStrafeAttackStyle::postRestore() // 0x6AF263
{
    mangled_assert("?postRestore@CircleStrafeAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6AF263(this);
}

_extern bool _sub_6AF268(CircleStrafeAttackStyle *const, SaveGameData *);
bool CircleStrafeAttackStyle::restore(SaveGameData *) // 0x6AF268
{
    mangled_assert("?restore@CircleStrafeAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AF268(this, arg);
    return __result;
}

_extern bool _sub_6AF2B5(CircleStrafeAttackStyle *const, SaveGameData *, SaveType);
bool CircleStrafeAttackStyle::save(SaveGameData *, SaveType) // 0x6AF2B5
{
    mangled_assert("?save@CircleStrafeAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AF2B5(this, arg, arg);
    return __result;
}

_extern _sub_6AF044(CircleStrafeStatic *const);
CircleStrafeStatic::CircleStrafeStatic() // 0x6AF044
{
    mangled_assert("??0CircleStrafeStatic@@QAE@XZ");
    todo("implement");
    _sub_6AF044(this);
}

_extern bool _sub_6AF21C(CircleStrafeStatic *const, LuaConfig &);
bool CircleStrafeStatic::loadData(LuaConfig &) // 0x6AF21C
{
    mangled_assert("?loadData@CircleStrafeStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_6AF21C(this, arg);
    return __result;
}

/* ---------- private code */
#endif
