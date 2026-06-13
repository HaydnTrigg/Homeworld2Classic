#if 0
/* ---------- headers */

#include "decomp.h"
#include <util\types.h>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <string>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xstring>
#include <pch.h>
#include <SteamLobby\SteamLobbySessionDesc.h>
#include <SteamLobby\steamlobbyexport.h>
#include <xfunctional>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::EqualParamName :
    public std::binary_function<SteamLobbySessionDesc::Param,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,bool>
{
    bool operator()(SteamLobbySessionDesc::Param const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualParamName) == 1, "Invalid `anonymous-namespace'::EqualParamName size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10001959(SteamLobbySessionDesc::Param *const, SteamLobbySessionDesc::Param const &);
_inline SteamLobbySessionDesc::Param::Param(SteamLobbySessionDesc::Param const &) // 0x10001959
{
    mangled_assert("??0Param@SteamLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001959(this, arg);
}

_extern _sub_10001996(SteamLobbySessionDesc *const, SteamLobbySessionDesc const &);
_inline SteamLobbySessionDesc::SteamLobbySessionDesc(SteamLobbySessionDesc const &) // 0x10001996
{
    mangled_assert("??0SteamLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001996(this, arg);
}

_extern _sub_100019B1(SteamLobbySessionDesc *const);
SteamLobbySessionDesc::SteamLobbySessionDesc() // 0x100019B1
{
    mangled_assert("??0SteamLobbySessionDesc@@QAE@XZ");
    todo("implement");
    _sub_100019B1(this);
}

_extern void _sub_100019C6(SteamLobbySessionDesc::Param *const);
_inline SteamLobbySessionDesc::Param::~Param() // 0x100019C6
{
    mangled_assert("??1SteamLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100019C6(this);
}

_extern void _sub_100019D9(SteamLobbySessionDesc *const);
_inline SteamLobbySessionDesc::~SteamLobbySessionDesc() // 0x100019D9
{
    mangled_assert("??1SteamLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100019D9(this);
}

_extern SteamLobbySessionDesc::Param &_sub_10001B00(SteamLobbySessionDesc::Param *const, SteamLobbySessionDesc::Param const &);
_inline SteamLobbySessionDesc::Param &SteamLobbySessionDesc::Param::operator=(SteamLobbySessionDesc::Param const &) // 0x10001B00
{
    mangled_assert("??4Param@SteamLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbySessionDesc::Param & __result = _sub_10001B00(this, arg);
    return __result;
}

_extern SteamLobbySessionDesc &_sub_10001B21(SteamLobbySessionDesc *const, SteamLobbySessionDesc const &);
_inline SteamLobbySessionDesc &SteamLobbySessionDesc::operator=(SteamLobbySessionDesc const &) // 0x10001B21
{
    mangled_assert("??4SteamLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamLobbySessionDesc & __result = _sub_10001B21(this, arg);
    return __result;
}

_extern void _sub_10001B62(SteamLobbySessionDesc *const);
void SteamLobbySessionDesc::Clear() // 0x10001B62
{
    mangled_assert("?Clear@SteamLobbySessionDesc@@QAEXXZ");
    todo("implement");
    _sub_10001B62(this);
}

_extern unsigned __int32 _sub_10001C81(SteamLobbySessionDesc const *const);
unsigned __int32 SteamLobbySessionDesc::GetParamCount() const // 0x10001C81
{
    mangled_assert("?GetParamCount@SteamLobbySessionDesc@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10001C81(this);
    return __result;
}

_extern char const *_sub_10001C54(SteamLobbySessionDesc const *const, unsigned __int32);
char const *SteamLobbySessionDesc::GetName(unsigned __int32) const // 0x10001C54
{
    mangled_assert("?GetName@SteamLobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_10001C54(this, arg);
    return __result;
}

_extern char const *_sub_10001C91(SteamLobbySessionDesc const *const, unsigned __int32);
char const *SteamLobbySessionDesc::GetValue(unsigned __int32) const // 0x10001C91
{
    mangled_assert("?GetValue@SteamLobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_10001C91(this, arg);
    return __result;
}

_extern void _sub_10001CBF(SteamLobbySessionDesc *const, char const *, char const *);
void SteamLobbySessionDesc::SetParam(char const *, char const *) // 0x10001CBF
{
    mangled_assert("?SetParam@SteamLobbySessionDesc@@QAEXPBD0@Z");
    todo("implement");
    _sub_10001CBF(this, arg, arg);
}

_extern void _sub_10001D8E(SteamLobbySessionDesc *const, char const *, unsigned long long const);
void SteamLobbySessionDesc::SetParam(char const *, unsigned long long const) // 0x10001D8E
{
    mangled_assert("?SetParam@SteamLobbySessionDesc@@QAEXPBD_K@Z");
    todo("implement");
    _sub_10001D8E(this, arg, arg);
}

_extern __int32 _sub_10001BD5(SteamLobbySessionDesc const *const, char const *);
__int32 SteamLobbySessionDesc::FindParamIndex(char const *) const // 0x10001BD5
{
    mangled_assert("?FindParamIndex@SteamLobbySessionDesc@@ABEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_10001BD5(this, arg);
    return __result;
}

_extern char const *_sub_10001BA8(SteamLobbySessionDesc const *const, char const *);
char const *SteamLobbySessionDesc::FindParam(char const *) const // 0x10001BA8
{
    mangled_assert("?FindParam@SteamLobbySessionDesc@@QBEPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_10001BA8(this, arg);
    return __result;
}

_extern bool _sub_10001B67(SteamLobbySessionDesc const *const, char const *, unsigned long long &);
bool SteamLobbySessionDesc::FindIntParam(char const *, unsigned long long &) const // 0x10001B67
{
    mangled_assert("?FindIntParam@SteamLobbySessionDesc@@QBE_NPBDAA_K@Z");
    todo("implement");
    bool __result = _sub_10001B67(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
