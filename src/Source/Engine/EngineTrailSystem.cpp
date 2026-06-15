#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <HyperspaceManager.h>
#include <xstring>
#include <SquadronList.h>
#include <EngineBurn.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\matrix3.h>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Render\gl\r_defines.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Render\gl\glext.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <weaponinfo.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <EngineTrail.h>
#include <Collision\intersect.h>
#include <EngineTrailFrameList.h>
#include <Modifiers\ModifierTargetCache.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <fileio\iff.h>
#include <Interpolation.h>
#include <math.h>
#include <Viewer.h>
#include <Render\objects\texture.h>
#include <task.h>
#include <Render\objects\objects.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <stack>
#include <Render\objects\core.h>
#include <Camera\CameraUtil.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <scripting.h>
#include <ShieldTypes.h>
#include <scriptaccess.h>
#include <MeshAnimation.h>
#include <map>
#include <scripttypedef.h>
#include <xtree>
#include <Camera\Camera.h>
#include <boost\scoped_ptr.hpp>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <lua.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Mathlib\vector2.h>
#include <Subsystems\SubSystemType.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <fileio\filepath.h>
#include <profile\profile.h>
#include <iostream>
#include <HierarchyDynamic.h>
#include <EngineTrailSystem.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Mathlib\quat.h>
#include <SobWithMeshStatic.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\mesh.h>
#include <SobRigidBodyStatic.h>
#include <Race.h>
#include <Collision\Primitives\triangle.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <SoundManager\SoundEntityHandle.h>
#include <util\fixed.h>
#include <EngineGlow.h>
#include <Mathlib\mathlibdll.h>
#include <BuildManager.h>
#include <Mathlib\fastmath.h>
#include <dbdefines.h>
#include <TeamColourRegistry.h>
#include <Graphics\TeamColour.h>
#include <UnitCaps\UnitCaps.h>
#include <platform\osdef.h>
#include <savegame.h>
#include <pathpoints.h>
#include <SOBGroupManager.h>
#include <debug\db.h>
#include <hash_map>
#include <xhash>
#include <EngineTrailManager.h>
#include <Render\objects\textureregistry.h>
#include <renderer.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <Render\gl\types.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <Mathlib\matvec.h>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\gl\lotypes.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Render\gl\r_types.h>
#include <Player.h>
#include <ResearchManager.h>
#include <sob.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>
#include <abilities.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool engineTrailStartup();
extern bool engineTrailShutdown();
extern _inline void expandBoundingBox(vector3 const &point, vector3 &min, vector3 &max);
extern void drawAllEngineTrails(Camera const *camera, float timeElapsed);
extern bool engineTrailShapePrep(SobWithMeshStatic::Model *model, SobStatic::Model *sobStaticModel);
extern __int32 handle_EngineTrailShape_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 etSetEngineTrail(lua_State *lstate);
extern void engineTrailScriptingInit();

_static char const *getEngineNozzleName(unsigned __int32 index);
_static bool IsTrailVisible(SobWithMesh const &owner);
_static void drawEngineTrails(Camera const *camera, float timeElapsed, Selection const &renderList, unsigned __int32 &countDrawn, unsigned __int32 &countRejected);
_static __int32 countNumberOfEngineNozzles(HierarchyStatic *hier);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x75F96C
    extern float const ViewerUpdatePeriod; // 0x83308C
    extern float const CameraDistanceUpdateRate; // 0x75F970
    extern float const CameraDistanceUpdatePeriod; // 0x833090
    extern float const k_thrustEpsilon; // 0x75F974
    extern float const EngineTrailUpdateRate; // 0x75F978
    extern float const EngineTrailUpdatePeriod; // 0x833094
    extern char const *k_badEngineTrailName; // 0x833084
    extern float const k_TrailThrustThreshold; // 0x75F97C
    extern float const k_TrailStopTime; // 0x75F980
    extern bool g_bUseTrails; // 0x833088
    extern bool g_bUseGlows; // 0x833089
    extern bool g_bUseBurns; // 0x83308A
}

/* ---------- public code */

bool engineTrailStartup() // 0x4492AA
{
    mangled_assert("?engineTrailStartup@@YG_NXZ");
    todo("implement");
}

