#if 0
/* ---------- headers */

#include "decomp.h"
#include <MainUI.h>
#include <assist\stlexsmallvector.h>
#include <dbdefines.h>
#include <gamestructimpl.h>
#include <Selector.h>
#include <UnitCaps\UnitCaps.h>
#include <Badge.h>
#include <MetaSelTarg.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <SelTarg.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Render\objects\material.h>
#include <memory\memorylib.h>
#include <Tactics.h>
#include <crtdefs.h>
#include <abilities.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <platform\timer.h>
#include <hash_map>
#include <Mathlib\mathutil.h>
#include <Missile.h>
#include <Mathlib\matrix3.h>
#include <platform\platformexports.h>
#include <xhash>
#include <MissileStatic.h>
#include <Pieplate.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <recorder.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <TeamColourRegistry.h>
#include <gameSettings.h>
#include <Render\objects\lensflare.h>
#include <orders.h>
#include <new>
#include <scripting.h>
#include <UserInterface\Graphic.h>
#include <savegame.h>
#include <syncChecking.h>
#include <orders_base.h>
#include <exception>
#include <scriptaccess.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\StyleSheet.h>
#include <BattleScar\BattleScarStats.h>
#include <xstddef>
#include <Collision\BVH\octree.h>
#include <seInterface2\SampleID.h>
#include <scripttypedef.h>
#include <UserInterface\pch.h>
#include <BattleScar\BattleScarManager.h>
#include <type_traits>
#include <Collision\BVH\span.h>
#include <seInterface2\SampleBase.h>
#include <boost\static_assert.hpp>
#include <Decal\DecalManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <UserInterface\signals.h>
#include <Decal\VertexPool.h>
#include <Collision\BVH\proxy.h>
#include <Squadron.h>
#include <Modifiers\ModifierUIInfo.h>
#include <BTG.h>
#include <Collision\intersect.h>
#include <lua.h>
#include <ParadeCommand.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\tristrip.h>
#include <gamemsg.h>
#include <Collision\primitivesfwd.h>
#include <commandtype.h>
#include <Modifiers\ModifierEffect.h>
#include <shipstatic.h>
#include <mainScreen.h>
#include <CloakManager.h>
#include <BuildManager.h>
#include <App\AppObj.h>
#include <platform\windowinterface.h>
#include <xutility>
#include <platform\appinterface.h>
#include <utility>
#include <iosfwd>
#include <Render\objects\layer.h>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Universe.h>
#include <SimVis\RenderModelVis.h>
#include <SOBGroupManager.h>
#include <SimVis\SobVis.h>
#include <Interpolation.h>
#include <gameRender.h>
#include <Modifiers\ModifierApplier.h>
#include <compiler\compilerconfig.h>
#include <Render\objects\cliprect.h>
#include <Collision\Primitives\aabb.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <list>
#include <weaponstaticinfo.h>
#include <resourceCommand.h>
#include <GunBinding.h>
#include <KeyBindings.h>
#include <command.h>
#include <Modifiers\ModifierTargetCache.h>
#include <config.h>
#include <GameObj.h>
#include <TacticalIcon.h>
#include <Mathlib\vector3.h>
#include <util\statmonitor.h>
#include <Mathlib\vector4.h>
#include <platform\osdef.h>
#include <renderer.h>
#include <SensorsBlobs.h>
#include <MeshAnimation.h>
#include <map>
#include <seInterface2\sedefinesshared.h>
#include <ShieldTypes.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <TacticalOverlay.h>
#include <DynamicPoint.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <sobid.h>
#include <subtitle.h>
#include <seInterface2\PatchID.h>
#include <Menus\SubtitleScreen.h>
#include <Player.h>
#include <Render\objects\draw.h>
#include <seInterface2\PatchBase.h>
#include <UserInterface\NewUIScreen.h>
#include <ResearchManager.h>
#include <weaponTargetInfo.h>
#include <Render\objects\objects.h>
#include <seInterface2\SoundParams.h>
#include <region.h>
#include <Render\objects\core.h>
#include <platform\keydefines.h>
#include <Subsystems\HardPointManager.h>
#include <WeaponClassSpecificInfo.h>
#include <Render\gl\types.h>
#include <Mathlib\vector2.h>
#include <Subsystems\HardPoint.h>
#include <util\types.h>
#include <Mathlib\matvec.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Render\objects\simplemesh.h>
#include <Mathlib\LinearInterp.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <mainuidefines.h>
#include <Collision\Primitives\mesh.h>
#include <util\dictionary.h>
#include <Collision\Primitives\triangle.h>
#include <CameraCommand.h>
#include <util\utilexports.h>
#include <UserInterface\NewFrame.h>
#include <memory\memoryalloc.h>
#include <boost\cstdint.hpp>
#include <CameraHW.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\lotypes.h>
#include <Camera\CameraOrbitTarget.h>
#include <UserInterface\uitypes.h>
#include <boost\config.hpp>
#include <Camera\Camera.h>
#include <platform\inputinterface.h>
#include <cassert>
#include <Camera\Frustum.h>
#include <assert.h>
#include <Camera\Plane3.h>
#include <Ping.h>
#include <Render\objects\statmonitorrender.h>
#include <RenderAnim\MarkerInstance.h>
#include <boost\scoped_array.hpp>
#include <luaconfig\luaconfig.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Render\gl\r_types.h>
#include <Collision\Primitives\capsule.h>
#include <CameraTuning.h>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\segment.h>
#include <SobRigidBodyStatic.h>
#include <SobWithMesh.h>
#include <weaponinfo.h>
#include <Collision\BVH\profiling.h>
#include <SobRigidBody.h>
#include <assist\typemagic.h>
#include <alliance.h>
#include <Stars.h>
#include <Viewer.h>
#include <Interface.h>
#include <task.h>
#include <stack>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Modifiers\ModifierAbility.h>
#include <Render\objects\compiledtext.h>
#include <NIS\NISManager.h>
#include <profile\profile.h>
#include <iostream>
#include <MainUIImpl.h>
#include <pathpoints.h>
#include <Cursor.h>
#include <debug\db.h>
#include <RenderAnim\RenderModelInstance.h>
#include <RenderAnim\EffectAnimationList.h>
#include <LuaTools\LuaRulesProfiler.h>
#include <RenderAnim\AnimEventContext.h>
#include <deque>
#include <assist\callback.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Waypoint.h>
#include <Render\objects\debugrender.h>
#include <HyperspaceInhibitorManager.h>
#include <memory\memorysmall.h>
#include <MultiplierTypes.h>
#include <SobUnmoveable.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\bvh.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\glext.h>
#include <prim.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <HyperspaceManager.h>
#include <selection.h>
#include <platform\sysinputinterface.h>
#include <savegamedef.h>
#include <Render\FxGL\FXManager.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <gameRenderDebug.h>
#include <Parade.h>
#include <Render\FxGL\VarMulti.h>
#include <sob.h>
#include <Render\objects\fontsystem.h>
#include <boost\detail\lwm_win32.hpp>
#include <sobstatic.h>
#include <Camera\OrbitParameters.h>
#include <Render\objects\bitmapfont.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\sphere.h>
#include <renderModifiers.h>
#include <Render\objects\geometry.h>
#include <EventPointerManager.h>
#include <Render\objects\mesh.h>
#include <Render\objects\renderable.h>
#include <SensorsManager.h>
#include <ATITemplate.h>
#include <SoundManager\SoundManager.h>
#include <Race.h>
#include <ATI.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Sob\Resource\Resource.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <wchar.h>
#include <string>
#include <LevelDesc.h>
#include <Hash.h>
#include <DefenseFieldManager.h>
#include <queue>
#include <SoundManager\SoundEntityHandle.h>
#include <fileio\md5.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > > EmmiterHandleMap;

