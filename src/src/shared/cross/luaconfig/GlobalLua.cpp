#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include "src\src\Shared\PC\LuaConfig\pch.h"
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

_inline GlobalLua &GlobalLua::operator=(GlobalLua const &) // 0x10001B48
{
}

void GlobalLua::Initialize() // 0x10001011
{
    mangled_assert("?Initialize@GlobalLua@@SGXXZ");
    todo("implement");
}

void GlobalLua::Shutdown() // 0x10001065
{
    mangled_assert("?Shutdown@GlobalLua@@SGXXZ");
    todo("implement");
}

LuaConfig *GlobalLua::GetState() // 0x1000100B
{
    mangled_assert("?GetState@GlobalLua@@SGPAVLuaConfig@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
