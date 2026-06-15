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
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\FxGL\FXSpray.h>
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

typedef `anonymous-namespace'::PROPERTY ?A0xd377a4ab::PROPERTY;

/* ---------- prototypes */


_static _inline float randf();
_static _inline vector3 GetInitialPosition(matrix4 const &transform, vector3 const &volume);
_static _inline vector3 GetInitialVelocity(vector3 const &dir, float theta, float v);

/* ---------- globals */

extern FXManager::Style FXSpray::STYLE; // 0x7BDD94

/* ---------- private variables */

/* ---------- public code */

FXSpray::Type::Type(char const *) // 0x6E8EAC
{
    mangled_assert("??0Type@FXSpray@@QAE@PBD@Z");
    todo("implement");
}

FXSpray::Type::~Type() // 0x6E8F92
{
    mangled_assert("??1Type@FXSpray@@UAE@XZ");
    todo("implement");
}

void FXSpray::Type::SetDefaults() // 0x6E9B30
{
    mangled_assert("?SetDefaults@Type@FXSpray@@AAEXXZ");
    todo("implement");
}

void FXSpray::Type::SetProperties() // 0x6E9DBE
{
    mangled_assert("?SetProperties@Type@FXSpray@@AAEXXZ");
    todo("implement");
}

FXManager::Style FXSpray::Type::GetStyle() const // 0x6E9A6D
{
    mangled_assert("?GetStyle@Type@FXSpray@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

bool FXSpray::Type::IsVisible() const // 0x6E9A8E
{
    mangled_assert("?IsVisible@Type@FXSpray@@UBE_NXZ");
    todo("implement");
}

float FXSpray::Type::GetMaximumDuration() const // 0x6E9A5C
{
    mangled_assert("?GetMaximumDuration@Type@FXSpray@@UBEMXZ");
    todo("implement");
}

void FXSpray::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6E909A
{
    mangled_assert("?CreateObject@Type@FXSpray@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

bool FXSpray::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6E9AF9
{
    mangled_assert("?PropertyList@Type@FXSpray@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXSpray::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6E9AD1
{
    mangled_assert("?PropertyAt@Type@FXSpray@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXSpray::Type::PropertyGet(char const *, VarMulti &) const // 0x6E9AE5
{
    mangled_assert("?PropertyGet@Type@FXSpray@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXSpray::Type::PropertySet(char const *, VarMulti const &) // 0x6E9B09
{
    mangled_assert("?PropertySet@Type@FXSpray@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXSpray::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6E9A91
{
    mangled_assert("?LinkedFx@Type@FXSpray@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

void FXSpray::Type::Precache() // 0x6E9AB5
{
    mangled_assert("?Precache@Type@FXSpray@@UAEXXZ");
    todo("implement");
}

void FXSpray::Type::Flush() // 0x6E90D5
{
    mangled_assert("?Flush@Type@FXSpray@@UAEXXZ");
    todo("implement");
}

void FXSpray::Type::RenderBegin() const // 0x6E9B2E
{
    mangled_assert("?RenderBegin@Type@FXSpray@@UBEXXZ");
    todo("implement");
}

void FXSpray::Type::RenderEnd() const // 0x6E9B2F
{
    mangled_assert("?RenderEnd@Type@FXSpray@@UBEXXZ");
    todo("implement");
}

FXSpray::Obj::Obj(FXSpray::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6E8E79
{
    mangled_assert("??0Obj@FXSpray@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
}

FXSpray::Obj::~Obj() // 0x6E8F87
{
    mangled_assert("??1Obj@FXSpray@@UAE@XZ");
    todo("implement");
}

bool FXSpray::Obj::Update(float) // 0x6EA3A0
{
    mangled_assert("?Update@Obj@FXSpray@@UAE_NM@Z");
    todo("implement");
}

void FXSpray::Obj::Display(float) // 0x6E90D2
{
    mangled_assert("?Display@Obj@FXSpray@@UAEXM@Z");
    todo("implement");
}

void FXSpray::Obj::GenerateParticles(float, float, bool) // 0x6E90D6
{
    mangled_assert("?GenerateParticles@Obj@FXSpray@@AAEXMM_N@Z");
    todo("implement");
}

/* ---------- private code */

_static _inline float randf() // 0x6EA50C
{
    mangled_assert("randf");
    todo("implement");
}

_static _inline vector3 GetInitialPosition(matrix4 const &transform, vector3 const &volume) // 0x6E96B5
{
    mangled_assert("GetInitialPosition");
    todo("implement");
}

_static _inline vector3 GetInitialVelocity(vector3 const &dir, float theta, float v) // 0x6E985D
{
    mangled_assert("GetInitialVelocity");
    todo("implement");
}
#endif
