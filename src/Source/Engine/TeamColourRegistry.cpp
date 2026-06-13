#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Graphics\TeamColour.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <list>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <util\colour.h>
#include <savegamedef.h>
#include <TeamColourRegistry.h>
#include <luaconfig\luaconfig.h>
#include <savegame.h>
#include <lua.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void writeColour(LuaConfig &lc, char const *label, vector4 const &c);
_static void readColour(LuaConfig &lc, char const *label, vector4 &c);

/* ---------- globals */

extern unsigned __int32 TeamColourRegistry::INVALID_HANDLE; // 0x83D6B0
extern char const TeamColourRegistry::m_saveToken[19]; // 0x7B0DC8
extern SaveData const TeamColourRegistry::m_saveData[1]; // 0x7B0DDC

/* ---------- private variables */

_static
{
    extern TeamColourRegistry *s_instance; // 0x84AFD0
}

/* ---------- public code */

_extern bool _sub_647CCC();
bool TeamColourRegistry::Startup() // 0x647CCC
{
    mangled_assert("?Startup@TeamColourRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_647CCC();
    return __result;
}

_extern bool _sub_647CAF();
bool TeamColourRegistry::Shutdown() // 0x647CAF
{
    mangled_assert("?Shutdown@TeamColourRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_647CAF();
    return __result;
}

_extern TeamColourRegistry *_sub_6479DC();
TeamColourRegistry *TeamColourRegistry::Instance() // 0x6479DC
{
    mangled_assert("?Instance@TeamColourRegistry@@SGPAV1@XZ");
    todo("implement");
    TeamColourRegistry * __result = _sub_6479DC();
    return __result;
}

_extern bool _sub_647CA4(SaveGameData *, SaveType);
bool TeamColourRegistry::SaveSingleton(SaveGameData *saveGameData, SaveType saveType) // 0x647CA4
{
    mangled_assert("?SaveSingleton@TeamColourRegistry@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_647CA4(saveGameData, saveType);
    return __result;
}

_extern bool _sub_647BCC(SaveGameData *);
bool TeamColourRegistry::RestoreSingleton(SaveGameData *saveGameData) // 0x647BCC
{
    mangled_assert("?RestoreSingleton@TeamColourRegistry@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_647BCC(saveGameData);
    return __result;
}

_extern _sub_6478B3(TeamColourRegistry *const);
TeamColourRegistry::TeamColourRegistry() // 0x6478B3
{
    mangled_assert("??0TeamColourRegistry@@AAE@XZ");
    todo("implement");
    _sub_6478B3(this);
}

_extern void _sub_6478CC(TeamColourRegistry *const);
TeamColourRegistry::~TeamColourRegistry() // 0x6478CC
{
    mangled_assert("??1TeamColourRegistry@@EAE@XZ");
    todo("implement");
    _sub_6478CC(this);
}

_extern void _sub_647E67(TeamColourRegistry *const);
void TeamColourRegistry::clear() // 0x647E67
{
    mangled_assert("?clear@TeamColourRegistry@@AAEXXZ");
    todo("implement");
    _sub_647E67(this);
}

_extern unsigned __int32 _sub_647968(TeamColourRegistry *const, TeamColour const &);
unsigned __int32 TeamColourRegistry::AddTeamColour(TeamColour const &) // 0x647968
{
    mangled_assert("?AddTeamColour@TeamColourRegistry@@QAEIABVTeamColour@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_647968(this, arg);
    return __result;
}

_extern TeamColour const *_sub_6479CF(TeamColourRegistry *const, unsigned __int32);
TeamColour const *TeamColourRegistry::GetTeamColour(unsigned __int32) // 0x6479CF
{
    mangled_assert("?GetTeamColour@TeamColourRegistry@@QAEPBVTeamColour@@I@Z");
    todo("implement");
    TeamColour const * __result = _sub_6479CF(this, arg);
    return __result;
}

_extern void _sub_647BB6(TeamColourRegistry *const, unsigned __int32, TeamColour const &);
void TeamColourRegistry::ModifyTeamColour(unsigned __int32, TeamColour const &) // 0x647BB6
{
    mangled_assert("?ModifyTeamColour@TeamColourRegistry@@QAEXIABVTeamColour@@@Z");
    todo("implement");
    _sub_647BB6(this, arg, arg);
}

_extern void _sub_647BDC(TeamColourRegistry *const, LuaConfig &);
void TeamColourRegistry::SavePersistentData(LuaConfig &) // 0x647BDC
{
    mangled_assert("?SavePersistentData@TeamColourRegistry@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_647BDC(this, arg);
}

_extern void _sub_6479E2(TeamColourRegistry *const, LuaConfig &);
void TeamColourRegistry::LoadPersistentData(LuaConfig &) // 0x6479E2
{
    mangled_assert("?LoadPersistentData@TeamColourRegistry@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_6479E2(this, arg);
}

_extern unsigned __int32 _sub_6479C5(TeamColourRegistry *const, unsigned __int32);
unsigned __int32 TeamColourRegistry::AdjustPersistentHandle(unsigned __int32) // 0x6479C5
{
    mangled_assert("?AdjustPersistentHandle@TeamColourRegistry@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6479C5(this, arg);
    return __result;
}

_extern void _sub_647EEE(TeamColourRegistry *const);
void TeamColourRegistry::postRestore() // 0x647EEE
{
    mangled_assert("?postRestore@TeamColourRegistry@@UAEXXZ");
    todo("implement");
    _sub_647EEE(this);
}

_extern bool _sub_647F58(TeamColourRegistry *const, SaveGameData *);
bool TeamColourRegistry::restore(SaveGameData *) // 0x647F58
{
    mangled_assert("?restore@TeamColourRegistry@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_647F58(this, arg);
    return __result;
}

_extern bool _sub_647F96(TeamColourRegistry *const, SaveGameData *, SaveType);
bool TeamColourRegistry::save(SaveGameData *, SaveType) // 0x647F96
{
    mangled_assert("?save@TeamColourRegistry@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_647F96(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_647FDA(LuaConfig &, char const *, vector4 const &);
_static void writeColour(LuaConfig &lc, char const *label, vector4 const &c) // 0x647FDA
{
    mangled_assert("writeColour");
    todo("implement");
    _sub_647FDA(lc, label, c);
}

_extern void _sub_647F41(LuaConfig &, char const *, vector4 &);
_static void readColour(LuaConfig &lc, char const *label, vector4 &c) // 0x647F41
{
    mangled_assert("readColour");
    todo("implement");
    _sub_647F41(lc, label, c);
}
#endif
