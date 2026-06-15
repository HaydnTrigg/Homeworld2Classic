#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <exception>
#include <xstddef>
#include <ATITemplate.h>
#include <type_traits>
#include <ATI.h>
#include <prim.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\vector2.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <MultiplierTypes.h>
#include <util\colour.h>
#include <abilities.h>
#include <Modifiers\ModifierUIInfo.h>
#include <string>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>

/* ---------- constants */

/* ---------- definitions */

struct ModifierUIInfoStatics::ModifierUIEntryStatic
{
    _inline ModifierUIEntryStatic();
    vector4 m_colour; // 0x0
};
static_assert(sizeof(ModifierUIInfoStatics::ModifierUIEntryStatic) == 16, "Invalid ModifierUIInfoStatics::ModifierUIEntryStatic size");

/* ---------- prototypes */

extern bool ModifierUIInfoStatics::getEntry(LuaConfig &lc, char const *name, ModifierUIInfoStatics::ModifierUIEntryStatic &out);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern ModifierUIInfoStatics::ModifierUIEntryStatic s_abilities[30]; // 0x846900
    extern ModifierUIInfoStatics::ModifierUIEntryStatic s_multipliers[29]; // 0x846AE0
}

/* ---------- public code */

_inline ModifierUIInfoStatics::ModifierUIEntryStatic::ModifierUIEntryStatic() // 0x56F2E0
{
    mangled_assert("??0ModifierUIEntryStatic@ModifierUIInfoStatics@@QAE@XZ");
    todo("implement");
}

bool ModifierUIInfoStatics::getEntry(LuaConfig &lc, char const *name, ModifierUIInfoStatics::ModifierUIEntryStatic &out) // 0x56F642
{
    mangled_assert("?getEntry@ModifierUIInfoStatics@@YG_NAAVLuaConfig@@PBDAAUModifierUIEntryStatic@1@@Z");
    todo("implement");
}

ModifierUIInfo::ModifierUIInfo() // 0x56F2F2
{
    mangled_assert("??0ModifierUIInfo@@QAE@XZ");
    todo("implement");
}

void ModifierUIInfo::init() // 0x56F6A0
{
    mangled_assert("?init@ModifierUIInfo@@AAEXXZ");
    todo("implement");
}

void ModifierUIInfo::addEffect(ModifierEffect const *) // 0x56F4A1
{
    mangled_assert("?addEffect@ModifierUIInfo@@QAEXPBVModifierEffect@@@Z");
    todo("implement");
}

bool ModifierUIInfo::hasEffectsToDraw() const // 0x56F68F
{
    mangled_assert("?hasEffectsToDraw@ModifierUIInfo@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
