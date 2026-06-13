#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <xmemory>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <debug\ctassert.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6E214F(VarMulti *const);
VarMulti::VarMulti() // 0x6E214F
{
    mangled_assert("??0VarMulti@@QAE@XZ");
    todo("implement");
    _sub_6E214F(this);
}

_extern void _sub_6E217B(VarMulti *const);
VarMulti::~VarMulti() // 0x6E217B
{
    mangled_assert("??1VarMulti@@QAE@XZ");
    todo("implement");
    _sub_6E217B(this);
}

_extern _sub_6E2137(VarMulti *const, VarMulti const &);
VarMulti::VarMulti(VarMulti const &) // 0x6E2137
{
    mangled_assert("??0VarMulti@@QAE@ABV0@@Z");
    todo("implement");
    _sub_6E2137(this, arg);
}

_extern VarMulti &_sub_6E2210(VarMulti *const, VarMulti const &);
VarMulti &VarMulti::operator=(VarMulti const &) // 0x6E2210
{
    mangled_assert("??4VarMulti@@QAEAAV0@ABV0@@Z");
    todo("implement");
    VarMulti & __result = _sub_6E2210(this, arg);
    return __result;
}

_extern void _sub_6E27A6(VarMulti *const);
void VarMulti::Reset() // 0x6E27A6
{
    mangled_assert("?Reset@VarMulti@@AAEXXZ");
    todo("implement");
    _sub_6E27A6(this);
}

_extern void _sub_6E2AEB(VarMulti *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void VarMulti::SetString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x6E2AEB
{
    mangled_assert("?SetString@VarMulti@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_6E2AEB(this, arg);
}

_extern void _sub_6E2B26(VarMulti *const, vector3 const &);
void VarMulti::SetVector3(vector3 const &) // 0x6E2B26
{
    mangled_assert("?SetVector3@VarMulti@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6E2B26(this, arg);
}

_extern void _sub_6E2A99(VarMulti *const, vector4 const &);
void VarMulti::SetColour(vector4 const &) // 0x6E2A99
{
    mangled_assert("?SetColour@VarMulti@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_6E2A99(this, arg);
}

_extern void _sub_6E285A(VarMulti *const, std::vector<float,std::allocator<float> > const &);
void VarMulti::SetArrayFloat(std::vector<float,std::allocator<float> > const &) // 0x6E285A
{
    mangled_assert("?SetArrayFloat@VarMulti@@QAEXABV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_6E285A(this, arg);
}

_extern bool _sub_6E25AB(VarMulti const *const, std::vector<float,std::allocator<float> > &);
bool VarMulti::GetArrayFloat(std::vector<float,std::allocator<float> > &) const // 0x6E25AB
{
    mangled_assert("?GetArrayFloat@VarMulti@@QBE_NAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E25AB(this, arg);
    return __result;
}

_extern void _sub_6E2A28(VarMulti *const, std::vector<vector3,std::allocator<vector3> > const &);
void VarMulti::SetArrayVector3(std::vector<vector3,std::allocator<vector3> > const &) // 0x6E2A28
{
    mangled_assert("?SetArrayVector3@VarMulti@@QAEXABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
    _sub_6E2A28(this, arg);
}

_extern bool _sub_6E26BB(VarMulti const *const, std::vector<vector3,std::allocator<vector3> > &);
bool VarMulti::GetArrayVector3(std::vector<vector3,std::allocator<vector3> > &) const // 0x6E26BB
{
    mangled_assert("?GetArrayVector3@VarMulti@@QBE_NAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E26BB(this, arg);
    return __result;
}

_extern void _sub_6E2802(VarMulti *const, std::vector<vector4,std::allocator<vector4> > const &);
void VarMulti::SetArrayColour(std::vector<vector4,std::allocator<vector4> > const &) // 0x6E2802
{
    mangled_assert("?SetArrayColour@VarMulti@@QAEXABV?$vector@Vvector4@@V?$allocator@Vvector4@@@std@@@std@@@Z");
    todo("implement");
    _sub_6E2802(this, arg);
}

_extern bool _sub_6E2566(VarMulti const *const, std::vector<vector4,std::allocator<vector4> > &);
bool VarMulti::GetArrayColour(std::vector<vector4,std::allocator<vector4> > &) const // 0x6E2566
{
    mangled_assert("?GetArrayColour@VarMulti@@QBE_NAAV?$vector@Vvector4@@V?$allocator@Vvector4@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E2566(this, arg);
    return __result;
}

_extern void _sub_6E293E(VarMulti *const, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &);
void VarMulti::SetArrayTimeFloat(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &) // 0x6E293E
{
    mangled_assert("?SetArrayTimeFloat@VarMulti@@QAEXABV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E293E(this, arg);
}

_extern bool _sub_6E2633(VarMulti const *const, std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &);
bool VarMulti::GetArrayTimeFloat(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > &) const // 0x6E2633
{
    mangled_assert("?GetArrayTimeFloat@VarMulti@@QBE_NAAV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E2633(this, arg);
    return __result;
}

_extern void _sub_6E28B2(VarMulti *const, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &);
void VarMulti::SetArrayTimeColour(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &) // 0x6E28B2
{
    mangled_assert("?SetArrayTimeColour@VarMulti@@QAEXABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E28B2(this, arg);
}

_extern bool _sub_6E25EE(VarMulti const *const, std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &);
bool VarMulti::GetArrayTimeColour(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > &) const // 0x6E25EE
{
    mangled_assert("?GetArrayTimeColour@VarMulti@@QBE_NAAV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E25EE(this, arg);
    return __result;
}

_extern void _sub_6E29B6(VarMulti *const, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &);
void VarMulti::SetArrayTimeVector3(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &) // 0x6E29B6
{
    mangled_assert("?SetArrayTimeVector3@VarMulti@@QAEXABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6E29B6(this, arg);
}

_extern bool _sub_6E2676(VarMulti const *const, std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &);
bool VarMulti::GetArrayTimeVector3(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > &) const // 0x6E2676
{
    mangled_assert("?GetArrayTimeVector3@VarMulti@@QBE_NAAV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_6E2676(this, arg);
    return __result;
}

/* ---------- private code */
#endif
