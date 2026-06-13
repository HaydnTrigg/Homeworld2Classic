#if 0
/* ---------- headers */

#include "decomp.h"
#include <DockLaunch.h>
#include <set>
#include <weaponstaticinfo.h>
#include <Universe.h>
#include <assist\stlexsmallvector.h>
#include <DockQueue.h>
#include <GunBinding.h>
#include <Waypoint.h>
#include <SquadronQueue.h>
#include <xstring>
#include <SobUnmoveable.h>
#include <SensorsManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <SoundManager\SoundManager.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <playerresourcetype.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Render\objects\core.h>
#include <Race.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <malloc.h>
#include <Render\gl\types.h>
#include <profile\profile.h>
#include <TeamColourRegistry.h>
#include <Mathlib\matvec.h>
#include <iostream>
#include <savegame.h>
#include <task.h>
#include <MainUI.h>
#include <stack>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\lotypes.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <BuildManager.h>
#include <SobRigidBody.h>
#include <WeaponClassSpecificInfo.h>
#include <shipHold.h>
#include <CameraCommand.h>
#include <new>
#include <SobRigidBodyStatic.h>
#include <random.h>
#include <LevelDesc.h>
#include <CameraHW.h>
#include <exception>
#include <HyperspaceManager.h>
#include <Hash.h>
#include <Camera\CameraOrbitTarget.h>
#include <xstddef>
#include <Render\gl\r_types.h>
#include <SquadronList.h>
#include <fileio\md5.h>
#include <Camera\Camera.h>
#include <type_traits>
#include <Render\objects\stateblock\stateblock.h>
#include <Camera\Frustum.h>
#include <MeshAnimation.h>
#include <Render\objects\texture.h>
#include <Camera\Plane3.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <Render\objects\textureregistry.h>
#include <Render\objects\varymesh.h>
#include <Collision\BVH\octree.h>
#include <Render\objects\vertexarray.h>
#include <Collision\BVH\span.h>
#include <Render\objects\vertexarrayinternal.h>
#include <gamestructimpl.h>
#include <NURBSCurve.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Badge.h>
#include <curve.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <util\statmonitor.h>
#include <vector>
#include <Subsystems\HardPointManager.h>
#include <Render\objects\cliprect.h>
#include <Viewer.h>
#include <WeaponStatic.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Subsystems\HardPoint.h>
#include <fileio\fileioexports.h>
#include <Subsystems\HardPointStatic.h>
#include <debug\ctassert.h>
#include <Subsystems\SubSystemType.h>
#include <UserInterface\UIDirectRenderer.h>
#include <UserInterface\uirenderproxy.h>
#include <Render\objects\meshbatcher.h>
#include <seInterface2\SampleID.h>
#include <App\AppObj.h>
#include <Render\objects\basicmesh.h>
#include <seInterface2\SampleBase.h>
#include <Interpolation.h>
#include <weapon.h>
#include <platform\appinterface.h>
#include <Render\objects\memtracker.h>
#include <math.h>
#include <WeaponFire\WeaponFire.h>
#include <weaponfiretypes.h>
#include <list>
#include <resourceCommand.h>
#include <Collision\Primitives\aabb.h>
#include <gameSettings.h>
#include <DynamicPoint.h>
#include <syncChecking.h>
#include <Modifiers\ModifierAbility.h>
#include <Player.h>
#include <Mathlib\vector3.h>
#include <ResearchManager.h>
#include <boost\static_assert.hpp>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <shipstatic.h>
#include <Render\gl\r_defines.h>
#include <Mathlib\mathutil.h>
#include <commandtype.h>
#include <Render\gl\glext.h>
#include <map>
#include <Collision\Collision.h>
#include <weaponTargetInfo.h>
#include <xtree>
#include <abilities.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\fontsystem.h>
#include <Physics\PhysicsEngine.h>
#include <Graphics\AutoLOD.h>
#include <Render\objects\objects.h>
#include <Physics\PhysicsObject.h>
#include <Render\objects\bitmapfont.h>
#include <Render\objects\material.h>
#include <Mathlib\vector2.h>
#include <hash_map>
#include <util\types.h>
#include <xhash>
#include <renderer.h>
#include <boost\cstdint.hpp>
#include <AxisAlignBox.h>
#include <scripting.h>
#include <boost\config.hpp>
#include <Volume.h>
#include <scriptaccess.h>
#include <VolumeStatic.h>
#include <gameRender.h>
#include <seInterface2\sedefinesshared.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <scripttypedef.h>
#include <SobUnmoveableStatic.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Tactics.h>
#include <DockCommand.h>
#include <boost\scoped_array.hpp>
#include <lua.h>
#include <command.h>
#include <SobZeroMassBody.h>
#include <Mathlib\quat.h>
#include <sobzeromassbodystatic.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <SOBGroupManager.h>
#include <Render\objects\compiledtext.h>
#include <Render\objects\parentmesh.h>
#include <SimVis\CullFX.h>
#include <Mathlib\mathlibdll.h>
#include <Render\FxGL\FXManager.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\VarMulti.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <gameRandom.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <assist\array2d.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Render\objects\debugrender.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <dbdefines.h>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\Subsystem.h>
#include <util\dictionary.h>
#include <UnitCaps\UnitCaps.h>
#include <util\utilexports.h>
#include <Subsystems\SubsystemStatic.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Sphere.h>
#include <gameRenderDebug.h>
#include <platform\timer.h>
#include <Render\objects\rendertexture.h>
#include <platform\platformexports.h>
#include <stdarg.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Sob\Resource\Resource.h>
#include <Collision\Primitives\sphere.h>
#include <config.h>
#include <Render\objects\geometry.h>
#include <Camera\OrbitParameters.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Render\objects\mesh.h>
#include <EngineTrailManager.h>
#include <platform\osdef.h>
#include <Render\objects\renderable.h>
#include <EngineTrailFrameList.h>
#include <weaponinfo.h>

