#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Engine\ship.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <profile\profile.h>
#include <vector>
#include <iostream>
#include <xmemory>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\JustShootAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\Ship\Formation.h>
#include <luaconfig\luabinding.h>
#include <Engine\Ship\FormationPattern.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const JustShootAttackStyle::m_saveToken[0]; // 0x7BA120
extern SaveData const JustShootAttackStyle::m_saveData[1]; // 0x7BA100

/* ---------- private variables */

/* ---------- public code */

JustShootAttackStyle::JustShootAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B5DD7
{
    mangled_assert("??0JustShootAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

JustShootAttackStyle::~JustShootAttackStyle() // 0x6B5E1A
{
    mangled_assert("??1JustShootAttackStyle@@UAE@XZ");
    todo("implement");
}

AttackStyle::AttackStyleResult JustShootAttackStyle::update(float) // 0x6B5F69
{
    mangled_assert("?update@JustShootAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
}

void JustShootAttackStyle::SetStateToStart() // 0x6B5E77
{
    mangled_assert("?SetStateToStart@JustShootAttackStyle@@UAEXXZ");
    todo("implement");
}

JustShootAttackStyle::JustShootAttackStyle(SaveGameData *) // 0x6B5DB8
{
    mangled_assert("??0JustShootAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void JustShootAttackStyle::defaultSettings() // 0x6B5E7F
{
    mangled_assert("?defaultSettings@JustShootAttackStyle@@QAEXXZ");
    todo("implement");
}

void JustShootAttackStyle::postRestore() // 0x6B5ECA
{
    mangled_assert("?postRestore@JustShootAttackStyle@@UAEXXZ");
    todo("implement");
}

bool JustShootAttackStyle::restore(SaveGameData *) // 0x6B5ECF
{
    mangled_assert("?restore@JustShootAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool JustShootAttackStyle::save(SaveGameData *, SaveType) // 0x6B5F1C
{
    mangled_assert("?save@JustShootAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

JustShootStatic::JustShootStatic() // 0x6B5E02
{
    mangled_assert("??0JustShootStatic@@QAE@XZ");
    todo("implement");
}

bool JustShootStatic::loadData(LuaConfig &) // 0x6B5E92
{
    mangled_assert("?loadData@JustShootStatic@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
