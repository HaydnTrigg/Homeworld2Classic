#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\GlobalLua.h>
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <boost\scoped_ptr.hpp>
#include <xstring>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern LuaConfig *GlobalLua::s_luaState; // 0x1000C1C0

/* ---------- private variables */

/* ---------- public code */

_extern GlobalLua &_sub_10001B48(GlobalLua *const, GlobalLua const &);
_inline GlobalLua &GlobalLua::operator=(GlobalLua const &) // 0x10001B48
{
    GlobalLua & __result = _sub_10001B48(this, arg);
    return __result;
}

_extern void _sub_10001011();
void GlobalLua::Initialize() // 0x10001011
{
    mangled_assert("?Initialize@GlobalLua@@SGXXZ");
    todo("implement");
    _sub_10001011();
}

_extern void _sub_10001065();
void GlobalLua::Shutdown() // 0x10001065
{
    mangled_assert("?Shutdown@GlobalLua@@SGXXZ");
    todo("implement");
    _sub_10001065();
}

_extern LuaConfig *_sub_1000100B();
LuaConfig *GlobalLua::GetState() // 0x1000100B
{
    mangled_assert("?GetState@GlobalLua@@SGPAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig * __result = _sub_1000100B();
    return __result;
}

/* ---------- private code */
#endif
