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

CircleStrafeAttackStyle::CircleStrafeAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6AF00E
{
    mangled_assert("??0CircleStrafeAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

CircleStrafeAttackStyle::~CircleStrafeAttackStyle() // 0x6AF06B
{
    mangled_assert("??1CircleStrafeAttackStyle@@UAE@XZ");
    todo("implement");
}

vector3 CircleStrafeAttackStyle::getAxisOfCircle() // 0x6AF10C
{
    mangled_assert("?getAxisOfCircle@CircleStrafeAttackStyle@@UAE?AVvector3@@XZ");
    todo("implement");
}

float CircleStrafeAttackStyle::getHeightOfCircle() // 0x6AF135
{
    mangled_assert("?getHeightOfCircle@CircleStrafeAttackStyle@@UAEMXZ");
    todo("implement");
}

float CircleStrafeAttackStyle::getRadiusOfCircle() // 0x6AF188
{
    mangled_assert("?getRadiusOfCircle@CircleStrafeAttackStyle@@UAEMXZ");
    todo("implement");
}

bool CircleStrafeAttackStyle::getClockwiseCircle() // 0x6AF121
{
    mangled_assert("?getClockwiseCircle@CircleStrafeAttackStyle@@UAE_NXZ");
    todo("implement");
}

CircleStrafeAttackStyle::CircleStrafeAttackStyle(SaveGameData *) // 0x6AEFF6
{
    mangled_assert("??0CircleStrafeAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void CircleStrafeAttackStyle::defaultSettings() // 0x6AF108
{
    mangled_assert("?defaultSettings@CircleStrafeAttackStyle@@QAEXXZ");
    todo("implement");
}

void CircleStrafeAttackStyle::postRestore() // 0x6AF263
{
    mangled_assert("?postRestore@CircleStrafeAttackStyle@@UAEXXZ");
    todo("implement");
}

bool CircleStrafeAttackStyle::restore(SaveGameData *) // 0x6AF268
{
    mangled_assert("?restore@CircleStrafeAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool CircleStrafeAttackStyle::save(SaveGameData *, SaveType) // 0x6AF2B5
{
    mangled_assert("?save@CircleStrafeAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

CircleStrafeStatic::CircleStrafeStatic() // 0x6AF044
{
    mangled_assert("??0CircleStrafeStatic@@QAE@XZ");
    todo("implement");
}

bool CircleStrafeStatic::loadData(LuaConfig &) // 0x6AF21C
{
    mangled_assert("?loadData@CircleStrafeStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
