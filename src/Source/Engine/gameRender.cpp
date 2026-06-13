#if 0
/* ---------- headers */

#include "decomp.h"
#include <Sob\DustCloud\DustCloud.h>
#include <lighting.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <assist\stlexsmallvector.h>
#include <platform\osdef.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <DotManager.h>
#include <BTG.h>
#include <Render\tristrip.h>
#include <renderModifiers.h>
#include <Render\objects\geometry.h>
#include <NavLightManager.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\types.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\matvec.h>
#include <shiprender.h>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\Resource.h>
#include <Sob\Resource\ResourceStatic.h>
#include <new>
#include <Render\objects\rendertexture.h>
#include <exception>
#include <Render\gl\lotypes.h>
#include <xstddef>
#include <Interpolation.h>
#include <CameraCommand.h>
#include <type_traits>
#include <platform\cmdline.h>
#include <CameraHW.h>
#include <Avoidance\AvoidanceBoxes.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <seInterface2\PatchID.h>
#include <BillboardRender.h>
#include <Pieplate.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <DynamicPoint.h>
#include <seInterface2\sedefinesshared.h>
#include <Render\gl\r_types.h>
#include <xutility>
#include <weaponTargetInfo.h>
#include <utility>
#include <iosfwd>
#include <SimVis\SobVis.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Parade.h>
#include <weaponinfo.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\OrbitParameters.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <playerresourcetype.h>
#include <HierarchyDynamic.h>
#include <list>
#include <util\dictionary.h>
#include <platform\windowinterface.h>
#include <util\utilexports.h>
#include <Graphics\DirectMeshRender.h>
#include <TeamColourRegistry.h>
#include <Graphics\meshrenderproxy.h>
#include <Render\gl\r_macros.h>
#include <savegame.h>
#include <Render\objects\coreinventory.h>
#include <task.h>
#include <Waypoint.h>
#include <Mathlib\vector3.h>
#include <stack>
#include <SobUnmoveable.h>
#include <Mathlib\vector4.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <map>
#include <SelTarg.h>
#include <Collision\Primitives\triangle.h>
#include <xtree>
#include <prim.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Render\gl\r_defines.h>
#include <SobRigidBodyStatic.h>
#include <fileio\filepath.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector2.h>
#include <MeshAnimation.h>
#include <util\types.h>
#include <ShieldTypes.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <boost\cstdint.hpp>
#include <Viewer.h>
#include <HyperspaceManager.h>
#include <Collision\BVH\octree.h>
#include <App\AppObj.h>
#include <Render\objects\compiledtext.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Stars.h>
#include <platform\appinterface.h>
#include <Render\objects\varymesh.h>
#include <Sob\Pebble\Pebble.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <profile\profile.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <iostream>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Render\objects\misctextures.h>
#include <Collision\primitivesfwd.h>
#include <boost\scoped_array.hpp>
#include <Render\objects\meshbatcher.h>
#include <ship.h>
#include <Render\objects\basicmesh.h>
#include <SobWithMesh.h>
#include <Mathlib\quat.h>
#include <Render\objects\vertexarray.h>
#include <Sob\Cloud\Cloud.h>
#include <SobRigidBody.h>
#include <Render\objects\vertexarrayinternal.h>
#include <Sob\Cloud\CloudStatic.h>
#include <Render\objects\lensflare.h>
#include <sob.h>
#include <sobstatic.h>
#include <EngineTrailSystem.h>
#include <Collision\Primitives\sphere.h>
#include <Graphics\BatchMeshRender.h>
#include <Render\objects\parentmesh.h>
#include <ParadeCommand.h>
#include <ShaderVariables.h>
#include <commandtype.h>
#include <Graphics\ArcArray.h>
#include <Squadron.h>
#include <MultiplierContainer.h>
#include <Collision\Primitives\aabb.h>
#include <command.h>
#include <gameRenderDebug.h>
#include <Mathlib\mathlibdll.h>
#include <MultiplierTypes.h>
#include <SimVis\CullFX.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\FXManager.h>
#include <SimVis\SimVis.h>
#include <Render\objects\bitmapfont.h>
#include <Render\objects\mesh.h>
#include <Render\FxGL\VarMulti.h>
#include <Render\objects\renderable.h>
#include <Render\objects\light.h>
#include <abilities.h>
#include <SensorsManager.h>
#include <UniverseInterp.h>
#include <SoundManager\SoundManager.h>
#include <Sob\Nebula\Nebula.h>
#include <pathpoints.h>
#include <dbdefines.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <UnitCaps\UnitCaps.h>
#include <debug\db.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Modifiers\ModifierApplier.h>
#include <deque>
#include <MainUI.h>
#include <visibility.h>
#include <Selector.h>
#include <sobid.h>
#include <BgLightAnim.h>
#include <MetaSelTarg.h>
#include <GameEventSys.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\obb.h>
#include <Graphics\LensFlareCollision.h>
#include <renderer.h>
#include <Missile.h>
#include <OrderFeedback.h>
#include <MissileStatic.h>
#include <Render\objects\stateblock\stateblock.h>
#include <SquadronList.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <Render\objects\memtracker.h>
#include <gameRender.h>
#include <hash_map>
#include <Collision\Primitives\capsule.h>
#include <xhash>
#include <wchar.h>
#include <Collision\Primitives\segment.h>
#include <util\statmonitor.h>
#include <Collision\BVH\profiling.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Modifiers\ModifierTargetCache.h>
#include <queue>
#include <Render\objects\material.h>
#include <fog.h>
#include <Universe.h>
#include <algorithm>
#include <seInterface2\SampleID.h>
#include <SOBGroupManager.h>
#include <seInterface2\SampleBase.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::DistanceToCameraPred
{
public:
    bool operator()(Sob const *, Sob const *);
};
static_assert(sizeof(`anonymous-namespace'::DistanceToCameraPred) == 1, "Invalid `anonymous-namespace'::DistanceToCameraPred size");

typedef std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > HelpTextList;
typedef void (*InfoFunction)();
typedef std::list<EngineTrail *,std::allocator<EngineTrail *> > EngineTrailList;
typedef std::list<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> > OrphanList;

/* ---------- prototypes */

extern bool gameRenderStartupApp();
extern bool gameRenderStartupGame();
extern bool gameRenderShutdownApp();
extern bool gameRenderShutdownGame();
extern void gameRenderShowShipDebug(bool on);
extern void gameRenderShowPathTolerance(bool on);
extern void gameRenderShowUnitCaps(bool on);
extern void gameRenderShowResourceDebug(bool on);
extern void gameRenderShowWeaponDebug(bool on);
extern void gameRenderShowBackground(bool on);
extern void gameRenderSetWireframeMode(bool on);
extern void gameRenderShowAIPaths(unsigned __int32 on);
extern void gameRenderShowLevelVolumes(bool on);
extern void gameRenderShowObbFaces(bool on);
extern Background *gameRenderGetBackground();
extern void gameRenderLoadBackground(char const *name);
extern unsigned __int32 gameRenderGetCounter();
extern void gameRenderSetFog(bool on);
extern void gameRender3DSetup(Camera const *camera);
extern void gameRender3D(Camera const *camera);

_static bool loadShaders();
_static bool unloadShaders();
_static void renderBackground(Camera const *camera, float elapsedTime);
_static void updateJointTransforms(SobType type);
_static void renderMissiles(Camera const *camera);
_static void renderResourcesType(Camera const *camera, SobType type);
_static void renderDustClouds(Camera const *camera);
_static void renderNebula(Camera const *camera, Selection const &nebula);
_static void renderResources(Camera const *camera);
_static void renderPebbles(Camera const *camera);
_static void renderSolidSobs(Camera const *camera);
_static void renderWeaponFire(Camera const *camera);
_static void renderWaypoints(Camera const *camera);
_static void renderAIPaths(Camera const *camera);
_static void updateEffects();
_static void renderEffects(Camera const *camera);

/* ---------- globals */

extern bool g_grTwoLights; // 0x83C054
extern __int32 g_grLockMode; // 0x83C050
extern bool g_bShowShipDebug; // 0x84878E
extern bool g_bShowPathTolerance; // 0x84878F
extern bool g_bShowResourceDebug; // 0x848790
extern bool g_bShowWeaponDebug; // 0x848791
extern float g_grLOD; // 0x83C04C
extern __int32 g_grUseLighting; // 0x83C058
extern Background *g_pBackground; // 0x848778
extern float g_grGlareIntensity; // 0x83C05C
extern bool g_renderShips; // 0x83C055
extern bool g_renderEffects; // 0x83C056
extern bool g_bShowShipSoundVolumes; // 0x84878D
extern bool g_bShowUnitCaps; // 0x83C061
extern unsigned __int32 g_bRenderEngines; // 0x848794
extern CompoundStateBlock *g_mouseOverShader; // 0x848798
extern CompoundStateBlock *g_shadowSMShader; // 0x84879C
extern CompoundStateBlock *g_shadowHyperspaceShaderA; // 0x8487A0
extern CompoundStateBlock *g_shadowHyperspaceShaderB; // 0x8487A4
extern CompoundStateBlock *g_backfacingWhite; // 0x8487A8
extern CompoundStateBlock *g_hyperspacePlaneTexturedShader; // 0x8487AC
extern CompoundStateBlock *g_hyperspacePlaneStencilShader; // 0x8487B0
extern CompoundStateBlock *g_shadowSelfShaderDepth; // 0x8487B4
extern CompoundStateBlock *g_shadowSelfShaderLight; // 0x8487B8
extern CompoundStateBlock *g_shadowSelfShaderLightAlpha; // 0x8487BC
extern CompoundStateBlock *g_shadowSelfShaderLightAdditive; // 0x8487C0
extern CompoundStateBlock *g_shadowSelfShaderBase; // 0x8487C4
extern CompoundStateBlock *g_emptyShader; // 0x8487C8
extern CompoundStateBlock *g_clipDepthFill; // 0x8487CC

/* ---------- private variables */

_static
{
    extern LensFlareCollision g_lensflareCollision; // 0x83C06C
    extern CoreInventory *g_pInventory; // 0x8487D0
    extern unsigned __int32 g_renderFrameCounter; // 0x84877C
    extern Material *g_pDefaultMaterial; // 0x848780
    extern bool g_bDisplayBackground; // 0x83C057
    extern bool g_bDisplayHelp; // 0x848784
    extern bool g_bDisplayExtensions; // 0x848785
    extern bool g_bShowObbFaces; // 0x848786
    extern bool g_bWireframeMode; // 0x83C060
    extern unsigned __int32 g_bRenderPathNodes; // 0x848788
    extern bool g_bRenderAIPaths; // 0x848787
    extern bool g_bRenderKasVolumes; // 0x84878C
    extern vector4 grTwkAIPathColour; // 0x83C070
    extern float const ViewerUpdateRate; // 0x7A9858
    extern float const ViewerUpdatePeriod; // 0x83C064
    extern float const CameraDistanceUpdateRate; // 0x7A985C
    extern float const CameraDistanceUpdatePeriod; // 0x83C068
}

/* ---------- public code */

_extern bool _sub_5F0DF3();
bool gameRenderStartupApp() // 0x5F0DF3
{
    mangled_assert("?gameRenderStartupApp@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5F0DF3();
    return __result;
}

_extern bool _sub_5F0FA0();
bool gameRenderStartupGame() // 0x5F0FA0
{
    mangled_assert("?gameRenderStartupGame@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5F0FA0();
    return __result;
}

_extern bool _sub_5F0D6F();
bool gameRenderShutdownApp() // 0x5F0D6F
{
    mangled_assert("?gameRenderShutdownApp@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5F0D6F();
    return __result;
}

_extern bool _sub_5F0DB8();
bool gameRenderShutdownGame() // 0x5F0DB8
{
    mangled_assert("?gameRenderShutdownGame@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5F0DB8();
    return __result;
}

_extern void _sub_5F0D4B(bool);
void gameRenderShowShipDebug(bool on) // 0x5F0D4B
{
    mangled_assert("?gameRenderShowShipDebug@@YGX_N@Z");
    todo("implement");
    _sub_5F0D4B(on);
}

_extern void _sub_5F0D33(bool);
void gameRenderShowPathTolerance(bool on) // 0x5F0D33
{
    mangled_assert("?gameRenderShowPathTolerance@@YGX_N@Z");
    todo("implement");
    _sub_5F0D33(on);
}

_extern void _sub_5F0D57(bool);
void gameRenderShowUnitCaps(bool on) // 0x5F0D57
{
    mangled_assert("?gameRenderShowUnitCaps@@YGX_N@Z");
    todo("implement");
    _sub_5F0D57(on);
}

_extern void _sub_5F0D3F(bool);
void gameRenderShowResourceDebug(bool on) // 0x5F0D3F
{
    mangled_assert("?gameRenderShowResourceDebug@@YGX_N@Z");
    todo("implement");
    _sub_5F0D3F(on);
}

_extern void _sub_5F0D63(bool);
void gameRenderShowWeaponDebug(bool on) // 0x5F0D63
{
    mangled_assert("?gameRenderShowWeaponDebug@@YGX_N@Z");
    todo("implement");
    _sub_5F0D63(on);
}

_extern void _sub_5F0D0F(bool);
void gameRenderShowBackground(bool on) // 0x5F0D0F
{
    mangled_assert("?gameRenderShowBackground@@YGX_N@Z");
    todo("implement");
    _sub_5F0D0F(on);
}

_extern void _sub_5F0CE0(bool);
void gameRenderSetWireframeMode(bool on) // 0x5F0CE0
{
    mangled_assert("?gameRenderSetWireframeMode@@YGX_N@Z");
    todo("implement");
    _sub_5F0CE0(on);
}

_extern void _sub_5F0D00(unsigned __int32);
void gameRenderShowAIPaths(unsigned __int32 on) // 0x5F0D00
{
    mangled_assert("?gameRenderShowAIPaths@@YGXI@Z");
    todo("implement");
    _sub_5F0D00(on);
}

_extern void _sub_5F0D1B(bool);
void gameRenderShowLevelVolumes(bool on) // 0x5F0D1B
{
    mangled_assert("?gameRenderShowLevelVolumes@@YGX_N@Z");
    todo("implement");
    _sub_5F0D1B(on);
}

_extern void _sub_5F0D27(bool);
void gameRenderShowObbFaces(bool on) // 0x5F0D27
{
    mangled_assert("?gameRenderShowObbFaces@@YGX_N@Z");
    todo("implement");
    _sub_5F0D27(on);
}

_extern Background *_sub_5F0C22();
Background *gameRenderGetBackground() // 0x5F0C22
{
    mangled_assert("?gameRenderGetBackground@@YGPAVBackground@@XZ");
    todo("implement");
    Background * __result = _sub_5F0C22();
    return __result;
}

_extern void _sub_5F0C2E(char const *);
void gameRenderLoadBackground(char const *name) // 0x5F0C2E
{
    mangled_assert("?gameRenderLoadBackground@@YGXPBD@Z");
    todo("implement");
    _sub_5F0C2E(name);
}

_extern unsigned __int32 _sub_5F0C28();
unsigned __int32 gameRenderGetCounter() // 0x5F0C28
{
    mangled_assert("?gameRenderGetCounter@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5F0C28();
    return __result;
}

_extern void _sub_5F0CBD(bool);
void gameRenderSetFog(bool on) // 0x5F0CBD
{
    mangled_assert("?gameRenderSetFog@@YGX_N@Z");
    todo("implement");
    _sub_5F0CBD(on);
}

_extern _sub_5F04F4(LensFlareManager::CollisionInterface *const);
_inline LensFlareManager::CollisionInterface::CollisionInterface() // 0x5F04F4
{
    mangled_assert("??0CollisionInterface@LensFlareManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F04F4(this);
}

_extern _sub_5F04FD(LensFlareCollision *const);
_inline LensFlareCollision::LensFlareCollision() // 0x5F04FD
{
    mangled_assert("??0LensFlareCollision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5F04FD(this);
}

_extern void _sub_5F0A3C(Camera const *);
void gameRender3DSetup(Camera const *camera) // 0x5F0A3C
{
    mangled_assert("?gameRender3DSetup@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_5F0A3C(camera);
}

_extern void _sub_5F05B2(Camera const *);
void gameRender3D(Camera const *camera) // 0x5F05B2
{
    mangled_assert("?gameRender3D@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_5F05B2(camera);
}

/* ---------- private code */

_extern bool _sub_5F0FEA();
_static bool loadShaders() // 0x5F0FEA
{
    mangled_assert("loadShaders");
    todo("implement");
    bool __result = _sub_5F0FEA();
    return __result;
}

_extern bool _sub_5F1B2A();
_static bool unloadShaders() // 0x5F1B2A
{
    mangled_assert("unloadShaders");
    todo("implement");
    bool __result = _sub_5F1B2A();
    return __result;
}

_extern void _sub_5F1141(Camera const *, float);
_static void renderBackground(Camera const *camera, float elapsedTime) // 0x5F1141
{
    mangled_assert("renderBackground");
    todo("implement");
    _sub_5F1141(camera, elapsedTime);
}

_extern void _sub_5F1B9F(SobType);
_static void updateJointTransforms(SobType type) // 0x5F1B9F
{
    mangled_assert("updateJointTransforms");
    todo("implement");
    _sub_5F1B9F(type);
}

_extern void _sub_5F147E(Camera const *);
_static void renderMissiles(Camera const *camera) // 0x5F147E
{
    mangled_assert("renderMissiles");
    todo("implement");
    _sub_5F147E(camera);
}

_extern void _sub_5F1755(Camera const *, SobType);
_static void renderResourcesType(Camera const *camera, SobType type) // 0x5F1755
{
    mangled_assert("renderResourcesType");
    todo("implement");
    _sub_5F1755(camera, type);
}

_extern void _sub_5F1288(Camera const *);
_static void renderDustClouds(Camera const *camera) // 0x5F1288
{
    mangled_assert("renderDustClouds");
    todo("implement");
    _sub_5F1288(camera);
}

_extern void _sub_5F1571(Camera const *, Selection const &);
_static void renderNebula(Camera const *camera, Selection const &nebula) // 0x5F1571
{
    mangled_assert("renderNebula");
    todo("implement");
    _sub_5F1571(camera, nebula);
}

_extern void _sub_5F1705(Camera const *);
_static void renderResources(Camera const *camera) // 0x5F1705
{
    mangled_assert("renderResources");
    todo("implement");
    _sub_5F1705(camera);
}

_extern void _sub_5F164C(Camera const *);
_static void renderPebbles(Camera const *camera) // 0x5F164C
{
    mangled_assert("renderPebbles");
    todo("implement");
    _sub_5F164C(camera);
}

_extern void _sub_5F17B1(Camera const *);
_static void renderSolidSobs(Camera const *camera) // 0x5F17B1
{
    mangled_assert("renderSolidSobs");
    todo("implement");
    _sub_5F17B1(camera);
}

_extern void _sub_5F1999(Camera const *);
_static void renderWeaponFire(Camera const *camera) // 0x5F1999
{
    mangled_assert("renderWeaponFire");
    todo("implement");
    _sub_5F1999(camera);
}

_extern void _sub_5F18B4(Camera const *);
_static void renderWaypoints(Camera const *camera) // 0x5F18B4
{
    mangled_assert("renderWaypoints");
    todo("implement");
    _sub_5F18B4(camera);
}

_extern void _sub_5F10EF(Camera const *);
_static void renderAIPaths(Camera const *camera) // 0x5F10EF
{
    mangled_assert("renderAIPaths");
    todo("implement");
    _sub_5F10EF(camera);
}

_extern void _sub_5F1B2D();
_static void updateEffects() // 0x5F1B2D
{
    mangled_assert("updateEffects");
    todo("implement");
    _sub_5F1B2D();
}

_extern void _sub_5F1403(Camera const *);
_static void renderEffects(Camera const *camera) // 0x5F1403
{
    mangled_assert("renderEffects");
    todo("implement");
    _sub_5F1403(camera);
}
#endif
