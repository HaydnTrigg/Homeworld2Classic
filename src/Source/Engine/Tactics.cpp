#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <UIGraphic.h>
#include <prim.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <luaconfig\luabinding.h>
#include <Tactics.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

struct SettingInfo
{
    UIGraphic2D *icon; // 0x0
    char *name; // 0x4
};
static_assert(sizeof(SettingInfo) == 8, "Invalid SettingInfo size");

/* ---------- prototypes */

extern RetaliationSetting const getRetaliationLevelFor(SquadronTactics const tactics);
extern SquadronTactics const convertStringIntoTactic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool tacticsInit();
extern bool tacticsIconsStartup();
extern bool tacticsIconsShutdown();
extern UIGraphic2D *tacticsIconGet(SquadronTactics tactic);

/* ---------- globals */

extern RetaliationSetting retaliationLevelForTactic[3]; // 0x835AFC

/* ---------- private variables */

_static
{
    extern char const ScriptName[25]; // 0x791AB4
    extern SettingInfo tacticsInfo[3]; // 0x835B08
}

/* ---------- public code */

_extern RetaliationSetting const _sub_4BCA0A(SquadronTactics const);
RetaliationSetting const getRetaliationLevelFor(SquadronTactics const tactics) // 0x4BCA0A
{
    mangled_assert("?getRetaliationLevelFor@@YG?BW4RetaliationSetting@@W4SquadronTactics@@@Z");
    todo("implement");
    RetaliationSetting const __result = _sub_4BCA0A(tactics);
    return __result;
}

_extern SquadronTactics const _sub_4BC93A(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
SquadronTactics const convertStringIntoTactic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4BC93A
{
    mangled_assert("?convertStringIntoTactic@@YG?BW4SquadronTactics@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    SquadronTactics const __result = _sub_4BC93A(name);
    return __result;
}

_extern bool _sub_4BCB99();
bool tacticsInit() // 0x4BCB99
{
    mangled_assert("?tacticsInit@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4BCB99();
    return __result;
}

_extern bool _sub_4BCA55();
bool tacticsIconsStartup() // 0x4BCA55
{
    mangled_assert("?tacticsIconsStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4BCA55();
    return __result;
}

_extern bool _sub_4BCA2F();
bool tacticsIconsShutdown() // 0x4BCA2F
{
    mangled_assert("?tacticsIconsShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4BCA2F();
    return __result;
}

_extern UIGraphic2D *_sub_4BCA18(SquadronTactics);
UIGraphic2D *tacticsIconGet(SquadronTactics tactic) // 0x4BCA18
{
    mangled_assert("?tacticsIconGet@@YGPAVUIGraphic2D@@W4SquadronTactics@@@Z");
    todo("implement");
    UIGraphic2D * __result = _sub_4BCA18(tactic);
    return __result;
}

/* ---------- private code */
#endif