/* ---------- prototypes */

extern void muiShowNISDebug(bool on);
extern void muiShowNISDebugToggle();
extern void muiEnableScreenshotCameraMode();
extern float muiGetWidescreenAspect();
extern void muiDrawSelectionBox(MainUIImpl *pImpl);
extern void muiDrawMeta2D(MainUIImpl *pImpl);
extern void muiDrawScissorBars(MainUIImpl *pImpl);
extern void muiDrawFullscreenFade(MainUIImpl *pImpl);
extern Cursor::Type_t muiMapCommandToCursor(MainUIImpl *pImpl);
extern void muiDimBackground(MainUIImpl *pImpl, Camera const *pCamera);
extern void muiSensorsStateThink(MainUIImpl *pImpl, CameraOrbitTarget const *pCamera, float timeElapsed);
extern void muiDrawAbilitySphereModifier(Ship *ship, ModifierUIInfo::ModifierUIEntry const &info, unsigned __int32 visibility);
extern void muiDrawSquadronSphereModifiers(MainUIImpl *pImpl, Squadron *squad, OrderFeedbackValue const *feedbackValue, unsigned __int32 visibility);
extern void muiDrawSubSystemSphereModifiers(MainUIImpl *pImpl, SubSystem *subsystem, OrderFeedbackValue const *feedbackValue, unsigned __int32 visibility);
extern void muiDrawMouseOver(MainUIImpl *pImpl, Selection const &sel);
extern void muiDrawSelectingSubsystems(MainUIImpl *pImpl, Selection const &sel);
extern void muiDrawSelected(MainUIImpl *pImpl, Selection const &sel);
extern void muiDrawRemainingSquadrons(MainUIImpl *pImpl);
extern void muiDrawMissiles();
extern void muiDrawAllSelectingResources();
extern void muiDrawMainScreen3D(MainUIImpl *pImpl, CameraHW const *pViewCamera, float mouseX, float mouseY);
extern void muiDrawMainScreen2D(MainUIImpl *pImpl, Camera *pViewCamera);
extern void muiDrawMainScreen2DDebug(MainUIImpl *pImpl, long long fdt);
extern void muiDrawMainScreen(MainUIImpl *pImpl);
extern void muiRenderRegisterTweaks();

