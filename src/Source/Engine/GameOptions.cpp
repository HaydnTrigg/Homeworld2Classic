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

_extern _sub_4FC65C(GameOptions::Choice *const, GameOptions::Choice const &);
_inline GameOptions::Choice::Choice(GameOptions::Choice const &) // 0x4FC65C
{
    mangled_assert("??0Choice@GameOptions@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4FC65C(this, arg);
}

_extern _sub_4FC6C5(GameOptions::Choice *const);
_inline GameOptions::Choice::Choice() // 0x4FC6C5
{
    mangled_assert("??0Choice@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FC6C5(this);
}

_extern GameOptions *_sub_4FD6A5();
GameOptions *GameOptions::i() // 0x4FD6A5
{
    mangled_assert("?i@GameOptions@@SGPAV1@XZ");
    todo("implement");
    GameOptions * __result = _sub_4FD6A5();
    return __result;
}

_extern bool _sub_4FD0C3(MD5Hash const &);
bool GameOptions::Reload(MD5Hash const &gameRules) // 0x4FD0C3
{
    mangled_assert("?Reload@GameOptions@@SG_NABVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_4FD0C3(gameRules);
    return __result;
}

_extern bool _sub_4FD144();
bool GameOptions::Shutdown() // 0x4FD144
{
    mangled_assert("?Shutdown@GameOptions@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4FD144();
    return __result;
}

_extern _sub_4FC6FA(GameOptions *const, MD5Hash const &);
GameOptions::GameOptions(MD5Hash const &) // 0x4FC6FA
{
    mangled_assert("??0GameOptions@@AAE@ABVMD5Hash@@@Z");
    todo("implement");
    _sub_4FC6FA(this, arg);
}

_extern _sub_4FC832(GameOptions::Option *const, GameOptions::Option const &);
_inline GameOptions::Option::Option(GameOptions::Option const &) // 0x4FC832
{
    mangled_assert("??0Option@GameOptions@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4FC832(this, arg);
}

_extern _sub_4FC86F(GameOptions::Option *const);
_inline GameOptions::Option::Option() // 0x4FC86F
{
    mangled_assert("??0Option@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FC86F(this);
}

_extern void _sub_4FC898(GameOptions::Choice *const);
_inline GameOptions::Choice::~Choice() // 0x4FC898
{
    mangled_assert("??1Choice@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FC898(this);
}

_extern void _sub_4FC8C3(GameOptions *const);
GameOptions::~GameOptions() // 0x4FC8C3
{
    mangled_assert("??1GameOptions@@AAE@XZ");
    todo("implement");
    _sub_4FC8C3(this);
}

_extern void _sub_4FC920(GameOptions::Option *const);
_inline GameOptions::Option::~Option() // 0x4FC920
{
    mangled_assert("??1Option@GameOptions@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4FC920(this);
}

_extern GameOptions::Choice const *_sub_4FD66D(GameOptions const *const, char const *);
GameOptions::Choice const *GameOptions::find(char const *) const // 0x4FD66D
{
    mangled_assert("?find@GameOptions@@QBEPBVChoice@1@PBD@Z");
    todo("implement");
    GameOptions::Choice const * __result = _sub_4FD66D(this, arg);
    return __result;
}

_extern GameOptions::Choice const *_sub_4FD661(GameOptions const *const, unsigned __int32);
GameOptions::Choice const *GameOptions::find(unsigned __int32) const // 0x4FD661
{
    mangled_assert("?find@GameOptions@@QBEPBVChoice@1@I@Z");
    todo("implement");
    GameOptions::Choice const * __result = _sub_4FD661(this, arg);
    return __result;
}

_extern bool _sub_4FCBAD(GameOptions *const, MD5Hash const &);
bool GameOptions::LoadGameRulesFile(MD5Hash const &) // 0x4FCBAD
{
    mangled_assert("?LoadGameRulesFile@GameOptions@@AAE_NABVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_4FCBAD(this, arg);
    return __result;
}

_extern char const *_sub_4FCA52(GameOptions *const, char const *);
char const *GameOptions::GetDirectory(char const *) // 0x4FCA52
{
    mangled_assert("?GetDirectory@GameOptions@@QAEPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_4FCA52(this, arg);
    return __result;
}

_extern void _sub_4FCF02(GameOptions::Choice *const, char const *, LuaConfig &);
void GameOptions::Choice::ParseOptionSet(char const *, LuaConfig &) // 0x4FCF02
{
    mangled_assert("?ParseOptionSet@Choice@GameOptions@@QAEXPBDAAVLuaConfig@@@Z");
    todo("implement");
    _sub_4FCF02(this, arg, arg);
}

_extern wchar_t const *_sub_4FCA9D(GameOptions::Choice const *const);
wchar_t const *GameOptions::Choice::GetLocName() const // 0x4FCA9D
{
    mangled_assert("?GetLocName@Choice@GameOptions@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_4FCA9D(this);
    return __result;
}

_extern wchar_t const *_sub_4FCB9D(GameOptions::Choice const *const);
wchar_t const *GameOptions::Choice::GetTooltip() const // 0x4FCB9D
{
    mangled_assert("?GetTooltip@Choice@GameOptions@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_4FCB9D(this);
    return __result;
}

_extern __int32 _sub_4FCAA9(GameOptions::Choice const *const);
__int32 GameOptions::Choice::GetNumOptions() const // 0x4FCAA9
{
    mangled_assert("?GetNumOptions@Choice@GameOptions@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4FCAA9(this);
    return __result;
}

_extern __int32 _sub_4FCA4E(GameOptions::Choice const *const);
__int32 GameOptions::Choice::GetDefault() const // 0x4FCA4E
{
    mangled_assert("?GetDefault@Choice@GameOptions@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4FCA4E(this);
    return __result;
}

_extern wchar_t const *_sub_4FCAB6(GameOptions::Choice const *const, unsigned __int32);
wchar_t const *GameOptions::Choice::GetOptionName(unsigned __int32) const // 0x4FCAB6
{
    mangled_assert("?GetOptionName@Choice@GameOptions@@QBEPB_WI@Z");
    todo("implement");
    wchar_t const * __result = _sub_4FCAB6(this, arg);
    return __result;
}

_extern char const *_sub_4FCAD0(GameOptions::Choice const *const, unsigned __int32);
char const *GameOptions::Choice::GetOptionValue(unsigned __int32) const // 0x4FCAD0
{
    mangled_assert("?GetOptionValue@Choice@GameOptions@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_4FCAD0(this, arg);
    return __result;
}

_extern bool _sub_4FCBA9(GameOptions::Choice const *const);
bool GameOptions::Choice::IsVisible() const // 0x4FCBA9
{
    mangled_assert("?IsVisible@Choice@GameOptions@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4FCBA9(this);
    return __result;
}

/* ---------- private code */

_extern bool _sub_4FCB01(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, LuaConfig &, char const *);
_static bool GetStringAndLocalize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, LuaConfig &lc, char const *name) // 0x4FCB01
{
    mangled_assert("GetStringAndLocalize");
    todo("implement");
    bool __result = _sub_4FCB01(out, lc, name);
    return __result;
}
#endif
