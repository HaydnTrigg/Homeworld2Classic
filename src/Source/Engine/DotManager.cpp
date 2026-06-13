#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\objects\cliprect.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <weaponinfo.h>
#include <Mathlib\matrix3.h>
#include <playerresourcetype.h>
#include <new>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <exception>
#include <xstddef>
#include <task.h>
#include <type_traits>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <SobRigidBodyStatic.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <MeshAnimation.h>
#include <ship.h>
#include <ShieldTypes.h>
#include <fog.h>
#include <gameRender.h>
#include <Collision\BVH\octree.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <list>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Render\objects\texture.h>
#include <Subsystems\HardPointStatic.h>
#include <Render\objects\textureregistry.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\vector3.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\vector4.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <map>
#include <Interpolation.h>
#include <xhash>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\compiledtext.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector2.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <util\types.h>
#include <Mathlib\matvec.h>
#include <sobid.h>
#include <abilities.h>
#include <boost\cstdint.hpp>
#include <Render\gl\lotypes.h>
#include <Mathlib\quat.h>
#include <platform\osdef.h>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <profile\profile.h>
#include <seInterface2\PatchBase.h>
#include <iostream>
#include <seInterface2\SoundParams.h>
#include <Mathlib\mathlibdll.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\fastmath.h>
#include <lua.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <Modifiers\ModifierTargetCache.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\r_types.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <gameRenderDebug.h>
#include <boost\detail\lwm_win32.hpp>
#include <fixedpoint.h>
#include <platform\timer.h>
#include <util\fixed.h>
#include <platform\platformexports.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Camera\Plane3.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <DotManager.h>
#include <fileio\filepath.h>
#include <Render\gl\r_defines.h>
#include <wchar.h>
#include <Render\gl\glext.h>
#include <Render\objects\core.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool DotManagerStartup();
extern bool DotManagerShutdown();

/* ---------- globals */

extern DotManager *DotManager::s_instance; // 0x848734

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_5EB7E4();
bool DotManagerStartup() // 0x5EB7E4
{
    mangled_assert("?DotManagerStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EB7E4();
    return __result;
}

_extern bool _sub_5EB7DF();
bool DotManagerShutdown() // 0x5EB7DF
{
    mangled_assert("?DotManagerShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EB7DF();
    return __result;
}

_extern _sub_5EB784(DotManager *const);
DotManager::DotManager() // 0x5EB784
{
    mangled_assert("??0DotManager@@AAE@XZ");
    todo("implement");
    _sub_5EB784(this);
}

_extern void _sub_5EB7AE(DotManager *const);
DotManager::~DotManager() // 0x5EB7AE
{
    mangled_assert("??1DotManager@@AAE@XZ");
    todo("implement");
    _sub_5EB7AE(this);
}

_extern DotManager *_sub_5EB988();
DotManager *DotManager::i() // 0x5EB988
{
    mangled_assert("?i@DotManager@@SGPAV1@XZ");
    todo("implement");
    DotManager * __result = _sub_5EB988();
    return __result;
}

_extern bool _sub_5EB99C();
bool DotManager::release() // 0x5EB99C
{
    mangled_assert("?release@DotManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5EB99C();
    return __result;
}

_extern DotManager *_sub_5EB87D();
DotManager *DotManager::create() // 0x5EB87D
{
    mangled_assert("?create@DotManager@@CGPAV1@XZ");
    todo("implement");
    DotManager * __result = _sub_5EB87D();
    return __result;
}

_extern void _sub_5EB9DB(DotManager *const);
void DotManager::startup() // 0x5EB9DB
{
    mangled_assert("?startup@DotManager@@AAEXXZ");
    todo("implement");
    _sub_5EB9DB(this);
}

_extern void _sub_5EB9C0(DotManager *const);
void DotManager::shutdown() // 0x5EB9C0
{
    mangled_assert("?shutdown@DotManager@@AAEXXZ");
    todo("implement");
    _sub_5EB9C0(this);
}

_extern void _sub_5EB7F0(DotManager *const, vector4 const &, vector4 const &, float const, BlendFunc, BlendFunc);
void DotManager::batchPoint(vector4 const &, vector4 const &, float const, BlendFunc, BlendFunc) // 0x5EB7F0
{
    mangled_assert("?batchPoint@DotManager@@QAEXABVvector4@@0MW4BlendFunc@@1@Z");
    todo("implement");
    _sub_5EB7F0(this, arg, arg, arg, arg, arg);
}

_extern void _sub_5EB8AF(DotManager *const);
void DotManager::flushPointBatch() // 0x5EB8AF
{
    mangled_assert("?flushPointBatch@DotManager@@QAEXXZ");
    todo("implement");
    _sub_5EB8AF(this);
}

/* ---------- private code */
#endif
