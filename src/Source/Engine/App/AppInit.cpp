#if 0
/* ---------- headers */

#include "decomp.h"
#include <wincon.h>
#include <errhandlingapi.h>
#include <assist\stlexsmallvector.h>
#include <App\AppObj.h>
#include <processenv.h>
#include <platform\appinterface.h>
#include <guiddef.h>
#include <xstring>
#include <SobFactory.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\matrix4.h>
#include <sob.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <LocalizerDirectory.h>
#include <pch.h>
#include <jobapi.h>
#include <sobstatic.h>
#include <memory\memorylib.h>
#include <Collision\Primitives\sphere.h>
#include <scripting.h>
#include <screenshot.h>
#include <isteammusicremote.h>
#include <crtdefs.h>
#include <apiset.h>
#include <Interpolation.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <seInterface2\SampleID.h>
#include <systemtopologyapi.h>
#include <seInterface2\SampleBase.h>
#include <wow64apiset.h>
#include <Collision\Primitives\aabb.h>
#include <lua.h>
#include <boost\static_assert.hpp>
#include <Sound\SoundTask.h>
#include <direct.h>
#include <Mathlib\matrix3.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <TimerMap.h>
#include <kernelspecs.h>
#include <MADState.h>
#include <SteamFuncs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <luaconfig\luabinding.h>
#include <steam_api.h>
#include <libloaderapi.h>
#include <luaconfig\luaconfig.h>
#include <isteamclient.h>
#include <sysinfoapi.h>
#include <new>
#include <steamtypes.h>
#include <exception>
#include <recorder.h>
#include <xstddef>
#include <feFlow.h>
#include <orders.h>
#include <io.h>
#include <type_traits>
#include <FrontEnd\frontend.h>
#include <orders_base.h>
#include <commandtype.h>
#include <isteamuser.h>
#include <winreg.h>
#include <task.h>
#include <stack>
#include <isteamhtmlsurface.h>
#include <StaticModelRegistry.h>
#include <xutility>
#include <SobWithMeshStatic.h>
#include <Render\FxGL\FXDynamics.h>
#include <utility>
#include <iosfwd>
#include <SobRigidBodyStatic.h>
#include <util\statmonitor.h>
#include <vector>
#include <securityappcontainer.h>
#include <util\utilexports.h>
#include <fileio\bytestream.h>
#include <isteammusic.h>
#include <xmemory>
#include <fibersapi.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <fixedpoint.h>
#include <Tactics.h>
#include <Render\objects\debugrender.h>
#include <platform\windowinterface.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <Collision\Primitives\obb.h>
#include <util\fixed.h>
#include <isteamremotestorage.h>
#include <compiler\compilerconfig.h>
#include <gameRender.h>
#include <realtimeapiset.h>
#include <seInterface2\sedefinesshared.h>
#include <fileio\filestream.h>
#include <winver.h>
#include <verrsrc.h>
#include <dbdefines.h>
#include <MeshAnimation.h>
#include <string.h>
#include <list>
#include <UnitCaps\UnitCaps.h>
#include <SimVis\LodFX.h>
#include <isteamapplist.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <fileio\filepathhd.h>
#include <isteamhttp.h>
#include <Collision\Primitives\capsule.h>
#include <SOBGroupManager.h>
#include <Family.h>
#include <assist\fixedstring.h>
#include <Render\objects\geometry.h>
#include <steamhttpenums.h>
#include <memoryapi.h>
#include <Collision\Primitives\segment.h>
#include <hash_map>
#include <Render\objects\mesh.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\profiling.h>
#include <xhash>
#include <Cursor.h>
#include <Render\objects\renderable.h>
#include <consoleapi.h>
#include <Mathlib\vector4.h>
#include <Render\objects\texture.h>
#include <UserInterface\userinterface.h>
#include <Render\FxGL\FXManager.h>
#include <Render\objects\textureregistry.h>
#include <NavLightManager.h>
#include <Render\FxGL\VarMulti.h>
#include <map>
#include <wingdi.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <pshpack4.h>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <Pieplate.h>
#include <UserInterface\NewUIScreenManager.h>
#include <FrontEnd\Lobby.h>
#include <gamemsg.h>
#include <winerror.h>
#include <UserInterface\uitypes.h>
#include <FrontEnd\lobbydefines.h>
#include <init.h>
#include <platform\inputinterface.h>
#include <App\Hw2Identify.h>
#include <platform\osdef.h>
#include <App\PlayerProfileMan.h>
#include <Render\objects\memtracker.h>
#include <ime_cmodes.h>
#include <Mathlib\vector2.h>
#include <App\PlayerProfile.h>
#include <util\types.h>
#include <Interface.h>
#include <sobid.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <gameSettings.h>
#include <isteamutils.h>
#include <fileio\md5.h>
#include <syncChecking.h>
#include <ChatMsg.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <boost\cstdint.hpp>
#include <Mathlib\matvec.h>
#include <boost\config.hpp>
#include <Render\objects\image.h>
#include <securitybaseapi.h>
#include <Render\objects\core.h>
#include <App\PlayerProfileGameOptions.h>
#include <cassert>
#include <Render\objects\hw2ddraw.h>
#include <reason.h>
#include <KeyBindings.h>
#include <GameRulesLibrary.h>
#include <assert.h>
#include <FamilyListMgr.h>
#include <App\AppMem.h>
#include <EngineCommandLine.h>
#include <FamilyList.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <winuser.h>
#include <MultiplierTypes.h>
#include <consoleInput.h>
#include <boost\scoped_array.hpp>
#include <Render\gl\lotypes.h>
#include <Collision\BVH\bvh.h>
#include <mainScreen.h>
#include <CameraTuning.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Mathlib\quat.h>
#include <Render\objects\cliprect.h>
#include <MainUI.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <fileio\archivemanager.h>
#include <isteammatchmaking.h>
#include <debugapi.h>
#include <Selector.h>
#include <fileio\archive.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <fileapi.h>
#include <App\CampaignMan.h>
#include <MetaSelTarg.h>
#include <fileio\archiveinternals.h>
#include <TacticalOverlay.h>
#include <platform\keydefines.h>
#include <ProfileSystem.h>
#include <isteamapps.h>
#include <Render\gl\r_types.h>
#include <assist\typemagic.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <fileio\filepath.h>
#include <platform\os.h>
#include <seInterface2\PatchBase.h>
#include <DockQueue.h>
#include <windows.h>
#include <winnls.h>
#include <seInterface2\SoundParams.h>
#include <HyperspaceManager.h>
#include <SquadronQueue.h>
#include <winapifamily.h>
#include <datetimeapi.h>
#include <SquadronList.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <gameRenderDebug.h>
#include <util\dictionary.h>
#include <excpt.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\fontsystem.h>
#include <Video\VideoInterface.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\objects.h>
#include <Render\objects\material.h>
#include <poppack.h>
#include <Camera\OrbitParameters.h>
#include <Viewer.h>
#include <Render\objects\bitmapfont.h>
#include <command.h>
#include <gameRandom.h>
#include <fileio\iff.h>
#include <imm.h>
#include <platform\cmdline.h>
#include <pathpoints.h>
#include <StrikeGroupFormationManager.h>
#include <random.h>
#include <StrikeGroupFormation.h>
#include <profileapi.h>
#include <debug\db.h>
#include <Universe.h>
#include <Render\objects\debugrenderproxy.h>
#include <Ship\FormationPatternManager.h>
#include <synchapi.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Ship\FormationPattern.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <deque>
#include <App\TestMem.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <profile\profile.h>
#include <iostream>
#include <UserInterface\StyleSheet.h>
#include <platform\namedinterface.h>
#include <isteamscreenshots.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SensorsManager.h>
#include <UserInterface\pch.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SoundManager\SoundManager.h>
#include <pshpack8.h>
#include <selection.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <savegamedef.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ParadeManager.h>
#include <isteamfriends.h>
#include <stdarg.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <windef.h>
#include <Render\gl\r_defines.h>
#include <BadgeBuiltin.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <tvout.h>
#include <Render\gl\glext.h>
#include <boost\detail\lwm_win32.hpp>
#include <ITweak.h>
#include <specstrings.h>
#include <winnetwk.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Render\objects\varymesh.h>
#include <AttackCommand.h>
#include <specstrings_strict.h>
#include <wnnc.h>
#include <region.h>
#include <subtitle.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\vertexarray.h>
#include <AttackStyle.h>
#include <Decal\DecalRefMeshRegistry.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <prim.h>
#include <CameraCommand.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Menus\SubtitleScreen.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\vertexarrayinternal.h>
#include <platform\maininterface.h>
#include <driverspecs.h>
#include <CameraHW.h>
#include <UserInterface\NewUIScreen.h>
#include <platform\sysinputinterface.h>
#include <sdv_driverspecs.h>
#include <Camera\CameraOrbitTarget.h>
#include <savegame.h>
#include <UserInterface\NewFrame.h>
#include <Ship\FlightManeuverManager.h>
#include <weaponTargetInfo.h>
#include <Camera\Camera.h>
#include <UserInterface\InterfaceElement.h>
#include <threadpoolapiset.h>
#include <Camera\Frustum.h>
#include <FrontEnd\ScriptedFE\ScriptedFE.h>
#include <UserInterface\signals.h>
#include <Camera\Plane3.h>
#include <MovieRecorder.h>
#include <LevelManager.h>
#include <debug\debug.h>
#include <localizer\localizer.h>
#include <debug\filter.h>
#include <namespaceapi.h>
#include <DotManager.h>
#include <Stats\StatLogging.h>
#include <config.h>
#include <ktmtypes.h>
#include <App\AppInit.h>
#include <wchar.h>
#include <gamestructimpl.h>
#include <string>
#include <Collision\BVH\octree.h>
#include <Badge.h>
#include <Collision\BVH\span.h>
#include <isteamcontroller.h>
#include <winbase.h>
#include <Collision\BVH\Internal\span_i.h>
#include <fileio\platform.h>
#include <steamcontrollerpublic.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <Collision\BVH\proxy.h>
#include <GameOptions.h>
#include <platform\sharedlibraryinterface.h>
#include <algorithm>
#include <minwinbase.h>
#include <Collision\intersect.h>
#include <Render\objects\compiledtext.h>
#include <abilities.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DebugRenderProxyImp::Frame,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DebugRenderProxyImp::Frame> > > FrameMap;

