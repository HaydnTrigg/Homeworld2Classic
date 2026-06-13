#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\FxGL\FXProperty.h>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <list>
#include <Render\FxGL\FXConditional.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

typedef `anonymous-namespace'::PROPERTY ?A0x1cb68a79::PROPERTY;

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXConditional::STYLE; // 0x7BE814

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F0714(FXConditional::Type *const, char const *);
FXConditional::Type::Type(char const *) // 0x6F0714
{
    mangled_assert("??0Type@FXConditional@@QAE@PBD@Z");
    todo("implement");
    _sub_6F0714(this, arg);
}

_extern void _sub_6F07D5(FXConditional::Type *const);
FXConditional::Type::~Type() // 0x6F07D5
{
    mangled_assert("??1Type@FXConditional@@UAE@XZ");
    todo("implement");
    _sub_6F07D5(this);
}

_extern FXManager::Style _sub_6F0940(FXConditional::Type const *const);
FXManager::Style FXConditional::Type::GetStyle() const // 0x6F0940
{
    mangled_assert("?GetStyle@Type@FXConditional@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
    FXManager::Style __result = _sub_6F0940(this);
    return __result;
}

_extern bool _sub_6F0944(FXConditional::Type const *const);
bool FXConditional::Type::IsVisible() const // 0x6F0944
{
    mangled_assert("?IsVisible@Type@FXConditional@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6F0944(this);
    return __result;
}

_extern float _sub_6F0896(FXConditional::Type const *const);
float FXConditional::Type::GetMaximumDuration() const // 0x6F0896
{
    mangled_assert("?GetMaximumDuration@Type@FXConditional@@UBEMXZ");
    todo("implement");
    float __result = _sub_6F0896(this);
    return __result;
}

_extern void _sub_6F085A(FXConditional::Type const *const, void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
void FXConditional::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F085A
{
    mangled_assert("?CreateObject@Type@FXConditional@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6F085A(this, arg, arg, arg, arg);
}

_extern void _sub_6F0981(FXConditional::Type *const);
void FXConditional::Type::Precache() // 0x6F0981
{
    mangled_assert("?Precache@Type@FXConditional@@UAEXXZ");
    todo("implement");
    _sub_6F0981(this);
}

_extern void _sub_6F0895(FXConditional::Type *const);
void FXConditional::Type::Flush() // 0x6F0895
{
    mangled_assert("?Flush@Type@FXConditional@@UAEXXZ");
    todo("implement");
    _sub_6F0895(this);
}

_extern void _sub_6F0A1F(FXConditional::Type const *const);
void FXConditional::Type::RenderBegin() const // 0x6F0A1F
{
    mangled_assert("?RenderBegin@Type@FXConditional@@UBEXXZ");
    todo("implement");
    _sub_6F0A1F(this);
}

_extern void _sub_6F0A20(FXConditional::Type const *const);
void FXConditional::Type::RenderEnd() const // 0x6F0A20
{
    mangled_assert("?RenderEnd@Type@FXConditional@@UBEXXZ");
    todo("implement");
    _sub_6F0A20(this);
}

_extern void _sub_6F0947(FXConditional::Type const *const, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXConditional::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F0947
{
    mangled_assert("?LinkedFx@Type@FXConditional@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6F0947(this, arg);
}

_extern bool _sub_6F09EA(FXConditional::Type const *const, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXConditional::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F09EA
{
    mangled_assert("?PropertyList@Type@FXConditional@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6F09EA(this, arg);
    return __result;
}

_extern bool _sub_6F09C2(FXConditional::Type const *const, unsigned __int32 const, FXManager::Type::Property &);
bool FXConditional::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F09C2
{
    mangled_assert("?PropertyAt@Type@FXConditional@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6F09C2(this, arg, arg);
    return __result;
}

_extern bool _sub_6F09D6(FXConditional::Type const *const, char const *, VarMulti &);
bool FXConditional::Type::PropertyGet(char const *, VarMulti &) const // 0x6F09D6
{
    mangled_assert("?PropertyGet@Type@FXConditional@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F09D6(this, arg, arg);
    return __result;
}

_extern bool _sub_6F09FA(FXConditional::Type *const, char const *, VarMulti const &);
bool FXConditional::Type::PropertySet(char const *, VarMulti const &) // 0x6F09FA
{
    mangled_assert("?PropertySet@Type@FXConditional@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F09FA(this, arg, arg);
    return __result;
}

_extern void _sub_6F0A21(FXConditional::Type *const);
void FXConditional::Type::SetDefaults() // 0x6F0A21
{
    mangled_assert("?SetDefaults@Type@FXConditional@@AAEXXZ");
    todo("implement");
    _sub_6F0A21(this);
}

_extern void _sub_6F0A89(FXConditional::Type *const);
void FXConditional::Type::SetProperties() // 0x6F0A89
{
    mangled_assert("?SetProperties@Type@FXConditional@@AAEXXZ");
    todo("implement");
    _sub_6F0A89(this);
}

_extern _sub_6F0611(FXConditional::Obj *const, FXConditional::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32);
FXConditional::Obj::Obj(FXConditional::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32) // 0x6F0611
{
    mangled_assert("??0Obj@FXConditional@@QAE@PBVType@1@ABUHandle@FXManager@@1I@Z");
    todo("implement");
    _sub_6F0611(this, arg, arg, arg, arg);
}

_extern void _sub_6F0779(FXConditional::Obj *const);
FXConditional::Obj::~Obj() // 0x6F0779
{
    mangled_assert("??1Obj@FXConditional@@UAE@XZ");
    todo("implement");
    _sub_6F0779(this);
}

_extern void _sub_6F0B7A(FXConditional::Obj *const, matrix4 const &);
void FXConditional::Obj::SetTransform(matrix4 const &) // 0x6F0B7A
{
    mangled_assert("?SetTransform@Obj@FXConditional@@UAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_6F0B7A(this, arg);
}

_extern void _sub_6F0B08(FXConditional::Obj *const, float);
void FXConditional::Obj::SetScale(float) // 0x6F0B08
{
    mangled_assert("?SetScale@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
    _sub_6F0B08(this, arg);
}

_extern void _sub_6F0A43(FXConditional::Obj *const, float);
void FXConditional::Obj::SetLength(float) // 0x6F0A43
{
    mangled_assert("?SetLength@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
    _sub_6F0A43(this, arg);
}

_extern void _sub_6F0BB0(FXConditional::Obj *const, bool);
void FXConditional::Obj::SetVisible(bool) // 0x6F0BB0
{
    mangled_assert("?SetVisible@Obj@FXConditional@@UAEX_N@Z");
    todo("implement");
    _sub_6F0BB0(this, arg);
}

_extern void _sub_6F0B4E(FXConditional::Obj *const);
void FXConditional::Obj::SetStop() // 0x6F0B4E
{
    mangled_assert("?SetStop@Obj@FXConditional@@UAEXXZ");
    todo("implement");
    _sub_6F0B4E(this);
}

_extern void _sub_6F0892(FXConditional::Obj *const, float);
void FXConditional::Obj::Display(float) // 0x6F0892
{
    mangled_assert("?Display@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
    _sub_6F0892(this, arg);
}

_extern bool _sub_6F0BE6(FXConditional::Obj *const, float);
bool FXConditional::Obj::Update(float) // 0x6F0BE6
{
    mangled_assert("?Update@Obj@FXConditional@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6F0BE6(this, arg);
    return __result;
}

/* ---------- private code */
#endif
