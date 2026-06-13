#if 0
/* ---------- headers */

#include "decomp.h"
#include <command.h>
#include <SobRigidBodyStatic.h>
#include <assist\stlexsmallvector.h>
#include <savegame.h>
#include <xstring>
#include <task.h>
#include <memory\memoryalloc.h>
#include <Decal\DecalRefMesh.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <stack>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MainUI.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <MultiplierTypes.h>
#include <memory\memorylib.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <playerresourcetype.h>
#include <RenderAnim\MarkerInstance.h>
#include <Graphics\AutoLOD.h>
#include <Render\gl\r_types.h>
#include <platform\cmdline.h>
#include <Graphics\DirectMeshRender.h>
#include <ShieldTypes.h>
#include <Mathlib\matrix3.h>
#include <Graphics\meshrenderproxy.h>
#include <MeshAnimation.h>
#include <new>
#include <exception>
#include <Subsystems\HardPointManager.h>
#include <xstddef>
#include <Subsystems\HardPoint.h>
#include <type_traits>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Render\objects\stateblock\stateblockmeasure.h>
#include <Camera\OrbitParameters.h>
#include <ParadeCommand.h>
#include <Render\objects\cliprect.h>
#include <commandtype.h>
#include <xutility>
#include <Render\objects\varymesh.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Render\objects\renderable.h>
#include <fileio\bytestream.h>
#include <SensorsManager.h>
#include <xmemory>
#include <SoundManager\SoundManager.h>
#include <debug\ctassert.h>
#include <RenderAnim\RenderModelInstance.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Render\objects\options.h>
#include <SimVis\RenderModelScars.h>
#include <RenderAnim\EffectAnimationList.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Render\objects\vertexarray.h>
#include <RenderAnim\AnimEventContext.h>
#include <Render\objects\vertexarrayinternal.h>
#include <assist\callback.h>
#include <weaponinfo.h>
#include <memory\memorysmall.h>
#include <Mathlib\LinearInterp.h>
#include <SoundManager\SoundEntityHandle.h>
#include <list>
#include <Render\objects\typeface.h>
#include <Render\objects\compiledtext.h>
#include <platform\windowinterface.h>
#include <Mathlib\vector3.h>
#include <gameRenderDebug.h>
#include <Mathlib\vector4.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Graphics\BatchMeshRender.h>
#include <map>
#include <xtree>
#include <Collision\BVH\octree.h>
#include <boost\smart_ptr.hpp>
#include <Collision\BVH\span.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <abilities.h>
#include <SimVis\ShipVis.h>
#include <Collision\BVH\proxy.h>
#include <SimVis\RenderModelVis.h>
#include <Collision\intersect.h>
#include <renderer.h>
#include <sob.h>
#include <platform\timer.h>
#include <Render\objects\misctextures.h>
#include <Render\objects\stateblock\stateblock.h>
#include <sobstatic.h>
#include <platform\platformexports.h>
#include <Camera\CameraOrbitTarget.h>
#include <Mathlib\vector2.h>
#include <Render\objects\texture.h>
#include <Collision\Primitives\obb.h>
#include <Camera\Camera.h>
#include <util\types.h>
#include <Render\objects\textureregistry.h>
#include <Camera\Frustum.h>
#include <hash_map>
#include <Camera\Plane3.h>
#include <OrderFeedback.h>
#include <xhash>
#include <SquadronList.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Interpolation.h>
#include <ShaderVariables.h>
#include <boost\scoped_array.hpp>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\quat.h>
#include <DockLaunch.h>
#include <DockQueue.h>
#include <SquadronQueue.h>
#include <sobid.h>
#include <Render\objects\memtracker.h>
#include <HierarchyStatic.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <BattleScar\BattleScarStats.h>
#include <Render\objects\hyperspaceplane.h>
#include <Modifiers\ModifierTargetCache.h>
#include <debug\db.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <seInterface2\sedefinesshared.h>
#include <deque>
#include <Render\objects\shadowsettings.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\objects\meshbatcher.h>
#include <Collision\primitivesfwd.h>
#include <SelTarg.h>
#include <Render\objects\basicmesh.h>
#include <prim.h>
#include <Render\objects\mesh.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Render\objects\core.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <seInterface2\PatchID.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <seInterface2\PatchBase.h>
#include <selection.h>
#include <Render\gl\lotypes.h>
#include <savegamedef.h>
#include <seInterface2\SoundParams.h>
#include <gameRender.h>
#include <bitset>
#include <Render\objects\light.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\segment.h>
#include <Parade.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <profile\profile.h>
#include <iostream>
#include <platform\osdef.h>
#include <Render\FxGL\FXManager.h>
#include <Viewer.h>
#include <Render\FxGL\VarMulti.h>
#include <TeamColourRegistry.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <Render\objects\objects.h>
#include <wchar.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <SimVis\SobVis.h>
#include <SobWithMeshStatic.h>
#include <queue>
#include <Render\objects\rendertexture.h>
#include <Squadron.h>
#include <algorithm>
#include <Render\gl\r_defines.h>
#include <ship.h>
#include <HyperspaceManager.h>
#include <Render\gl\glext.h>
#include <Collision\BVH\bvh.h>
#include <SobWithMesh.h>
#include <LaunchCommand.h>
#include <DockCommand.h>
#include <SobRigidBody.h>

