#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <xfunctional>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <util\types.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <wchar.h>
#include <string>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::EqualParamName :
    public std::binary_function<LobbySessionDesc::Param,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,bool>
{
    bool operator()(LobbySessionDesc::Param const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualParamName) == 1, "Invalid `anonymous-namespace'::EqualParamName size");

typedef `anonymous-namespace'::EqualParamName ?A0x338f4db0::EqualParamName;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

LobbySessionDesc::LobbySessionDesc() // 0x472C1F
{
    mangled_assert("??0LobbySessionDesc@@QAE@XZ");
    todo("implement");
}

_inline LobbySessionDesc::Param::Param() // 0x472C2C
{
    mangled_assert("??0Param@LobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void LobbySessionDesc::Clear() // 0x472CB6
{
    mangled_assert("?Clear@LobbySessionDesc@@QAEXXZ");
    todo("implement");
}

unsigned __int32 LobbySessionDesc::GetParamCount() const // 0x472DC2
{
    mangled_assert("?GetParamCount@LobbySessionDesc@@QBEIXZ");
    todo("implement");
}

char const *LobbySessionDesc::GetName(unsigned __int32) const // 0x472D95
{
    mangled_assert("?GetName@LobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
}

wchar_t const *LobbySessionDesc::GetValue(unsigned __int32) const // 0x472DCE
{
    mangled_assert("?GetValue@LobbySessionDesc@@QBEPB_WI@Z");
    todo("implement");
}

void LobbySessionDesc::SetParam(char const *, wchar_t const *) // 0x472EEA
{
    mangled_assert("?SetParam@LobbySessionDesc@@QAEXPBDPB_W@Z");
    todo("implement");
}

void LobbySessionDesc::SetParam(char const *, __int32 const) // 0x472DFC
{
    mangled_assert("?SetParam@LobbySessionDesc@@QAEXPBDH@Z");
    todo("implement");
}

__int32 LobbySessionDesc::FindParamIndex(char const *) const // 0x472D25
{
    mangled_assert("?FindParamIndex@LobbySessionDesc@@ABEHPBD@Z");
    todo("implement");
}

wchar_t const *LobbySessionDesc::FindParam(char const *) const // 0x472CF8
{
    mangled_assert("?FindParam@LobbySessionDesc@@QBEPB_WPBD@Z");
    todo("implement");
}

bool LobbySessionDesc::FindIntParam(char const *, __int32 &) const // 0x472CBB
{
    mangled_assert("?FindIntParam@LobbySessionDesc@@QBE_NPBDAAH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
