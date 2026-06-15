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

FXConditional::Type::Type(char const *) // 0x6F0714
{
    mangled_assert("??0Type@FXConditional@@QAE@PBD@Z");
    todo("implement");
}

FXConditional::Type::~Type() // 0x6F07D5
{
    mangled_assert("??1Type@FXConditional@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXConditional::Type::GetStyle() const // 0x6F0940
{
    mangled_assert("?GetStyle@Type@FXConditional@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

bool FXConditional::Type::IsVisible() const // 0x6F0944
{
    mangled_assert("?IsVisible@Type@FXConditional@@UBE_NXZ");
    todo("implement");
}

float FXConditional::Type::GetMaximumDuration() const // 0x6F0896
{
    mangled_assert("?GetMaximumDuration@Type@FXConditional@@UBEMXZ");
    todo("implement");
}

void FXConditional::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F085A
{
    mangled_assert("?CreateObject@Type@FXConditional@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXConditional::Type::Precache() // 0x6F0981
{
    mangled_assert("?Precache@Type@FXConditional@@UAEXXZ");
    todo("implement");
}

void FXConditional::Type::Flush() // 0x6F0895
{
    mangled_assert("?Flush@Type@FXConditional@@UAEXXZ");
    todo("implement");
}

void FXConditional::Type::RenderBegin() const // 0x6F0A1F
{
    mangled_assert("?RenderBegin@Type@FXConditional@@UBEXXZ");
    todo("implement");
}

void FXConditional::Type::RenderEnd() const // 0x6F0A20
{
    mangled_assert("?RenderEnd@Type@FXConditional@@UBEXXZ");
    todo("implement");
}

void FXConditional::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F0947
{
    mangled_assert("?LinkedFx@Type@FXConditional@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXConditional::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F09EA
{
    mangled_assert("?PropertyList@Type@FXConditional@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXConditional::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F09C2
{
    mangled_assert("?PropertyAt@Type@FXConditional@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXConditional::Type::PropertyGet(char const *, VarMulti &) const // 0x6F09D6
{
    mangled_assert("?PropertyGet@Type@FXConditional@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXConditional::Type::PropertySet(char const *, VarMulti const &) // 0x6F09FA
{
    mangled_assert("?PropertySet@Type@FXConditional@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXConditional::Type::SetDefaults() // 0x6F0A21
{
    mangled_assert("?SetDefaults@Type@FXConditional@@AAEXXZ");
    todo("implement");
}

void FXConditional::Type::SetProperties() // 0x6F0A89
{
    mangled_assert("?SetProperties@Type@FXConditional@@AAEXXZ");
    todo("implement");
}

FXConditional::Obj::Obj(FXConditional::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32) // 0x6F0611
{
    mangled_assert("??0Obj@FXConditional@@QAE@PBVType@1@ABUHandle@FXManager@@1I@Z");
    todo("implement");
}

FXConditional::Obj::~Obj() // 0x6F0779
{
    mangled_assert("??1Obj@FXConditional@@UAE@XZ");
    todo("implement");
}

void FXConditional::Obj::SetTransform(matrix4 const &) // 0x6F0B7A
{
    mangled_assert("?SetTransform@Obj@FXConditional@@UAEXABVmatrix4@@@Z");
    todo("implement");
}

void FXConditional::Obj::SetScale(float) // 0x6F0B08
{
    mangled_assert("?SetScale@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
}

void FXConditional::Obj::SetLength(float) // 0x6F0A43
{
    mangled_assert("?SetLength@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
}

void FXConditional::Obj::SetVisible(bool) // 0x6F0BB0
{
    mangled_assert("?SetVisible@Obj@FXConditional@@UAEX_N@Z");
    todo("implement");
}

void FXConditional::Obj::SetStop() // 0x6F0B4E
{
    mangled_assert("?SetStop@Obj@FXConditional@@UAEXXZ");
    todo("implement");
}

void FXConditional::Obj::Display(float) // 0x6F0892
{
    mangled_assert("?Display@Obj@FXConditional@@UAEXM@Z");
    todo("implement");
}

bool FXConditional::Obj::Update(float) // 0x6F0BE6
{
    mangled_assert("?Update@Obj@FXConditional@@UAE_NM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
