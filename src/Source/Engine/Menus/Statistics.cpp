#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\RadioItem.h>
#include <assist\stlexsmallvector.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <isteamfriends.h>
#include <processenv.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <guiddef.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <App\Hw2Identify.h>
#include <Stats\StatLogging.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <jobapi.h>
#include <crtdefs.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <Mathlib\matrix3.h>
#include <datetimeapi.h>
#include <Menus\SinglePlayer\SPMissionSelect.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <boost\checked_delete.hpp>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <new>
#include <isteamcontroller.h>
#include <sysinfoapi.h>
#include <steamcontrollerpublic.h>
#include <objidlbase.h>
#include <xstddef>
#include <winreg.h>
#include <ncrypt.h>
#include <type_traits>
#include <unknwnbase.h>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <UserInterface\UIDialog.h>
#include <timeapi.h>
#include <xutility>
#include <dpapi.h>
#include <propidl.h>
#include <utility>
#include <iosfwd>
#include <unknwn.h>
#include <vector>
#include <isteammusicremote.h>
#include <securityappcontainer.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <fibersapi.h>
#include <imm.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <compiler\compilerconfig.h>
#include <Render\objects\cliprect.h>
#include <rpcndr.h>
#include <Menus\GameSetup.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <Race.h>
#include <Network\StagingArea.h>
#include <mciapi.h>
#include <stralign.h>
#include <gameSettings.h>
#include <winuser.h>
#include <syncChecking.h>
#include <SteamFuncs.h>
#include <list>
#include <steam_api.h>
#include <isteamclient.h>
#include <consoleapi.h>
#include <steamtypes.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Menus\SaveLoadDialog.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <isteamuser.h>
#include <map>
#include <wingdi.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <isteamhtmlsurface.h>
#include <rpc.h>
#include <urlmon.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <pshpack4.h>
#include <Render\objects\texture.h>
#include <joystickapi.h>
#include <Render\objects\objects.h>
#include <rpcdce.h>
#include <Render\objects\core.h>
#include <isteammusic.h>
#include <winerror.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <bcrypt.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <util\types.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <UserInterface\NewButton.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <isteamapplist.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <assert.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <Render\gl\r_types.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <debugapi.h>
#include <KeyBindings.h>
#include <fileapi.h>
#include <config.h>
#include <cguid.h>
#include <steamclientpublic.h>
#include <assist\typemagic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <cderr.h>
#include <dde.h>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <windows.h>
#include <FrontEnd\lobbyevent.h>
#include <winapifamily.h>
#include <FrontEnd\lobbydefines.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <Mathlib\mathlibdll.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <Mathlib\fastmath.h>
#include <isteamutils.h>
#include <Render\objects\compiledtext.h>
#include <poppack.h>
#include <platform\keydefines.h>
#include <Stats\luastatlogging.h>
#include <localizer\localizer.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <platform\cmdline.h>
#include <fileio\md5.h>
#include <mmiscapi2.h>
#include <debug\db.h>
#include <profileapi.h>
#include <winefs.h>
#include <synchapi.h>
#include <inaddr.h>
#include <luaconfig\luaconfig.h>
#include <LevelManager.h>
#include <mmsystem.h>
#include <deque>
#include <lua.h>
#include <mmsyscom.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <gamestructimpl.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <Badge.h>
#include <isteammatchmaking.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\uitypes.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\TextButton.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\NewTextLabel.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\uiprimitives.h>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <UserInterface\NewText.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <savegamedef.h>
#include <Render\objects\fontsystem.h>
#include <wnnc.h>
#include <boost\detail\shared_count.hpp>
#include <Render\objects\bitmapfont.h>
#include <stdarg.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\detail\lwm_win32.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <App\AppObj.h>
#include <FrontEnd\lobbyroomdesc.h>
#include <threadpoolapiset.h>
#include <platform\appinterface.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <Menus\Statistics.h>
#include <ktmtypes.h>
#include <UserInterface\NewUIScreen.h>
#include <boost\static_assert.hpp>
#include <wchar.h>
#include <UserInterface\NewListBox.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <winsmcrd.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <FrontEnd\Lobby.h>
#include <UserInterface\NewUIScreenManager.h>
#include <minwinbase.h>
#include <isteamscreenshots.h>
#include <UserInterface\RadioButton.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::StatBinding
{
    char const *name; // 0x0
    __int32 *statLoggingFunc(unsigned __int32) const; // 0x4
    __int32 (*statFunc)(unsigned __int32); // 0x8
    void (*statCustomFunc)(unsigned __int32, UI::NewTextLabel *, wchar_t const *); // 0xC
};
static_assert(sizeof(UI::StatBinding) == 16, "Invalid UI::StatBinding size");

