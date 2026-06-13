#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\lotypes.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\r_types.h>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\capsule.h>
#include <new>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <NavLightStyleManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <gameRandom.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <list>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <boost\cstdint.hpp>
#include <HierarchyDynamic.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Mathlib\quat.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\mathlibdll.h>
#include <NavLightManager.h>
#include <random.h>
#include <Mathlib\fastmath.h>
#include <MeshAnimation.h>
#include <debug\db.h>
#include <Collision\BVH\octree.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <profile\profile.h>
#include <Interpolation.h>
#include <boost\detail\lwm_win32.hpp>
#include <iostream>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <platform\osdef.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\triangle.h>
#include <NavLights.h>
#include <sobid.h>
#include <Render\objects\light.h>
#include <wchar.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Light *,std::allocator<Light *> > LightCont;
typedef std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > JointCont;
typedef std::vector<NavLightStatic::NavLight,std::allocator<NavLightStatic::NavLight> > NavLightCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bPointLight; // 0x83C674
}

/* ---------- public code */

_extern _sub_60AD37(NavLightStatic *const);
NavLightStatic::NavLightStatic() // 0x60AD37
{
    mangled_assert("??0NavLightStatic@@QAE@XZ");
    todo("implement");
    _sub_60AD37(this);
}

_extern void _sub_60AEFD(NavLightStatic *const);
NavLightStatic::~NavLightStatic() // 0x60AEFD
{
    mangled_assert("??1NavLightStatic@@QAE@XZ");
    todo("implement");
    _sub_60AEFD(this);
}

_extern _sub_60AD44(NavLights *const, SobWithMesh *);
NavLights::NavLights(SobWithMesh *) // 0x60AD44
{
    mangled_assert("??0NavLights@@QAE@PAVSobWithMesh@@@Z");
    todo("implement");
    _sub_60AD44(this, arg);
}

_extern void _sub_60AF0D(NavLights *const);
NavLights::~NavLights() // 0x60AF0D
{
    mangled_assert("??1NavLights@@QAE@XZ");
    todo("implement");
    _sub_60AF0D(this);
}

_extern void _sub_60B32A(NavLights *const, float const);
void NavLights::setPower(float const) // 0x60B32A
{
    mangled_assert("?setPower@NavLights@@QAEXM@Z");
    todo("implement");
    _sub_60B32A(this, arg);
}

_extern void _sub_60B350(NavLights *const, float const, bool const);
void NavLights::update(float const, bool const) // 0x60B350
{
    mangled_assert("?update@NavLights@@QAEXM_N@Z");
    todo("implement");
    _sub_60B350(this, arg, arg);
}

_extern float _sub_60B1DB(NavLights const *const, NavLightStyle const *, float, float);
float NavLights::getLightStatus(NavLightStyle const *, float, float) const // 0x60B1DB
{
    mangled_assert("?getLightStatus@NavLights@@QBEMPBVNavLightStyle@@MM@Z");
    todo("implement");
    float __result = _sub_60B1DB(this, arg, arg, arg);
    return __result;
}

_extern void _sub_60AFB0(bool);
void NavLights::EnablePointLight(bool bEnable) // 0x60AFB0
{
    mangled_assert("?EnablePointLight@NavLights@@SGX_N@Z");
    todo("implement");
    _sub_60AFB0(bEnable);
}

_extern bool _sub_60AFBC();
bool NavLights::IsPointLightEnabled() // 0x60AFBC
{
    mangled_assert("?IsPointLightEnabled@NavLights@@SG_NXZ");
    todo("implement");
    bool __result = _sub_60AFBC();
    return __result;
}

/* ---------- private code */
#endif