/* ---------- prototypes */

extern void gameRendererLoadFontMap(unsigned __int32 width);
extern unsigned long AppInitNS::AddArchive(char const *archive, __int32 priority, bool bIsWorkshopMod);
extern bool GetHWLanguageFromSteam(char *hwName, unsigned __int32 maxn);
extern unsigned long AppInitNS::AddArchiveDLCCampaign(char const *archive);
extern __int32 AppInitNS::AddListOfArchives(char const *archiveList, __int32 priority);

_static bool FXStartup();
_static bool FXShutdown();
_static char const *FindKeyFileInOrBelowCWD(char const *keyname);
_static char const *FindDirectoryInOrBelowCWD(char const *dirname, char const *keyname);
_static bool AppInitNS::FindTheDataTree(char *datapath, unsigned __int32 datapathLen);
_static bool AppInitNS::AppObj_setup();
_static bool AppInitNS::AppObj_cleanup();
_static bool AppInitNS::AppObj_setupsystems();
_static bool AppInitNS::AppObj_cleanupsystems();
_static bool AppInitNS::StartupRenderer();
_static bool AppInitNS::StartupLobby();
_static bool AppInitNS::ShutdownLobby();
_static bool AppInitNS::StartupSoundManager();
_static bool AppInitNS::ShutdownSoundManager();
_static bool AppInitNS::SetScreenResolution();
_static bool AppInitNS::OpenAndShowWindow();
_static bool AppInitNS::CloseWindow();
_static void AppInitNS::ActivateApp(unsigned __int32 windowHandle);
_static void AppInitNS::DeactivateApp(unsigned __int32 windowHandle);
_static bool AppInitNS::StartupOsMainCallbacks();
_static bool AppInitNS::LoadFonts();
_static bool AppInitNS::UnloadFonts();
_static bool AppInitNS::InitKeybindings();
_static void AppInitNS::App_luaPrintFunc(char const *str);
_static void AppInitNS::App_luaTraceFunc(char const *str);
_static bool AppInitNS::StartBasicTasks();
_static bool AppInitNS::StopBasicTasks();
_static bool AppInitNS::StartupFrontEnd();
_static bool AppInitNS::StopFrontEnd();
_static bool AppInitNS::ImageInterfaceStartup();
_static bool AppInitNS::SysInStartup();
_static bool AppInitNS::InputStartup();
_static bool AppInitNS::InputShutdown();
_static bool AppInitNS::DebugRenderStartup();
_static bool AppInitNS::DebugRenderShutdown();
_static bool AppInitNS::InitializeSteam();
_static bool AppInitNS::ShutdownSteam();
_static bool AppInitNS::SetupDebugLogfile();
_static bool AppInitNS::ShutdownDebugLogFile();
_static bool AppInitNS::SetupAppInstance();
_static bool AppInitNS::ShutdownAppInstance();
_static bool AppInitNS::SetupArchiveManager();
_static bool AppInitNS::ShutdownArchiveManager();
_static bool AppInitNS::SetupDataPath();
_static void AppInitNS::AddModDataPathAlias(char const *moddataparam);
_static bool AppInitNS::SetupFilePath(char const *datapath);
_static bool AppInitNS::CleanupFilePath();
_static bool AppInitNS::SetupLuaPrintFunction();
_static bool AppInitNS::DisplayBuildInfo();
_static bool AppInitNS::ApplyProfileGameOptions();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *kclassTitle; // 0x836584
    extern char const *kwindowTitle; // 0x836588
    extern char const *kBgNoSimOption; // 0x83658C
    extern unsigned __int32 g_appInstance; // 0x84410C
    extern vector2 g_mouseCursorPosBackup; // 0x844114
    extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > *g_fontNameMap; // 0x844110
    extern char const *Homeworld1HDDLC; // 0x836590
    extern char const *Homeworld2HDDLC; // 0x836594
    extern InitModule const initModuleList[78]; // 0x799940
    extern float subtitleTwkScrollDwellStart; // 0x836598
    extern float subtitleTwkScrollDwellEnd; // 0x83659C
    extern float subtitleTwkScrollShortest; // 0x8365A0
    extern float subtitleTwkTitleShortest; // 0x8365A4
    extern InitList initModule; // 0x8365A8
    extern char const *k_ArchiveFileSignature; // 0x8365B0
    extern char const *k_ArchiveMD5SecurityKey; // 0x8365B4
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x8365B8
    extern DebugRenderProxyImp *g_debugRender; // 0x84411C
    extern float const ViewerUpdateRate; // 0x799F58
    extern float const ViewerUpdatePeriod; // 0x8365BC
    extern float const CameraDistanceUpdateRate; // 0x799F5C
    extern float const CameraDistanceUpdatePeriod; // 0x8365C0
}

