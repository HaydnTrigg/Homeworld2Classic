#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Render\gl\lotypes.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <MainUI.h>
#include <Selector.h>
#include <new>
#include <MetaSelTarg.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <ShaderVariables.h>
#include <Collision\Primitives\obb.h>
#include <fixedpoint.h>
#include <Collision\BVH\octree.h>
#include <util\fixed.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <dbdefines.h>
#include <vector>
#include <UnitCaps\UnitCaps.h>
#include <xmemory>
#include <debug\ctassert.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Interpolation.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <SensorsManager.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <SoundManager\SoundManager.h>
#include <Mathlib\vector3.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <abilities.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Graphics\BatchMeshRender.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Graphics\meshrenderproxy.h>
#include <seInterface2\SoundParams.h>
#include <HyperspaceManager.h>
#include <Render\objects\renderable.h>
#include <boost\scoped_array.hpp>
#include <SquadronList.h>
#include <fog.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Universe.h>
#include <profile\profile.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <iostream>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Camera\OrbitParameters.h>
#include <Render\objects\textureregistry.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <DotManager.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\sedefinesshared.h>
#include <platform\osdef.h>
#include <Sob\Pebble\Pebble.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Pebble *SpawnPebble(char const *pebblename, vector3 const &position);
extern void EnablePebbleDistribution(__int32 nr);
extern void DistributePebbles();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern vector3 const PebblePositions[97]; // 0x835C68
    extern bool sPebbleEnable; // 0x843F88
}

/* ---------- public code */

_extern _sub_4C3D58(Pebble *const, char const *);
Pebble::Pebble(char const *) // 0x4C3D58
{
    mangled_assert("??0Pebble@@QAE@PBD@Z");
    todo("implement");
    _sub_4C3D58(this, arg);
}

_extern void _sub_4C3D98(Pebble *const);
_inline Pebble::~Pebble() // 0x4C3D98
{
    mangled_assert("??1Pebble@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C3D98(this);
}

_extern bool _sub_4C4111(Pebble *const, Camera const *, vector4 const &, float);
bool Pebble::renderDot(Camera const *, vector4 const &, float) // 0x4C4111
{
    mangled_assert("?renderDot@Pebble@@AAE_NPBVCamera@@ABVvector4@@M@Z");
    todo("implement");
    bool __result = _sub_4C4111(this, arg, arg, arg);
    return __result;
}

_extern void _sub_4C4183(Pebble *const, vector3 const &);
void Pebble::setPosition(vector3 const &) // 0x4C4183
{
    mangled_assert("?setPosition@Pebble@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_4C4183(this, arg);
}

_extern void _sub_4C3EED(Pebble *const, Camera const *, MeshRenderProxy &);
void Pebble::render(Camera const *, MeshRenderProxy &) // 0x4C3EED
{
    mangled_assert("?render@Pebble@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
    _sub_4C3EED(this, arg, arg);
}

_extern Pebble *_sub_4C3E82(char const *, vector3 const &);
Pebble *SpawnPebble(char const *pebblename, vector3 const &position) // 0x4C3E82
{
    mangled_assert("?SpawnPebble@@YGPAVPebble@@PBDABVvector3@@@Z");
    todo("implement");
    Pebble * __result = _sub_4C3E82(pebblename, position);
    return __result;
}

_extern void _sub_4C3E37(__int32);
void EnablePebbleDistribution(__int32 nr) // 0x4C3E37
{
    mangled_assert("?EnablePebbleDistribution@@YGXH@Z");
    todo("implement");
    _sub_4C3E37(nr);
}

_extern void _sub_4C3DB9();
void DistributePebbles() // 0x4C3DB9
{
    mangled_assert("?DistributePebbles@@YGXXZ");
    todo("implement");
    _sub_4C3DB9();
}

/* ---------- private code */
#endif
