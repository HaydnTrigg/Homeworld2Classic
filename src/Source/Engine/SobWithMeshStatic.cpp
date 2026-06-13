#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Render\gl\lotypes.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <vector>
#include <Collision\Primitives\mesh.h>
#include <xmemory>
#include <Collision\Primitives\triangle.h>
#include <fileio\fileioexports.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <EngineGlow.h>
#include <math.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <list>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Interpolation.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <Collision\Primitives\aabb.h>
#include <lua.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <sob.h>
#include <sobid.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fileio\iff.h>
#include <Mathlib\quat.h>
#include <SelTarg.h>
#include <prim.h>
#include <MADState.h>
#include <Mathlib\mathlibdll.h>
#include <MeshAnimation.h>
#include <EngineBurn.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\capsule.h>
#include <debug\db.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <NavLightIFF.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Mathlib\mathutil.h>
#include <boost\detail\lwm_win32.hpp>
#include <EngineTrailSystem.h>
#include <platform\osdef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <SobWithMeshStatic.h>
#include <MultiplierTypes.h>
#include <SobRigidBodyStatic.h>
#include <wchar.h>
#include <Collision\BVH\bvh.h>
#include <sobstatic.h>
#include <NavLights.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <StaticModelRegistry.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<EngineGlowBinding *,std::allocator<EngineGlowBinding *> > GlowBindingCont;
typedef std::vector<EngineBurnInfo *,std::allocator<EngineBurnInfo *> > BurnInfoCont;
typedef std::vector<EngineBurnSpark,std::allocator<EngineBurnSpark> > SparkCont;
typedef std::vector<EngineBurnPath *,std::allocator<EngineBurnPath *> > BurnPathCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4C0034(SobWithMeshStatic::Model *const);
SobWithMeshStatic::Model::Model() // 0x4C0034
{
    mangled_assert("??0Model@SobWithMeshStatic@@QAE@XZ");
    todo("implement");
    _sub_4C0034(this);
}

_extern void _sub_4C0220(SobWithMeshStatic::Model *const);
SobWithMeshStatic::Model::~Model() // 0x4C0220
{
    mangled_assert("??1Model@SobWithMeshStatic@@QAE@XZ");
    todo("implement");
    _sub_4C0220(this);
}

_extern _sub_4C00A0(SobWithMeshStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SobWithMeshStatic::SobWithMeshStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4C00A0
{
    mangled_assert("??0SobWithMeshStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_4C00A0(this, arg, arg);
}

_extern void _sub_4C0285(SobWithMeshStatic *const);
SobWithMeshStatic::~SobWithMeshStatic() // 0x4C0285
{
    mangled_assert("??1SobWithMeshStatic@@UAE@XZ");
    todo("implement");
    _sub_4C0285(this);
}

_extern boost::shared_ptr<SobWithMeshStatic::Model> &_sub_4C02D3(boost::shared_ptr<SobWithMeshStatic::Model> *const, boost::shared_ptr<SobWithMeshStatic::Model> const &);
_inline boost::shared_ptr<SobWithMeshStatic::Model> &boost::shared_ptr<SobWithMeshStatic::Model>::operator=(boost::shared_ptr<SobWithMeshStatic::Model> const &) // 0x4C02D3
{
    mangled_assert("??4?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<SobWithMeshStatic::Model> & __result = _sub_4C02D3(this, arg);
    return __result;
}

_extern void _sub_4C088C(SobWithMeshStatic *const);
void SobWithMeshStatic::postStaticLoad() // 0x4C088C
{
    mangled_assert("?postStaticLoad@SobWithMeshStatic@@UAEXXZ");
    todo("implement");
    _sub_4C088C(this);
}

_extern void _sub_4C0676(SobWithMeshStatic *const, char const *, matrix3 &, vector3 &);
void SobWithMeshStatic::loadOrientation(char const *, matrix3 &, vector3 &) // 0x4C0676
{
    mangled_assert("?loadOrientation@SobWithMeshStatic@@AAEXPBDAAVmatrix3@@AAVvector3@@@Z");
    todo("implement");
    _sub_4C0676(this, arg, arg, arg);
}

_extern void _sub_4C095F(SobWithMeshStatic *const, MadStateStatic *);
void SobWithMeshStatic::setMADStatic(MadStateStatic *) // 0x4C095F
{
    mangled_assert("?setMADStatic@SobWithMeshStatic@@QAEXPAVMadStateStatic@@@Z");
    todo("implement");
    _sub_4C095F(this, arg);
}

_extern bool _sub_4C036A(SobWithMeshStatic *const, SobType, char const *);
bool SobWithMeshStatic::LoadModelBegin(SobType, char const *) // 0x4C036A
{
    mangled_assert("?LoadModelBegin@SobWithMeshStatic@@MAE_NW4SobType@@PBD@Z");
    todo("implement");
    bool __result = _sub_4C036A(this, arg, arg);
    return __result;
}

_extern void _sub_4C0466(SobWithMeshStatic *const);
void SobWithMeshStatic::LoadModelExecute() // 0x4C0466
{
    mangled_assert("?LoadModelExecute@SobWithMeshStatic@@MAEXXZ");
    todo("implement");
    _sub_4C0466(this);
}

_extern void _sub_4C03E6(SobWithMeshStatic *const, char const *);
void SobWithMeshStatic::LoadModelEnd(char const *) // 0x4C03E6
{
    mangled_assert("?LoadModelEnd@SobWithMeshStatic@@MAEXPBD@Z");
    todo("implement");
    _sub_4C03E6(this, arg);
}

_extern bool _sub_4C055D(SobWithMeshStatic *const, char const *);
bool SobWithMeshStatic::LoadModelFromCache(char const *) // 0x4C055D
{
    mangled_assert("?LoadModelFromCache@SobWithMeshStatic@@MAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_4C055D(this, arg);
    return __result;
}

_extern void _sub_4C05C7(SobWithMeshStatic *const, IFF *, IFFChunk *, void *, void *);
void SobWithMeshStatic::OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) // 0x4C05C7
{
    mangled_assert("?OnHandlingDTRM@SobWithMeshStatic@@MAEXPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    _sub_4C05C7(this, arg, arg, arg, arg);
}

/* ---------- private code */
#endif