/* ---------- constants */

/* ---------- definitions */

struct InfoFunctionEntry
{
    char *name; // 0x0
    bool bOn; // 0x4
    void (*func)(); // 0x8
};
static_assert(sizeof(InfoFunctionEntry) == 12, "Invalid InfoFunctionEntry size");

/* ---------- prototypes */

extern void addHelpText(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s);
extern bool grdInfoEnable(char const *name, bool tf);
extern void grdInfo_Help();
extern void grdInfo_Particle();
extern void grdInfo_Render();
extern void grdInfo_Collision();
extern void grdInfo_Viewer();
extern void grdInfo_Trails();
extern void grdInfo_Physics();
extern void grdInfo_Extensions();
extern void grdInfo_Net();
extern void grdInfo_Selection();
extern void grdInfo_UI();
extern void grdInfo_NURBS();
extern void grdInfo_FX();
extern void grdInfo_AutoLOD();
extern void renderInfoOverlay(long long fdt);
extern float getRenderMS(bool const startTiming);
extern void renderAxis(vector3 pos, float size);
extern void renderAxis(vector3 const &pos, matrix3 const &orient, float size);
extern void renderLine(vector3 const &pos1, vector3 const &pos2, vector4 const &color);
extern void renderTriangle(vector3 const &v0, vector3 const &v1, vector3 const &v2, vector4 const &c);
extern void renderLineBox(vector3 const &pos, matrix3 const &orient, vector3 const &extents, vector4 const &color);
extern void renderLineSphere(vector3 const &pos, float radius, vector4 const &color);
extern void renderLineCapsule(vector3 const &pos, vector3 const &direction, float radius, vector4 const &color);
extern void renderStatMonitor();
extern void glSphere(float radius, __int32 slices, __int32 stacks, vector3 position);
extern void renderNiceSphere(vector3 const &position, float radius, vector4 const &col);
extern void renderSphere(vector3 const &position, float radius);
extern void renderNiceFrustum(vector3 const *nearPoints, vector3 const *farPoints, vector4 const &col);
extern void renderNiceFrustum(Frustum const &frustum, vector4 const &col);
extern void renderNiceAABB(vector3 const &min, vector3 const &max, vector4 const &col);
extern void renderShipDebug(Ship *ship);
extern void renderSubSystemDebug(SubSystem *subs);
extern void renderResourceDebug(Resource *res);
extern void renderWeaponDebug(Ship *ship);
extern void renderDebugAxis(Sob *sob);
extern void renderShipBoundingSphere(Ship *ship, bool bUseNLIPS);
extern void renderLevelVolumes();
extern void grdRenderLatchPoints(Resource *res);
extern void grdRenderTargetBox(Ship *pShip);
extern void grdRenderDockPaths(Ship *pShip);
extern void grdRenderResourceTargeting(Ship *ship);
extern void grdRenderGenericBoundingBoxVolume(vector3 *center, matrix3 *orientation, vector3 *dimensions, vector4 *colorvalue);
extern void grdPreDumpState();
extern void grdDumpState(char const *name);
extern void grdPostDumpState();
extern void gameRenderDebugRegisterTweaks();