bool engineTrailShutdown() // 0x44928A
{
    mangled_assert("?engineTrailShutdown@@YG_NXZ");
    todo("implement");
}

EngineTrailStatic::Tweaks::Tweaks() // 0x44841B
{
    mangled_assert("??0Tweaks@EngineTrailStatic@@QAE@XZ");
    todo("implement");
}

EngineTrailStatic::Tweaks::~Tweaks() // 0x44853A
{
    mangled_assert("??1Tweaks@EngineTrailStatic@@QAE@XZ");
    todo("implement");
}

EngineTrailStatic::EngineTrailStatic() // 0x448270
{
    mangled_assert("??0EngineTrailStatic@@QAE@XZ");
    todo("implement");
}

void EngineTrailStatic::setNumNozzles(unsigned __int32) // 0x449D5E
{
    mangled_assert("?setNumNozzles@EngineTrailStatic@@QAEXI@Z");
    todo("implement");
}

EngineTrailShape *EngineTrailStatic::getShape(unsigned __int32) // 0x44977E
{
    mangled_assert("?getShape@EngineTrailStatic@@QAEPAVEngineTrailShape@@I@Z");
    todo("implement");
}

EngineTrailShape const *EngineTrailStatic::getShape(unsigned __int32) const // 0x44979D
{
    mangled_assert("?getShape@EngineTrailStatic@@QBEPBVEngineTrailShape@@I@Z");
    todo("implement");
}

void EngineTrailStatic::setLingerTime(unsigned __int32, float) // 0x449D3C
{
    mangled_assert("?setLingerTime@EngineTrailStatic@@QAEXIM@Z");
    todo("implement");
}

void EngineTrailStatic::setTexture(unsigned __int32, Texture *) // 0x449DE2
{
    mangled_assert("?setTexture@EngineTrailStatic@@QAEXIPAVTexture@@@Z");
    todo("implement");
}

EngineTrailStatic::~EngineTrailStatic() // 0x448477
{
    mangled_assert("??1EngineTrailStatic@@QAE@XZ");
    todo("implement");
}

void EngineTrailStatic::calculateDiameter() // 0x448BDF
{
    mangled_assert("?calculateDiameter@EngineTrailStatic@@QAEXXZ");
    todo("implement");
}

EngineTrailShape::EngineTrailShape() // 0x448243
{
    mangled_assert("??0EngineTrailShape@@QAE@XZ");
    todo("implement");
}

EngineTrailShape::EngineTrailShape(unsigned __int32) // 0x4481ED
{
    mangled_assert("??0EngineTrailShape@@QAE@I@Z");
    todo("implement");
}

EngineTrailShape::~EngineTrailShape() // 0x44845F
{
    mangled_assert("??1EngineTrailShape@@QAE@XZ");
    todo("implement");
}

EngineTrailSystem::EngineTrailSystem(SobWithMesh *) // 0x448307
{
    mangled_assert("??0EngineTrailSystem@@QAE@PAVSobWithMesh@@@Z");
    todo("implement");
}

EngineTrailSystem::~EngineTrailSystem() // 0x4484E7
{
    mangled_assert("??1EngineTrailSystem@@QAE@XZ");
    todo("implement");
}

void EngineTrailSystem::initializeNozzles() // 0x449B15
{
    mangled_assert("?initializeNozzles@EngineTrailSystem@@AAEXXZ");
    todo("implement");
}

void EngineTrailSystem::setTrail(unsigned __int32, EngineTrail *) // 0x449E8D
{
    mangled_assert("?setTrail@EngineTrailSystem@@AAEXIPAVEngineTrail@@@Z");
    todo("implement");
}

void EngineTrailSystem::setTrailState(EngineTrailSystem::TrailState) // 0x449ED6
{
    mangled_assert("?setTrailState@EngineTrailSystem@@QAEXW4TrailState@1@@Z");
    todo("implement");
}

void EngineTrailSystem::startTrail() // 0x449FD1
{
    mangled_assert("?startTrail@EngineTrailSystem@@AAEXXZ");
    todo("implement");
}

