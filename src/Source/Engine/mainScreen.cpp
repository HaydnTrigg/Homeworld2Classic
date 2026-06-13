#if 0
/* ---------- headers */

#include "decomp.h"
#include <renderer.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\gl\types.h>
#include <assist\stlexsmallvector.h>
#include <Modifiers\ModifierEffect.h>
#include <Render\gl\lotypes.h>
#include <abilities.h>
#include <GameObj.h>
#include <Menus\NewTaskbar.h>
#include <xstring>
#include <Ship\ShipController.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <Ship\AdvRigidBodyController.h>
#include <pch.h>
#include <util\statmonitor.h>
#include <memory\memorylib.h>
#include <Physics\RigidBodyController.h>
#include <Menus\MenuSupport.h>
#include <ShieldTypes.h>
#include <util\utilexports.h>
#include <MeshAnimation.h>
#include <crtdefs.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <WeaponStatic.h>
#include <Render\objects\bitmapfont.h>
#include <sctObjectLoad.h>
#include <Modifiers\ModifierApplier.h>
#include <screenshot.h>
#include <weapontesting.h>
#include <Subsystems\HardPointManager.h>
#include <Mathlib\matrix3.h>
#include <weapon.h>
#include <Subsystems\HardPoint.h>
#include <WeaponFire\WeaponFire.h>
#include <Subsystems\HardPointStatic.h>
#include <Universe.h>
#include <weaponfiretypes.h>
#include <Subsystems\SubSystemType.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <NIS\NISDebug.h>
#include <weaponstaticinfo.h>
#include <new>
#include <sob.h>
#include <GunBinding.h>
#include <OrderFeedback.h>
#include <sobstatic.h>
#include <exception>
#include <xstddef>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\NewFrame.h>
#include <type_traits>
#include <gameSettings.h>
#include <UserInterface\InterfaceElement.h>
#include <syncChecking.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <Menus\NewResearchMenu.h>
#include <Camera\OrbitParameters.h>
#include <Collision\Collision.h>
#include <Collision\BVH\octree.h>
#include <Viewer.h>
#include <Menus\NewLaunchMenu.h>
#include <Menus\GameMenu.h>
#include <App\AppObj.h>
#include <Collision\BVH\span.h>
#include <Ship\FormationTargetInfo.h>
#include <GameEventSys.h>
#include <xutility>
#include <platform\appinterface.h>
#include <Collision\BVH\Internal\span_i.h>
#include <weaponinfo.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <weaponTargetInfo.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <fileio\fileioexports.h>
#include <HyperspaceManager.h>
#include <Cursor.h>
#include <WeaponClassSpecificInfo.h>
#include <SquadronList.h>
#include <Render\objects\texture.h>
#include <platform\osdef.h>
#include <Render\objects\objects.h>
#include <BuildData.h>
#include <Render\objects\core.h>
#include <compiler\compilerconfig.h>
#include <DependencyData.h>
#include <Interpolation.h>
#include <subtitle.h>
#include <list>
#include <Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <region.h>
#include <Menus\SMFiltersMenu.h>
#include <Collision\Primitives\aabb.h>
#include <TeamColourRegistry.h>
#include <playerresourcetype.h>
#include <assist\fixedstring.h>
#include <savegame.h>
#include <UserInterface\NewTextLabel.h>
#include <CameraCommand.h>
#include <Mathlib\vector3.h>
#include <fixedpoint.h>
#include <profile\profile.h>
#include <UserInterface\uiprimitives.h>
#include <CameraHW.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <util\fixed.h>
#include <SobZeroMassBody.h>
#include <iostream>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <sobzeromassbodystatic.h>
#include <SobWithMeshStatic.h>
#include <map>
#include <Camera\Frustum.h>
#include <Collision\Primitives\obb.h>
#include <Interface.h>
#include <xtree>
#include <Camera\Plane3.h>
#include <SoundManager\SoundManager.h>
#include <boost\smart_ptr.hpp>
#include <ship.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SEInterface.h>
#include <SobWithMesh.h>
#include <seInterface2\seinterfacefunc.h>
#include <SobRigidBody.h>
#include <ParadeCommand.h>
#include <gameRandom.h>
#include <seInterface2\SoundParamManager.h>
#include <scripting.h>
#include <Parade.h>
#include <assist\gbitset.h>
#include <scriptaccess.h>
#include <SobRigidBodyStatic.h>
#include <orders.h>
#include <scripttypedef.h>
#include <orders_base.h>
#include <Squadron.h>
#include <Ship\Formation.h>
#include <Mathlib\vector2.h>
#include <command.h>
#include <Ship\FormationPattern.h>
#include <util\types.h>
#include <Render\objects\screenshot.h>
#include <UserInterface\UIDialog.h>
#include <lua.h>
#include <Modifiers\ModifierAbility.h>
#include <UserInterface\StringTable.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\cstdint.hpp>
#include <shipstatic.h>
#include <boost\config.hpp>
#include <DynamicPoint.h>
#include <commandtype.h>
#include <Render\objects\cliprect.h>
#include <cassert>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Menus\FinalBuildMenu.h>
#include <Mathlib\quat.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <campaign.h>
#include <platform\timer.h>
#include <Collision\Primitives\capsule.h>
#include <MainUI.h>
#include <luaconfig\luabinding.h>
#include <assist\typemagic.h>
#include <App\PlayerProfileMan.h>
#include <platform\platformexports.h>
#include <Collision\Primitives\segment.h>
#include <Selector.h>
#include <Race.h>
#include <luaconfig\luaconfig.h>
#include <App\PlayerProfile.h>
#include <Collision\BVH\profiling.h>
#include <LevelDesc.h>
#include <MetaSelTarg.h>
#include <App\PlayerProfileGameOptions.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Mathlib\mathlibdll.h>
#include <Menus\NewMainMenu.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <Tactics.h>
#include <LevelManager.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <savegameimpl.h>
#include <BuildManager.h>
#include <pathpoints.h>
#include <SOBGroupManager.h>
#include <mainuidefines.h>
#include <recorder.h>
#include <debug\db.h>
#include <StrikeGroupFormationNode.h>
#include <UserInterface\StyleSheet.h>
#include <Render\objects\textureregistry.h>
#include <UserInterface\pch.h>
#include <deque>
#include <SensorsManager.h>
#include <Mathlib\mathutil.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\Graphic.h>
#include <selection.h>
#include <Render\objects\textureproxy.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Menus\MovieScreen.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\r_defines.h>
#include <MultiplierTypes.h>
#include <random.h>
#include <bitset>
#include <Render\gl\glext.h>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\signals.h>
#include <boost\static_assert.hpp>
#include <Menus\ChatScreen.h>
#include <UserInterface\NewUIScreenManager.h>
#include <seInterface2\sedefinesshared.h>
#include <Render\objects\compiledtext.h>
#include <mainScreen.h>
#include <gamemsg.h>
#include <wchar.h>
#include <string>
#include <dbdefines.h>
#include <Player.h>
#include <UnitCaps\UnitCaps.h>
#include <ResearchManager.h>
#include <localizer\localizer.h>
#include <queue>
#include <task.h>
#include <TacticalOverlay.h>
#include <UserInterface\UISoundManager.h>
#include <LuaTools\LCWatcher.h>
#include <stack>
#include <hash_map>
#include <KeyBindings.h>
#include <xhash>
#include <config.h>
#include <Graphics\AutoLOD.h>
#include <platform\keydefines.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Modifiers\ModifierUIInfo.h>

