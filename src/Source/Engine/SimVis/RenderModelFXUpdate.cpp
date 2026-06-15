#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Interpolation.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <dbdefines.h>
#include <Render\gl\r_defines.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\gl\glext.h>
#include <Collision\Primitives\aabb.h>
#include <crtdefs.h>
#include <Universe.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Waypoint.h>
#include <sobid.h>
#include <SobUnmoveable.h>
#include <Player.h>
#include <Mathlib\matrix3.h>
#include <ResearchManager.h>
#include <abilities.h>
#include <RenderAnim\EffectAnimation.h>
#include <new>
#include <exception>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <xstddef>
#include <util\dictionary.h>
#include <type_traits>
#include <util\utilexports.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Render\objects\renderable.h>
#include <math.h>
#include <Collision\Primitives\capsule.h>
#include <list>
#include <Collision\Primitives\segment.h>
#include <RenderAnim\MarkerAnimation.h>
#include <Collision\BVH\profiling.h>
#include <HyperspaceManager.h>
#include <RenderAnim\MarkerInstance.h>
#include <Mathlib\vector3.h>
#include <SquadronList.h>
#include <Mathlib\vector4.h>
#include <profile\profile.h>
#include <Modifiers\ModifierTargetCache.h>
#include <iostream>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <fixedpoint.h>
#include <platform\timer.h>
#include <util\fixed.h>
#include <util\types.h>
#include <platform\platformexports.h>
#include <Render\objects\stateblock\stateblock.h>
#include <assist\asciictype.h>
#include <Render\objects\texture.h>
#include <boost\cstdint.hpp>
#include <Render\objects\textureregistry.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\config.hpp>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <assert.h>
#include <Mathlib\quat.h>
#include <platform\osdef.h>
#include <SimVis\RenderModelUtil.h>
#include <sob.h>
#include <Mathlib\mathlibdll.h>
#include <sobstatic.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\mesh.h>
#include <memory\memoryalloc.h>
#include <weaponinfo.h>
#include <SOBGroupManager.h>
#include <Render\objects\core.h>
#include <hash_map>
#include <Render\objects\objects.h>
#include <pathpoints.h>
#include <xhash>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <playerresourcetype.h>
#include <Render\gl\lotypes.h>
#include <TeamColourRegistry.h>
#include <memory\mmfixedpool.h>
#include <savegame.h>
#include <Race.h>
#include <boost\static_assert.hpp>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <task.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <selection.h>
#include <savegamedef.h>
#include <SobWithMeshStatic.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\r_types.h>
#include <bitset>
#include <ship.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <BuildManager.h>
#include <RenderAnim\RenderModel.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>
#include <Collision\BVH\octree.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <SimVis\RenderModelFXUpdate.h>
#include <Collision\BVH\Internal\span_i.h>
#include <RenderAnim\RenderModelInstance.h>
#include <wchar.h>
#include <Collision\BVH\proxy.h>
#include <RenderAnim\EffectAnimationList.h>
#include <Collision\intersect.h>
#include <RenderAnim\AnimEventContext.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointManager.h>
#include <assist\callback.h>
#include <Subsystems\HardPoint.h>
#include <memory\memorysmall.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <RenderAnim\AnimEvent.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 GetRandomMarkerList(char *buffer, char **markers, unsigned __int32 maxMarkers);
extern char const *FindRandomMarker(char const *input, char *buffer, unsigned __int32 bufferLen);

_static void MakeAlignZAxis(matrix4 &m, vector3 const &zAxis);
_static float getRenderModelSize(RenderModelInstance const *rm);
_static bool IsSobVisible(Sob const *pSob);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<RenderModelFXUpdate,1000> s_RenderModelFXUpdateAllocator; // 0x8447F0
}

/* ---------- public code */

