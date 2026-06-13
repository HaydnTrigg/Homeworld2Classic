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

_extern _sub_56F2E0(ModifierUIInfoStatics::ModifierUIEntryStatic *const);
_inline ModifierUIInfoStatics::ModifierUIEntryStatic::ModifierUIEntryStatic() // 0x56F2E0
{
    mangled_assert("??0ModifierUIEntryStatic@ModifierUIInfoStatics@@QAE@XZ");
    todo("implement");
    _sub_56F2E0(this);
}

_extern bool _sub_56F642(LuaConfig &, char const *, ModifierUIInfoStatics::ModifierUIEntryStatic &);
bool ModifierUIInfoStatics::getEntry(LuaConfig &lc, char const *name, ModifierUIInfoStatics::ModifierUIEntryStatic &out) // 0x56F642
{
    mangled_assert("?getEntry@ModifierUIInfoStatics@@YG_NAAVLuaConfig@@PBDAAUModifierUIEntryStatic@1@@Z");
    todo("implement");
    bool __result = _sub_56F642(lc, name, out);
    return __result;
}

_extern _sub_56F2F2(ModifierUIInfo *const);
ModifierUIInfo::ModifierUIInfo() // 0x56F2F2
{
    mangled_assert("??0ModifierUIInfo@@QAE@XZ");
    todo("implement");
    _sub_56F2F2(this);
}

_extern void _sub_56F6A0(ModifierUIInfo *const);
void ModifierUIInfo::init() // 0x56F6A0
{
    mangled_assert("?init@ModifierUIInfo@@AAEXXZ");
    todo("implement");
    _sub_56F6A0(this);
}

_extern void _sub_56F4A1(ModifierUIInfo *const, ModifierEffect const *);
void ModifierUIInfo::addEffect(ModifierEffect const *) // 0x56F4A1
{
    mangled_assert("?addEffect@ModifierUIInfo@@QAEXPBVModifierEffect@@@Z");
    todo("implement");
    _sub_56F4A1(this, arg);
}

_extern bool _sub_56F68F(ModifierUIInfo const *const);
bool ModifierUIInfo::hasEffectsToDraw() const // 0x56F68F
{
    mangled_assert("?hasEffectsToDraw@ModifierUIInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_56F68F(this);
    return __result;
}

/* ---------- private code */
#endif
