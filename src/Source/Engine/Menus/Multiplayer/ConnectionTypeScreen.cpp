#if 0
/* ---------- headers */

#include "decomp.h"
#include <winsvc.h>
#include <assist\stlexsmallvector.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_pointer.hpp>
#include <stdexcept>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <isteamhtmlsurface.h>
#include <atliface.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <FrontEnd\Lobby.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <crtdefs.h>
#include <isteammusic.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <sysinfoapi.h>
#include <UserInterface\NewUIScreenManager.h>
#include <isteamremotestorage.h>
#include <atlchecked.h>
#include <Render\objects\cliprect.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <Mathlib\matrix3.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <isteamapplist.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <new>
#include <isteamhttp.h>
#include <timeapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <xstddef>
#include <steamhttpenums.h>
#include <boost\type_traits\is_volatile.hpp>
#include <type_traits>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <fibersapi.h>
#include <winver.h>
#include <boost\pending\ct_if.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <xutility>
#include <steamclientpublic.h>
#include <winioctl.h>
#include <servprov.h>
#include <utility>
#include <iosfwd>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <vector>
#include <mciapi.h>
#include <comcat.h>
#include <boost\type_traits\is_stateless.hpp>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <winuser.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <cguid.h>
#include <boost\type_traits\is_pod.hpp>
#include <atlsimpcoll.h>
#include <boost\type_traits\is_scalar.hpp>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <compiler\compilerconfig.h>
#include <isteamutils.h>
#include <boost\type_traits\intrinsics.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <LevelDesc.h>
#include <prsht.h>
#include <list>
#include <Hash.h>
#include <fileio\md5.h>
#include <wingdi.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <rpc.h>
#include <boost\type_traits\is_convertible.hpp>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <pshpack4.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <prim.h>
#include <platform\osdef.h>
#include <joystickapi.h>
#include <boost\type_traits\is_float.hpp>
#include <Mathlib\vector3.h>
#include <LevelManager.h>
#include <rpcdce.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <winerror.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <gamestructimpl.h>
#include <winefs.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Badge.h>
#include <isteammatchmaking.h>
#include <NetworkDP8\networkdp8.h>
#include <map>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <atlbase.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <Render\objects\texture.h>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\assert.hpp>
#include <boost\type_traits\is_fundamental.hpp>
#include <Render\objects\objects.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <Render\objects\core.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <NetworkDP8\source\blowfish.h>
#include <Mathlib\vector2.h>
#include <securitybaseapi.h>
#include <util\types.h>
#include <Render\objects\compiledtext.h>
#include <oleidl.h>
#include <mcx.h>
#include <Render\gl\lotypes.h>
#include <NetworkDP8\source\session.h>
#include <boost\cstdint.hpp>
#include <NetworkDP8\source\directplay.h>
#include <localizer\localizer.h>
#include <boost\config.hpp>
#include <boost\thread\thread.hpp>
#include <cassert>
#include <debugapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <assert.h>
#include <fileapi.h>
#include <boost\preprocessor\iterate.hpp>
#include <App\AppObj.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\static_assert.hpp>
#include <platform\appinterface.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <Render\gl\r_types.h>
#include <FrontEnd\lobbyevent.h>
#include <cderr.h>
#include <boost\preprocessor\config\config.hpp>
#include <FrontEnd\lobbydefines.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <Menus\MessageUtil.h>
#include <winsock2.h>
#include <boost\preprocessor\array\elem.hpp>
#include <winapifamily.h>
#include <boost\preprocessor\array\data.hpp>
#include <windows.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <NetworkDP8\source\sessionenum.h>
#include <UserInterface\ListBoxItem.h>
#include <KeyBindings.h>
#include <isteamscreenshots.h>
#include <App\PlayerProfileMan.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <boost\preprocessor\array\size.hpp>
#include <NetworkDP8\source\sessioninfo.h>
#include <UserInterface\TextButton.h>
#include <config.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <boost\preprocessor\cat.hpp>
#include <UserInterface\NewText.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <Render\objects\fontsystem.h>
#include <assist\typemagic.h>
#include <poppack.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <Render\objects\bitmapfont.h>
#include <isteamfriends.h>
#include <util\buffermessage.h>
#include <boost\function\detail\prologue.hpp>
#include <UserInterface\NewButton.h>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <Menus\WaitMessage.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <Mathlib\mathlibdll.h>
#include <profileapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <Mathlib\fastmath.h>
#include <App\PlayerProfile.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <App\PlayerProfileGameOptions.h>
#include <synchapi.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <steamlobby\steamtracker.h>
#include <mmsystem.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <steamlobby\steamlobbyexport.h>
#include <platform\keydefines.h>
#include <mmsyscom.h>
#include <process.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <ole2.h>
#include <inaddr.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <objbase.h>
#include <atlbase.inl>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <debug\db.h>
#include <combaseapi.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <luaconfig\luaconfig.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <deque>
#include <lua.h>
#include <isteamcontroller.h>
#include <stdarg.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <steamcontrollerpublic.h>
#include <windef.h>
#include <boost\preprocessor\enum_params.hpp>
#include <Menus\Multiplayer\LobbyTitleRoom.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <UserInterface\uitypes.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <specstrings_strict.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <savegamedef.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <UserInterface\UIDialog.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <oaidl.h>
#include <boost\function\detail\maybe_include.hpp>
#include <UserInterface\NewListBox.h>
#include <commdlg.h>
#include <boost\function\function_template.hpp>
#include <NetworkDP8\source\authentication.h>
#include <isteammusicremote.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\type_traits\is_class.hpp>
#include <boost\type_traits\is_union.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <boost\type_traits\remove_cv.hpp>
#include <unknwn.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <Menus\ErrorMessage.h>
#include <Menus\GameSetup.h>
#include <minwinbase.h>
#include <boost\type_traits\is_enum.hpp>
#include <Race.h>
#include <Network\StagingArea.h>
#include <atlcore.h>
#include <boost\type_traits\add_reference.hpp>
#include <Menus\Multiplayer\ConnectionTypeScreen.h>
#include <gameSettings.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_reference.hpp>
#include <UserInterface\NewUIScreen.h>
#include <syncChecking.h>
#include <wchar.h>
#include <SteamFuncs.h>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\utility.hpp>
#include <FrontEnd\LobbySteam.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <steam_api.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\utility\addressof.hpp>
#include <stack>
#include <UserInterface\pch.h>
#include <isteamclient.h>
#include <FrontEnd\LobbyLAN.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\detail\workaround.hpp>
#include <steamtypes.h>
#include <FrontEnd\lobbynetwork.h>
#include <guiddef.h>
#include <stralign.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <jobapi.h>
#include <boost\ref.hpp>
#include <isteamuser.h>
#include <apiset.h>

