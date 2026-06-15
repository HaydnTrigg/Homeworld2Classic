#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <LevelManager.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <localizer\localizer.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <fileio\archivemanager.h>
#include <fileio\archive.h>
#include <fileio\archiveinternals.h>
#include <luaconfig\luautils.h>
#include <assist\typemagic.h>
#include <GameRulesLibrary.h>
#include <LocalizerDirectory.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <GameOptions.h>
#include <LevelDesc.h>
#include <wchar.h>
#include <string>
#include <Hash.h>
#include <fileio\md5.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool GetStringAndLocalize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, LuaConfig &lc, char const *name);

/* ---------- globals */

extern GameOptions *GameOptions::s_instance; // 0x8443CC
extern bool GameOptions::m_archiveContainsLocale; // 0x8443D0

/* ---------- private variables */

_static
{
    extern char const *k_ArchiveFileSignature; // 0x836D94
    extern char const *k_ArchiveMD5SecurityKey; // 0x836D98
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x836D9C
}

/* ---------- public code */

_inline GameOptions::Choice::Choice(GameOptions::Choice const &) // 0x4FC65C
{
    mangled_assert("??0Choice@GameOptions@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline GameOptions::Choice::Choice() // 0x4FC6C5
{
    mangled_assert("??0Choice@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GameOptions *GameOptions::i() // 0x4FD6A5
{
    mangled_assert("?i@GameOptions@@SGPAV1@XZ");
    todo("implement");
}

bool GameOptions::Reload(MD5Hash const &gameRules) // 0x4FD0C3
{
    mangled_assert("?Reload@GameOptions@@SG_NABVMD5Hash@@@Z");
    todo("implement");
}

bool GameOptions::Shutdown() // 0x4FD144
{
    mangled_assert("?Shutdown@GameOptions@@SG_NXZ");
    todo("implement");
}

GameOptions::GameOptions(MD5Hash const &) // 0x4FC6FA
{
    mangled_assert("??0GameOptions@@AAE@ABVMD5Hash@@@Z");
    todo("implement");
}

_inline GameOptions::Option::Option(GameOptions::Option const &) // 0x4FC832
{
    mangled_assert("??0Option@GameOptions@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline GameOptions::Option::Option() // 0x4FC86F
{
    mangled_assert("??0Option@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameOptions::Choice::~Choice() // 0x4FC898
{
    mangled_assert("??1Choice@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GameOptions::~GameOptions() // 0x4FC8C3
{
    mangled_assert("??1GameOptions@@AAE@XZ");
    todo("implement");
}

_inline GameOptions::Option::~Option() // 0x4FC920
{
    mangled_assert("??1Option@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

GameOptions::Choice const *GameOptions::find(char const *) const // 0x4FD66D
{
    mangled_assert("?find@GameOptions@@QBEPBVChoice@1@PBD@Z");
    todo("implement");
}

GameOptions::Choice const *GameOptions::find(unsigned __int32) const // 0x4FD661
{
    mangled_assert("?find@GameOptions@@QBEPBVChoice@1@I@Z");
    todo("implement");
}

bool GameOptions::LoadGameRulesFile(MD5Hash const &) // 0x4FCBAD
{
    mangled_assert("?LoadGameRulesFile@GameOptions@@AAE_NABVMD5Hash@@@Z");
    todo("implement");
}

char const *GameOptions::GetDirectory(char const *) // 0x4FCA52
{
    mangled_assert("?GetDirectory@GameOptions@@QAEPBDPBD@Z");
    todo("implement");
}

void GameOptions::Choice::ParseOptionSet(char const *, LuaConfig &) // 0x4FCF02
{
    mangled_assert("?ParseOptionSet@Choice@GameOptions@@QAEXPBDAAVLuaConfig@@@Z");
    todo("implement");
}

wchar_t const *GameOptions::Choice::GetLocName() const // 0x4FCA9D
{
    mangled_assert("?GetLocName@Choice@GameOptions@@QBEPB_WXZ");
    todo("implement");
}

wchar_t const *GameOptions::Choice::GetTooltip() const // 0x4FCB9D
{
    mangled_assert("?GetTooltip@Choice@GameOptions@@QBEPB_WXZ");
    todo("implement");
}

__int32 GameOptions::Choice::GetNumOptions() const // 0x4FCAA9
{
    mangled_assert("?GetNumOptions@Choice@GameOptions@@QBEHXZ");
    todo("implement");
}

__int32 GameOptions::Choice::GetDefault() const // 0x4FCA4E
{
    mangled_assert("?GetDefault@Choice@GameOptions@@QBEHXZ");
    todo("implement");
}

wchar_t const *GameOptions::Choice::GetOptionName(unsigned __int32) const // 0x4FCAB6
{
    mangled_assert("?GetOptionName@Choice@GameOptions@@QBEPB_WI@Z");
    todo("implement");
}

char const *GameOptions::Choice::GetOptionValue(unsigned __int32) const // 0x4FCAD0
{
    mangled_assert("?GetOptionValue@Choice@GameOptions@@QBEPBDI@Z");
    todo("implement");
}

bool GameOptions::Choice::IsVisible() const // 0x4FCBA9
{
    mangled_assert("?IsVisible@Choice@GameOptions@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */

_static bool GetStringAndLocalize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, LuaConfig &lc, char const *name) // 0x4FCB01
{
    mangled_assert("GetStringAndLocalize");
    todo("implement");
}
#endif
