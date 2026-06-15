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

bool TeamColourRegistry::Startup() // 0x647CCC
{
    mangled_assert("?Startup@TeamColourRegistry@@SG_NXZ");
    todo("implement");
}

bool TeamColourRegistry::Shutdown() // 0x647CAF
{
    mangled_assert("?Shutdown@TeamColourRegistry@@SG_NXZ");
    todo("implement");
}

TeamColourRegistry *TeamColourRegistry::Instance() // 0x6479DC
{
    mangled_assert("?Instance@TeamColourRegistry@@SGPAV1@XZ");
    todo("implement");
}

bool TeamColourRegistry::SaveSingleton(SaveGameData *saveGameData, SaveType saveType) // 0x647CA4
{
    mangled_assert("?SaveSingleton@TeamColourRegistry@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool TeamColourRegistry::RestoreSingleton(SaveGameData *saveGameData) // 0x647BCC
{
    mangled_assert("?RestoreSingleton@TeamColourRegistry@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

TeamColourRegistry::TeamColourRegistry() // 0x6478B3
{
    mangled_assert("??0TeamColourRegistry@@AAE@XZ");
    todo("implement");
}

TeamColourRegistry::~TeamColourRegistry() // 0x6478CC
{
    mangled_assert("??1TeamColourRegistry@@EAE@XZ");
    todo("implement");
}

void TeamColourRegistry::clear() // 0x647E67
{
    mangled_assert("?clear@TeamColourRegistry@@AAEXXZ");
    todo("implement");
}

unsigned __int32 TeamColourRegistry::AddTeamColour(TeamColour const &) // 0x647968
{
    mangled_assert("?AddTeamColour@TeamColourRegistry@@QAEIABVTeamColour@@@Z");
    todo("implement");
}

TeamColour const *TeamColourRegistry::GetTeamColour(unsigned __int32) // 0x6479CF
{
    mangled_assert("?GetTeamColour@TeamColourRegistry@@QAEPBVTeamColour@@I@Z");
    todo("implement");
}

void TeamColourRegistry::ModifyTeamColour(unsigned __int32, TeamColour const &) // 0x647BB6
{
    mangled_assert("?ModifyTeamColour@TeamColourRegistry@@QAEXIABVTeamColour@@@Z");
    todo("implement");
}

void TeamColourRegistry::SavePersistentData(LuaConfig &) // 0x647BDC
{
    mangled_assert("?SavePersistentData@TeamColourRegistry@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void TeamColourRegistry::LoadPersistentData(LuaConfig &) // 0x6479E2
{
    mangled_assert("?LoadPersistentData@TeamColourRegistry@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

unsigned __int32 TeamColourRegistry::AdjustPersistentHandle(unsigned __int32) // 0x6479C5
{
    mangled_assert("?AdjustPersistentHandle@TeamColourRegistry@@QAEII@Z");
    todo("implement");
}

void TeamColourRegistry::postRestore() // 0x647EEE
{
    mangled_assert("?postRestore@TeamColourRegistry@@UAEXXZ");
    todo("implement");
}

bool TeamColourRegistry::restore(SaveGameData *) // 0x647F58
{
    mangled_assert("?restore@TeamColourRegistry@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool TeamColourRegistry::save(SaveGameData *, SaveType) // 0x647F96
{
    mangled_assert("?save@TeamColourRegistry@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void writeColour(LuaConfig &lc, char const *label, vector4 const &c) // 0x647FDA
{
    mangled_assert("writeColour");
    todo("implement");
}

_static void readColour(LuaConfig &lc, char const *label, vector4 &c) // 0x647F41
{
    mangled_assert("readColour");
    todo("implement");
}
#endif
