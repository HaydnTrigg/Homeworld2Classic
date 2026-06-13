#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <App\AppInit.h>
#include <dbdefines.h>
#include <isteamcontroller.h>
#include <xstring>
#include <UnitCaps\UnitCaps.h>
#include <steamcontrollerpublic.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Universe.h>
#include <Collision\BVH\octree.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Waypoint.h>
#include <Collision\BVH\span.h>
#include <UserInterface\uitypes.h>
#include <crtdefs.h>
#include <SobUnmoveable.h>
#include <Collision\BVH\Internal\span_i.h>
#include <platform\inputinterface.h>
#include <sob.h>
#include <Collision\BVH\proxy.h>
#include <sobstatic.h>
#include <Collision\intersect.h>
#include <Collision\Primitives\sphere.h>
#include <Collision\primitivesfwd.h>
#include <Menus\LoadingScreenRenderer.h>
#include <App\AppLua.h>
#include <App\Hw2Identify.h>
#include <platform\osdef.h>
#include <Mathlib\matrix3.h>
#include <isteammusicremote.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <Interpolation.h>
#include <xstddef>
#include <type_traits>
#include <renderer.h>
#include <debug\debug.h>
#include <Scar\LuaCampaign.h>
#include <Render\gl\types.h>
#include <debug\filter.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matvec.h>
#include <SteamFuncs.h>
#include <App\CampaignMan.h>
#include <steam_api.h>
#include <Render\objects\textureregistry.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <xutility>
#include <sobid.h>
#include <utility>
#include <iosfwd>
#include <Render\gl\lotypes.h>
#include <vector>
#include <fileio\bytestream.h>
#include <isteamuser.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <platform\cmdline.h>
#include <isteamhtmlsurface.h>
#include <screenshot.h>
#include <Render\gl\r_types.h>
#include <compiler\compilerconfig.h>
#include <Menus\MenuSupport.h>
#include <isteammusic.h>
#include <App\GameSpyID.h>
#include <UserInterface\signals.h>
#include <Collision\Primitives\obb.h>
#include <FrontEnd\ScriptedFE\ScriptedFE.h>
#include <list>
#include <LevelManager.h>
#include <HyperspaceManager.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <SquadronList.h>
#include <isteamremotestorage.h>
#include <assist\fixedstring.h>
#include <fileio\configfile.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SelTarg.h>
#include <prim.h>
#include <isteamapplist.h>
#include <map>
#include <xtree>
#include <isteamhttp.h>
#include <boost\scoped_ptr.hpp>
#include <stack>
#include <savegame.h>
#include <steamhttpenums.h>
#include <task.h>
#include <platform\sysutilinterface.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <LevelDesc.h>
#include <Collision\Primitives\capsule.h>
#include <Hash.h>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\segment.h>
#include <util\types.h>
#include <fileio\md5.h>
#include <Collision\BVH\profiling.h>
#include <App\TestMem.h>
#include <profile\profile.h>
#include <steamclientpublic.h>
#include <iostream>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <App\PlayerProfileGameOptions.h>
#include <gamestructimpl.h>
#include <Render\gl\r_defines.h>
#include <KeyBindings.h>
#include <Badge.h>
#include <boost\cstdint.hpp>
#include <Render\gl\glext.h>
#include <platform\maininterface.h>
#include <config.h>
#include <boost\config.hpp>
#include <platform\sysinputinterface.h>
#include <platform\keydefines.h>
#include <cassert>
#include <campaign.h>
#include <fileio\filepath.h>
#include <assert.h>
#include <scripting.h>
#include <isteamutils.h>
#include <Race.h>
#include <scriptaccess.h>
#include <SOBGroupManager.h>
#include <scripttypedef.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\quat.h>
#include <assist\typemagic.h>
#include <Mathlib\mathutil.h>
#include <isteammatchmaking.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\static_assert.hpp>
#include <seInterface2\PatchID.h>
#include <Mathlib\mathlibdll.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\fastmath.h>
#include <isteamapps.h>
#include <seInterface2\SoundParams.h>
#include <region.h>
#include <UserInterface\StyleSheet.h>
#include <pathpoints.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\pch.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <debug\db.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <GameObj.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <deque>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <util\statmonitor.h>
#include <luaconfig\luaconfig.h>
#include <util\utilexports.h>
#include <feFlow.h>
#include <lua.h>
#include <FrontEnd\frontend.h>
#include <Render\objects\textureproxy.h>
#include <util\colour.h>
#include <luaconfig\luabinding.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <gameSettings.h>
#include <savegamedef.h>
#include <syncChecking.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <isteamscreenshots.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <isteamfriends.h>
#include <hw2box\hw2box.h>
#include <FrontEnd\Lobby.h>
#include <FrontEnd\lobbydefines.h>
#include <debug\dbext.h>
#include <wchar.h>
#include <swprintf.inl>
#include <GameOptions.h>
#include <fstream>
#include <GameRulesLibrary.h>
#include <fixedpoint.h>
#include <Interface.h>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