/* ---------- constants */

enum `anonymous-namespace'::ConnectionTypeItem
{
    CT_LAN = 0,
    CT_INTERNET_TCP,
    CT_STEAM,
};

enum `anonymous-namespace'::LocalizedMessages
{
    LM_AuthCD = 0,
    LM_UnableToConnect,
    LM_InvalidNickname,
    LM_Connecting,
    LM_AuthCDFailed,
    LM_Disconnected,
    LM_InvalidCDKey,
    LM_Number,
};

/* ---------- definitions */

typedef `anonymous-namespace'::LocalizedMessages ?A0xadd4c4d3::LocalizedMessages;
typedef `anonymous-namespace'::ConnectionTypeItem ?A0xadd4c4d3::ConnectionTypeItem;

/* ---------- prototypes */

/* ---------- globals */

extern UI::ConnectionTypeScreen *UI::ConnectionTypeScreen::ms_screen; // 0x846D70

/* ---------- private variables */

/* ---------- public code */

UI::ConnectionTypeScreen::ConnectionTypeScreen(char const *) // 0x5B2034
{
    mangled_assert("??0ConnectionTypeScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::ConnectionTypeScreen::Data::Data() // 0x5B20D4
{
    mangled_assert("??0Data@ConnectionTypeScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::ConnectionTypeScreen::~ConnectionTypeScreen() // 0x5B20EF
{
    mangled_assert("??1ConnectionTypeScreen@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::ConnectionTypeScreen::Data::~Data() // 0x5B213A
{
    mangled_assert("??1Data@ConnectionTypeScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SteamTracker &SteamTracker::operator=(SteamTracker const &) // 0x5B214A
{
    mangled_assert("??4SteamTracker@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

UI::ConnectionTypeScreen *UI::ConnectionTypeScreen::GetScreen() // 0x5B21B6
{
    mangled_assert("?GetScreen@ConnectionTypeScreen@UI@@SGPAV12@XZ");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnActivate(bool) // 0x5B21BC
{
    mangled_assert("?OnActivate@ConnectionTypeScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnPreLoadFile(LuaConfig &) // 0x5B2812
{
    mangled_assert("?OnPreLoadFile@ConnectionTypeScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnLoad(LuaConfig &) // 0x5B24EE
{
    mangled_assert("?OnLoad@ConnectionTypeScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnPostLoad() // 0x5B279B
{
    mangled_assert("?OnPostLoad@ConnectionTypeScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnConnectionTypeAccept(UI::InterfaceElement *btnChoice) // 0x5B21DF
{
    mangled_assert("?OnConnectionTypeAccept@ConnectionTypeScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::DoEnterLobby() // 0x5B2191
{
    mangled_assert("?DoEnterLobby@ConnectionTypeScreen@UI@@AAEXXZ");
    todo("implement");
}

void UI::ConnectionTypeScreen::PostCDAuthenticate() // 0x5B28CB
{
    mangled_assert("?PostCDAuthenticate@ConnectionTypeScreen@UI@@AAEXXZ");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnLobbyCDAuthenticate(bool, wchar_t const *) // 0x5B2526
{
    mangled_assert("?OnLobbyCDAuthenticate@ConnectionTypeScreen@UI@@EAEX_NPB_W@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
}

void UI::ConnectionTypeScreen::OnLobbyChatConnectResult(bool, unsigned __int32) // 0x5B25E0
{
    mangled_assert("?OnLobbyChatConnectResult@ConnectionTypeScreen@UI@@EAEX_NI@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
}

void UI::ConnectionTypeScreen::OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender) // 0x5B24B2
{
    mangled_assert("?OnErrorClicked_BackToMainMenu@ConnectionTypeScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnNameInUseWarningClicked(UI::InterfaceElement *sender) // 0x5B276A
{
    mangled_assert("?OnNameInUseWarningClicked@ConnectionTypeScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ConnectionTypeScreen::OnLobbyDisconnected(wchar_t const *) // 0x5B2686
{
    mangled_assert("?OnLobbyDisconnected@ConnectionTypeScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
}

/* ---------- private code */
#endif
