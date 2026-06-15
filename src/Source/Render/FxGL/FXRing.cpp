#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <bitset>
#include <Render\FxGL\FXProperty.h>
#include <fileio\filepath.h>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <fileio\fileioexports.h>
#include <xstring>
#include <fileio\bytestream.h>
#include <platform\osdef.h>
#include <assist\fixedstring.h>
#include <xmemory0>
#include <Render\objects\parentmesh.h>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <assist\stlexstring.h>
#include <profile\profile.h>
#include <iostream>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <assist\faststring.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\FxGL\FXMeshList.h>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <Render\gl\r_types.h>
#include <utility>
#include <Render\FxGL\MathHelp.h>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <Render\FxGL\FXShader.h>
#include <Render\objects\objects.h>
#include <Mathlib\vector2.h>
#include <math.h>
#include <assist\typemagic.h>
#include <Render\FxGL\FXUtil.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\r_defines.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\glext.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <boost\shared_ptr.hpp>
#include <Render\objects\textureanim.h>
#include <boost\checked_delete.hpp>
#include <Render\objects\renderable.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Render\FxGL\FXGL.h>
#include <debug\db.h>
#include <list>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <wchar.h>
#include <string>
#include <Render\objects\textureregistry.h>
#include <Render\FxGL\FXRing.h>
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

