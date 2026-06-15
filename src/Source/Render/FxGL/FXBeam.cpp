#if 0
/* ---------- headers */

#include "decomp.h"
#include <profile\profile.h>
#include <map>
#include <Render\FxGL\FXProperty.h>
#include <iostream>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <new>
#include <platform\osdef.h>
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
#include <math.h>
#include <Mathlib\vector3.h>
#include <assist\faststring.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <Mathlib\matrix3.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Render\gl\r_types.h>
#include <Mathlib\vector4.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\vector2.h>
#include <Render\FxGL\FXShader.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\FxGL\FXGL.h>
#include <assist\typemagic.h>
#include <boost\checked_delete.hpp>
#include <Render\objects\textureanim.h>
#include <Render\FxGL\MathHelp.h>
#include <Render\gl\types.h>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <list>
#include <wchar.h>
#include <Render\objects\textureregistry.h>
#include <Render\FxGL\FXBeam.h>
#include <Render\FxGL\FXManager.h>
#include <Render\gl\r_defines.h>
#include <debug\ctassert.h>
#include <Render\gl\glext.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

typedef `anonymous-namespace'::PROPERTY ?A0xd56bb08b::PROPERTY;
typedef vector2 QuadUV[4];
typedef std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > TextureCont;

/* ---------- prototypes */


_static _inline void WriteCoordLine(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v, float const fade);
_static _inline float ComputeEndFade(float fadeT, float t);
_static void BeamCoordsLine(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v, float fadeT);
_static _inline void WriteCoord(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v0, float const v1, float const fade);
_static void BeamCoords(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v0, float v1, float fadeT);
_static void grdDumpState(char const *name);

/* ---------- globals */

extern FXManager::Style FXBeam::STYLE; // 0x7BE28C
extern FXBeam::Renderer::Stat FXBeam::Renderer::s_stat; // 0x8568F4

/* ---------- private variables */

_static
{
    extern float const k_NoLineDistance; // 0x7BE290
}

/* ---------- public code */

FXBeam::Type::Type(char const *) // 0x6EA98E
{
    mangled_assert("??0Type@FXBeam@@QAE@PBD@Z");
    todo("implement");
}

FXBeam::Type::~Type() // 0x6EAB39
{
    mangled_assert("??1Type@FXBeam@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXBeam::Type::GetStyle() const // 0x6EBCC8
{
    mangled_assert("?GetStyle@Type@FXBeam@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

float FXBeam::Type::GetMaximumDuration() const // 0x6EBCC4
{
    mangled_assert("?GetMaximumDuration@Type@FXBeam@@UBEMXZ");
    todo("implement");
}

void FXBeam::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6EB4BD
{
    mangled_assert("?CreateObject@Type@FXBeam@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXBeam::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6EBCE6
{
    mangled_assert("?LinkedFx@Type@FXBeam@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXBeam::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6EBD72
{
    mangled_assert("?PropertyList@Type@FXBeam@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXBeam::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6EBD4A
{
    mangled_assert("?PropertyAt@Type@FXBeam@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXBeam::Type::PropertyGet(char const *, VarMulti &) const // 0x6EBD5E
{
    mangled_assert("?PropertyGet@Type@FXBeam@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXBeam::Type::PropertySet(char const *, VarMulti const &) // 0x6EBD82
{
    mangled_assert("?PropertySet@Type@FXBeam@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXBeam::Type::SetDefaults() // 0x6EC0E0
{
    mangled_assert("?SetDefaults@Type@FXBeam@@AAEXXZ");
    todo("implement");
}

void FXBeam::Type::SetProperties() // 0x6EC3C9
{
    mangled_assert("?SetProperties@Type@FXBeam@@AAEXXZ");
    todo("implement");
}

void FXBeam::Type::RenderBegin() const // 0x6EBF2A
{
    mangled_assert("?RenderBegin@Type@FXBeam@@UBEXXZ");
    todo("implement");
}

void FXBeam::Type::RenderEnd() const // 0x6EC094
{
    mangled_assert("?RenderEnd@Type@FXBeam@@UBEXXZ");
    todo("implement");
}

void FXBeam::Type::RenderStat() // 0x6EC0B2
{
    mangled_assert("?RenderStat@Type@FXBeam@@UAEXXZ");
    todo("implement");
}

FXBeam::Renderer *FXBeam::Type::Renderer() const // 0x6EC0C7
{
    mangled_assert("?Renderer@Type@FXBeam@@QBEPAV02@XZ");
    todo("implement");
}

void FXBeam::Type::RendererAddRef() const // 0x6EC0CE
{
    mangled_assert("?RendererAddRef@Type@FXBeam@@QBEXXZ");
    todo("implement");
}

void FXBeam::Type::RendererRelease() const // 0x6EC0D9
{
    mangled_assert("?RendererRelease@Type@FXBeam@@QBEXXZ");
    todo("implement");
}

void FXBeam::Type::Precache() // 0x6EBCF2
{
    mangled_assert("?Precache@Type@FXBeam@@UAEXXZ");
    todo("implement");
}

void FXBeam::Type::Flush() // 0x6EBCA7
{
    mangled_assert("?Flush@Type@FXBeam@@UAEXXZ");
    todo("implement");
}

FXBeam::Obj::Obj(FXBeam::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6EA7C6
{
    mangled_assert("??0Obj@FXBeam@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
}

_inline FXBeam::Renderer::Parms::Parms() // 0x6EA8A1
{
    mangled_assert("??0Parms@Renderer@FXBeam@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FXBeam::Obj::~Obj() // 0x6EAAA2
{
    mangled_assert("??1Obj@FXBeam@@UAE@XZ");
    todo("implement");
}

bool FXBeam::Obj::Update(float) // 0x6EC925
{
    mangled_assert("?Update@Obj@FXBeam@@UAE_NM@Z");
    todo("implement");
}

void FXBeam::Obj::Display(float) // 0x6EB4F5
{
    mangled_assert("?Display@Obj@FXBeam@@UAEXM@Z");
    todo("implement");
}

void FXBeam::Obj::UpdateRadius() // 0x6ECB2F
{
    mangled_assert("?UpdateRadius@Obj@FXBeam@@AAEXXZ");
    todo("implement");
}

FXBeam::Renderer::Renderer(FXBeam::Type const *) // 0x6EA8C7
{
    mangled_assert("??0Renderer@FXBeam@@QAE@PBVType@1@@Z");
    todo("implement");
}

FXBeam::Renderer::~Renderer() // 0x6EAAB6
{
    mangled_assert("??1Renderer@FXBeam@@QAE@XZ");
    todo("implement");
}

void FXBeam::Renderer::RenderBegin() // 0x6EBDA7
{
    mangled_assert("?RenderBegin@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
}

void FXBeam::Renderer::RenderEnd() // 0x6EBF39
{
    mangled_assert("?RenderEnd@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
}

void FXBeam::Renderer::RenderStat() // 0x6EC0A3
{
    mangled_assert("?RenderStat@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
}

void FXBeam::Renderer::Display(FXBeam::Obj const *, float, vector4 const &, float, float, float, float, float, float, vector3 const &, vector3 const &, float, unsigned __int32) // 0x6EB5B5
{
    mangled_assert("?Display@Renderer@FXBeam@@QAEXPBVObj@2@MABVvector4@@MMMMMMABVvector3@@2MI@Z");
    todo("implement");
}

/* ---------- private code */

_static _inline void WriteCoordLine(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v, float const fade) // 0x6ECCD4
{
    mangled_assert("WriteCoordLine");
    todo("implement");
}

_static _inline float ComputeEndFade(float fadeT, float t) // 0x6EB47B
{
    mangled_assert("ComputeEndFade");
    todo("implement");
}

_static void BeamCoordsLine(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v, float fadeT) // 0x6EB0C7
{
    mangled_assert("BeamCoordsLine");
    todo("implement");
}

_static _inline void WriteCoord(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v0, float const v1, float const fade) // 0x6ECBC8
{
    mangled_assert("WriteCoord");
    todo("implement");
}

_static void BeamCoords(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v0, float v1, float fadeT) // 0x6EAD30
{
    mangled_assert("BeamCoords");
    todo("implement");
}

_static void grdDumpState(char const *name) // 0x6ECFDA
{
    mangled_assert("grdDumpState");
    todo("implement");
}
#endif
