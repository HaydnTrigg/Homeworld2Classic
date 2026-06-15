#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\octree.h>
#include <Camera\CameraUtil.h>
#include <Collision\Primitives\obb.h>
#include <xstring>
#include <Collision\BVH\span.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointManager.h>
#include <pch.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPoint.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\SubSystemType.h>
#include <fileio\filepath.h>
#include <Mathlib\matrix3.h>
#include <Interpolation.h>
#include <new>
#include <Collision\Primitives\aabb.h>
#include <exception>
#include <xstddef>
#include <renderer.h>
#include <type_traits>
#include <gameRenderDebug.h>
#include <abilities.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <sobid.h>
#include <profile\profile.h>
#include <iostream>
#include <xutility>
#include <Camera\Camera.h>
#include <utility>
#include <iosfwd>
#include <Camera\Frustum.h>
#include <vector>
#include <Camera\Plane3.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\core.h>
#include <list>
#include <SelTarg.h>
#include <Mathlib\vector3.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <Mathlib\vector4.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Render\objects\cliprect.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector2.h>
#include <Modifiers\ModifierTargetCache.h>
#include <util\types.h>
#include <DotManager.h>
#include <Render\objects\texture.h>
#include <Render\gl\r_defines.h>
#include <Render\objects\textureregistry.h>
#include <Render\gl\glext.h>
#include <NavLightStyleManager.h>
#include <boost\cstdint.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <NavLights.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Mathlib\quat.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <fog.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <gameRender.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <Render\objects\fontsystem.h>
#include <debug\db.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <xhash>
#include <sob.h>
#include <Render\objects\compiledtext.h>
#include <sobstatic.h>
#include <weaponinfo.h>
#include <Collision\Primitives\sphere.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <luaconfig\luaconfig.h>
#include <savegamedef.h>
#include <lua.h>
#include <boost\detail\shared_count.hpp>
#include <playerresourcetype.h>
#include <boost\detail\lwm_win32.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\gl\r_types.h>
#include <SobWithMeshStatic.h>
#include <NavLightManager.h>
#include <wchar.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <ship.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<FogInterpolator *,std::allocator<FogInterpolator *> > FogInterpList;

/* ---------- prototypes */

extern bool navLightStartup();
extern bool navLightShutdown();

_static void spriteSetup(Camera const *pCamera, bool start);

/* ---------- globals */

extern NavLightManager *NavLightManager::s_instance; // 0x8498F8

/* ---------- private variables */

_static
{
    extern char const *NAVLIGHT_SCRIPT; // 0x83C670
}

/* ---------- public code */

bool navLightStartup() // 0x60A5BE
{
    mangled_assert("?navLightStartup@@YG_NXZ");
    todo("implement");
}

bool navLightShutdown() // 0x60A5B9
{
    mangled_assert("?navLightShutdown@@YG_NXZ");
    todo("implement");
}

_inline NavLightManager::Data::Data() // 0x609F04
{
    mangled_assert("??0Data@NavLightManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NavLightManager::NavLightManager() // 0x609F16
{
    mangled_assert("??0NavLightManager@@AAE@XZ");
    todo("implement");
}

_inline NavLightManager::Data::~Data() // 0x60A00D
{
    mangled_assert("??1Data@NavLightManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NavLightManager::~NavLightManager() // 0x60A015
{
    mangled_assert("??1NavLightManager@@AAE@XZ");
    todo("implement");
}

NavLightManager *NavLightManager::i() // 0x60A5A5
{
    mangled_assert("?i@NavLightManager@@SGPAV1@XZ");
    todo("implement");
}

bool NavLightManager::release() // 0x60A5CA
{
    mangled_assert("?release@NavLightManager@@SG_NXZ");
    todo("implement");
}

NavLightManager *NavLightManager::create() // 0x60A2A7
{
    mangled_assert("?create@NavLightManager@@CGPAV1@XZ");
    todo("implement");
}

void NavLightManager::startup() // 0x60AAAD
{
    mangled_assert("?startup@NavLightManager@@AAEXXZ");
    todo("implement");
}

void NavLightManager::shutdown() // 0x60AA44
{
    mangled_assert("?shutdown@NavLightManager@@AAEXXZ");
    todo("implement");
}

NavLightStyleManager *NavLightManager::getStyleManager() // 0x60A59F
{
    mangled_assert("?getStyleManager@NavLightManager@@QAEPAVNavLightStyleManager@@XZ");
    todo("implement");
}

void NavLightManager::setSpeedMultiplier(float) // 0x60AA34
{
    mangled_assert("?setSpeedMultiplier@NavLightManager@@QAEXM@Z");
    todo("implement");
}

float NavLightManager::getSpeedMultiplier() const // 0x60A599
{
    mangled_assert("?getSpeedMultiplier@NavLightManager@@QBEMXZ");
    todo("implement");
}

bool NavLightManager::enable(bool) // 0x60A4E8
{
    mangled_assert("?enable@NavLightManager@@QAE_N_N@Z");
    todo("implement");
}

void NavLightManager::batchLight(vector4 const &, vector4 const &, float) // 0x60A106
{
    mangled_assert("?batchLight@NavLightManager@@AAEXABVvector4@@0M@Z");
    todo("implement");
}

void NavLightManager::batchPoint(vector4 const &, vector4 const &, float const) // 0x60A27A
{
    mangled_assert("?batchPoint@NavLightManager@@QAEXABVvector4@@0M@Z");
    todo("implement");
}

void NavLightManager::flushBitmapBatch() // 0x60A4F7
{
    mangled_assert("?flushBitmapBatch@NavLightManager@@AAEXXZ");
    todo("implement");
}

void NavLightManager::flushPointBatch() // 0x60A562
{
    mangled_assert("?flushPointBatch@NavLightManager@@QAEXXZ");
    todo("implement");
}

void NavLightManager::drawAll(Camera const *, float const, Selection const &) // 0x60A2D9
{
    mangled_assert("?drawAll@NavLightManager@@QAEXPBVCamera@@MABVSelection@@@Z");
    todo("implement");
}

void NavLightManager::renderNavLights(Camera const *, NavLights const *, float) // 0x60A5EE
{
    mangled_assert("?renderNavLights@NavLightManager@@AAEXPBVCamera@@PBVNavLights@@M@Z");
    todo("implement");
}

bool NavLightManager::scriptLoad() // 0x60A96D
{
    mangled_assert("?scriptLoad@NavLightManager@@AAE_NXZ");
    todo("implement");
}

void NavLightManager::addSobWithMesh(SobWithMesh *) // 0x60A0FE
{
    mangled_assert("?addSobWithMesh@NavLightManager@@QAEXPAVSobWithMesh@@@Z");
    todo("implement");
}

Sob *NavLightManager::getSobWithMesh(unsigned __int32 const) const // 0x60A589
{
    mangled_assert("?getSobWithMesh@NavLightManager@@QBEPAVSob@@I@Z");
    todo("implement");
}

void NavLightManager::updateNavLights(float const) // 0x60AB46
{
    mangled_assert("?updateNavLights@NavLightManager@@QAEXM@Z");
    todo("implement");
}

/* ---------- private code */

_static void spriteSetup(Camera const *pCamera, bool start) // 0x60AA82
{
    mangled_assert("spriteSetup");
    todo("implement");
}
#endif