_static void getMouseOverColour(SubSystem *sub, vector4 &moColour);
_static void muiProcessPanning(MainUIImpl *pImpl, float mouseX, float mouseY);

/* ---------- globals */

extern float muiHurtHealthValue; // 0x833D54
extern float muiDyingHealthValue; // 0x833D58
extern bool g_uiShowStatMonitor; // 0x84399C
extern float muiTwkMouseOverPulseAlphaOffset; // 0x833D60
extern float muiTwkMouseOverPulseFreqMult; // 0x833D64
extern __int32 muiTwkShowShipNames; // 0x833D1C
extern __int32 muiTwkBandboxWidth; // 0x833D20
extern char muiTwkShipGroupFontName[8]; // 0x833D24
extern bool g_uiShowNISDebug; // 0x84399D
extern bool g_debugFrustum; // 0x84399E
extern Cursor::Type_t g_uiOverrideCursor; // 0x8439A0
extern vector4 muiTwkFriendlyMouseOverColour; // 0x833D70
extern vector4 muiTwkAllyMouseOverColour; // 0x833D80
extern vector4 muiTwkEnemyMouseOverColour; // 0x833D90
extern vector4 muiTwkNeutralMouseOverColour; // 0x833DA0
extern vector4 muiTwkResourceMouseOverColour; // 0x833DB0
extern vector4 muiTwkBandboxColour; // 0x833DC0
extern vector4 muiTwkShipSelectionBoxColour; // 0x833DD0
extern vector4 muiTwkHotkeyGroupTextColour; // 0x833DE0
extern vector4 muiTwkFriendlyHealthBarColour; // 0x833DF0
extern vector4 muiTwkFriendlyHealthBarColourHurt; // 0x833E00
extern vector4 muiTwkFriendlyHealthBarColourDying; // 0x833E10
extern vector4 muiTwkFriendlyHealthBarBackgroundColour; // 0x833E20
extern vector4 muiTwkFriendlyHealthBarBackgroundColourHurt; // 0x833E30
extern vector4 muiTwkFriendlyHealthBarBackgroundColourDying; // 0x833E40
extern vector4 muiTwkAllyHealthBarColour; // 0x833E50
extern vector4 muiTwkAllyHealthBarBackgroundColour; // 0x833E60
extern vector4 muiTwkEnemyHealthBarColour; // 0x833E70
extern vector4 muiTwkEnemyHealthBarBackgroundColour; // 0x833E80
extern vector4 muiTwkResourceBarColour; // 0x833E90
extern vector4 muiTwkResourceBarBackgroundColour; // 0x833EA0
extern float muiTwkMinimumHealthBarSize; // 0x833D3C
extern float muiTwkMinimumSelectionBoxSize; // 0x833D40
extern float muiTwkHealthBarLengthFactor; // 0x833D44
extern float muiTwkWidescreenAspect; // 0x833D48
extern vector4 muiTwkLetterBoxStartColour; // 0x833EB0
extern vector4 muiTwkLetterBoxEndColour; // 0x833EC0
extern float muiTwkSensorsFadeTime; // 0x833D4C
extern float muiTwkSecSensorNoise; // 0x833D50
extern float muiTwkMouseOverAlpha; // 0x833D5C

