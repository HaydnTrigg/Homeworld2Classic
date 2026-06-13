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

_extern _sub_6EA98E(FXBeam::Type *const, char const *);
FXBeam::Type::Type(char const *) // 0x6EA98E
{
    mangled_assert("??0Type@FXBeam@@QAE@PBD@Z");
    todo("implement");
    _sub_6EA98E(this, arg);
}

_extern void _sub_6EAB39(FXBeam::Type *const);
FXBeam::Type::~Type() // 0x6EAB39
{
    mangled_assert("??1Type@FXBeam@@UAE@XZ");
    todo("implement");
    _sub_6EAB39(this);
}

_extern FXManager::Style _sub_6EBCC8(FXBeam::Type const *const);
FXManager::Style FXBeam::Type::GetStyle() const // 0x6EBCC8
{
    mangled_assert("?GetStyle@Type@FXBeam@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
    FXManager::Style __result = _sub_6EBCC8(this);
    return __result;
}

_extern float _sub_6EBCC4(FXBeam::Type const *const);
float FXBeam::Type::GetMaximumDuration() const // 0x6EBCC4
{
    mangled_assert("?GetMaximumDuration@Type@FXBeam@@UBEMXZ");
    todo("implement");
    float __result = _sub_6EBCC4(this);
    return __result;
}

_extern void _sub_6EB4BD(FXBeam::Type const *const, void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const);
void FXBeam::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6EB4BD
{
    mangled_assert("?CreateObject@Type@FXBeam@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6EB4BD(this, arg, arg, arg, arg);
}

_extern void _sub_6EBCE6(FXBeam::Type const *const, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXBeam::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6EBCE6
{
    mangled_assert("?LinkedFx@Type@FXBeam@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6EBCE6(this, arg);
}

_extern bool _sub_6EBD72(FXBeam::Type const *const, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXBeam::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6EBD72
{
    mangled_assert("?PropertyList@Type@FXBeam@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_6EBD72(this, arg);
    return __result;
}

_extern bool _sub_6EBD4A(FXBeam::Type const *const, unsigned __int32 const, FXManager::Type::Property &);
bool FXBeam::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6EBD4A
{
    mangled_assert("?PropertyAt@Type@FXBeam@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6EBD4A(this, arg, arg);
    return __result;
}

_extern bool _sub_6EBD5E(FXBeam::Type const *const, char const *, VarMulti &);
bool FXBeam::Type::PropertyGet(char const *, VarMulti &) const // 0x6EBD5E
{
    mangled_assert("?PropertyGet@Type@FXBeam@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6EBD5E(this, arg, arg);
    return __result;
}

_extern bool _sub_6EBD82(FXBeam::Type *const, char const *, VarMulti const &);
bool FXBeam::Type::PropertySet(char const *, VarMulti const &) // 0x6EBD82
{
    mangled_assert("?PropertySet@Type@FXBeam@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6EBD82(this, arg, arg);
    return __result;
}

_extern void _sub_6EC0E0(FXBeam::Type *const);
void FXBeam::Type::SetDefaults() // 0x6EC0E0
{
    mangled_assert("?SetDefaults@Type@FXBeam@@AAEXXZ");
    todo("implement");
    _sub_6EC0E0(this);
}

_extern void _sub_6EC3C9(FXBeam::Type *const);
void FXBeam::Type::SetProperties() // 0x6EC3C9
{
    mangled_assert("?SetProperties@Type@FXBeam@@AAEXXZ");
    todo("implement");
    _sub_6EC3C9(this);
}

_extern void _sub_6EBF2A(FXBeam::Type const *const);
void FXBeam::Type::RenderBegin() const // 0x6EBF2A
{
    mangled_assert("?RenderBegin@Type@FXBeam@@UBEXXZ");
    todo("implement");
    _sub_6EBF2A(this);
}

_extern void _sub_6EC094(FXBeam::Type const *const);
void FXBeam::Type::RenderEnd() const // 0x6EC094
{
    mangled_assert("?RenderEnd@Type@FXBeam@@UBEXXZ");
    todo("implement");
    _sub_6EC094(this);
}

_extern void _sub_6EC0B2(FXBeam::Type *const);
void FXBeam::Type::RenderStat() // 0x6EC0B2
{
    mangled_assert("?RenderStat@Type@FXBeam@@UAEXXZ");
    todo("implement");
    _sub_6EC0B2(this);
}

_extern FXBeam::Renderer *_sub_6EC0C7(FXBeam::Type const *const);
FXBeam::Renderer *FXBeam::Type::Renderer() const // 0x6EC0C7
{
    mangled_assert("?Renderer@Type@FXBeam@@QBEPAV02@XZ");
    todo("implement");
    FXBeam::Renderer * __result = _sub_6EC0C7(this);
    return __result;
}

_extern void _sub_6EC0CE(FXBeam::Type const *const);
void FXBeam::Type::RendererAddRef() const // 0x6EC0CE
{
    mangled_assert("?RendererAddRef@Type@FXBeam@@QBEXXZ");
    todo("implement");
    _sub_6EC0CE(this);
}

_extern void _sub_6EC0D9(FXBeam::Type const *const);
void FXBeam::Type::RendererRelease() const // 0x6EC0D9
{
    mangled_assert("?RendererRelease@Type@FXBeam@@QBEXXZ");
    todo("implement");
    _sub_6EC0D9(this);
}

_extern void _sub_6EBCF2(FXBeam::Type *const);
void FXBeam::Type::Precache() // 0x6EBCF2
{
    mangled_assert("?Precache@Type@FXBeam@@UAEXXZ");
    todo("implement");
    _sub_6EBCF2(this);
}

_extern void _sub_6EBCA7(FXBeam::Type *const);
void FXBeam::Type::Flush() // 0x6EBCA7
{
    mangled_assert("?Flush@Type@FXBeam@@UAEXXZ");
    todo("implement");
    _sub_6EBCA7(this);
}

_extern _sub_6EA7C6(FXBeam::Obj *const, FXBeam::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
FXBeam::Obj::Obj(FXBeam::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6EA7C6
{
    mangled_assert("??0Obj@FXBeam@@QAE@PBVType@1@ABUHandle@FXManager@@1H@Z");
    todo("implement");
    _sub_6EA7C6(this, arg, arg, arg, arg);
}

_extern _sub_6EA8A1(FXBeam::Renderer::Parms *const);
_inline FXBeam::Renderer::Parms::Parms() // 0x6EA8A1
{
    mangled_assert("??0Parms@Renderer@FXBeam@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6EA8A1(this);
}

_extern void _sub_6EAAA2(FXBeam::Obj *const);
FXBeam::Obj::~Obj() // 0x6EAAA2
{
    mangled_assert("??1Obj@FXBeam@@UAE@XZ");
    todo("implement");
    _sub_6EAAA2(this);
}

_extern bool _sub_6EC925(FXBeam::Obj *const, float);
bool FXBeam::Obj::Update(float) // 0x6EC925
{
    mangled_assert("?Update@Obj@FXBeam@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6EC925(this, arg);
    return __result;
}

_extern void _sub_6EB4F5(FXBeam::Obj *const, float);
void FXBeam::Obj::Display(float) // 0x6EB4F5
{
    mangled_assert("?Display@Obj@FXBeam@@UAEXM@Z");
    todo("implement");
    _sub_6EB4F5(this, arg);
}

_extern void _sub_6ECB2F(FXBeam::Obj *const);
void FXBeam::Obj::UpdateRadius() // 0x6ECB2F
{
    mangled_assert("?UpdateRadius@Obj@FXBeam@@AAEXXZ");
    todo("implement");
    _sub_6ECB2F(this);
}

_extern _sub_6EA8C7(FXBeam::Renderer *const, FXBeam::Type const *);
FXBeam::Renderer::Renderer(FXBeam::Type const *) // 0x6EA8C7
{
    mangled_assert("??0Renderer@FXBeam@@QAE@PBVType@1@@Z");
    todo("implement");
    _sub_6EA8C7(this, arg);
}

_extern void _sub_6EAAB6(FXBeam::Renderer *const);
FXBeam::Renderer::~Renderer() // 0x6EAAB6
{
    mangled_assert("??1Renderer@FXBeam@@QAE@XZ");
    todo("implement");
    _sub_6EAAB6(this);
}

_extern void _sub_6EBDA7(FXBeam::Renderer *const);
void FXBeam::Renderer::RenderBegin() // 0x6EBDA7
{
    mangled_assert("?RenderBegin@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
    _sub_6EBDA7(this);
}

_extern void _sub_6EBF39(FXBeam::Renderer *const);
void FXBeam::Renderer::RenderEnd() // 0x6EBF39
{
    mangled_assert("?RenderEnd@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
    _sub_6EBF39(this);
}

_extern void _sub_6EC0A3(FXBeam::Renderer *const);
void FXBeam::Renderer::RenderStat() // 0x6EC0A3
{
    mangled_assert("?RenderStat@Renderer@FXBeam@@QAEXXZ");
    todo("implement");
    _sub_6EC0A3(this);
}

_extern void _sub_6EB5B5(FXBeam::Renderer *const, FXBeam::Obj const *, float, vector4 const &, float, float, float, float, float, float, vector3 const &, vector3 const &, float, unsigned __int32);
void FXBeam::Renderer::Display(FXBeam::Obj const *, float, vector4 const &, float, float, float, float, float, float, vector3 const &, vector3 const &, float, unsigned __int32) // 0x6EB5B5
{
    mangled_assert("?Display@Renderer@FXBeam@@QAEXPBVObj@2@MABVvector4@@MMMMMMABVvector3@@2MI@Z");
    todo("implement");
    _sub_6EB5B5(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

/* ---------- private code */

_extern void _sub_6ECCD4(FatVertex *, vector3 const &, vector3 const &, vector4 const &, float const, float const, float const);
_static _inline void WriteCoordLine(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v, float const fade) // 0x6ECCD4
{
    mangled_assert("WriteCoordLine");
    todo("implement");
    _sub_6ECCD4(pFV, pos, ydist, col, u, v, fade);
}

_extern float _sub_6EB47B(float, float);
_static _inline float ComputeEndFade(float fadeT, float t) // 0x6EB47B
{
    mangled_assert("ComputeEndFade");
    todo("implement");
    float __result = _sub_6EB47B(fadeT, t);
    return __result;
}

_extern void _sub_6EB0C7(FatVertex *, FatVertex *, vector3 const &, vector3 const &, vector3 const &, vector4 const &, float const, float const, float, vector3 const &, float, float, float, float, float, float);
_static void BeamCoordsLine(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v, float fadeT) // 0x6EB0C7
{
    mangled_assert("BeamCoordsLine");
    todo("implement");
    _sub_6EB0C7(pStart, pEnd, start, end, ydist, col, uoff, urep, noise, arc, t, length, ustart, usize, v, fadeT);
}

_extern void _sub_6ECBC8(FatVertex *, vector3 const &, vector3 const &, vector4 const &, float const, float const, float const, float const);
_static _inline void WriteCoord(FatVertex *pFV, vector3 const &pos, vector3 const &ydist, vector4 const &col, float const u, float const v0, float const v1, float const fade) // 0x6ECBC8
{
    mangled_assert("WriteCoord");
    todo("implement");
    _sub_6ECBC8(pFV, pos, ydist, col, u, v0, v1, fade);
}

_extern void _sub_6EAD30(FatVertex *, FatVertex *, vector3 const &, vector3 const &, vector3 const &, vector4 const &, float const, float const, float, vector3 const &, float, float, float, float, float, float, float);
_static void BeamCoords(FatVertex *pStart, FatVertex *pEnd, vector3 const &start, vector3 const &end, vector3 const &ydist, vector4 const &col, float const uoff, float const urep, float noise, vector3 const &arc, float t, float length, float ustart, float usize, float v0, float v1, float fadeT) // 0x6EAD30
{
    mangled_assert("BeamCoords");
    todo("implement");
    _sub_6EAD30(pStart, pEnd, start, end, ydist, col, uoff, urep, noise, arc, t, length, ustart, usize, v0, v1, fadeT);
}

_extern void _sub_6ECFDA(char const *);
_static void grdDumpState(char const *name) // 0x6ECFDA
{
    mangled_assert("grdDumpState");
    todo("implement");
    _sub_6ECFDA(name);
}
#endif
