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

_extern _sub_472C1F(LobbySessionDesc *const);
LobbySessionDesc::LobbySessionDesc() // 0x472C1F
{
    mangled_assert("??0LobbySessionDesc@@QAE@XZ");
    todo("implement");
    _sub_472C1F(this);
}

_extern _sub_472C2C(LobbySessionDesc::Param *const);
_inline LobbySessionDesc::Param::Param() // 0x472C2C
{
    mangled_assert("??0Param@LobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_472C2C(this);
}

_extern void _sub_472CB6(LobbySessionDesc *const);
void LobbySessionDesc::Clear() // 0x472CB6
{
    mangled_assert("?Clear@LobbySessionDesc@@QAEXXZ");
    todo("implement");
    _sub_472CB6(this);
}

_extern unsigned __int32 _sub_472DC2(LobbySessionDesc const *const);
unsigned __int32 LobbySessionDesc::GetParamCount() const // 0x472DC2
{
    mangled_assert("?GetParamCount@LobbySessionDesc@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_472DC2(this);
    return __result;
}

_extern char const *_sub_472D95(LobbySessionDesc const *const, unsigned __int32);
char const *LobbySessionDesc::GetName(unsigned __int32) const // 0x472D95
{
    mangled_assert("?GetName@LobbySessionDesc@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_472D95(this, arg);
    return __result;
}

_extern wchar_t const *_sub_472DCE(LobbySessionDesc const *const, unsigned __int32);
wchar_t const *LobbySessionDesc::GetValue(unsigned __int32) const // 0x472DCE
{
    mangled_assert("?GetValue@LobbySessionDesc@@QBEPB_WI@Z");
    todo("implement");
    wchar_t const * __result = _sub_472DCE(this, arg);
    return __result;
}

_extern void _sub_472EEA(LobbySessionDesc *const, char const *, wchar_t const *);
void LobbySessionDesc::SetParam(char const *, wchar_t const *) // 0x472EEA
{
    mangled_assert("?SetParam@LobbySessionDesc@@QAEXPBDPB_W@Z");
    todo("implement");
    _sub_472EEA(this, arg, arg);
}

_extern void _sub_472DFC(LobbySessionDesc *const, char const *, __int32 const);
void LobbySessionDesc::SetParam(char const *, __int32 const) // 0x472DFC
{
    mangled_assert("?SetParam@LobbySessionDesc@@QAEXPBDH@Z");
    todo("implement");
    _sub_472DFC(this, arg, arg);
}

_extern __int32 _sub_472D25(LobbySessionDesc const *const, char const *);
__int32 LobbySessionDesc::FindParamIndex(char const *) const // 0x472D25
{
    mangled_assert("?FindParamIndex@LobbySessionDesc@@ABEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_472D25(this, arg);
    return __result;
}

_extern wchar_t const *_sub_472CF8(LobbySessionDesc const *const, char const *);
wchar_t const *LobbySessionDesc::FindParam(char const *) const // 0x472CF8
{
    mangled_assert("?FindParam@LobbySessionDesc@@QBEPB_WPBD@Z");
    todo("implement");
    wchar_t const * __result = _sub_472CF8(this, arg);
    return __result;
}

_extern bool _sub_472CBB(LobbySessionDesc const *const, char const *, __int32 &);
bool LobbySessionDesc::FindIntParam(char const *, __int32 &) const // 0x472CBB
{
    mangled_assert("?FindIntParam@LobbySessionDesc@@QBE_NPBDAAH@Z");
    todo("implement");
    bool __result = _sub_472CBB(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