void EngineTrailSystem::stopTrail() // 0x44A02C
{
    mangled_assert("?stopTrail@EngineTrailSystem@@AAEXXZ");
    todo("implement");
}

_inline void expandBoundingBox(vector3 const &point, vector3 &min, vector3 &max) // 0x4495D8
{
    mangled_assert("?expandBoundingBox@@YGXABVvector3@@AAV1@1@Z");
    todo("implement");
}

bool EngineTrailSystem::getBoundingAABB(vector3 &, vector3 &) const // 0x44967E
{
    mangled_assert("?getBoundingAABB@EngineTrailSystem@@QBE_NAAVvector3@@0@Z");
    todo("implement");
}

EngineBurn *EngineTrailSystem::getBurn(unsigned __int32) // 0x449701
{
    mangled_assert("?getBurn@EngineTrailSystem@@QAEPAVEngineBurn@@I@Z");
    todo("implement");
}

void EngineTrailSystem::simUpdate() // 0x449F61
{
    mangled_assert("?simUpdate@EngineTrailSystem@@QAEXXZ");
    todo("implement");
}

void EngineTrailSystem::update(float, float) // 0x44A0B5
{
    mangled_assert("?update@EngineTrailSystem@@QAEXMM@Z");
    todo("implement");
}

void EngineTrailSystem::enableThrustUpdate(bool) // 0x4491EF
{
    mangled_assert("?enableThrustUpdate@EngineTrailSystem@@QAEX_N@Z");
    todo("implement");
}

void EngineTrailSystem::setThrustStrength(float) // 0x449E2B
{
    mangled_assert("?setThrustStrength@EngineTrailSystem@@QAEXM@Z");
    todo("implement");
}

void EngineTrailSystem::setVelocity(vector3 const &) // 0x449F23
{
    mangled_assert("?setVelocity@EngineTrailSystem@@QAEXABVvector3@@@Z");
    todo("implement");
}

void EngineTrailSystem::setZero() // 0x449F34
{
    mangled_assert("?setZero@EngineTrailSystem@@QAEXXZ");
    todo("implement");
}

void EngineTrailSystem::offset(vector3 const &) // 0x449BE7
{
    mangled_assert("?offset@EngineTrailSystem@@QAEXABVvector3@@@Z");
    todo("implement");
}

bool EngineTrailSystem::draw(Camera const *, float) // 0x448CA6
{
    mangled_assert("?draw@EngineTrailSystem@@QAE_NPBVCamera@@M@Z");
    todo("implement");
}

void drawAllEngineTrails(Camera const *camera, float timeElapsed) // 0x448ED5
{
    mangled_assert("?drawAllEngineTrails@@YGXPBVCamera@@M@Z");
    todo("implement");
}

bool engineTrailShapePrep(SobWithMeshStatic::Model *model, SobStatic::Model *sobStaticModel) // 0x449248
{
    mangled_assert("?engineTrailShapePrep@@YG_NPAVModel@SobWithMeshStatic@@PAV1SobStatic@@@Z");
    todo("implement");
}

__int32 handle_EngineTrailShape_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x44980D
{
    mangled_assert("?handle_EngineTrailShape_Chunk@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 etSetEngineTrail(lua_State *lstate) // 0x44930C
{
    mangled_assert("?etSetEngineTrail@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void engineTrailScriptingInit() // 0x44921D
{
    mangled_assert("?engineTrailScriptingInit@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static char const *getEngineNozzleName(unsigned __int32 index) // 0x44970E
{
    mangled_assert("getEngineNozzleName");
    todo("implement");
}

_static bool IsTrailVisible(SobWithMesh const &owner) // 0x4486A8
{
    mangled_assert("IsTrailVisible");
    todo("implement");
}

_static void drawEngineTrails(Camera const *camera, float timeElapsed, Selection const &renderList, unsigned __int32 &countDrawn, unsigned __int32 &countRejected) // 0x449125
{
    mangled_assert("drawEngineTrails");
    todo("implement");
}

_static __int32 countNumberOfEngineNozzles(HierarchyStatic *hier) // 0x448C2E
{
    mangled_assert("countNumberOfEngineNozzles");
    todo("implement");
}
#endif
