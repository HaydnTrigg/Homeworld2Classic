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
#include <GSLobby\GSLobbySessionDesc.h>
#include <GSLobby\gslobbyexport.h>
#include <xfunctional>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::EqualParamName :
    public std::binary_function<GSLobbySessionDesc::Param,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,bool>
{
    bool operator()(GSLobbySessionDesc::Param const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualParamName) == 1, "Invalid `anonymous-namespace'::EqualParamName size");

typedef `anonymous-namespace'::EqualParamName ?A0xee4db7fd::EqualParamName;
typedef GSLobbySessionDesc::Param argument_type;
typedef bool result_type;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > second_argument_type;
typedef std::random_access_iterator_tag iterator_category;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline GSLobbySessionDesc::GSLobbySessionDesc(GSLobbySessionDesc const &) // 0x10001A3A
{
    mangled_assert("??0GSLobbySessionDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

GSLobbySessionDesc::GSLobbySessionDesc() // 0x10001A55
{
    mangled_assert("??0GSLobbySessionDesc@@QAE@XZ");
    todo("implement");
}

_inline GSLobbySessionDesc::Param::Param(GSLobbySessionDesc::Param const &) // 0x10001A62
{
    mangled_assert("??0Param@GSLobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::~GSLobbySessionDesc() // 0x10001AA7
{
    mangled_assert("??1GSLobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::Param::~Param() // 0x10001AAC
{
    mangled_assert("??1GSLobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc &GSLobbySessionDesc::operator=(GSLobbySessionDesc const &) // 0x10001BE1
{
    mangled_assert("??4GSLobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline GSLobbySessionDesc::Param &GSLobbySessionDesc::Param::operator=(GSLobbySessionDesc::Param const &) // 0x10001BFC
{
    mangled_assert("??4Param@GSLobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void GSLobbySessionDesc::Clear() // 0x10001C43
{
    mangled_assert("?Clear@GSLobbySessionDesc@@QAEXXZ");
    todo("implement");
}

unsigned __int32 GSLobbySessionDesc::GetParamCount() const // 0x10001D5E
{
    mangled_assert("?GetParamCount@GSLobbySessionDesc@@QBEIXZ");
    todo("implement");
}

char const *GSLobbySessionDesc::GetName(unsigned __int32) const // 0x10001D31
{
    mangled_assert("?GetName@GSLobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
}

char const *GSLobbySessionDesc::GetValue(unsigned __int32) const // 0x10001D6E
{
    mangled_assert("?GetValue@GSLobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
}

void GSLobbySessionDesc::SetParam(char const *, char const *) // 0x10001D9C
{
    mangled_assert("?SetParam@GSLobbySessionDesc@@QAEXPBD0@Z");
    todo("implement");
}

void GSLobbySessionDesc::SetParam(char const *, __int32 const) // 0x10001E6B
{
    mangled_assert("?SetParam@GSLobbySessionDesc@@QAEXPBDH@Z");
    todo("implement");
}

__int32 GSLobbySessionDesc::FindParamIndex(char const *) const // 0x10001CB2
{
    mangled_assert("?FindParamIndex@GSLobbySessionDesc@@ABEHPBD@Z");
    todo("implement");
}

char const *GSLobbySessionDesc::FindParam(char const *) const // 0x10001C85
{
    mangled_assert("?FindParam@GSLobbySessionDesc@@QBEPBDPBD@Z");
    todo("implement");
}

bool GSLobbySessionDesc::FindIntParam(char const *, __int32 &) const // 0x10001C48
{
    mangled_assert("?FindIntParam@GSLobbySessionDesc@@QBE_NPBDAAH@Z");
    todo("implement");
}

/* ---------- private code */
#endif