typedef unsigned short *LPWORD;
typedef _FILETIME *LPFILETIME;
typedef __int32 *StatLoggingFunc(unsigned __int32) const;
typedef __int32 (*StatisticsFunc)(unsigned __int32);
typedef void (*CustomStatFunc)(unsigned __int32, UI::NewTextLabel *, wchar_t const *);

/* ---------- prototypes */

/* ---------- globals */

extern UI::Statistics *UI::Statistics::StatsImpl::ms_screen; // 0x846D28

/* ---------- private variables */

_static
{
    extern float smShipBuiltRU; // 0x846D2C
    extern float smShipsCapturedRU; // 0x846D30
    extern float smShipsDestroyedRU; // 0x846D34
    extern float smShipsLostRU; // 0x846D38
    extern float smResourcesHarvestedRU; // 0x846D3C
    extern float smResourcesSpentRU; // 0x846D40
    extern float smCollectorsBuiltRU; // 0x846D44
    extern float smRefineriesRU; // 0x846D48
    extern float smBuildShipsRU; // 0x846D4C
    extern float smSubsystemsRU; // 0x846D50
    extern float smResearchRU; // 0x846D54
    extern float smTributeDonatedRU; // 0x846D58
    extern float smTributeReceivedRU; // 0x846D5C
    extern float smDeathTimeLoserSec; // 0x846D60
    extern float smDeathTimeWinnerSec; // 0x846D64
    extern UI::StatBinding const gc_statBindings[22]; // 0x7A4BC0
}

/* ---------- public code */

void UI::Statistics::StatsImpl::InitStatPlayers() // 0x5AADC1
{
    mangled_assert("?InitStatPlayers@StatsImpl@Statistics@UI@@QAEXXZ");
    todo("implement");
}