/* ---------- public code */

_inline BuiltinSource::BuiltinSource() // 0x4F4707
{
    mangled_assert("??0BuiltinSource@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x4F4737
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x4F4740
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x4F4749
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x4F474E
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x4F4761
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline BuiltinSource::~BuiltinSource() // 0x4F4774
{
    mangled_assert("??1BuiltinSource@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

char const *AppInit::Startup() // 0x4F594B
{
    mangled_assert("?Startup@AppInit@@SGPBDXZ");
    todo("implement");
}

void AppInit::Shutdown() // 0x4F5940
{
    mangled_assert("?Shutdown@AppInit@@SGXXZ");
    todo("implement");
}

void gameRendererLoadFontMap(unsigned __int32 width) // 0x4F5EAC
{
    mangled_assert("?gameRendererLoadFontMap@@YGXI@Z");
    todo("implement");
}

unsigned long AppInitNS::AddArchive(char const *archive, __int32 priority, bool bIsWorkshopMod) // 0x4F4A25
{
    mangled_assert("?AddArchive@AppInitNS@@YGKPBDH_N@Z");
    todo("implement");
}

bool GetHWLanguageFromSteam(char *hwName, unsigned __int32 maxn) // 0x4F53A0
{
    mangled_assert("?GetHWLanguageFromSteam@@YG_NPADI@Z");
    todo("implement");
}

unsigned long AppInitNS::AddArchiveDLCCampaign(char const *archive) // 0x4F4B88
{
    mangled_assert("?AddArchiveDLCCampaign@AppInitNS@@YGKPBD@Z");
    todo("implement");
}

__int32 AppInitNS::AddListOfArchives(char const *archiveList, __int32 priority) // 0x4F4E06
{
    mangled_assert("?AddListOfArchives@AppInitNS@@YGHPBDH@Z");
    todo("implement");
}

/* ---------- private code */

_static bool FXStartup() // 0x4F3506
{
    mangled_assert("FXStartup");
    todo("implement");
}

_static bool FXShutdown() // 0x4F3578
{
    mangled_assert("FXShutdown");
    todo("implement");
}

_static char const *FindKeyFileInOrBelowCWD(char const *keyname) // 0x4F51E9
{
    mangled_assert("FindKeyFileInOrBelowCWD");
    todo("implement");
}

_static char const *FindDirectoryInOrBelowCWD(char const *dirname, char const *keyname) // 0x4F5119
{
    mangled_assert("FindDirectoryInOrBelowCWD");
    todo("implement");
}

_static bool AppInitNS::FindTheDataTree(char *datapath, unsigned __int32 datapathLen) // 0x4F52B3
{
    mangled_assert("AppInitNS::FindTheDataTree");
    todo("implement");
}

_static bool AppInitNS::AppObj_setup() // 0x4F357D
{
    mangled_assert("AppInitNS::AppObj_setup");
    todo("implement");
}

_static bool AppInitNS::AppObj_cleanup() // 0x4F358C
{
    mangled_assert("AppInitNS::AppObj_cleanup");
    todo("implement");
}

_static bool AppInitNS::AppObj_setupsystems() // 0x4F359B
{
    mangled_assert("AppInitNS::AppObj_setupsystems");
    todo("implement");
}

_static bool AppInitNS::AppObj_cleanupsystems() // 0x4F35AA
{
    mangled_assert("AppInitNS::AppObj_cleanupsystems");
    todo("implement");
}

_static bool AppInitNS::StartupRenderer() // 0x4F36E2
{
    mangled_assert("AppInitNS::StartupRenderer");
    todo("implement");
}

_static bool AppInitNS::StartupLobby() // 0x4F3765
{
    mangled_assert("AppInitNS::StartupLobby");
    todo("implement");
}

_static bool AppInitNS::ShutdownLobby() // 0x4F377B
{
    mangled_assert("AppInitNS::ShutdownLobby");
    todo("implement");
}

_static bool AppInitNS::StartupSoundManager() // 0x4F35B9
{
    mangled_assert("AppInitNS::StartupSoundManager");
    todo("implement");
}

_static bool AppInitNS::ShutdownSoundManager() // 0x4F36CA
{
    mangled_assert("AppInitNS::ShutdownSoundManager");
    todo("implement");
}

_static bool AppInitNS::SetScreenResolution() // 0x4F36EA
{
    mangled_assert("AppInitNS::SetScreenResolution");
    todo("implement");
}

_static bool AppInitNS::OpenAndShowWindow() // 0x4F3705
{
    mangled_assert("AppInitNS::OpenAndShowWindow");
    todo("implement");
}

_static bool AppInitNS::CloseWindow() // 0x4F3732
{
    mangled_assert("AppInitNS::CloseWindow");
    todo("implement");
}

_static void AppInitNS::ActivateApp(unsigned __int32 windowHandle) // 0x4F49A5
{
    mangled_assert("AppInitNS::ActivateApp");
    todo("implement");
}

_static void AppInitNS::DeactivateApp(unsigned __int32 windowHandle) // 0x4F508E
{
    mangled_assert("AppInitNS::DeactivateApp");
    todo("implement");
}

_static bool AppInitNS::StartupOsMainCallbacks() // 0x4F3741
{
    mangled_assert("AppInitNS::StartupOsMainCallbacks");
    todo("implement");
}

_static bool AppInitNS::LoadFonts() // 0x4F3791
{
    mangled_assert("AppInitNS::LoadFonts");
    todo("implement");
}

_static bool AppInitNS::UnloadFonts() // 0x4F3827
{
    mangled_assert("AppInitNS::UnloadFonts");
    todo("implement");
}

_static bool AppInitNS::InitKeybindings() // 0x4F384B
{
    mangled_assert("AppInitNS::InitKeybindings");
    todo("implement");
}

_static void AppInitNS::App_luaPrintFunc(char const *str) // 0x4F507D
{
    mangled_assert("AppInitNS::App_luaPrintFunc");
    todo("implement");
}

_static void AppInitNS::App_luaTraceFunc(char const *str) // 0x4F5080
{
    mangled_assert("AppInitNS::App_luaTraceFunc");
    todo("implement");
}

_static bool AppInitNS::StartBasicTasks() // 0x4F38A0
{
    mangled_assert("AppInitNS::StartBasicTasks");
    todo("implement");
}

_static bool AppInitNS::StopBasicTasks() // 0x4F38DF
{
    mangled_assert("AppInitNS::StopBasicTasks");
    todo("implement");
}

_static bool AppInitNS::StartupFrontEnd() // 0x4F38F8
{
    mangled_assert("AppInitNS::StartupFrontEnd");
    todo("implement");
}

_static bool AppInitNS::StopFrontEnd() // 0x4F3969
{
    mangled_assert("AppInitNS::StopFrontEnd");
    todo("implement");
}

_static bool AppInitNS::ImageInterfaceStartup() // 0x4F3877
{
    mangled_assert("AppInitNS::ImageInterfaceStartup");
    todo("implement");
}

_static bool AppInitNS::SysInStartup() // 0x4F3895
{
    mangled_assert("AppInitNS::SysInStartup");
    todo("implement");
}

_static bool AppInitNS::InputStartup() // 0x4F3981
{
    mangled_assert("AppInitNS::InputStartup");
    todo("implement");
}

_static bool AppInitNS::InputShutdown() // 0x4F398D
{
    mangled_assert("AppInitNS::InputShutdown");
    todo("implement");
}

_static bool AppInitNS::DebugRenderStartup() // 0x4F399A
{
    mangled_assert("AppInitNS::DebugRenderStartup");
    todo("implement");
}

_static bool AppInitNS::DebugRenderShutdown() // 0x4F39ED
{
    mangled_assert("AppInitNS::DebugRenderShutdown");
    todo("implement");
}

_static bool AppInitNS::InitializeSteam() // 0x4F3A15
{
    mangled_assert("AppInitNS::InitializeSteam");
    todo("implement");
}

_static bool AppInitNS::ShutdownSteam() // 0x4F3A2D
{
    mangled_assert("AppInitNS::ShutdownSteam");
    todo("implement");
}

_static bool AppInitNS::SetupDebugLogfile() // 0x4F3A32
{
    mangled_assert("AppInitNS::SetupDebugLogfile");
    todo("implement");
}

_static bool AppInitNS::ShutdownDebugLogFile() // 0x4F3A40
{
    mangled_assert("AppInitNS::ShutdownDebugLogFile");
    todo("implement");
}

_static bool AppInitNS::SetupAppInstance() // 0x4F3A4E
{
    mangled_assert("AppInitNS::SetupAppInstance");
    todo("implement");
}

_static bool AppInitNS::ShutdownAppInstance() // 0x4F3A8A
{
    mangled_assert("AppInitNS::ShutdownAppInstance");
    todo("implement");
}

_static bool AppInitNS::SetupArchiveManager() // 0x4F3AB1
{
    mangled_assert("AppInitNS::SetupArchiveManager");
    todo("implement");
}

_static bool AppInitNS::ShutdownArchiveManager() // 0x4F3ABA
{
    mangled_assert("AppInitNS::ShutdownArchiveManager");
    todo("implement");
}

_static bool AppInitNS::SetupDataPath() // 0x4F3AC3
{
    mangled_assert("AppInitNS::SetupDataPath");
    todo("implement");
}

_static void AppInitNS::AddModDataPathAlias(char const *moddataparam) // 0x4F4EC9
{
    mangled_assert("AppInitNS::AddModDataPathAlias");
    todo("implement");
}

_static bool AppInitNS::SetupFilePath(char const *datapath) // 0x4F5463
{
    mangled_assert("AppInitNS::SetupFilePath");
    todo("implement");
}

_static bool AppInitNS::CleanupFilePath() // 0x4F3A0C
{
    mangled_assert("AppInitNS::CleanupFilePath");
    todo("implement");
}

_static bool AppInitNS::SetupLuaPrintFunction() // 0x4F3AF6
{
    mangled_assert("AppInitNS::SetupLuaPrintFunction");
    todo("implement");
}

_static bool AppInitNS::DisplayBuildInfo() // 0x4F3B24
{
    mangled_assert("AppInitNS::DisplayBuildInfo");
    todo("implement");
}

_static bool AppInitNS::ApplyProfileGameOptions() // 0x4F3B77
{
    mangled_assert("AppInitNS::ApplyProfileGameOptions");
    todo("implement");
}
#endif