/* ---------- private variables */

_static
{
    extern bool g_bShowDistanceToShip; // 0x84399F
    extern bool g_uiEnableScreenshotCameraMode; // 0x8439A4
    extern float subtitleTwkScrollDwellStart; // 0x833D2C
    extern float subtitleTwkScrollDwellEnd; // 0x833D30
    extern float subtitleTwkScrollShortest; // 0x833D34
    extern float subtitleTwkTitleShortest; // 0x833D38
    extern float const ViewerUpdateRate; // 0x760E60
    extern float const ViewerUpdatePeriod; // 0x833D68
    extern float const CameraDistanceUpdateRate; // 0x760E64
    extern float const CameraDistanceUpdatePeriod; // 0x833D6C
}

/* ---------- public code */

_extern void _sub_45CC3D(bool);
void muiShowNISDebug(bool on) // 0x45CC3D
{
    mangled_assert("?muiShowNISDebug@@YGX_N@Z");
    todo("implement");
    _sub_45CC3D(on);
}

_extern void _sub_45CC49();
void muiShowNISDebugToggle() // 0x45CC49
{
    mangled_assert("?muiShowNISDebugToggle@@YGXXZ");
    todo("implement");
    _sub_45CC49();
}

_extern void _sub_45C10E();
void muiEnableScreenshotCameraMode() // 0x45C10E
{
    mangled_assert("?muiEnableScreenshotCameraMode@@YGXXZ");
    todo("implement");
    _sub_45C10E();
}

_extern float _sub_45C116();
float muiGetWidescreenAspect() // 0x45C116
{
    mangled_assert("?muiGetWidescreenAspect@@YGMXZ");
    todo("implement");
    float __result = _sub_45C116();
    return __result;
}