_inline RenderModelInstance::ExtUpdate::ExtUpdate() // 0x51F08D
{
    mangled_assert("??0ExtUpdate@RenderModelInstance@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void *RenderModelFXUpdate::operator new(unsigned __int32 size) // 0x51F13F
{
    mangled_assert("??2RenderModelFXUpdate@@SGPAXI@Z");
    todo("implement");
}

void RenderModelFXUpdate::operator delete(void *p, unsigned __int32 size) // 0x51F14C
{
    mangled_assert("??3RenderModelFXUpdate@@SGXPAXI@Z");
    todo("implement");
}

float RenderModelFXUpdate::calculateFXScale(char const *scaleStr, RenderModelInstance const *rm) // 0x51F539
{
    mangled_assert("?calculateFXScale@RenderModelFXUpdate@@SGMPBDPBVRenderModelInstance@@@Z");
    todo("implement");
}

RenderModelFXUpdate::RenderModelFXUpdate(Sob const *) // 0x51F096
{
    mangled_assert("??0RenderModelFXUpdate@@QAE@PBVSob@@@Z");
    todo("implement");
}

RenderModelFXUpdate::~RenderModelFXUpdate() // 0x51F138
{
    mangled_assert("??1RenderModelFXUpdate@@UAE@XZ");
    todo("implement");
}

float RenderModelFXUpdate::getSize() const // 0x51F632
{
    mangled_assert("?getSize@RenderModelFXUpdate@@ABEMXZ");
    todo("implement");
}

float RenderModelFXUpdate::getEffectRadius() const // 0x51F5D3
{
    mangled_assert("?getEffectRadius@RenderModelFXUpdate@@ABEMXZ");
    todo("implement");
}

RenderModelInstance const *RenderModelFXUpdate::getTargetRMInstance() const // 0x51F63E
{
    mangled_assert("?getTargetRMInstance@RenderModelFXUpdate@@ABEPBVRenderModelInstance@@XZ");
    todo("implement");
}

void RenderModelFXUpdate::getSelfTransform(matrix4 &) const // 0x51F623
{
    mangled_assert("?getSelfTransform@RenderModelFXUpdate@@ABEXAAVmatrix4@@@Z");
    todo("implement");
}

void RenderModelFXUpdate::getTargetTransform(matrix4 &) const // 0x51F64B
{
    mangled_assert("?getTargetTransform@RenderModelFXUpdate@@ABEXAAVmatrix4@@@Z");
    todo("implement");
}

float RenderModelFXUpdate::getSelfNLipsScale() const // 0x51F605
{
    mangled_assert("?getSelfNLipsScale@RenderModelFXUpdate@@ABEMXZ");
    todo("implement");
}

float RenderModelFXUpdate::getTargetNLipsScale() const // 0x51F63B
{
    mangled_assert("?getTargetNLipsScale@RenderModelFXUpdate@@ABEMXZ");
    todo("implement");
}

unsigned __int32 GetRandomMarkerList(char *buffer, char **markers, unsigned __int32 maxMarkers) // 0x51F2C7
{
    mangled_assert("?GetRandomMarkerList@@YGIPADQAPADI@Z");
    todo("implement");
}

char const *FindRandomMarker(char const *input, char *buffer, unsigned __int32 bufferLen) // 0x51F277
{
    mangled_assert("?FindRandomMarker@@YGPBDPBDQADI@Z");
    todo("implement");
}

void RenderModelFXUpdate::setup(RenderModelInstance *, AnimEvent const &, FXManager::Handle, __int32) // 0x51F660
{
    mangled_assert("?setup@RenderModelFXUpdate@@QAEXPAVRenderModelInstance@@ABVAnimEvent@@UHandle@FXManager@@H@Z");
    todo("implement");
}

bool RenderModelFXUpdate::update() // 0x51F950
{
    mangled_assert("?update@RenderModelFXUpdate@@UAE_NXZ");
    todo("implement");
}

/* ---------- private code */

_static void MakeAlignZAxis(matrix4 &m, vector3 const &zAxis) // 0x51F368
{
    mangled_assert("MakeAlignZAxis");
    todo("implement");
}

_static float getRenderModelSize(RenderModelInstance const *rm) // 0x51F5D9
{
    mangled_assert("getRenderModelSize");
    todo("implement");
}

_static bool IsSobVisible(Sob const *pSob) // 0x51F30F
{
    mangled_assert("IsSobVisible");
    todo("implement");
}
#endif