class AppObjStatic
{
public:
    _inline AppObjStatic();
    _inline ~AppObjStatic();
};
static_assert(sizeof(AppObjStatic) == 1, "Invalid AppObjStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bTakeSteamScreenshot; // 0x844350
    extern char AppLeakString[256]; // 0x836658
    extern AppObj *s_instance; // 0x844354
    extern AppObjStatic g_appObjStatic; // 0x844358
}

/* ---------- public code */

_extern _sub_4F6519(AppObj::Data *const);
_inline AppObj::Data::Data() // 0x4F6519
{
    mangled_assert("??0Data@AppObj@@QAE@XZ");
    todo("implement");
    _sub_4F6519(this);
}

_extern void _sub_4F6A11(AppObj::Data *const, ScreenshotRequested_t *);
void AppObj::Data::OnSteamScreenshotCallback(ScreenshotRequested_t *) // 0x4F6A11
{
    mangled_assert("?OnSteamScreenshotCallback@Data@AppObj@@QAEXPAUScreenshotRequested_t@@@Z");
    todo("implement");
    _sub_4F6A11(this, arg);
}

_extern _sub_4F64F4(BuildInfo *const);
BuildInfo::BuildInfo() // 0x4F64F4
{
    mangled_assert("??0BuildInfo@@QAE@XZ");
    todo("implement");
    _sub_4F64F4(this);
}

_extern _sub_4F6320(AppObj *const);
AppObj::AppObj() // 0x4F6320
{
    mangled_assert("??0AppObj@@AAE@XZ");
    todo("implement");
    _sub_4F6320(this);
}

_extern void _sub_4F6601(AppObj *const);
AppObj::~AppObj() // 0x4F6601
{
    mangled_assert("??1AppObj@@EAE@XZ");
    todo("implement");
    _sub_4F6601(this);
}

