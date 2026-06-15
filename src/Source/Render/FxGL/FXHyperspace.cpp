#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <Render\FxGL\FXProperty.h>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\objects\texture.h>
#include <new>
#include <Render\objects\objects.h>
#include <exception>
#include <xstddef>
#include <Render\objects\core.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <math.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <platform\osdef.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <Render\FxGL\FXShader.h>
#include <assist\faststring.h>
#include <Mathlib\vector2.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureanim.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <assist\typemagic.h>
#include <Render\objects\textureregistry.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <boost\checked_delete.hpp>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <list>
#include <wchar.h>
#include <Render\FxGL\FXHyperspace.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <Render\FxGL\FXGL.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::PROPERTY
{
    char const *name; // 0x0
    char const *desc; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::PROPERTY) == 8, "Invalid `anonymous-namespace'::PROPERTY size");

struct `anonymous-namespace'::Element
{
    unsigned __int32 index; // 0x0
    float distanceToCamera; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::Element) == 8, "Invalid `anonymous-namespace'::Element size");

class `anonymous-namespace'::DistanceToCameraPred
{
public:
    bool operator()(`anonymous-namespace'::Element const &, `anonymous-namespace'::Element const &);
};
static_assert(sizeof(`anonymous-namespace'::DistanceToCameraPred) == 1, "Invalid `anonymous-namespace'::DistanceToCameraPred size");

typedef `anonymous-namespace'::PROPERTY ?A0xbda06603::PROPERTY;
typedef `anonymous-namespace'::DistanceToCameraPred ?A0xbda06603::DistanceToCameraPred;
typedef `anonymous-namespace'::Element ?A0xbda06603::Element;

/* ---------- prototypes */


_static void RenderOutline(FatVertex *pFV, vector3 const &trans, vector4 const &col, vector3 const &uaxis, vector3 const &raxis, float uoff, float urep, bool bTexture);

/* ---------- globals */

extern FXManager::Style FXHyperspace::STYLE; // 0x7BE9B4

/* ---------- private variables */

/* ---------- public code */

FXHyperspace::Type::Type(char const *) // 0x6F195C
{
    mangled_assert("??0Type@FXHyperspace@@QAE@PBD@Z");
    todo("implement");
}

FXHyperspace::Type::~Type() // 0x6F1B9C
{
    mangled_assert("??1Type@FXHyperspace@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXHyperspace::Type::GetStyle() const // 0x6F2171
{
    mangled_assert("?GetStyle@Type@FXHyperspace@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

float FXHyperspace::Type::GetMaximumDuration() const // 0x6F2153
{
    mangled_assert("?GetMaximumDuration@Type@FXHyperspace@@UBEMXZ");
    todo("implement");
}

void FXHyperspace::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6F1DA7
{
    mangled_assert("?CreateObject@Type@FXHyperspace@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXHyperspace::Type::RenderBegin() const // 0x6F226A
{
    mangled_assert("?RenderBegin@Type@FXHyperspace@@UBEXXZ");
    todo("implement");
}

void FXHyperspace::Type::RenderEnd() const // 0x6F2329
{
    mangled_assert("?RenderEnd@Type@FXHyperspace@@UBEXXZ");
    todo("implement");
}

void FXHyperspace::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6F2175
{
    mangled_assert("?LinkedFx@Type@FXHyperspace@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXHyperspace::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6F2201
{
    mangled_assert("?PropertyList@Type@FXHyperspace@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXHyperspace::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6F21D9
{
    mangled_assert("?PropertyAt@Type@FXHyperspace@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXHyperspace::Type::PropertyGet(char const *, VarMulti &) const // 0x6F21ED
{
    mangled_assert("?PropertyGet@Type@FXHyperspace@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXHyperspace::Type::PropertySet(char const *, VarMulti const &) // 0x6F2211
{
    mangled_assert("?PropertySet@Type@FXHyperspace@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXHyperspace::Type::SetDefaults() // 0x6F2B84
{
    mangled_assert("?SetDefaults@Type@FXHyperspace@@AAEXXZ");
    todo("implement");
}

void FXHyperspace::Type::SetProperties() // 0x6F2F08
{
    mangled_assert("?SetProperties@Type@FXHyperspace@@AAEXXZ");
    todo("implement");
}

FXHyperspace::Renderer *FXHyperspace::Type::Renderer() const // 0x6F2B6B
{
    mangled_assert("?Renderer@Type@FXHyperspace@@QBEPAV02@XZ");
    todo("implement");
}

void FXHyperspace::Type::RendererAddRef() const // 0x6F2B72
{
    mangled_assert("?RendererAddRef@Type@FXHyperspace@@QBEXXZ");
    todo("implement");
}

void FXHyperspace::Type::RendererRelease() const // 0x6F2B7D
{
    mangled_assert("?RendererRelease@Type@FXHyperspace@@QBEXXZ");
    todo("implement");
}

void FXHyperspace::Type::Precache() // 0x6F2181
{
    mangled_assert("?Precache@Type@FXHyperspace@@UAEXXZ");
    todo("implement");
}

void FXHyperspace::Type::Flush() // 0x6F212F
{
    mangled_assert("?Flush@Type@FXHyperspace@@UAEXXZ");
    todo("implement");
}

FXHyperspace::Obj::Obj(FXHyperspace::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32) // 0x6F175C
{
    mangled_assert("??0Obj@FXHyperspace@@QAE@PBVType@1@ABUHandle@FXManager@@1I@Z");
    todo("implement");
}

_inline FXHyperspace::Renderer::Parms::Parms() // 0x6F1836
{
    mangled_assert("??0Parms@Renderer@FXHyperspace@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FXHyperspace::Obj::~Obj() // 0x6F1AAF
{
    mangled_assert("??1Obj@FXHyperspace@@UAE@XZ");
    todo("implement");
}

void FXHyperspace::Obj::UpdateRadius() // 0x6F3774
{
    mangled_assert("?UpdateRadius@Obj@FXHyperspace@@AAEXXZ");
    todo("implement");
}

bool FXHyperspace::Obj::Update(float) // 0x6F35CE
{
    mangled_assert("?Update@Obj@FXHyperspace@@UAE_NM@Z");
    todo("implement");
}

void FXHyperspace::Obj::Display(float) // 0x6F1DDF
{
    mangled_assert("?Display@Obj@FXHyperspace@@UAEXM@Z");
    todo("implement");
}

FXHyperspace::Renderer::Renderer(FXHyperspace::Type const *) // 0x6F1839
{
    mangled_assert("??0Renderer@FXHyperspace@@QAE@PBVType@1@@Z");
    todo("implement");
}

FXHyperspace::Renderer::~Renderer() // 0x6F1AC3
{
    mangled_assert("??1Renderer@FXHyperspace@@QAE@XZ");
    todo("implement");
}

FXShader const *FXHyperspace::Renderer::GetShader() const // 0x6F216D
{
    mangled_assert("?GetShader@Renderer@FXHyperspace@@QBEPBVFXShader@@XZ");
    todo("implement");
}

void FXHyperspace::Renderer::DisplayHyperspace(FXHyperspace::Obj const *, float, vector4 const &, vector4 const &, float, float, vector3 const &, float *, float *, float) // 0x6F1F1B
{
    mangled_assert("?DisplayHyperspace@Renderer@FXHyperspace@@QAEXPBVObj@2@MABVvector4@@1MMABVvector3@@QAM3M@Z");
    todo("implement");
}

void FXHyperspace::Renderer::RenderBegin() // 0x6F2236
{
    mangled_assert("?RenderBegin@Renderer@FXHyperspace@@QAEXXZ");
    todo("implement");
}

void FXHyperspace::Renderer::RenderHyperspaceOutline() // 0x6F2338
{
    mangled_assert("?RenderHyperspaceOutline@Renderer@FXHyperspace@@AAEXXZ");
    todo("implement");
}

void FXHyperspace::Renderer::SetupQuad(FatVertex *, FXHyperspace::Renderer::Parms const &, vector4 const &) // 0x6F336B
{
    mangled_assert("?SetupQuad@Renderer@FXHyperspace@@AAEXPAUFatVertex@@ABUParms@12@ABVvector4@@@Z");
    todo("implement");
}

void FXHyperspace::Renderer::RenderHyperspaceWindow() // 0x6F26AC
{
    mangled_assert("?RenderHyperspaceWindow@Renderer@FXHyperspace@@AAEXXZ");
    todo("implement");
}

void FXHyperspace::Renderer::RenderEnd() // 0x6F2279
{
    mangled_assert("?RenderEnd@Renderer@FXHyperspace@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static void RenderOutline(FatVertex *pFV, vector3 const &trans, vector4 const &col, vector3 const &uaxis, vector3 const &raxis, float uoff, float urep, bool bTexture) // 0x6F2874
{
    mangled_assert("RenderOutline");
    todo("implement");
}
#endif
