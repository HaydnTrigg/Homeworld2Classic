#if 0
/* ---------- headers */

#include "decomp.h"
#include <Interpolation.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <profile\profile.h>
#include <Mathlib\matrix3.h>
#include <iostream>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <SelTarg.h>
#include <xmemory>
#include <prim.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <list>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <sobid.h>
#include <map>
#include <seInterface2\PatchID.h>
#include <xtree>
#include <seInterface2\PatchBase.h>
#include <SOBGroupManager.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\bvh.h>
#include <Mathlib\quat.h>
#include <Camera\OrbitParameters.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Universe.h>
#include <Waypoint.h>
#include <boost\shared_ptr.hpp>
#include <SobUnmoveable.h>
#include <util\colour.h>
#include <Camera\CameraOrbitTarget.h>
#include <sobtypes.h>
#include <sob.h>
#include <boost\throw_exception.hpp>
#include <platform\timer.h>
#include <Camera\Camera.h>
#include <selection.h>
#include <sobstatic.h>
#include <platform\platformexports.h>
#include <Camera\Frustum.h>
#include <savegamedef.h>
#include <Collision\Primitives\sphere.h>
#include <Camera\Plane3.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <UniverseInterp.h>
#include <Collision\intersect.h>
#include <task.h>
#include <wchar.h>
#include <Collision\primitivesfwd.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void interpolateSobs<Selection>(Selection const &sobList, float timeElapsed, CameraOrbitTarget *camera);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern UniverseInterp *s_instance; // 0x84B85C
}

/* ---------- public code */

_extern _sub_6519D4(UniverseInterp::Data *const);
_inline UniverseInterp::Data::Data() // 0x6519D4
{
    mangled_assert("??0Data@UniverseInterp@@QAE@XZ");
    todo("implement");
    _sub_6519D4(this);
}

_extern bool _sub_651A8D();
bool UniverseInterp::Startup() // 0x651A8D
{
    mangled_assert("?Startup@UniverseInterp@@SG_NXZ");
    todo("implement");
    bool __result = _sub_651A8D();
    return __result;
}

_extern bool _sub_651A73();
bool UniverseInterp::Shutdown() // 0x651A73
{
    mangled_assert("?Shutdown@UniverseInterp@@SG_NXZ");
    todo("implement");
    bool __result = _sub_651A73();
    return __result;
}

_extern UniverseInterp *_sub_651A6D();
UniverseInterp *UniverseInterp::Instance() // 0x651A6D
{
    mangled_assert("?Instance@UniverseInterp@@SGPAV1@XZ");
    todo("implement");
    UniverseInterp * __result = _sub_651A6D();
    return __result;
}

_extern _sub_6519DA(UniverseInterp *const);
UniverseInterp::UniverseInterp() // 0x6519DA
{
    mangled_assert("??0UniverseInterp@@AAE@XZ");
    todo("implement");
    _sub_6519DA(this);
}

_extern void _sub_651A34(UniverseInterp *const);
UniverseInterp::~UniverseInterp() // 0x651A34
{
    mangled_assert("??1UniverseInterp@@EAE@XZ");
    todo("implement");
    _sub_651A34(this);
}

_extern __int32 _sub_651AD2(UniverseInterp *const, float);
__int32 UniverseInterp::taskFunction(float) // 0x651AD2
{
    mangled_assert("?taskFunction@UniverseInterp@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_651AD2(this, arg);
    return __result;
}

_extern void _sub_651AC6(UniverseInterp *const, CameraOrbitTarget *);
void UniverseInterp::attachCamera(CameraOrbitTarget *) // 0x651AC6
{
    mangled_assert("?attachCamera@UniverseInterp@@QAEXPAVCameraOrbitTarget@@@Z");
    todo("implement");
    _sub_651AC6(this, arg);
}

/* ---------- private code */

_extern void _sub_6518E1(Selection const &, float, CameraOrbitTarget *);
_static void interpolateSobs<Selection>(Selection const &sobList, float timeElapsed, CameraOrbitTarget *camera) // 0x6518E1
{
    mangled_assert("interpolateSobs<Selection>");
    todo("implement");
    _sub_6518E1(sobList, timeElapsed, camera);
}
#endif
