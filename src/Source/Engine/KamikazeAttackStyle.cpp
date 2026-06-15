#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <new>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <list>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <profile\profile.h>
#include <iostream>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\KamikazeAttackStyle.h>
#include <Engine\AttackStyle.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const KamikazeAttackStyle::m_saveToken[0]; // 0x7B9AC8
extern SaveData const KamikazeAttackStyle::m_saveData[1]; // 0x7B9AA8

/* ---------- private variables */

/* ---------- public code */

KamikazeAttackStyle::KamikazeAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32) // 0x6B230C
{
    mangled_assert("??0KamikazeAttackStyle@@QAE@PBVFormationAttackCommand@@PAVFormation@@ABVSelection@@H@Z");
    todo("implement");
}

KamikazeAttackStyle::~KamikazeAttackStyle() // 0x6B2337
{
    mangled_assert("??1KamikazeAttackStyle@@UAE@XZ");
    todo("implement");
}

AttackStyle::AttackStyleResult KamikazeAttackStyle::update(float) // 0x6B241D
{
    mangled_assert("?update@KamikazeAttackStyle@@UAE?AW4AttackStyleResult@AttackStyle@@M@Z");
    todo("implement");
}

KamikazeAttackStyle::KamikazeAttackStyle(SaveGameData *) // 0x6B22ED
{
    mangled_assert("??0KamikazeAttackStyle@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void KamikazeAttackStyle::defaultSettings() // 0x6B2370
{
    mangled_assert("?defaultSettings@KamikazeAttackStyle@@QAEXXZ");
    todo("implement");
}

void KamikazeAttackStyle::postRestore() // 0x6B237E
{
    mangled_assert("?postRestore@KamikazeAttackStyle@@UAEXXZ");
    todo("implement");
}

bool KamikazeAttackStyle::restore(SaveGameData *) // 0x6B2383
{
    mangled_assert("?restore@KamikazeAttackStyle@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool KamikazeAttackStyle::save(SaveGameData *, SaveType) // 0x6B23D0
{
    mangled_assert("?save@KamikazeAttackStyle@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
