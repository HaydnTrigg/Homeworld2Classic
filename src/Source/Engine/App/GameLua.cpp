#if 0
/* ---------- headers */

#include "decomp.h"
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <profile\profile.h>
#include <xstddef>
#include <iostream>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Scar\LuaCampaign.h>
#include <util\types.h>
#include <Scar\LuaPlayer.h>
#include <Scar\LuaSubtitle.h>
#include <Scar\LuaObjectives.h>
#include <Scar\LuaUniverse.h>
#include <Scar\LuaPing.h>
#include <Scar\LuaSound.h>
#include <LuaRender.h>
#include <LuaGameMisc.h>
#include <CPUPlayer\LuaCPU.h>
#include <assist\typemagic.h>
#include <NIS\LuaNIS.h>
#include <NIS\LuaNISDebug.h>
#include <LuaMainUI.h>
#include <LuaShipDebug.h>
#include <Scar\Graphics\LuaLight.h>
#include <App\LuaGameSettings.h>
#include <Scar\LuaSobGroupQuery.h>
#include <Scar\LuaSobGroupActions.h>
#include <Scar\LuaSensor.h>
#include <Stats\luastatlogging.h>
#include <Scar\LuaHyperspace.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Scar\LuaCamera.h>
#include <Scar\LuaFX.h>
#include <LuaTools\LCWatcher.h>
#include <App\GameLua.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *LUALIB_GAME_LIST[23]; // 0x844360
}

/* ---------- public code */

bool GameLua::Initialize() // 0x4F79DF
{
    mangled_assert("?Initialize@GameLua@@SG_NXZ");
    todo("implement");
}

bool GameLua::Shutdown() // 0x4F7A0C
{
    mangled_assert("?Shutdown@GameLua@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