struct `anonymous-namespace'::Element
{
    unsigned __int32 index; // 0x0
    float distanceToCamera; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::Element) == 8, "Invalid `anonymous-namespace'::Element size");

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type>,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > > Typelist;
typedef stdext::hash_map<int,boost::shared_ptr<FXManager::Dynamics>,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > > Dynamicslist;
typedef std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > FXHandleList;
typedef std::list<FXManager::Handle,mempool_fs_alloc<FXManager::Handle> > FXChildrenlist;
typedef `anonymous-namespace'::FXHead ?A0x04b88453::FXHead;

class `anonymous-namespace'::DistanceToCameraPred
{
public:
    bool operator()(`anonymous-namespace'::Element const &, `anonymous-namespace'::Element const &);
};
static_assert(sizeof(`anonymous-namespace'::DistanceToCameraPred) == 1, "Invalid `anonymous-namespace'::DistanceToCameraPred size");

typedef std::vector<`anonymous namespace'::FXCache,std::allocator<`anonymous namespace'::FXCache> > FXCacheList;
typedef std::vector<`anonymous namespace'::FXUpdate,std::allocator<`anonymous namespace'::FXUpdate> > FXUpdateList;
typedef `anonymous-namespace'::FXRender ?A0x04b88453::FXRender;
typedef std::vector<`anonymous namespace'::FXRender,std::allocator<`anonymous namespace'::FXRender> > FXRenderList;
typedef `anonymous-namespace'::FXCache ?A0x04b88453::FXCache;
typedef `anonymous-namespace'::FXUpdate ?A0x04b88453::FXUpdate;
typedef std::vector<FXTrail::Object::Segment,std::allocator<FXTrail::Object::Segment> > SegmentList;
typedef `anonymous-namespace'::PROPERTY ?A0x79d7b43a::PROPERTY;
typedef `anonymous-namespace'::DistanceToCameraPred ?A0x79d7b43a::DistanceToCameraPred;
typedef `anonymous-namespace'::Element ?A0x79d7b43a::Element;

/* ---------- prototypes */


_static float ComputeDistanceFade(float distance, float startFade, float endFade);
_static void SetAlternateFOV(bool bSet);

/* ---------- globals */

extern FXManager::Style FXRing::STYLE; // 0x7BD574

/* ---------- private variables */

_static
{
    extern float const k_NoPointDistance; // 0x7BD578
}

/* ---------- public code */

FXRing::Type::Type(char const *) // 0x6E54A0
{
    mangled_assert("??0Type@FXRing@@QAE@PBD@Z");
    todo("implement");
}

FXRing::Type::~Type() // 0x6E56C4
{
    mangled_assert("??1Type@FXRing@@UAE@XZ");
    todo("implement");
}

FXManager::Style FXRing::Type::GetStyle() const // 0x6E6310
{
    mangled_assert("?GetStyle@Type@FXRing@@UBE?AW4Style@FXManager@@XZ");
    todo("implement");
}

float FXRing::Type::GetMaximumDuration() const // 0x6E61F7
{
    mangled_assert("?GetMaximumDuration@Type@FXRing@@UBEMXZ");
    todo("implement");
}

bool FXRing::Type::NeverDistanceCulled() const // 0x6E6462
{
    mangled_assert("?NeverDistanceCulled@Type@FXRing@@UBE_NXZ");
    todo("implement");
}

void FXRing::Type::CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const // 0x6E5DE3
{
    mangled_assert("?CreateObject@Type@FXRing@@UBEXPAXABUHandle@FXManager@@1H@Z");
    todo("implement");
}

void FXRing::Type::RenderBegin() const // 0x6E663B
{
    mangled_assert("?RenderBegin@Type@FXRing@@UBEXXZ");
    todo("implement");
}

void FXRing::Type::RenderEnd() const // 0x6E6F15
{
    mangled_assert("?RenderEnd@Type@FXRing@@UBEXXZ");
    todo("implement");
}

void FXRing::Type::LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6E6416
{
    mangled_assert("?LinkedFx@Type@FXRing@@UBEXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool FXRing::Type::PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const // 0x6E654E
{
    mangled_assert("?PropertyList@Type@FXRing@@UBE_NAAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@@Z");
    todo("implement");
}

bool FXRing::Type::PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const // 0x6E6526
{
    mangled_assert("?PropertyAt@Type@FXRing@@UBE_NIAAUProperty@1FXManager@@@Z");
    todo("implement");
}

bool FXRing::Type::PropertyGet(char const *, VarMulti &) const // 0x6E653A
{
    mangled_assert("?PropertyGet@Type@FXRing@@UBE_NPBDAAVVarMulti@@@Z");
    todo("implement");
}

bool FXRing::Type::PropertySet(char const *, VarMulti const &) // 0x6E655E
{
    mangled_assert("?PropertySet@Type@FXRing@@UAE_NPBDABVVarMulti@@@Z");
    todo("implement");
}

void FXRing::Type::SetDefaults() // 0x6E70FE
{
    mangled_assert("?SetDefaults@Type@FXRing@@AAEXXZ");
    todo("implement");
}

void FXRing::Type::SetProperties() // 0x6E734B
{
    mangled_assert("?SetProperties@Type@FXRing@@AAEXXZ");
    todo("implement");
}

FXRing::Renderer *FXRing::Type::Renderer() const // 0x6E70AD
{
    mangled_assert("?Renderer@Type@FXRing@@QBEPAV02@XZ");
    todo("implement");
}

void FXRing::Type::RendererAddRef() const // 0x6E70B4
{
    mangled_assert("?RendererAddRef@Type@FXRing@@QBEXXZ");
    todo("implement");
}

void FXRing::Type::RendererRelease() const // 0x6E70BF
{
    mangled_assert("?RendererRelease@Type@FXRing@@QBEXXZ");
    todo("implement");
}

void FXRing::Type::Precache() // 0x6E6477
{
    mangled_assert("?Precache@Type@FXRing@@UAEXXZ");
    todo("implement");
}

void FXRing::Type::Flush() // 0x6E61C3
{
    mangled_assert("?Flush@Type@FXRing@@UAEXXZ");
    todo("implement");
}

FXRing::Obj::Obj(FXRing::Type const *, FXManager::Handle const &, FXManager::Handle const &, unsigned __int32) // 0x6E4F76
{
    mangled_assert("??0Obj@FXRing@@QAE@PBVType@1@ABUHandle@FXManager@@1I@Z");
    todo("implement");
}

_inline FXRing::Renderer::Parms::Parms() // 0x6E5342
{
    mangled_assert("??0Parms@Renderer@FXRing@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FXRing::Obj::~Obj() // 0x6E55D2
{
    mangled_assert("??1Obj@FXRing@@UAE@XZ");
    todo("implement");
}

void FXRing::Obj::UpdateRadius() // 0x6E8240
{
    mangled_assert("?UpdateRadius@Obj@FXRing@@AAEXXZ");
    todo("implement");
}

void FXRing::Obj::SpawnOnDeath(float) // 0x6E7F06
{
    mangled_assert("?SpawnOnDeath@Obj@FXRing@@AAEXM@Z");
    todo("implement");
}

void FXRing::Obj::SpawnOnBirth() // 0x6E7DF3
{
    mangled_assert("?SpawnOnBirth@Obj@FXRing@@AAEXXZ");
    todo("implement");
}

bool FXRing::Obj::Update(float) // 0x6E7FBF
{
    mangled_assert("?Update@Obj@FXRing@@UAE_NM@Z");
    todo("implement");
}

void FXRing::Obj::Display(float) // 0x6E5E1B
{
    mangled_assert("?Display@Obj@FXRing@@UAEXM@Z");
    todo("implement");
}

FXRing::Renderer::Renderer(FXRing::Type const *) // 0x6E5345
{
    mangled_assert("??0Renderer@FXRing@@QAE@PBVType@1@@Z");
    todo("implement");
}

FXRing::Renderer::~Renderer() // 0x6E561F
{
    mangled_assert("??1Renderer@FXRing@@QAE@XZ");
    todo("implement");
}

float FXRing::Renderer::GetMeshRadius() const // 0x6E62D6
{
    mangled_assert("?GetMeshRadius@Renderer@FXRing@@QBEMXZ");
    todo("implement");
}

Mesh const *FXRing::Renderer::GetMesh() const // 0x6E62CE
{
    mangled_assert("?GetMesh@Renderer@FXRing@@QBEPBVMesh@@XZ");
    todo("implement");
}

FXMeshList const *FXRing::Renderer::GetMeshList() const // 0x6E62D2
{
    mangled_assert("?GetMeshList@Renderer@FXRing@@QBEPBVFXMeshList@@XZ");
    todo("implement");
}

FXShader const *FXRing::Renderer::GetShader() const // 0x6E6308
{
    mangled_assert("?GetShader@Renderer@FXRing@@QBEPBVFXShader@@XZ");
    todo("implement");
}

void FXRing::Renderer::DisplayRing(FXRing::Obj const *, float, vector4 const &, float, vector3 const &, vector3 const &, unsigned char, MeshInstance *) // 0x6E5EDB
{
    mangled_assert("?DisplayRing@Renderer@FXRing@@QAEXPBVObj@2@MABVvector4@@MABVvector3@@2EPAVMeshInstance@@@Z");
    todo("implement");
}

void FXRing::Renderer::RenderBegin() // 0x6E6583
{
    mangled_assert("?RenderBegin@Renderer@FXRing@@QAEXXZ");
    todo("implement");
}

void FXRing::Renderer::RenderBillboards() // 0x6E664A
{
    mangled_assert("?RenderBillboards@Renderer@FXRing@@AAEXXZ");
    todo("implement");
}

void FXRing::Renderer::RenderMeshesAnimated() // 0x6E6F24
{
    mangled_assert("?RenderMeshesAnimated@Renderer@FXRing@@AAEXXZ");
    todo("implement");
}

void FXRing::Renderer::RenderMeshesStatic() // 0x6E6F25
{
    mangled_assert("?RenderMeshesStatic@Renderer@FXRing@@AAEXXZ");
    todo("implement");
}

void FXRing::Renderer::RenderEnd() // 0x6E6E1F
{
    mangled_assert("?RenderEnd@Renderer@FXRing@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static float ComputeDistanceFade(float distance, float startFade, float endFade) // 0x6E5D8E
{
    mangled_assert("ComputeDistanceFade");
    todo("implement");
}

_static void SetAlternateFOV(bool bSet) // 0x6E70C6
{
    mangled_assert("SetAlternateFOV");
    todo("implement");
}
#endif
