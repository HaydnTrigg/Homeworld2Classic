#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <Render\FxGL\FXProperty.h>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <Render\gl\lotypes.h>
#include <xstring>
#include <Render\FxGL\FXShader.h>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <Render\gl\r_types.h>
#include <Render\FxGL\FXGL.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\FxGL\VarMulti.h>
#include <Render\objects\core.h>
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
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\textureregistry.h>
#include <boost\checked_delete.hpp>
#include <boost\next_prior.hpp>
#include <platform\osdef.h>
#include <list>
#include <Render\FxGL\MathHelp.h>
#include <Render\gl\types.h>
#include <Render\FxGL\FXTrail.h>
#include <Mathlib\matvec.h>
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

typedef `anonymous-namespace'::PROPERTY ?A0x8d9d7cd3::PROPERTY;

/* ---------- prototypes */

/* ---------- globals */

extern FXManager::Style FXTrail::STYLE; // 0x7BE5C0
extern FXTrail::Renderer::Stat FXTrail::Renderer::m_stat; // 0x856904

/* ---------- private variables */

_static
{
    extern float const k_NoLineDistance; // 0x7BE54C
}

/* ---------- public code */

FXTrail::Type::Type(char const *) // 0x6ED8D4
{
    mangled_assert("??0Type@FXTrail@@QAE@PBD@Z");
    todo("implement");
}

FXTrail::Type::~Type() // 0x6ED9F2
{
    mangled_assert("??1Type@FXTrail@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXTrail::Type::GetStyle() const // 0x6EDCF9
{
    mangled_assert("?GetStyle@Type@FXTrail@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

float FXTrail::Type::GetMaximumDuration() const // 0x6EDCF2
{
    mangled_assert("?GetMaximumDuration@Type@FXTrail@@UBEMXZ");
    todo("implement");
}

void FXTrail::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6EDC30
{
    mangled_assert("?CreateObject@Type@FXTrail@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXTrail::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6EDD17
{
    mangled_assert("?LinkedFx@Type@FXTrail@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXTrail::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6EDDA3
{
    mangled_assert("?PropertyList@Type@FXTrail@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXTrail::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6EDD7B
{
    mangled_assert("?PropertyAt@Type@FXTrail@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXTrail::Type::PropertyGet(char const *, VarMulti &) const // 0x6EDD8F
{
    mangled_assert("?PropertyGet@Type@FXTrail@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXTrail::Type::PropertySet(char const *, VarMulti const &) // 0x6EDDB3
{
    mangled_assert("?PropertySet@Type@FXTrail@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXTrail::Type::SetDefaults() // 0x6EEAAA
{
    mangled_assert("?SetDefaults@Type@FXTrail@@AAEXXZ");
    todo("implement");
}

void FXTrail::Type::SetProperties() // 0x6EEB60
{
    mangled_assert("?SetProperties@Type@FXTrail@@AAEXXZ");
    todo("implement");
}

FXTrail::Renderer *FXTrail::Type::Renderer() const // 0x6EEA91
{
    mangled_assert("?Renderer@Type@FXTrail@@QBEPAV02@XZ");
    todo("implement");
}

void FXTrail::Type::RendererAddRef() const // 0x6EEA98
{
    mangled_assert("?RendererAddRef@Type@FXTrail@@QBEXXZ");
    todo("implement");
}

void FXTrail::Type::RendererRelease() const // 0x6EEAA3
{
    mangled_assert("?RendererRelease@Type@FXTrail@@QBEXXZ");
    todo("implement");
}

void FXTrail::Type::Precache() // 0x6EDD23
{
    mangled_assert("?Precache@Type@FXTrail@@UAEXXZ");
    todo("implement");
}

void FXTrail::Type::Flush() // 0x6EDCD5
{
    mangled_assert("?Flush@Type@FXTrail@@UAEXXZ");
    todo("implement");
}

void FXTrail::Type::RenderBegin() const // 0x6EDEFF
{
    mangled_assert("?RenderBegin@Type@FXTrail@@UBEXXZ");
    todo("implement");
}

void FXTrail::Type::RenderEnd() const // 0x6EE087
{
    mangled_assert("?RenderEnd@Type@FXTrail@@UBEXXZ");
    todo("implement");
}

void FXTrail::Type::RenderStat() // 0x6EE0A5
{
    mangled_assert("?RenderStat@Type@FXTrail@@UAEXXZ");
    todo("implement");
}

FXTrail::Object::Object(FXTrail::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6ED6E7
{
    mangled_assert("??0Object@FXTrail@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
}

FXTrail::Object::~Object() // 0x6ED963
{
    mangled_assert("??1Object@FXTrail@@UAE@XZ");
    todo("implement");
}

bool FXTrail::Object::Update(float) // 0x6EEFD2
{
    mangled_assert("?Update@Object@FXTrail@@UAE_NM@Z");
    todo("implement");
}

void FXTrail::Object::UpdateRadius() // 0x6EF3BE
{
    mangled_assert("?UpdateRadius@Object@FXTrail@@AAEXXZ");
    todo("implement");
}

void FXTrail::Object::Display(float) // 0x6EDC68
{
    mangled_assert("?Display@Object@FXTrail@@UAEXM@Z");
    todo("implement");
}

FXTrail::Renderer::Renderer(FXTrail::Type const *) // 0x6ED86C
{
    mangled_assert("??0Renderer@FXTrail@@QAE@PBVType@1@@Z");
    todo("implement");
}

_inline FXTrail::Object::Segment::Segment() // 0x6ED8C4
{
    mangled_assert("??0Segment@Object@FXTrail@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FXTrail::Renderer::~Renderer() // 0x6ED988
{
    mangled_assert("??1Renderer@FXTrail@@QAE@XZ");
    todo("implement");
}

void FXTrail::Renderer::Display(FXTrail::Object const *, std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const &, float const) // 0x6EDC92
{
    mangled_assert("?Display@Renderer@FXTrail@@QAEXPBVObject@2@ABV?$vector@USegment@Object@FXTrail@@V?$allocator@USegment@Object@FXTrail@@@std@@@std@@M@Z");
    todo("implement");
}

void FXTrail::Renderer::RenderBegin() // 0x6EDDD8
{
    mangled_assert("?RenderBegin@Renderer@FXTrail@@QAEXXZ");
    todo("implement");
}

void FXTrail::Renderer::RenderEnd() // 0x6EDF0E
{
    mangled_assert("?RenderEnd@Renderer@FXTrail@@QAEXXZ");
    todo("implement");
}

void FXTrail::Renderer::RenderStat() // 0x6EE096
{
    mangled_assert("?RenderStat@Renderer@FXTrail@@QAEXXZ");
    todo("implement");
}

void FXTrail::Renderer::RenderTrail(std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const *, float) // 0x6EE0BA
{
    mangled_assert("?RenderTrail@Renderer@FXTrail@@AAEXPBV?$vector@USegment@Object@FXTrail@@V?$allocator@USegment@Object@FXTrail@@@std@@@std@@M@Z");
    todo("implement");
}

void FXTrail::Renderer::RenderTrailLine(std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > const *, float) // 0x6EE7AC
{
    mangled_assert("?RenderTrailLine@Renderer@FXTrail@@AAEXPBV?$vector@USegment@Object@FXTrail@@V?$allocator@USegment@Object@FXTrail@@@std@@@std@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