_extern bool _sub_4F68D9();
bool AppObj::Initialize() // 0x4F68D9
{
    mangled_assert("?Initialize@AppObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F68D9();
    return __result;
}

_extern bool _sub_4F6D10();
bool AppObj::Shutdown() // 0x4F6D10
{
    mangled_assert("?Shutdown@AppObj@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F6D10();
    return __result;
}

_extern AppObj *_sub_4F6912();
AppObj *AppObj::Instance() // 0x4F6912
{
    mangled_assert("?Instance@AppObj@@SGPAV1@XZ");
    todo("implement");
    AppObj * __result = _sub_4F6912();
    return __result;
}

_extern BuildInfo *_sub_4F687B(AppObj *const);
BuildInfo *AppObj::GetBuildInfo() // 0x4F687B
{
    mangled_assert("?GetBuildInfo@AppObj@@QAEPAVBuildInfo@@XZ");
    todo("implement");
    BuildInfo * __result = _sub_4F687B(this);
    return __result;
}

_extern LuaConfig &_sub_4F68AA(AppObj *const);
LuaConfig &AppObj::GetGlobalLuaState() // 0x4F68AA
{
    mangled_assert("?GetGlobalLuaState@AppObj@@QAEAAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig & __result = _sub_4F68AA(this);
    return __result;
}

_extern GameResult *_sub_4F689C(AppObj *const);
GameResult *AppObj::GetGameResult() // 0x4F689C
{
    mangled_assert("?GetGameResult@AppObj@@QAEPAVGameResult@@XZ");
    todo("implement");
    GameResult * __result = _sub_4F689C(this);
    return __result;
}

_extern GameSpyID const &_sub_4F68A3(AppObj const *const);
GameSpyID const &AppObj::GetGameSpyID() const // 0x4F68A3
{
    mangled_assert("?GetGameSpyID@AppObj@@QBEABVGameSpyID@@XZ");
    todo("implement");
    GameSpyID const & __result = _sub_4F68A3(this);
    return __result;
}

_extern void _sub_4F6A1B(AppObj *const);
void AppObj::Quit() // 0x4F6A1B
{
    mangled_assert("?Quit@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F6A1B(this);
}

_extern void _sub_4F6CE6(AppObj *const);
void AppObj::SetupSystems() // 0x4F6CE6
{
    mangled_assert("?SetupSystems@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F6CE6(this);
}

_extern void _sub_4F6809(AppObj *const);
void AppObj::CleanupSystems() // 0x4F6809
{
    mangled_assert("?CleanupSystems@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F6809(this);
}

_extern void _sub_4F6C97(AppObj *const);
void AppObj::Setup() // 0x4F6C97
{
    mangled_assert("?Setup@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F6C97(this);
}

_extern void _sub_4F67DE(AppObj *const);
void AppObj::Cleanup() // 0x4F67DE
{
    mangled_assert("?Cleanup@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F67DE(this);
}

_extern ConfigFile *_sub_4F688C(AppObj *const);
ConfigFile *AppObj::GetConfigFileSystem() // 0x4F688C
{
    mangled_assert("?GetConfigFileSystem@AppObj@@QAEPAVConfigFile@@XZ");
    todo("implement");
    ConfigFile * __result = _sub_4F688C(this);
    return __result;
}

_extern ConfigFile *_sub_4F6885(AppObj *const);
ConfigFile *AppObj::GetConfigFileLocal() // 0x4F6885
{
    mangled_assert("?GetConfigFileLocal@AppObj@@QAEPAVConfigFile@@XZ");
    todo("implement");
    ConfigFile * __result = _sub_4F6885(this);
    return __result;
}

_extern StatMonitor *_sub_4F68D2(AppObj *const);
StatMonitor *AppObj::GetStatMonRender() // 0x4F68D2
{
    mangled_assert("?GetStatMonRender@AppObj@@QAEPAVStatMonitor@@XZ");
    todo("implement");
    StatMonitor * __result = _sub_4F68D2(this);
    return __result;
}

_extern Lobby *_sub_4F68BA(AppObj *const);
Lobby *AppObj::GetLobby() // 0x4F68BA
{
    mangled_assert("?GetLobby@AppObj@@QAEPAVLobby@@XZ");
    todo("implement");
    Lobby * __result = _sub_4F68BA(this);
    return __result;
}

_extern void _sub_4F6C6C(AppObj *const, char const *);
void AppObj::SetLocale(char const *) // 0x4F6C6C
{
    mangled_assert("?SetLocale@AppObj@@QAEXPBD@Z");
    todo("implement");
    _sub_4F6C6C(this, arg);
}

_extern char const *_sub_4F68C1(AppObj const *const);
char const *AppObj::GetLocale() const // 0x4F68C1
{
    mangled_assert("?GetLocale@AppObj@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F68C1(this);
    return __result;
}

_extern KeyBindingList *_sub_4F6893(AppObj *const);
KeyBindingList *AppObj::GetDefaultKeyBindingList() // 0x4F6893
{
    mangled_assert("?GetDefaultKeyBindingList@AppObj@@QAEPAVKeyBindingList@@XZ");
    todo("implement");
    KeyBindingList * __result = _sub_4F6893(this);
    return __result;
}

_extern KeyBindingList *_sub_4F68B1(AppObj *const);
KeyBindingList *AppObj::GetKeyBindingList() // 0x4F68B1
{
    mangled_assert("?GetKeyBindingList@AppObj@@QAEPAVKeyBindingList@@XZ");
    todo("implement");
    KeyBindingList * __result = _sub_4F68B1(this);
    return __result;
}

_extern void _sub_4F6AAE(AppObj *const);
void AppObj::RestoreDefaultKeyBindings() // 0x4F6AAE
{
    mangled_assert("?RestoreDefaultKeyBindings@AppObj@@QAEXXZ");
    todo("implement");
    _sub_4F6AAE(this);
}

_extern bool _sub_4F6918(AppObj const *const);
bool AppObj::IsRestarting() const // 0x4F6918
{
    mangled_assert("?IsRestarting@AppObj@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4F6918(this);
    return __result;
}

_extern void _sub_4F6922(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32);
void AppObj::KeyBinderCallBack(unsigned __int32 hotKeyID, wchar_t const *in_wstring, wchar_t *out_wstring, unsigned __int32 out_length) // 0x4F6922
{
    mangled_assert("?KeyBinderCallBack@AppObj@@SGXIPB_WPA_WI@Z");
    todo("implement");
    _sub_4F6922(hotKeyID, in_wstring, out_wstring, out_length);
}

_extern char const *_sub_4F6AED(AppObj *const);
char const *AppObj::Run() // 0x4F6AED
{
    mangled_assert("?Run@AppObj@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F6AED(this);
    return __result;
}

_extern void _sub_4F71FB(AppObj *const);
void AppObj::Update() // 0x4F71FB
{
    mangled_assert("?Update@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F71FB(this);
}

_extern void _sub_4F6F77(AppObj *const);
void AppObj::Transition_AppStart() // 0x4F6F77
{
    mangled_assert("?Transition_AppStart@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F6F77(this);
}

_extern void _sub_4F6F6C(AppObj *const);
void AppObj::Transition_AppRestart() // 0x4F6F6C
{
    mangled_assert("?Transition_AppRestart@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F6F6C(this);
}

_extern void _sub_4F70E2(AppObj *const);
void AppObj::Transition_StartGame() // 0x4F70E2
{
    mangled_assert("?Transition_StartGame@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F70E2(this);
}

_extern void _sub_4F704A(AppObj *const);
void AppObj::Transition_LoadGame() // 0x4F704A
{
    mangled_assert("?Transition_LoadGame@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F704A(this);
}

_extern void _sub_4F7025(AppObj *const);
void AppObj::Transition_ExitGame() // 0x4F7025
{
    mangled_assert("?Transition_ExitGame@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F7025(this);
}

_extern void _sub_4F682D(AppObj *const);
void AppObj::DoTransition() // 0x4F682D
{
    mangled_assert("?DoTransition@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F682D(this);
}

_extern void _sub_4F6975(AppObj *const);
void AppObj::MakeSureProfileExists() // 0x4F6975
{
    mangled_assert("?MakeSureProfileExists@AppObj@@AAEXXZ");
    todo("implement");
    _sub_4F6975(this);
}

_extern bool _sub_4F6D2A(AppObj *const);
bool AppObj::StartGameUsingCmdLineOptions() // 0x4F6D2A
{
    mangled_assert("?StartGameUsingCmdLineOptions@AppObj@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4F6D2A(this);
    return __result;
}

_extern void _sub_4F6A67(AppObj *const, AppObj::RequestType);
void AppObj::Request(AppObj::RequestType) // 0x4F6A67
{
    mangled_assert("?Request@AppObj@@QAEXW4RequestType@1@@Z");
    todo("implement");
    _sub_4F6A67(this, arg);
}

_extern void _sub_4F6A74(AppObj *const, AppObj::RequestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void AppObj::Request(AppObj::RequestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F6A74
{
    mangled_assert("?Request@AppObj@@QAEXW4RequestType@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_4F6A74(this, arg, arg);
}

_extern void _sub_4F6C0E(AppObj *const, char const *);
void AppObj::SaveGame(char const *) // 0x4F6C0E
{
    mangled_assert("?SaveGame@AppObj@@QAEXPBD@Z");
    todo("implement");
    _sub_4F6C0E(this, arg);
}

_extern _sub_4F64E8(AppObjStatic *const);
_inline AppObjStatic::AppObjStatic() // 0x4F64E8
{
    mangled_assert("??0AppObjStatic@@QAE@XZ");
    todo("implement");
    _sub_4F64E8(this);
}

_extern void _sub_4F6648(AppObjStatic *const);
_inline AppObjStatic::~AppObjStatic() // 0x4F6648
{
    mangled_assert("??1AppObjStatic@@QAE@XZ");
    todo("implement");
    _sub_4F6648(this);
}

_extern void _sub_4F664D(AppObj::Data *const);
_inline AppObj::Data::~Data() // 0x4F664D
{
    mangled_assert("??1Data@AppObj@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F664D(this);
}

_extern void _sub_4F66FB(GameResult *const);
_inline GameResult::~GameResult() // 0x4F66FB
{
    mangled_assert("??1GameResult@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F66FB(this);
}

_extern void _sub_4F6708(GameSpyID *const);
_inline GameSpyID::~GameSpyID() // 0x4F6708
{
    mangled_assert("??1GameSpyID@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F6708(this);
}

_extern _sub_4F6317(AppInterface *const);
_inline AppInterface::AppInterface() // 0x4F6317
{
    mangled_assert("??0AppInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F6317(this);
}

/* ---------- private code */
#endif
