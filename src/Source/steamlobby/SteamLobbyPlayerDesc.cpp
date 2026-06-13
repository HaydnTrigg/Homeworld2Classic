#if 0
/* ---------- headers */

#include "decomp.h"
#include <util\types.h>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <xstring>
#include <pch.h>
#include <SteamLobby\SteamLobbyPlayerDesc.h>
#include <SteamLobby\steamlobbyexport.h>
#include <SteamLobby\steamlobbydefines.h>

/* ---------- constants */

/* ---------- definitions */

typedef `anonymous-namespace'::EqualParamName ?A0x3f92bd3f::EqualParamName;
typedef SteamLobbySessionDesc::Param argument_type;
typedef bool result_type;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > second_argument_type;
typedef std::random_access_iterator_tag iterator_category;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_1000159A(SteamLobbyPlayerDesc *const, SteamLobbyPlayerDesc const &);
_inline SteamLobbyPlayerDesc::SteamLobbyPlayerDesc(SteamLobbyPlayerDesc const &) // 0x1000159A
{
    mangled_assert("??0SteamLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000159A(this, arg);
}

_extern _sub_100015DD(SteamLobbyPlayerDesc *const);
SteamLobbyPlayerDesc::SteamLobbyPlayerDesc() // 0x100015DD
{
    mangled_assert("??0SteamLobbyPlayerDesc@@QAE@XZ");
    todo("implement");
    _sub_100015DD(this);
}

_extern void _sub_100019C6(SteamLobbyPlayerDesc *const);
_inline SteamLobbyPlayerDesc::~SteamLobbyPlayerDesc() // 0x100019C6
{
    _sub_100019C6(this);
}

_extern SteamLobbyPlayerDesc &_sub_10001637(SteamLobbyPlayerDesc *const, SteamLobbyPlayerDesc const &);
_inline SteamLobbyPlayerDesc &SteamLobbyPlayerDesc::operator=(SteamLobbyPlayerDesc const &) // 0x10001637
{
    mangled_assert("??4SteamLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbyPlayerDesc & __result = _sub_10001637(this, arg);
    return __result;
}

/* ---------- private code */
#endif