/* ---------- constants */

/* ---------- definitions */

struct KeyEventToCommandEntry
{
    __int32 userEvent; // 0x0
    unsigned __int32 command; // 0x4
};
static_assert(sizeof(KeyEventToCommandEntry) == 8, "Invalid KeyEventToCommandEntry size");

struct CommandStackEntry
{
    __int32 *commands; // 0x0
    __int32 numCommands; // 0x4
    CommandStackEntry *nextEntry; // 0x8
};
static_assert(sizeof(CommandStackEntry) == 12, "Invalid CommandStackEntry size");

struct msFuncBinding
{
    __int32 userEvent; // 0x0
    void (*msFunc)(__int32); // 0x4
};
static_assert(sizeof(msFuncBinding) == 8, "Invalid msFuncBinding size");

typedef std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > EventToCommandMap;
typedef void (*msFunctionCB)(__int32);

/* ---------- prototypes */

extern void mainRegDraw(region *);
extern void mainRegLuaProcess(region *luaStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
extern unsigned __int32 mainRegProcess(region *reg, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data);

_static void msSwitchPlayer(__int32);
_static void msSubtitleOk(__int32);
_static void msTacticalOverlay(__int32);
_static void msHUD(__int32);
_static void msInGameExitOnAccept(UI::InterfaceElement *btn);
_static void msInGameExitOnCancel(UI::InterfaceElement *btn);
_static void msInGameExit(__int32 msgText);
_static void msInGameMenu(__int32 pan);
_static void msScriptReload(__int32);
_static void msShipScriptReload(__int32);
_static void msTurboEnable(__int32 data);
_static void msQuickSave(__int32);
_static void msQuickLoad(__int32);
_static void msQuickSaveDet(__int32);
_static void msQuickLoadDet(__int32);
_static void msRestartLevel(__int32);
_static void msChat(__int32 data);
_static void msFiltersToggle(__int32 data);
_static void msBuildManager(__int32 toggle);
_static void msResearchManager(__int32 toggle);
_static void msLaunchManager(__int32 toggle);
_static void msPause(__int32);
_static void msPreviousTactic(__int32 data);
_static void msNextTactic(__int32 data);
_static void msTactics(__int32 data);
_static void msScuttle(__int32 data);
_static void msSensorPing(__int32 squadList);
_static void msRenderToggle(__int32);
_static void msSuperTurbo(__int32 flag);
_static void msCameraDump(__int32 __formal);

/* ---------- globals */

extern region *MainScreen::m_pMainReg; // 0x843934
extern msFuncBinding g_mainScreenFunctionList[28]; // 0x833630

/* ---------- private variables */

_static
{
    extern std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > s_mainRegEventCommandMap; // 0x84393C
    extern bool g_wasGamePaused; // 0x843930
    extern float subtitleTwkScrollDwellStart; // 0x833620
    extern float subtitleTwkScrollDwellEnd; // 0x833624
    extern float subtitleTwkScrollShortest; // 0x833628
    extern float subtitleTwkTitleShortest; // 0x83362C
    extern float const ViewerUpdateRate; // 0x760134
    extern float const ViewerUpdatePeriod; // 0x833848
    extern float const CameraDistanceUpdateRate; // 0x760138
    extern float const CameraDistanceUpdatePeriod; // 0x83384C
    extern char const *QUICKSTART_GAMETYPE; // 0x833710
    extern KeyEventToCommandEntry g_mainRegEventCommandTable[38]; // 0x833718
    extern bool g_enabledGameEvents[76]; // 0x843948
    extern CommandStackEntry *g_commandStackTop; // 0x843938
}

/* ---------- public code */

_extern void _sub_44FF66(char const *);
void MainScreen::LoadKeyBindingFile(char const *luaKeyBindFile) // 0x44FF66
{
    mangled_assert("?LoadKeyBindingFile@MainScreen@@SGXPBD@Z");
    todo("implement");
    _sub_44FF66(luaKeyBindFile);
}

_extern void _sub_45011A(KeyBindingList const &);
void MainScreen::ResetKeyBindings(KeyBindingList const &bindings) // 0x45011A
{
    mangled_assert("?ResetKeyBindings@MainScreen@@SGXABVKeyBindingList@@@Z");
    todo("implement");
    _sub_45011A(bindings);
}

_extern bool _sub_44FE10();
bool MainScreen::Initialize() // 0x44FE10
{
    mangled_assert("?Initialize@MainScreen@@SG_NXZ");
    todo("implement");
    bool __result = _sub_44FE10();
    return __result;
}

_extern bool _sub_44FDB3();
bool MainScreen::Denitialize() // 0x44FDB3
{
    mangled_assert("?Denitialize@MainScreen@@SG_NXZ");
    todo("implement");
    bool __result = _sub_44FDB3();
    return __result;
}

_extern void _sub_4509AD(region *);
void mainRegDraw(region *) // 0x4509AD
{
    mangled_assert("?mainRegDraw@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_4509AD(arg);
}

_extern bool _sub_44FDF1(__int32, bool);
bool MainScreen::EnableGameEvent(__int32 event, bool enable) // 0x44FDF1
{
    mangled_assert("?EnableGameEvent@MainScreen@@SG_NH_N@Z");
    todo("implement");
    bool __result = _sub_44FDF1(event, enable);
    return __result;
}

_extern void _sub_44FBF8(std::_Tree_buy<std::pair<int const ,unsigned int>,std::allocator<std::pair<int const ,unsigned int> > > *const);
_inline std::_Tree_buy<std::pair<int const ,unsigned int>,std::allocator<std::pair<int const ,unsigned int> > >::~_Tree_buy<std::pair<int const ,unsigned int>,std::allocator<std::pair<int const ,unsigned int> > >() // 0x44FBF8
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHI@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44FBF8(this);
}

_extern void _sub_44FC01(std::_Tree_comp<0,std::_Tmap_traits<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> >,0> >() // 0x44FC01
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44FC01(this);
}

_extern void _sub_44FC0A(std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > > *const);
_inline std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >::~map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const ,unsigned int> > >() // 0x44FC0A
{
    mangled_assert("??1?$map@HIU?$less@H@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_44FC0A(this);
}

_extern bool _sub_44FF53(__int32);
bool MainScreen::IsGameEventEnabled(__int32 event) // 0x44FF53
{
    mangled_assert("?IsGameEventEnabled@MainScreen@@SG_NH@Z");
    todo("implement");
    bool __result = _sub_44FF53(event);
    return __result;
}

_extern void _sub_44FDDB(bool);
void MainScreen::EnableAllGameEvents(bool enable) // 0x44FDDB
{
    mangled_assert("?EnableAllGameEvents@MainScreen@@SGX_N@Z");
    todo("implement");
    _sub_44FDDB(enable);
}

_extern void _sub_450068();
void MainScreen::PushEnabledGameEvents() // 0x450068
{
    mangled_assert("?PushEnabledGameEvents@MainScreen@@SGXXZ");
    todo("implement");
    _sub_450068();
}

_extern void _sub_450026();
void MainScreen::PopEnabledGameEvents() // 0x450026
{
    mangled_assert("?PopEnabledGameEvents@MainScreen@@SGXXZ");
    todo("implement");
    _sub_450026();
}

_extern void _sub_450015();
void MainScreen::PopAllEnabledGameEvents() // 0x450015
{
    mangled_assert("?PopAllEnabledGameEvents@MainScreen@@SGXXZ");
    todo("implement");
    _sub_450015();
}

_extern void _sub_44FF9E(__int32, __int32, __int32);
void MainScreen::MainRegionUserEvent(__int32 userEvent, __int32 data, __int32 data2) // 0x44FF9E
{
    mangled_assert("?MainRegionUserEvent@MainScreen@@SGXHHH@Z");
    todo("implement");
    _sub_44FF9E(userEvent, data, data2);
}

_extern void _sub_4509C8(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void mainRegLuaProcess(region *luaStr, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4509C8
{
    mangled_assert("?mainRegLuaProcess@@YGXPAVregion@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_4509C8(luaStr, arg);
}

_extern unsigned __int32 _sub_4509EE(region *, __int32, __int32, __int32, __int32);
unsigned __int32 mainRegProcess(region *reg, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data) // 0x4509EE
{
    mangled_assert("?mainRegProcess@@YGIPAVregion@@HHHH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4509EE(reg, ID, regEvent, userEvent, data);
    return __result;
}

_extern bool _sub_44FF47();
bool MainScreen::Is3DSceneVisible() // 0x44FF47
{
    mangled_assert("?Is3DSceneVisible@MainScreen@@SG_NXZ");
    todo("implement");
    bool __result = _sub_44FF47();
    return __result;
}

/* ---------- private code */

_extern void _sub_44E976(__int32);
_static void msSwitchPlayer(__int32) // 0x44E976
{
    mangled_assert("msSwitchPlayer");
    todo("implement");
    _sub_44E976(arg);
}

_extern void _sub_44E9A0(__int32);
_static void msSubtitleOk(__int32) // 0x44E9A0
{
    mangled_assert("msSubtitleOk");
    todo("implement");
    _sub_44E9A0(arg);
}

_extern void _sub_44E9BB(__int32);
_static void msTacticalOverlay(__int32) // 0x44E9BB
{
    mangled_assert("msTacticalOverlay");
    todo("implement");
    _sub_44E9BB(arg);
}

_extern void _sub_44E9DB(__int32);
_static void msHUD(__int32) // 0x44E9DB
{
    mangled_assert("msHUD");
    todo("implement");
    _sub_44E9DB(arg);
}

_extern void _sub_450B5A(UI::InterfaceElement *);
_static void msInGameExitOnAccept(UI::InterfaceElement *btn) // 0x450B5A
{
    mangled_assert("msInGameExitOnAccept");
    todo("implement");
    _sub_450B5A(btn);
}

_extern void _sub_450B69(UI::InterfaceElement *);
_static void msInGameExitOnCancel(UI::InterfaceElement *btn) // 0x450B69
{
    mangled_assert("msInGameExitOnCancel");
    todo("implement");
    _sub_450B69(btn);
}

_extern void _sub_44E9E3(__int32);
_static void msInGameExit(__int32 msgText) // 0x44E9E3
{
    mangled_assert("msInGameExit");
    todo("implement");
    _sub_44E9E3(msgText);
}

_extern void _sub_44EB0D(__int32);
_static void msInGameMenu(__int32 pan) // 0x44EB0D
{
    mangled_assert("msInGameMenu");
    todo("implement");
    _sub_44EB0D(pan);
}

_extern void _sub_44EC52(__int32);
_static void msScriptReload(__int32) // 0x44EC52
{
    mangled_assert("msScriptReload");
    todo("implement");
    _sub_44EC52(arg);
}

_extern void _sub_44EC5F(__int32);
_static void msShipScriptReload(__int32) // 0x44EC5F
{
    mangled_assert("msShipScriptReload");
    todo("implement");
    _sub_44EC5F(arg);
}

_extern void _sub_44EC67(__int32);
_static void msTurboEnable(__int32 data) // 0x44EC67
{
    mangled_assert("msTurboEnable");
    todo("implement");
    _sub_44EC67(data);
}

_extern void _sub_44ECB2(__int32);
_static void msQuickSave(__int32) // 0x44ECB2
{
    mangled_assert("msQuickSave");
    todo("implement");
    _sub_44ECB2(arg);
}

_extern void _sub_44ED08(__int32);
_static void msQuickLoad(__int32) // 0x44ED08
{
    mangled_assert("msQuickLoad");
    todo("implement");
    _sub_44ED08(arg);
}

_extern void _sub_44EDA5(__int32);
_static void msQuickSaveDet(__int32) // 0x44EDA5
{
    mangled_assert("msQuickSaveDet");
    todo("implement");
    _sub_44EDA5(arg);
}

_extern void _sub_44EDFA(__int32);
_static void msQuickLoadDet(__int32) // 0x44EDFA
{
    mangled_assert("msQuickLoadDet");
    todo("implement");
    _sub_44EDFA(arg);
}

_extern void _sub_44EE5C(__int32);
_static void msRestartLevel(__int32) // 0x44EE5C
{
    mangled_assert("msRestartLevel");
    todo("implement");
    _sub_44EE5C(arg);
}

_extern void _sub_44EE89(__int32);
_static void msChat(__int32 data) // 0x44EE89
{
    mangled_assert("msChat");
    todo("implement");
    _sub_44EE89(data);
}

_extern void _sub_44EEAD(__int32);
_static void msFiltersToggle(__int32 data) // 0x44EEAD
{
    mangled_assert("msFiltersToggle");
    todo("implement");
    _sub_44EEAD(data);
}

_extern void _sub_44EEB5(__int32);
_static void msBuildManager(__int32 toggle) // 0x44EEB5
{
    mangled_assert("msBuildManager");
    todo("implement");
    _sub_44EEB5(toggle);
}

_extern void _sub_44EEEA(__int32);
_static void msResearchManager(__int32 toggle) // 0x44EEEA
{
    mangled_assert("msResearchManager");
    todo("implement");
    _sub_44EEEA(toggle);
}

_extern void _sub_44EF0A(__int32);
_static void msLaunchManager(__int32 toggle) // 0x44EF0A
{
    mangled_assert("msLaunchManager");
    todo("implement");
    _sub_44EF0A(toggle);
}

_extern void _sub_44EF3F(__int32);
_static void msPause(__int32) // 0x44EF3F
{
    mangled_assert("msPause");
    todo("implement");
    _sub_44EF3F(arg);
}

_extern void _sub_44EF9F(__int32);
_static void msPreviousTactic(__int32 data) // 0x44EF9F
{
    mangled_assert("msPreviousTactic");
    todo("implement");
    _sub_44EF9F(data);
}

_extern void _sub_44F072(__int32);
_static void msNextTactic(__int32 data) // 0x44F072
{
    mangled_assert("msNextTactic");
    todo("implement");
    _sub_44F072(data);
}

_extern void _sub_44F144(__int32);
_static void msTactics(__int32 data) // 0x44F144
{
    mangled_assert("msTactics");
    todo("implement");
    _sub_44F144(data);
}

_extern void _sub_44F1B0(__int32);
_static void msScuttle(__int32 data) // 0x44F1B0
{
    mangled_assert("msScuttle");
    todo("implement");
    _sub_44F1B0(data);
}

_extern void _sub_44F1C5(__int32);
_static void msSensorPing(__int32 squadList) // 0x44F1C5
{
    mangled_assert("msSensorPing");
    todo("implement");
    _sub_44F1C5(squadList);
}

_extern void _sub_44F22E(__int32);
_static void msRenderToggle(__int32) // 0x44F22E
{
    mangled_assert("msRenderToggle");
    todo("implement");
    _sub_44F22E(arg);
}

_extern void _sub_44F241(__int32);
_static void msSuperTurbo(__int32 flag) // 0x44F241
{
    mangled_assert("msSuperTurbo");
    todo("implement");
    _sub_44F241(flag);
}

_extern void _sub_44F26E(__int32);
_static void msCameraDump(__int32 __formal) // 0x44F26E
{
    mangled_assert("msCameraDump");
    todo("implement");
    _sub_44F26E(__formal);
}
#endif
