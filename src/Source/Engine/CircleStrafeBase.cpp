#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <profile\profile.h>
#include <new>
#include <iostream>
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
#include <Engine\random.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\pch.h>
#include <Engine\CircleStrafeBase.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\Ship\Formation.h>
#include <Engine\gameRandom.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const CircleStrafeBase::m_saveData[1]; // 0x7BAA5C
extern char const CircleStrafeBase::m_saveToken[17]; // 0x7BAA7C

/* ---------- private variables */

/* ---------- public code */

CircleStrafeBase::CircleStrafeBase(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6BD6E1
{
    mangled_assert("??0CircleStrafeBase@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

CircleStrafeBase::~CircleStrafeBase() // 0x6BD70F
{
    mangled_assert("??1CircleStrafeBase@@UAE@XZ");
    todo("implement");
}

AttackStyle::AttackStyleResult CircleStrafeBase::update(float) // 0x6BD7C1
{
    mangled_assert("?update@CircleStrafeBase@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
}

void CircleStrafeBase::startingToCircle() // 0x6BD7C0
{
    mangled_assert("?startingToCircle@CircleStrafeBase@@UAEXXZ");
    todo("implement");
}

bool CircleStrafeBase::shouldWeStopCircling() // 0x6BD7BD
{
    mangled_assert("?shouldWeStopCircling@CircleStrafeBase@@UAE_NXZ");
    todo("implement");
}

CircleStrafeBase::CircleStrafeBase(SaveGameData *) // 0x6BD6C9
{
    mangled_assert("??0CircleStrafeBase@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void CircleStrafeBase::defaultSettings() // 0x6BD71A
{
    mangled_assert("?defaultSettings@CircleStrafeBase@@QAEXXZ");
    todo("implement");
}

void CircleStrafeBase::postRestore() // 0x6BD71E
{
    mangled_assert("?postRestore@CircleStrafeBase@@UAEXXZ");
    todo("implement");
}

bool CircleStrafeBase::restore(SaveGameData *) // 0x6BD723
{
    mangled_assert("?restore@CircleStrafeBase@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool CircleStrafeBase::save(SaveGameData *, SaveType) // 0x6BD770
{
    mangled_assert("?save@CircleStrafeBase@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