/* ---------- constants */

/* ---------- definitions */

class HyperspaceEffectBatched
{
public:
    _inline HyperspaceEffectBatched(matrix4 const &, vector2 const &, float const, unsigned __int32 const);
    matrix4 transform; // 0x0
    vector2 windowSize; // 0x40
    float distance; // 0x48
    unsigned __int32 id; // 0x4C
};
static_assert(sizeof(HyperspaceEffectBatched) == 80, "Invalid HyperspaceEffectBatched size");

class ShadowedShipBatched
{
public:
    _inline ShadowedShipBatched(Ship *, LightManager::light_bit);
    Ship *ship; // 0x0
    matrix4 lightView; // 0x4
    LightManager::light_bit light; // 0x44
    float scale; // 0x48
    vector2 position; // 0x4C
};
static_assert(sizeof(ShadowedShipBatched) == 84, "Invalid ShadowedShipBatched size");

class `anonymous-namespace'::DistanceToCameraPred
{
public:
    bool operator()(Sob const *, Sob const *);
};
static_assert(sizeof(`anonymous-namespace'::DistanceToCameraPred) == 1, "Invalid `anonymous-namespace'::DistanceToCameraPred size");

class `anonymous-namespace'::ScreenSizePred
{
public:
    bool operator()(Sob const *, Sob const *);
};
static_assert(sizeof(`anonymous-namespace'::ScreenSizePred) == 1, "Invalid `anonymous-namespace'::ScreenSizePred size");

class `anonymous-namespace'::HyperspaceDistance
{
public:
    bool operator()(HyperspaceEffectBatched const &, HyperspaceEffectBatched const &);
};
static_assert(sizeof(`anonymous-namespace'::HyperspaceDistance) == 1, "Invalid `anonymous-namespace'::HyperspaceDistance size");