_inline UI::Statistics::StatEntry::StatEntry(UI::Statistics::StatEntry const &) // 0x5AA303
{
    mangled_assert("??0StatEntry@Statistics@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::Statistics::StatEntry::StatEntry() // 0x5AA380
{
    mangled_assert("??0StatEntry@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::Statistics::StatsTab UI::Statistics::StatsImpl::LoadStatsTab(LuaConfig &) // 0x5AB1E2
{
    mangled_assert("?LoadStatsTab@StatsImpl@Statistics@UI@@QAE?AUStatsTab@23@AAVLuaConfig@@@Z");
    todo("implement");
}

bool UI::Statistics::StatsImpl::SetStat(UI::NewTextLabel *, unsigned __int32, char const *, wchar_t const *) // 0x5AC2A0
{
    mangled_assert("?SetStat@StatsImpl@Statistics@UI@@QAE_NPAVNewTextLabel@3@IPBDPB_W@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::SetTab(UI::Statistics::StatsTab const &) // 0x5AC358
{
    mangled_assert("?SetTab@StatsImpl@Statistics@UI@@QAEXABUStatsTab@23@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::SetGlobalStats() // 0x5ABF6C
{
    mangled_assert("?SetGlobalStats@StatsImpl@Statistics@UI@@QAEXXZ");
    todo("implement");
}

void UI::Statistics::StatsImpl::DumpStats() // 0x5AAA58
{
    mangled_assert("?DumpStats@StatsImpl@Statistics@UI@@QAEXXZ");
    todo("implement");
}

void UI::Statistics::StatsImpl::WriteStat(LuaConfig &, unsigned __int32, char const *) // 0x5AC522
{
    mangled_assert("?WriteStat@StatsImpl@Statistics@UI@@QAEXAAVLuaConfig@@IPBD@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::ClearAllStats() // 0x5AA9C8
{
    mangled_assert("?ClearAllStats@StatsImpl@Statistics@UI@@QAEXXZ");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnBackClicked(UI::InterfaceElement *sender) // 0x5AB641
{
    mangled_assert("?OnBackClicked@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnTabButton(UI::InterfaceElement *tabButton) // 0x5ABF45
{
    mangled_assert("?OnTabButton@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnReplayClicked(UI::InterfaceElement *sender) // 0x5ABF23
{
    mangled_assert("?OnReplayClicked@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnSaveRecordingClicked(UI::InterfaceElement *sender) // 0x5ABF34
{
    mangled_assert("?OnSaveRecordingClicked@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnMainMenuClicked(UI::InterfaceElement *sender) // 0x5ABD18
{
    mangled_assert("?OnMainMenuClicked@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

void UI::Statistics::StatsImpl::OnNewGameClicked(UI::InterfaceElement *sender) // 0x5ABD1B
{
    mangled_assert("?OnNewGameClicked@StatsImpl@Statistics@UI@@SGXPAVInterfaceElement@3@@Z");
    todo("implement");
}

UI::Statistics::Statistics(char const *) // 0x5AA3C1
{
    mangled_assert("??0Statistics@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::Statistics::StatsImpl::StatsImpl() // 0x5AA47E
{
    mangled_assert("??0StatsImpl@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::Statistics::StatsTab::StatsTab(UI::Statistics::StatsTab const &) // 0x5AA54A
{
    mangled_assert("??0StatsTab@Statistics@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::Statistics::StatsTab::StatsTab() // 0x5AA597
{
    mangled_assert("??0StatsTab@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::Statistics::StatEntry::~StatEntry() // 0x5AA5E0
{
    mangled_assert("??1StatEntry@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::Statistics::~Statistics() // 0x5AA619
{
    mangled_assert("??1Statistics@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::Statistics::StatsImpl::~StatsImpl() // 0x5AA63C
{
    mangled_assert("??1StatsImpl@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::Statistics::StatsTab::~StatsTab() // 0x5AA6B5
{
    mangled_assert("??1StatsTab@Statistics@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::NewTextLabel &UI::NewTextLabel::operator=(UI::NewTextLabel const &) // 0x5AA7A7
{
    mangled_assert("??4NewTextLabel@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::RadioButton &UI::RadioButton::operator=(UI::RadioButton const &) // 0x5AA7DA
{
    mangled_assert("??4RadioButton@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::RadioItem &UI::RadioItem::operator=(UI::RadioItem const &) // 0x5AA821
{
    mangled_assert("??4RadioItem@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::TextButton &UI::TextButton::operator=(UI::TextButton const &) // 0x5AA836
{
    mangled_assert("??4TextButton@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::UISignal &UI::UISignal::operator=(UI::UISignal const &) // 0x5AA899
{
    mangled_assert("??4UISignal@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void UI::Statistics::OnPreLoad(LuaConfig &) // 0x5ABF20
{
    mangled_assert("?OnPreLoad@Statistics@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::Statistics::OnLoad(LuaConfig &) // 0x5AB655
{
    mangled_assert("?OnLoad@Statistics@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::Statistics::OnPostLoad() // 0x5ABD31
{
    mangled_assert("?OnPostLoad@Statistics@UI@@MAEXXZ");
    todo("implement");
}

void UI::Statistics::OnActivate(bool) // 0x5AB5B2
{
    mangled_assert("?OnActivate@Statistics@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::Statistics::SetLastGameRubric(UI::Statistics::LastGameRubric) // 0x5AC022
{
    mangled_assert("?SetLastGameRubric@Statistics@UI@@QAEXW4LastGameRubric@12@@Z");
    todo("implement");
}

UI::Statistics *UI::Statistics::GetScreen() // 0x5AADBB
{
    mangled_assert("?GetScreen@Statistics@UI@@SGPAV12@XZ");
    todo("implement");
}

void UI::Statistics::Update(unsigned __int32) // 0x5AC51D
{
    mangled_assert("?Update@Statistics@UI@@UAEXI@Z");
    todo("implement");
}

wchar_t const *UI::Statistics::GetNoTimeKilledString() // 0x5AADA7
{
    mangled_assert("?GetNoTimeKilledString@Statistics@UI@@QAEPB_WXZ");
    todo("implement");
}

/* ---------- private code */
#endif