_extern void _sub_45BEAC(MainUIImpl *);
void muiDrawSelectionBox(MainUIImpl *pImpl) // 0x45BEAC
{
    mangled_assert("?muiDrawSelectionBox@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45BEAC(pImpl);
}

_extern void _sub_45A8DE(MainUIImpl *const, float &, float &);
void MainUIImpl::handleAtDrawTime(float &, float &) // 0x45A8DE
{
    mangled_assert("?handleAtDrawTime@MainUIImpl@@QAEXAAM0@Z");
    todo("implement");
    _sub_45A8DE(this, arg, arg);
}

_extern void _sub_45CC5C(MainUIImpl *const, float &, float &);
void MainUIImpl::pieplateHandleDrawTime(float &, float &) // 0x45CC5C
{
    mangled_assert("?pieplateHandleDrawTime@MainUIImpl@@QAEXAAM0@Z");
    todo("implement");
    _sub_45CC5C(this, arg, arg);
}

_extern void _sub_45B45A(MainUIImpl *);
void muiDrawMeta2D(MainUIImpl *pImpl) // 0x45B45A
{
    mangled_assert("?muiDrawMeta2D@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45B45A(pImpl);
}

_extern void _sub_45B95E(MainUIImpl *);
void muiDrawScissorBars(MainUIImpl *pImpl) // 0x45B95E
{
    mangled_assert("?muiDrawScissorBars@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45B95E(pImpl);
}

_extern void _sub_45AB4D(MainUIImpl *);
void muiDrawFullscreenFade(MainUIImpl *pImpl) // 0x45AB4D
{
    mangled_assert("?muiDrawFullscreenFade@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45AB4D(pImpl);
}

_extern Cursor::Type_t _sub_45C11D(MainUIImpl *);
Cursor::Type_t muiMapCommandToCursor(MainUIImpl *pImpl) // 0x45C11D
{
    mangled_assert("?muiMapCommandToCursor@@YG?AW4Type_t@Cursor@@PAVMainUIImpl@@@Z");
    todo("implement");
    Cursor::Type_t __result = _sub_45C11D(pImpl);
    return __result;
}

_extern void _sub_45A8E1(MainUIImpl *, Camera const *);
void muiDimBackground(MainUIImpl *pImpl, Camera const *pCamera) // 0x45A8E1
{
    mangled_assert("?muiDimBackground@@YGXPAVMainUIImpl@@PBVCamera@@@Z");
    todo("implement");
    _sub_45A8E1(pImpl, pCamera);
}

_extern void _sub_45CB6B(MainUIImpl *, CameraOrbitTarget const *, float);
void muiSensorsStateThink(MainUIImpl *pImpl, CameraOrbitTarget const *pCamera, float timeElapsed) // 0x45CB6B
{
    mangled_assert("?muiSensorsStateThink@@YGXPAVMainUIImpl@@PBVCameraOrbitTarget@@M@Z");
    todo("implement");
    _sub_45CB6B(pImpl, pCamera, timeElapsed);
}

_extern void _sub_45A924(Ship *, ModifierUIInfo::ModifierUIEntry const &, unsigned __int32);
void muiDrawAbilitySphereModifier(Ship *ship, ModifierUIInfo::ModifierUIEntry const &info, unsigned __int32 visibility) // 0x45A924
{
    mangled_assert("?muiDrawAbilitySphereModifier@@YGXPAVShip@@ABUModifierUIEntry@ModifierUIInfo@@I@Z");
    todo("implement");
    _sub_45A924(ship, info, visibility);
}

_extern void _sub_45BEF8(MainUIImpl *, Squadron *, OrderFeedbackValue const *, unsigned __int32);
void muiDrawSquadronSphereModifiers(MainUIImpl *pImpl, Squadron *squad, OrderFeedbackValue const *feedbackValue, unsigned __int32 visibility) // 0x45BEF8
{
    mangled_assert("?muiDrawSquadronSphereModifiers@@YGXPAVMainUIImpl@@PAVSquadron@@PBUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_45BEF8(pImpl, squad, feedbackValue, visibility);
}

_extern void _sub_45BFEF(MainUIImpl *, SubSystem *, OrderFeedbackValue const *, unsigned __int32);
void muiDrawSubSystemSphereModifiers(MainUIImpl *pImpl, SubSystem *subsystem, OrderFeedbackValue const *feedbackValue, unsigned __int32 visibility) // 0x45BFEF
{
    mangled_assert("?muiDrawSubSystemSphereModifiers@@YGXPAVMainUIImpl@@PAVSubSystem@@PBUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_45BFEF(pImpl, subsystem, feedbackValue, visibility);
}

_extern void _sub_45B619(MainUIImpl *, Selection const &);
void muiDrawMouseOver(MainUIImpl *pImpl, Selection const &sel) // 0x45B619
{
    mangled_assert("?muiDrawMouseOver@@YGXPAVMainUIImpl@@ABVSelection@@@Z");
    todo("implement");
    _sub_45B619(pImpl, sel);
}

_extern void _sub_45BE80(MainUIImpl *, Selection const &);
void muiDrawSelectingSubsystems(MainUIImpl *pImpl, Selection const &sel) // 0x45BE80
{
    mangled_assert("?muiDrawSelectingSubsystems@@YGXPAVMainUIImpl@@ABVSelection@@@Z");
    todo("implement");
    _sub_45BE80(pImpl, sel);
}

_extern void _sub_45BC50(MainUIImpl *, Selection const &);
void muiDrawSelected(MainUIImpl *pImpl, Selection const &sel) // 0x45BC50
{
    mangled_assert("?muiDrawSelected@@YGXPAVMainUIImpl@@ABVSelection@@@Z");
    todo("implement");
    _sub_45BC50(pImpl, sel);
}

_extern void _sub_45B7BB(MainUIImpl *);
void muiDrawRemainingSquadrons(MainUIImpl *pImpl) // 0x45B7BB
{
    mangled_assert("?muiDrawRemainingSquadrons@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45B7BB(pImpl);
}

_extern void _sub_45B52C();
void muiDrawMissiles() // 0x45B52C
{
    mangled_assert("?muiDrawMissiles@@YGXXZ");
    todo("implement");
    _sub_45B52C();
}

_extern void _sub_45AA96();
void muiDrawAllSelectingResources() // 0x45AA96
{
    mangled_assert("?muiDrawAllSelectingResources@@YGXXZ");
    todo("implement");
    _sub_45AA96();
}

_extern void _sub_45AFEC(MainUIImpl *, CameraHW const *, float, float);
void muiDrawMainScreen3D(MainUIImpl *pImpl, CameraHW const *pViewCamera, float mouseX, float mouseY) // 0x45AFEC
{
    mangled_assert("?muiDrawMainScreen3D@@YGXPAVMainUIImpl@@PBVCameraHW@@MM@Z");
    todo("implement");
    _sub_45AFEC(pImpl, pViewCamera, mouseX, mouseY);
}

_extern void _sub_45AD03(MainUIImpl *, Camera *);
void muiDrawMainScreen2D(MainUIImpl *pImpl, Camera *pViewCamera) // 0x45AD03
{
    mangled_assert("?muiDrawMainScreen2D@@YGXPAVMainUIImpl@@PAVCamera@@@Z");
    todo("implement");
    _sub_45AD03(pImpl, pViewCamera);
}

_extern void _sub_45AE51(MainUIImpl *, long long);
void muiDrawMainScreen2DDebug(MainUIImpl *pImpl, long long fdt) // 0x45AE51
{
    mangled_assert("?muiDrawMainScreen2DDebug@@YGXPAVMainUIImpl@@_J@Z");
    todo("implement");
    _sub_45AE51(pImpl, fdt);
}

_extern void _sub_45B28D(MainUIImpl *);
void muiDrawMainScreen(MainUIImpl *pImpl) // 0x45B28D
{
    mangled_assert("?muiDrawMainScreen@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_45B28D(pImpl);
}

_extern void _sub_45C4D6();
void muiRenderRegisterTweaks() // 0x45C4D6
{
    mangled_assert("?muiRenderRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_45C4D6();
}

/* ---------- private code */

_extern void _sub_45A83E(SubSystem *, vector4 &);
_static void getMouseOverColour(SubSystem *sub, vector4 &moColour) // 0x45A83E
{
    mangled_assert("getMouseOverColour");
    todo("implement");
    _sub_45A83E(sub, moColour);
}

_extern void _sub_45C1FD(MainUIImpl *, float, float);
_static void muiProcessPanning(MainUIImpl *pImpl, float mouseX, float mouseY) // 0x45C1FD
{
    mangled_assert("muiProcessPanning");
    todo("implement");
    _sub_45C1FD(pImpl, mouseX, mouseY);
}
#endif
