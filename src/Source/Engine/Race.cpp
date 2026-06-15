#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierAbility.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\matrix3.h>
#include <shipstatic.h>
#include <SobWithMeshStatic.h>
#include <new>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <xstddef>
#include <Collision\Primitives\sphere.h>
#include <type_traits>
#include <ShieldTypes.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Tactics.h>
#include <abilities.h>
#include <localizer\localizer.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\obb.h>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <WeaponClassSpecificInfo.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <assist\typemagic.h>
#include <commandtype.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Race.h>
#include <wchar.h>
#include <string>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void Race::Init();
extern unsigned __int32 Race::GetRaceCount();
extern Race::Info *Race::GetRaceAt(unsigned __int32 idx);
extern void Race::Clear();
extern unsigned __int32 Race::GetIdFromName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &racename);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::vector<Race::Info *,std::allocator<Race::Info *> > s_raceInfo; // 0x84A9A4
    extern char const *RaceDefFileName; // 0x83CB44
}

/* ---------- public code */

_inline Race::Info::Info() // 0x620B14
{
    mangled_assert("??0Info@Race@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Race::Info::~Info() // 0x620B4D
{
    mangled_assert("??1Info@Race@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Race::Init() // 0x620C35
{
    mangled_assert("?Init@Race@@YGXXZ");
    todo("implement");
}

unsigned __int32 Race::GetRaceCount() // 0x620C26
{
    mangled_assert("?GetRaceCount@Race@@YGIXZ");
    todo("implement");
}

Race::Info *Race::GetRaceAt(unsigned __int32 idx) // 0x620C04
{
    mangled_assert("?GetRaceAt@Race@@YGPAVInfo@1@I@Z");
    todo("implement");
}

void Race::Clear() // 0x620B96
{
    mangled_assert("?Clear@Race@@YGXXZ");
    todo("implement");
}

unsigned __int32 Race::GetIdFromName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &racename) // 0x620BC3
{
    mangled_assert("?GetIdFromName@Race@@YGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
