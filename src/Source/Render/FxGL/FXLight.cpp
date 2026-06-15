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
#include <Render\gl\r_types.h>
#include <Render\FxGL\VarMulti.h>
#include <Render\FxGL\MathHelp.h>
#include <util\colour.h>
#include <profile\profile.h>
#include <iostream>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <Render\FxGL\FXGL.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\light.h>
#include <Mathlib\vector4.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\matvec.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\vector2.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <platform\osdef.h>
#include <list>
#include <Render\FxGL\FXLight.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <Render\gl\lotypes.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXLight::STYLE; // 0x7BE8DC

/* ---------- private variables */

/* ---------- public code */

FXLight::Type::Type(char const *) // 0x6F0D9A
{
    mangled_assert("??0Type@FXLight@@QAE@PBD@Z");
    todo("implement");
}

FXLight::Type::~Type() // 0x6F0E3D
{
    mangled_assert("??1Type@FXLight@@UAE@XZ");
    todo("implement");
}

void FXLight::Type::SetDefaults() // 0x6F0FD6
{
    mangled_assert("?SetDefaults@Type@FXLight@@AAEXXZ");
    todo("implement");
}

void FXLight::Type::SetProperties() // 0x6F1109
{
    mangled_assert("?SetProperties@Type@FXLight@@AAEXXZ");
    todo("implement");
}

FXManager::Style FXLight::Type::GetStyle() const // 0x6F0F63
{
    mangled_assert("?GetStyle@Type@FXLight@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

bool FXLight::Type::IsVisible() const // 0x6F0F67
{
    mangled_assert("?IsVisible@Type@FXLight@@UBE_NXZ");
    todo("implement");
}

float FXLight::Type::GetMaximumDuration() const // 0x6F0F5F
{
    mangled_assert("?GetMaximumDuration@Type@FXLight@@UBEMXZ");
    todo("implement");
}

void FXLight::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F0F0E
{
    mangled_assert("?CreateObject@Type@FXLight@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

bool FXLight::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F0F9F
{
    mangled_assert("?PropertyList@Type@FXLight@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXLight::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F0F77
{
    mangled_assert("?PropertyAt@Type@FXLight@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXLight::Type::PropertyGet(char const *, VarMulti &) const // 0x6F0F8B
{
    mangled_assert("?PropertyGet@Type@FXLight@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXLight::Type::PropertySet(char const *, VarMulti const &) // 0x6F0FAF
{
    mangled_assert("?PropertySet@Type@FXLight@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXLight::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F0F6A
{
    mangled_assert("?LinkedFx@Type@FXLight@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

void FXLight::Type::Precache() // 0x6F0F76
{
    mangled_assert("?Precache@Type@FXLight@@UAEXXZ");
    todo("implement");
}

void FXLight::Type::Flush() // 0x6F0F5E
{
    mangled_assert("?Flush@Type@FXLight@@UAEXXZ");
    todo("implement");
}

void FXLight::Type::RenderBegin() const // 0x6F0FD4
{
    mangled_assert("?RenderBegin@Type@FXLight@@UBEXXZ");
    todo("implement");
}

void FXLight::Type::RenderEnd() const // 0x6F0FD5
{
    mangled_assert("?RenderEnd@Type@FXLight@@UBEXXZ");
    todo("implement");
}

FXLight::Obj::Obj(FXLight::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6F0C9F
{
    mangled_assert("??0Obj@FXLight@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
}

FXLight::Obj::~Obj() // 0x6F0E05
{
    mangled_assert("??1Obj@FXLight@@UAE@XZ");
    todo("implement");
}

void FXLight::Obj::UpdateRadius() // 0x6F14FA
{
    mangled_assert("?UpdateRadius@Obj@FXLight@@AAEXXZ");
    todo("implement");
}

bool FXLight::Obj::Update(float) // 0x6F129C
{
    mangled_assert("?Update@Obj@FXLight@@UAE_NM@Z");
    todo("implement");
}

void FXLight::Obj::Display(float) // 0x6F0F5B
{
    mangled_assert("?Display@Obj@FXLight@@UAEXM@Z");
    todo("implement");
}

void FXLight::Obj::CreateLight() // 0x6F0ECA
{
    mangled_assert("?CreateLight@Obj@FXLight@@AAEXXZ");
    todo("implement");
}

void FXLight::Obj::DestroyLight() // 0x6F0F46
{
    mangled_assert("?DestroyLight@Obj@FXLight@@AAEXXZ");
    todo("implement");
}

void FXLight::Obj::UpdateLight(vector3 const &, vector4 const &, float) // 0x6F14AF
{
    mangled_assert("?UpdateLight@Obj@FXLight@@AAEXABVvector3@@ABVvector4@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