_static InfoFunctionEntry *grdFindInfo(char const *name);
_static void grdInfoPrint(char const *format, ...);
_static void grdInfoTitlePrint(char const *name);
_static void grdRenderInfo();
_static float getOverallFPS(bool newFrame);
_static void renderFrustum(vector3 const *nearPoints, vector3 const *farPoints);
_static void renderBox(vector3 const &min, vector3 const &max);

/* ---------- globals */

extern std::vector<vector3,std::allocator<vector3> > obbTestPoints; // 0x8487F8
extern bool tested; // 0x8487D8
extern InfoFunctionEntry g_infoFunctions[15]; // 0x83C0E8

/* ---------- private variables */

_static
{
    extern std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > helpText; // 0x8487F0
    extern __int32 g_iViewLevel; // 0x83C0E0
    extern float g_infoLineHeight; // 0x8487DC
    extern float g_infoCurrentY; // 0x8487E0
    extern long long g_timerVal; // 0x8487E8
    extern float const ViewerUpdateRate; // 0x7A9A18
    extern float const ViewerUpdatePeriod; // 0x83C19C
    extern float const CameraDistanceUpdateRate; // 0x7A9A1C
    extern float const CameraDistanceUpdatePeriod; // 0x83C1A0
}

/* ---------- public code */