typedef std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > VTextureMap;
typedef stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > GlyphMap;
typedef std::stack<StateBlockMeasure::Frame,std::deque<StateBlockMeasure::Frame,std::allocator<StateBlockMeasure::Frame> > > FrameStack;
typedef std::map<long,unsigned int,std::less<long>,std::allocator<std::pair<long const ,unsigned int> > > CommandMap;
typedef std::vector<StateBlockMeasure::RenderFrame,std::allocator<StateBlockMeasure::RenderFrame> > RenderFrameCont;
typedef `anonymous-namespace'::DistanceToCameraPred ?A0x92766920::DistanceToCameraPred;
typedef `anonymous-namespace'::ScreenSizePred ?A0x92766920::ScreenSizePred;
typedef `anonymous-namespace'::HyperspaceDistance ?A0x92766920::HyperspaceDistance;

/* ---------- prototypes */

extern unsigned __int32 drawHyperspaceClip(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &hyperspacingShips);
extern unsigned __int32 setupLight(Ship *pShip, Ship::eShadowType shadowType, __int32 numShadows);
extern void renderShips(Camera const *camera);
extern void renderBattleScars(Camera const *camera);
extern void renderBattleScarsHS(Camera const *camera);

_static void GetSortedShipList(Selection const &src, std::vector<Ship *,std::allocator<Ship *> > &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > &transparentShips);
_static bool enableHyperspaceClipPlane(Ship *ship, bool const reverse);
_static bool enableLaunchingClipPlane(Ship *ship);
_static void StartShadowBatch();
_static void FlushShadowBatch(Camera const *camera, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &batchedShips, unsigned __int32 &debugNum);
_static bool fitInShadowMap(vector2 const &shadowMapSize, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > const &shadowedShipsInShadowMap, ShadowedShipBatched &currentShip);
_static void DrawShipLit(Camera const *camera, Ship *ship, LightManager::light_bit light, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &shadowedShipsInShadowMap, unsigned __int32 &debugNum);
_static void StartHSBatch();
_static void EndHSBatch(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects);
_static void FlushHSBatch(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects, unsigned __int32 &debugNum);
_static void DrawOnHyperspacePlane(Camera const *camera, Ship *ship, MeshRenderProxy &renderer, CompoundStateBlock const *shader, unsigned __int32 &debugNum, std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects, bool const directRender);
_static void addHyperspacingShipsToVector(std::vector<Ship *,std::allocator<Ship *> > const &allShips, std::vector<Ship *,std::allocator<Ship *> > &hyperspacingShips);
_static void updateHyperspacingShips(std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips, std::vector<Ship *,std::allocator<Ship *> > &hyperspacingShips);
_static void addShadowedShipsToVector(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &allShips, std::vector<Ship *,std::allocator<Ship *> > &shadowedShips);
_static void getShadowedShips(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips, std::vector<Ship *,std::allocator<Ship *> > &shadowedShips);
_static unsigned __int32 drawShadowedShips(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips);

/* ---------- globals */

extern unsigned __int32 g_numShipsProcessedBatch; // 0x843C5C
extern unsigned __int32 g_numShipsProcessedDirect; // 0x843C60
extern unsigned __int32 g_numShipShadows; // 0x843C64
extern float g_shadowQuality; // 0x8352B0
extern bool g_showShadowMap; // 0x843C58
extern float g_shadowOffset; // 0x8352B4
extern float g_shadowBias; // 0x843C68
extern CullMode g_shadowCullMode; // 0x8352B8

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x78D590
    extern float const ViewerUpdatePeriod; // 0x8352BC
    extern float const CameraDistanceUpdateRate; // 0x78D594
    extern float const CameraDistanceUpdatePeriod; // 0x8352C0
    extern float const farClip; // 0x78D598
    extern float const nearClip; // 0x78D59C
}

/* ---------- public code */

_extern _sub_492C6F(HyperspaceEffectBatched *const, matrix4 const &, vector2 const &, float const, unsigned __int32 const);
_inline HyperspaceEffectBatched::HyperspaceEffectBatched(matrix4 const &, vector2 const &, float const, unsigned __int32 const) // 0x492C6F
{
    mangled_assert("??0HyperspaceEffectBatched@@QAE@ABVmatrix4@@ABVvector2@@MI@Z");
    todo("implement");
    _sub_492C6F(this, arg, arg, arg, arg);
}

_extern _sub_492CA8(MeshRenderProxy *const);
_inline MeshRenderProxy::MeshRenderProxy() // 0x492CA8
{
    mangled_assert("??0MeshRenderProxy@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_492CA8(this);
}

_extern _sub_492CDA(ShadowedShipBatched *const, Ship *, LightManager::light_bit);
_inline ShadowedShipBatched::ShadowedShipBatched(Ship *, LightManager::light_bit) // 0x492CDA
{
    mangled_assert("??0ShadowedShipBatched@@QAE@PAVShip@@W4light_bit@LightManager@@@Z");
    todo("implement");
    _sub_492CDA(this, arg, arg);
}

_extern _sub_492C5D(BatchMeshRender *const);
_inline BatchMeshRender::BatchMeshRender() // 0x492C5D
{
    mangled_assert("??0BatchMeshRender@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_492C5D(this);
}

_extern _sub_492C66(DirectMeshRender *const);
_inline DirectMeshRender::DirectMeshRender() // 0x492C66
{
    mangled_assert("??0DirectMeshRender@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_492C66(this);
}

_extern unsigned __int32 _sub_494B0B(Camera const *, std::vector<Ship *,std::allocator<Ship *> > const &);
unsigned __int32 drawHyperspaceClip(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &hyperspacingShips) // 0x494B0B
{
    mangled_assert("?drawHyperspaceClip@@YGIPBVCamera@@ABV?$vector@PAVShip@@V?$allocator@PAVShip@@@std@@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_494B0B(camera, hyperspacingShips);
    return __result;
}

_extern unsigned __int32 _sub_496164(Ship *, Ship::eShadowType, __int32);
unsigned __int32 setupLight(Ship *pShip, Ship::eShadowType shadowType, __int32 numShadows) // 0x496164
{
    mangled_assert("?setupLight@@YGIPAVShip@@W4eShadowType@1@H@Z");
    todo("implement");
    unsigned __int32 __result = _sub_496164(pShip, shadowType, numShadows);
    return __result;
}

_extern void _sub_495896(Camera const *);
void renderShips(Camera const *camera) // 0x495896
{
    mangled_assert("?renderShips@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_495896(camera);
}

_extern void _sub_495747(Camera const *);
void renderBattleScars(Camera const *camera) // 0x495747
{
    mangled_assert("?renderBattleScars@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_495747(camera);
}

_extern void _sub_495763(Camera const *);
void renderBattleScarsHS(Camera const *camera) // 0x495763
{
    mangled_assert("?renderBattleScarsHS@@YGXPBVCamera@@@Z");
    todo("implement");
    _sub_495763(camera);
}

/* ---------- private code */

_extern void _sub_494496(Selection const &, std::vector<Ship *,std::allocator<Ship *> > &, std::vector<Ship *,std::allocator<Ship *> > &);
_static void GetSortedShipList(Selection const &src, std::vector<Ship *,std::allocator<Ship *> > &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > &transparentShips) // 0x494496
{
    mangled_assert("GetSortedShipList");
    todo("implement");
    _sub_494496(src, opaqueShips, transparentShips);
}

_extern bool _sub_494DA5(Ship *, bool const);
_static bool enableHyperspaceClipPlane(Ship *ship, bool const reverse) // 0x494DA5
{
    mangled_assert("enableHyperspaceClipPlane");
    todo("implement");
    bool __result = _sub_494DA5(ship, reverse);
    return __result;
}

_extern bool _sub_494EE7(Ship *);
_static bool enableLaunchingClipPlane(Ship *ship) // 0x494EE7
{
    mangled_assert("enableLaunchingClipPlane");
    todo("implement");
    bool __result = _sub_494EE7(ship);
    return __result;
}

_extern void _sub_4945C9();
_static void StartShadowBatch() // 0x4945C9
{
    mangled_assert("StartShadowBatch");
    todo("implement");
    _sub_4945C9();
}

_extern void _sub_493C6E(Camera const *, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &, unsigned __int32 &);
_static void FlushShadowBatch(Camera const *camera, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &batchedShips, unsigned __int32 &debugNum) // 0x493C6E
{
    mangled_assert("FlushShadowBatch");
    todo("implement");
    _sub_493C6E(camera, batchedShips, debugNum);
}

_extern bool _sub_4950B9(vector2 const &, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > const &, ShadowedShipBatched &);
_static bool fitInShadowMap(vector2 const &shadowMapSize, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > const &shadowedShipsInShadowMap, ShadowedShipBatched &currentShip) // 0x4950B9
{
    mangled_assert("fitInShadowMap");
    todo("implement");
    bool __result = _sub_4950B9(shadowMapSize, shadowedShipsInShadowMap, currentShip);
    return __result;
}

_extern void _sub_4937A9(Camera const *, Ship *, LightManager::light_bit, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &, unsigned __int32 &);
_static void DrawShipLit(Camera const *camera, Ship *ship, LightManager::light_bit light, std::vector<ShadowedShipBatched,std::allocator<ShadowedShipBatched> > &shadowedShipsInShadowMap, unsigned __int32 &debugNum) // 0x4937A9
{
    mangled_assert("DrawShipLit");
    todo("implement");
    _sub_4937A9(camera, ship, light, shadowedShipsInShadowMap, debugNum);
}

_extern void _sub_494539();
_static void StartHSBatch() // 0x494539
{
    mangled_assert("StartHSBatch");
    todo("implement");
    _sub_494539();
}

_extern void _sub_493B6C(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &);
_static void EndHSBatch(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects) // 0x493B6C
{
    mangled_assert("EndHSBatch");
    todo("implement");
    _sub_493B6C(effects);
}

_extern void _sub_493BA5(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &, unsigned __int32 &);
_static void FlushHSBatch(std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects, unsigned __int32 &debugNum) // 0x493BA5
{
    mangled_assert("FlushHSBatch");
    todo("implement");
    _sub_493BA5(effects, debugNum);
}

_extern void _sub_492EA5(Camera const *, Ship *, MeshRenderProxy &, CompoundStateBlock const *, unsigned __int32 &, std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &, bool const);
_static void DrawOnHyperspacePlane(Camera const *camera, Ship *ship, MeshRenderProxy &renderer, CompoundStateBlock const *shader, unsigned __int32 &debugNum, std::vector<HyperspaceEffectBatched,std::allocator<HyperspaceEffectBatched> > &effects, bool const directRender) // 0x492EA5
{
    mangled_assert("DrawOnHyperspacePlane");
    todo("implement");
    _sub_492EA5(camera, ship, renderer, shader, debugNum, effects, directRender);
}

_extern void _sub_4948E2(std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > &);
_static void addHyperspacingShipsToVector(std::vector<Ship *,std::allocator<Ship *> > const &allShips, std::vector<Ship *,std::allocator<Ship *> > &hyperspacingShips) // 0x4948E2
{
    mangled_assert("addHyperspacingShipsToVector");
    todo("implement");
    _sub_4948E2(allShips, hyperspacingShips);
}

_extern void _sub_4961C9(std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > &);
_static void updateHyperspacingShips(std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips, std::vector<Ship *,std::allocator<Ship *> > &hyperspacingShips) // 0x4961C9
{
    mangled_assert("updateHyperspacingShips");
    todo("implement");
    _sub_4961C9(opaqueShips, transparentShips, hyperspacingShips);
}

_extern void _sub_4949DD(Camera const *, std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > &);
_static void addShadowedShipsToVector(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &allShips, std::vector<Ship *,std::allocator<Ship *> > &shadowedShips) // 0x4949DD
{
    mangled_assert("addShadowedShipsToVector");
    todo("implement");
    _sub_4949DD(camera, allShips, shadowedShips);
}

_extern void _sub_4955A5(Camera const *, std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > &);
_static void getShadowedShips(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips, std::vector<Ship *,std::allocator<Ship *> > &shadowedShips) // 0x4955A5
{
    mangled_assert("getShadowedShips");
    todo("implement");
    _sub_4955A5(camera, opaqueShips, transparentShips, shadowedShips);
}

_extern unsigned __int32 _sub_494C5C(Camera const *, std::vector<Ship *,std::allocator<Ship *> > const &, std::vector<Ship *,std::allocator<Ship *> > const &);
_static unsigned __int32 drawShadowedShips(Camera const *camera, std::vector<Ship *,std::allocator<Ship *> > const &opaqueShips, std::vector<Ship *,std::allocator<Ship *> > const &transparentShips) // 0x494C5C
{
    mangled_assert("drawShadowedShips");
    todo("implement");
    unsigned __int32 __result = _sub_494C5C(camera, opaqueShips, transparentShips);
    return __result;
}
#endif
