#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <LuaGameIO.h>
#include <LuaMainUI.h>
#include <App\LuaAppMisc.h>
#include <Menus\LuaMenuSupport.h>
#include <UserInterface\LuaUserInterface.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <new>
#include <debug\debug.h>
#include <xstddef>
#include <debug\filter.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Scar\LuaRuleSystem.h>
#include <util\types.h>
#include <luaconfig\luabinding.h>
#include <savegamedef.h>
#include <Render\objects\luadebugrender.h>
#include <Render\objects\objects.h>
#include <profile\profile.h>
#include <iostream>
#include <App\AppLua.h>
#include <boost\utility.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *LUALIB_APP_LIST[6]; // 0x844334
    extern LuaRuleSystem s_ruleSys; // 0x84432C
}

/* ---------- public code */

_extern bool _sub_4F6150(LuaConfig &);
bool AppLua::Initialize(LuaConfig &globalState) // 0x4F6150
{
    mangled_assert("?Initialize@AppLua@@SG_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_4F6150(globalState);
    return __result;
}

_extern bool _sub_4F61E0(LuaConfig &);
bool AppLua::Shutdown(LuaConfig &globalState) // 0x4F61E0
{
    mangled_assert("?Shutdown@AppLua@@SG_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_4F61E0(globalState);
    return __result;
}

_extern void _sub_4F61CD();
void AppLua::Run() // 0x4F61CD
{
    mangled_assert("?Run@AppLua@@SGXXZ");
    todo("implement");
    _sub_4F61CD();
}

/* ---------- private code */
#endif