_extern void _sub_5F2130(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void addHelpText(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s) // 0x5F2130
{
    mangled_assert("?addHelpText@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_5F2130(s);
}

_extern bool _sub_5F293E(char const *, bool);
bool grdInfoEnable(char const *name, bool tf) // 0x5F293E
{
    mangled_assert("?grdInfoEnable@@YG_NPBD_N@Z");
    todo("implement");
    bool __result = _sub_5F293E(name, tf);
    return __result;
}

_extern void _sub_5F1F37();
void grdInfo_Help() // 0x5F1F37
{
    mangled_assert("?grdInfo_Help@@YGXXZ");
    todo("implement");
    _sub_5F1F37();
}

_extern void _sub_5F1BF9();
void grdInfo_Particle() // 0x5F1BF9
{
    mangled_assert("?grdInfo_Particle@@YGXXZ");
    todo("implement");
    _sub_5F1BF9();
}

_extern void _sub_5F1BFA();
void grdInfo_Render() // 0x5F1BFA
{
    mangled_assert("?grdInfo_Render@@YGXXZ");
    todo("implement");
    _sub_5F1BFA();
}

_extern void _sub_5F1E51();
void grdInfo_Collision() // 0x5F1E51
{
    mangled_assert("?grdInfo_Collision@@YGXXZ");
    todo("implement");
    _sub_5F1E51();
}

_extern void _sub_5F1E52();
void grdInfo_Viewer() // 0x5F1E52
{
    mangled_assert("?grdInfo_Viewer@@YGXXZ");
    todo("implement");
    _sub_5F1E52();
}

_extern void _sub_5F1E7F();
void grdInfo_Trails() // 0x5F1E7F
{
    mangled_assert("?grdInfo_Trails@@YGXXZ");
    todo("implement");
    _sub_5F1E7F();
}

_extern void _sub_5F1EAD();
void grdInfo_Physics() // 0x5F1EAD
{
    mangled_assert("?grdInfo_Physics@@YGXXZ");
    todo("implement");
    _sub_5F1EAD();
}

_extern void _sub_5F1EDC();
void grdInfo_Extensions() // 0x5F1EDC
{
    mangled_assert("?grdInfo_Extensions@@YGXXZ");
    todo("implement");
    _sub_5F1EDC();
}

_extern void _sub_5F1F36();
void grdInfo_Net() // 0x5F1F36
{
    mangled_assert("?grdInfo_Net@@YGXXZ");
    todo("implement");
    _sub_5F1F36();
}

_extern void _sub_5F1F61();
void grdInfo_Selection() // 0x5F1F61
{
    mangled_assert("?grdInfo_Selection@@YGXXZ");
    todo("implement");
    _sub_5F1F61();
}

_extern void _sub_5F1F62();
void grdInfo_UI() // 0x5F1F62
{
    mangled_assert("?grdInfo_UI@@YGXXZ");
    todo("implement");
    _sub_5F1F62();
}

_extern void _sub_5F1FD4();
void grdInfo_NURBS() // 0x5F1FD4
{
    mangled_assert("?grdInfo_NURBS@@YGXXZ");
    todo("implement");
    _sub_5F1FD4();
}

_extern void _sub_5F204B();
void grdInfo_FX() // 0x5F204B
{
    mangled_assert("?grdInfo_FX@@YGXXZ");
    todo("implement");
    _sub_5F204B();
}

_extern void _sub_5F20BC();
void grdInfo_AutoLOD() // 0x5F20BC
{
    mangled_assert("?grdInfo_AutoLOD@@YGXXZ");
    todo("implement");
    _sub_5F20BC();
}

_extern void _sub_5F4651(long long);
void renderInfoOverlay(long long fdt) // 0x5F4651
{
    mangled_assert("?renderInfoOverlay@@YGX_J@Z");
    todo("implement");
    _sub_5F4651(fdt);
}

_extern float _sub_5F22B2(bool const);
float getRenderMS(bool const startTiming) // 0x5F22B2
{
    mangled_assert("?getRenderMS@@YGM_N@Z");
    todo("implement");
    float __result = _sub_5F22B2(startTiming);
    return __result;
}

_extern void _sub_5F3E64(vector3, float);
void renderAxis(vector3 pos, float size) // 0x5F3E64
{
    mangled_assert("?renderAxis@@YGXVvector3@@M@Z");
    todo("implement");
    _sub_5F3E64(pos, size);
}

_extern void _sub_5F3AFB(vector3 const &, matrix3 const &, float);
void renderAxis(vector3 const &pos, matrix3 const &orient, float size) // 0x5F3AFB
{
    mangled_assert("?renderAxis@@YGXABVvector3@@ABVmatrix3@@M@Z");
    todo("implement");
    _sub_5F3AFB(pos, orient, size);
}

_extern void _sub_5F479A(vector3 const &, vector3 const &, vector4 const &);
void renderLine(vector3 const &pos1, vector3 const &pos2, vector4 const &color) // 0x5F479A
{
    mangled_assert("?renderLine@@YGXABVvector3@@0ABVvector4@@@Z");
    todo("implement");
    _sub_5F479A(pos1, pos2, color);
}

_extern void _sub_5F592F(vector3 const &, vector3 const &, vector3 const &, vector4 const &);
void renderTriangle(vector3 const &v0, vector3 const &v1, vector3 const &v2, vector4 const &c) // 0x5F592F
{
    mangled_assert("?renderTriangle@@YGXABVvector3@@00ABVvector4@@@Z");
    todo("implement");
    _sub_5F592F(v0, v1, v2, c);
}

_extern void _sub_5F4840(vector3 const &, matrix3 const &, vector3 const &, vector4 const &);
void renderLineBox(vector3 const &pos, matrix3 const &orient, vector3 const &extents, vector4 const &color) // 0x5F4840
{
    mangled_assert("?renderLineBox@@YGXABVvector3@@ABVmatrix3@@0ABVvector4@@@Z");
    todo("implement");
    _sub_5F4840(pos, orient, extents, color);
}

_extern void _sub_5F5106(vector3 const &, float, vector4 const &);
void renderLineSphere(vector3 const &pos, float radius, vector4 const &color) // 0x5F5106
{
    mangled_assert("?renderLineSphere@@YGXABVvector3@@MABVvector4@@@Z");
    todo("implement");
    _sub_5F5106(pos, radius, color);
}

_extern void _sub_5F5064(vector3 const &, vector3 const &, float, vector4 const &);
void renderLineCapsule(vector3 const &pos, vector3 const &direction, float radius, vector4 const &color) // 0x5F5064
{
    mangled_assert("?renderLineCapsule@@YGXABVvector3@@0MABVvector4@@@Z");
    todo("implement");
    _sub_5F5064(pos, direction, radius, color);
}

_extern void _sub_5F58B2();
void renderStatMonitor() // 0x5F58B2
{
    mangled_assert("?renderStatMonitor@@YGXXZ");
    todo("implement");
    _sub_5F58B2();
}

_extern void _sub_5F238F(float, __int32, __int32, vector3);
void glSphere(float radius, __int32 slices, __int32 stacks, vector3 position) // 0x5F238F
{
    mangled_assert("?glSphere@@YGXMHHVvector3@@@Z");
    todo("implement");
    _sub_5F238F(radius, slices, stacks, position);
}

_extern void _sub_5F556E(vector3 const &, float, vector4 const &);
void renderNiceSphere(vector3 const &position, float radius, vector4 const &col) // 0x5F556E
{
    mangled_assert("?renderNiceSphere@@YGXABVvector3@@MABVvector4@@@Z");
    todo("implement");
    _sub_5F556E(position, radius, col);
}

_extern void _sub_5F588A(vector3 const &, float);
void renderSphere(vector3 const &position, float radius) // 0x5F588A
{
    mangled_assert("?renderSphere@@YGXABVvector3@@M@Z");
    todo("implement");
    _sub_5F588A(position, radius);
}

_extern void _sub_5F54B6(vector3 const *, vector3 const *, vector4 const &);
void renderNiceFrustum(vector3 const *nearPoints, vector3 const *farPoints, vector4 const &col) // 0x5F54B6
{
    mangled_assert("?renderNiceFrustum@@YGXPBVvector3@@0ABVvector4@@@Z");
    todo("implement");
    _sub_5F54B6(nearPoints, farPoints, col);
}

_extern void _sub_5F548C(Frustum const &, vector4 const &);
void renderNiceFrustum(Frustum const &frustum, vector4 const &col) // 0x5F548C
{
    mangled_assert("?renderNiceFrustum@@YGXABVFrustum@@ABVvector4@@@Z");
    todo("implement");
    _sub_5F548C(frustum, col);
}

_extern void _sub_5F53D4(vector3 const &, vector3 const &, vector4 const &);
void renderNiceAABB(vector3 const &min, vector3 const &max, vector4 const &col) // 0x5F53D4
{
    mangled_assert("?renderNiceAABB@@YGXABVvector3@@0ABVvector4@@@Z");
    todo("implement");
    _sub_5F53D4(min, max, col);
}

_extern void _sub_5F579F(Ship *);
void renderShipDebug(Ship *ship) // 0x5F579F
{
    mangled_assert("?renderShipDebug@@YGXPAVShip@@@Z");
    todo("implement");
    _sub_5F579F(ship);
}

_extern void _sub_5F58D7(SubSystem *);
void renderSubSystemDebug(SubSystem *subs) // 0x5F58D7
{
    mangled_assert("?renderSubSystemDebug@@YGXPAVSubSystem@@@Z");
    todo("implement");
    _sub_5F58D7(subs);
}

_extern void _sub_5F56C7(Resource *);
void renderResourceDebug(Resource *res) // 0x5F56C7
{
    mangled_assert("?renderResourceDebug@@YGXPAVResource@@@Z");
    todo("implement");
    _sub_5F56C7(res);
}

_extern void _sub_5F5B0F(Ship *);
void renderWeaponDebug(Ship *ship) // 0x5F5B0F
{
    mangled_assert("?renderWeaponDebug@@YGXPAVShip@@@Z");
    todo("implement");
    _sub_5F5B0F(ship);
}

_extern void _sub_5F4447(Sob *);
void renderDebugAxis(Sob *sob) // 0x5F4447
{
    mangled_assert("?renderDebugAxis@@YGXPAVSob@@@Z");
    todo("implement");
    _sub_5F4447(sob);
}

_extern void _sub_5F5742(Ship *, bool);
void renderShipBoundingSphere(Ship *ship, bool bUseNLIPS) // 0x5F5742
{
    mangled_assert("?renderShipBoundingSphere@@YGXPAVShip@@_N@Z");
    todo("implement");
    _sub_5F5742(ship, bUseNLIPS);
}

_extern void _sub_5F4670();
void renderLevelVolumes() // 0x5F4670
{
    mangled_assert("?renderLevelVolumes@@YGXXZ");
    todo("implement");
    _sub_5F4670();
}

_extern void _sub_5F3277(Resource *);
void grdRenderLatchPoints(Resource *res) // 0x5F3277
{
    mangled_assert("?grdRenderLatchPoints@@YGXPAVResource@@@Z");
    todo("implement");
    _sub_5F3277(res);
}

_extern void _sub_5F38AF(Ship *);
void grdRenderTargetBox(Ship *pShip) // 0x5F38AF
{
    mangled_assert("?grdRenderTargetBox@@YGXPAVShip@@@Z");
    todo("implement");
    _sub_5F38AF(pShip);
}

_extern void _sub_5F2ACF(Ship *);
void grdRenderDockPaths(Ship *pShip) // 0x5F2ACF
{
    mangled_assert("?grdRenderDockPaths@@YGXPAVShip@@@Z");
    todo("implement");
    _sub_5F2ACF(pShip);
}

_extern void _sub_5F36CC(Ship *);
void grdRenderResourceTargeting(Ship *ship) // 0x5F36CC
{
    mangled_assert("?grdRenderResourceTargeting@@YGXPAVShip@@@Z");
    todo("implement");
    _sub_5F36CC(ship);
}

_extern void _sub_5F308D(vector3 *, matrix3 *, vector3 *, vector4 *);
void grdRenderGenericBoundingBoxVolume(vector3 *center, matrix3 *orientation, vector3 *dimensions, vector4 *colorvalue) // 0x5F308D
{
    mangled_assert("?grdRenderGenericBoundingBoxVolume@@YGXPAVvector3@@PAVmatrix3@@0PAVvector4@@@Z");
    todo("implement");
    _sub_5F308D(center, orientation, dimensions, colorvalue);
}

_extern void _sub_5F2ACE();
void grdPreDumpState() // 0x5F2ACE
{
    mangled_assert("?grdPreDumpState@@YGXXZ");
    todo("implement");
    _sub_5F2ACE();
}

_extern void _sub_5F2902(char const *);
void grdDumpState(char const *name) // 0x5F2902
{
    mangled_assert("?grdDumpState@@YGXPBD@Z");
    todo("implement");
    _sub_5F2902(name);
}

_extern void _sub_5F2ACD();
void grdPostDumpState() // 0x5F2ACD
{
    mangled_assert("?grdPostDumpState@@YGXXZ");
    todo("implement");
    _sub_5F2ACD();
}

_extern void _sub_5F2171();
void gameRenderDebugRegisterTweaks() // 0x5F2171
{
    mangled_assert("?gameRenderDebugRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_5F2171();
}

/* ---------- private code */

_extern InfoFunctionEntry *_sub_5F2905(char const *);
_static InfoFunctionEntry *grdFindInfo(char const *name) // 0x5F2905
{
    mangled_assert("grdFindInfo");
    todo("implement");
    InfoFunctionEntry * __result = _sub_5F2905(name);
    return __result;
}

_extern void _sub_5F29B0(char const *, ...);
_static void grdInfoPrint(char const *format, ...) // 0x5F29B0
{
    mangled_assert("grdInfoPrint");
    todo("implement");
    _sub_5F29B0(format, buffer);
}

_extern void _sub_5F2A64(char const *);
_static void grdInfoTitlePrint(char const *name) // 0x5F2A64
{
    mangled_assert("grdInfoTitlePrint");
    todo("implement");
    _sub_5F2A64(name);
}

_extern void _sub_5F3172();
_static void grdRenderInfo() // 0x5F3172
{
    mangled_assert("grdRenderInfo");
    todo("implement");
    _sub_5F3172();
}

_extern float _sub_5F21B1(bool);
_static float getOverallFPS(bool newFrame) // 0x5F21B1
{
    mangled_assert("getOverallFPS");
    todo("implement");
    float __result = _sub_5F21B1(newFrame);
    return __result;
}

_extern void _sub_5F44D5(vector3 const *, vector3 const *);
_static void renderFrustum(vector3 const *nearPoints, vector3 const *farPoints) // 0x5F44D5
{
    mangled_assert("renderFrustum");
    todo("implement");
    _sub_5F44D5(nearPoints, farPoints);
}

_extern void _sub_5F4074(vector3 const &, vector3 const &);
_static void renderBox(vector3 const &min, vector3 const &max) // 0x5F4074
{
    mangled_assert("renderBox");
    todo("implement");
    _sub_5F4074(min, max);
}
#endif
