#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <Render\FxGL\FXProperty.h>
#include <xtree>
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
#include <utility>
#include <assist\typemagic.h>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <profile\profile.h>
#include <iostream>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <list>
#include <Render\FxGL\FXCombo.h>
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

typedef `anonymous-namespace'::PROPERTY ?A0xc65c707f::PROPERTY;

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXCombo::STYLE; // 0x7BE708

/* ---------- private variables */

/* ---------- public code */

FXCombo::Type::Type(char const *) // 0x6EFED2
{
    mangled_assert("??0Type@FXCombo@@QAE@PBD@Z");
    todo("implement");
}

FXCombo::Type::~Type() // 0x6EFF9B
{
    mangled_assert("??1Type@FXCombo@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXCombo::Type::GetStyle() const // 0x6F0100
{
    mangled_assert("?GetStyle@Type@FXCombo@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

bool FXCombo::Type::IsVisible() const // 0x6F0104
{
    mangled_assert("?IsVisible@Type@FXCombo@@UBE_NXZ");
    todo("implement");
}

float FXCombo::Type::GetMaximumDuration() const // 0x6F0089
{
    mangled_assert("?GetMaximumDuration@Type@FXCombo@@UBEMXZ");
    todo("implement");
}

void FXCombo::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F004D
{
    mangled_assert("?CreateObject@Type@FXCombo@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXCombo::Type::Precache() // 0x6F01C7
{
    mangled_assert("?Precache@Type@FXCombo@@UAEXXZ");
    todo("implement");
}

void FXCombo::Type::Flush() // 0x6F0088
{
    mangled_assert("?Flush@Type@FXCombo@@UAEXXZ");
    todo("implement");
}

void FXCombo::Type::RenderBegin() const // 0x6F024E
{
    mangled_assert("?RenderBegin@Type@FXCombo@@UBEXXZ");
    todo("implement");
}

void FXCombo::Type::RenderEnd() const // 0x6F024F
{
    mangled_assert("?RenderEnd@Type@FXCombo@@UBEXXZ");
    todo("implement");
}

void FXCombo::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F0107
{
    mangled_assert("?LinkedFx@Type@FXCombo@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXCombo::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F0219
{
    mangled_assert("?PropertyList@Type@FXCombo@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXCombo::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F01F1
{
    mangled_assert("?PropertyAt@Type@FXCombo@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXCombo::Type::PropertyGet(char const *, VarMulti &) const // 0x6F0205
{
    mangled_assert("?PropertyGet@Type@FXCombo@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXCombo::Type::PropertySet(char const *, VarMulti const &) // 0x6F0229
{
    mangled_assert("?PropertySet@Type@FXCombo@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXCombo::Type::SetDefaults() // 0x6F0250
{
    mangled_assert("?SetDefaults@Type@FXCombo@@AAEXXZ");
    todo("implement");
}

void FXCombo::Type::SetProperties() // 0x6F034D
{
    mangled_assert("?SetProperties@Type@FXCombo@@AAEXXZ");
    todo("implement");
}

FXCombo::Obj::Obj(FXCombo::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) // 0x6EFDE9
{
    mangled_assert("??0Obj@FXCombo@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
}

FXCombo::Obj::~Obj() // 0x6EFF90
{
    mangled_assert("??1Obj@FXCombo@@UAE@XZ");
    todo("implement");
}

void FXCombo::Obj::SetTransform(matrix4 const &) // 0x6F0559
{
    mangled_assert("?SetTransform@Obj@FXCombo@@UAEXABVmatrix4@@@Z");
    todo("implement");
}

void FXCombo::Obj::SetScale(float) // 0x6F050F
{
    mangled_assert("?SetScale@Obj@FXCombo@@UAEXM@Z");
    todo("implement");
}

void FXCombo::Obj::SetLength(float) // 0x6F0303
{
    mangled_assert("?SetLength@Obj@FXCombo@@UAEXM@Z");
    todo("implement");
}

bool FXCombo::Obj::SetFadeT(float) // 0x6F02C8
{
    mangled_assert("?SetFadeT@Obj@FXCombo@@UAE_NM@Z");
    todo("implement");
}

void FXCombo::Obj::SetVelocity(vector3 const &) // 0x6F0593
{
    mangled_assert("?SetVelocity@Obj@FXCombo@@UAEXABVvector3@@@Z");
    todo("implement");
}

void FXCombo::Obj::Display(float) // 0x6F0085
{
    mangled_assert("?Display@Obj@FXCombo@@UAEXM@Z");
    todo("implement");
}

bool FXCombo::Obj::Update(float) // 0x6F05CD
{
    mangled_assert("?Update@Obj@FXCombo@@UAE_NM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
