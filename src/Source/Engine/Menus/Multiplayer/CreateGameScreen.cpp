#if 0
/* ---------- headers */

#include "decomp.h"
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <assist\stlexsmallvector.h>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atlchecked.h>
#include <stdexcept>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <atltrace.h>
#include <oleacc.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <NetworkDP8\source\authentication.h>
#include <crtdefs.h>
#include <Menus\GameSetup.h>
#include <nb30.h>
#include <wincrypt.h>
#include <Race.h>
#include <LevelManager.h>
#include <NetworkDP8\source\session.h>
#include <gamestructimpl.h>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <Badge.h>
#include <isteammatchmaking.h>
#include <boost\thread\thread.hpp>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <Mathlib\matrix3.h>
#include <fibersapi.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\preprocessor\config\config.hpp>
#include <platform\cmdline.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <new>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <xstddef>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\size.hpp>
#include <type_traits>
#include <winuser.h>
#include <boost\preprocessor\cat.hpp>
#include <cguid.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <atlsimpcoll.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <consoleapi.h>
#include <boost\function\detail\prologue.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <xutility>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <utility>
#include <iosfwd>
#include <Menus\GameTypeInfo.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <vector>
#include <boost\static_assert.hpp>
#include <prsht.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <pshpack4.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <joystickapi.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <compiler\compilerconfig.h>
#include <isteamscreenshots.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <isteamfriends.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <list>
#include <atlbase.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\preprocessor\enum_params.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <prim.h>
#include <platform\osdef.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\ListBoxItem.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <Mathlib\vector3.h>
#include <UserInterface\TextButton.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <UserInterface\NewButton.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <map>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\function\detail\maybe_include.hpp>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <App\AppObj.h>
#include <boost\function\function_template.hpp>
#include <Render\objects\texture.h>
#include <platform\appinterface.h>
#include <boost\assert.hpp>
#include <Render\objects\objects.h>
#include <boost\type_traits\is_class.hpp>
#include <Render\objects\core.h>
#include <boost\type_traits\is_union.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>
#include <Mathlib\matvec.h>
#include <isteamcontroller.h>
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <Mathlib\vector2.h>
#include <FrontEnd\lobbyevent.h>
#include <steamcontrollerpublic.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <util\types.h>
#include <FrontEnd\lobbydefines.h>
#include <Menus\ErrorMessage.h>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <Render\gl\lotypes.h>
#include <winapifamily.h>
#include <boost\cstdint.hpp>
#include <windows.h>
#include <boost\config.hpp>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <cassert>
#include <UserInterface\UIDialog.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <assert.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <poppack.h>
#include <isteammusicremote.h>
#include <FrontEnd\Lobby.h>
#include <boost\ref.hpp>
#include <Render\gl\r_types.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <UserInterface\NewDropDownListBox.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_pointer.hpp>
#include <UserInterface\NewListBox.h>
#include <profileapi.h>
#include <KeyBindings.h>
#include <config.h>
#include <synchapi.h>
#include <Network\StagingArea.h>
#include <mmsystem.h>
#include <assist\typemagic.h>
#include <gameSettings.h>
#include <mmsyscom.h>
#include <process.h>
#include <syncChecking.h>
#include <SteamFuncs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <steam_api.h>
#include <ole2.h>
#include <inaddr.h>
#include <isteamclient.h>
#include <objbase.h>
#include <atlbase.inl>
#include <steamtypes.h>
#include <combaseapi.h>
#include <NetworkDP8\source\blowfish.h>
#include <Mathlib\mathlibdll.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <Mathlib\fastmath.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <isteamuser.h>
#include <stdarg.h>
#include <windef.h>
#include <platform\keydefines.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <isteamhtmlsurface.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <debug\db.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <isteammusic.h>
#include <Render\objects\compiledtext.h>
#include <luaconfig\luaconfig.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <deque>
#include <lua.h>
#include <oaidl.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <commdlg.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <localizer\localizer.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <UserInterface\uitypes.h>
#include <isteamremotestorage.h>
#include <ktmtypes.h>
#include <NetworkDP8\source\sessionenum.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <NetworkDP8\source\sessioninfo.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <boost\type_traits\is_stateless.hpp>
#include <savegamedef.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <boost\detail\shared_count.hpp>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_pod.hpp>
#include <isteamapplist.h>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <atlcore.h>
#include <isteamhttp.h>
#include <UserInterface\NewTextInput.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <steamhttpenums.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\NewUIScreenManager.h>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <UserInterface\uiprimitives.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <UserInterface\NewText.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <Render\objects\fontsystem.h>
#include <guiddef.h>
#include <stralign.h>
#include <Render\objects\bitmapfont.h>
#include <jobapi.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <steamclientpublic.h>
#include <winsvc.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <Menus\Multiplayer\CreateGameScreen.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_float.hpp>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\utility.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <boost\utility\addressof.hpp>
#include <stack>
#include <UserInterface\pch.h>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <isteamutils.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern wchar_t const *k_UnknownGameRules; // 0x83A908
}

/* ---------- public code */

UI::CreateGameScreen::CreateGameScreen(char const *) // 0x5B28D0
{
    mangled_assert("??0CreateGameScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::CreateGameScreen::Data::Data() // 0x5B2984
{
    mangled_assert("??0Data@CreateGameScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::CreateGameScreen::~CreateGameScreen() // 0x5B29BA
{
    mangled_assert("??1CreateGameScreen@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::CreateGameScreen::Data::~Data() // 0x5B29EC
{
    mangled_assert("??1Data@CreateGameScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::CreateGameScreen::OnLoad(LuaConfig &) // 0x5B2D45
{
    mangled_assert("?OnLoad@CreateGameScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::CreateGameScreen::OnPostLoad() // 0x5B2E5D
{
    mangled_assert("?OnPostLoad@CreateGameScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::CreateGameScreen::OnActivate(bool) // 0x5B2C75
{
    mangled_assert("?OnActivate@CreateGameScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::CreateGameScreen::ShowCreate(wchar_t const *, void (*)(UI::InterfaceElement *), char const *) // 0x5B30CF
{
    mangled_assert("?ShowCreate@CreateGameScreen@UI@@QAEXPB_WP6GXPAVInterfaceElement@2@@ZPBD@Z");
    todo("implement");
}

void UI::CreateGameScreen::ShowJoin(wchar_t const *, wchar_t const *, void (*)(UI::InterfaceElement *), char const *) // 0x5B31A1
{
    mangled_assert("?ShowJoin@CreateGameScreen@UI@@QAEXPB_W0P6GXPAVInterfaceElement@2@@ZPBD@Z");
    todo("implement");
}

void UI::CreateGameScreen::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x5B2B0E
{
    mangled_assert("?ConnectOnAccept@CreateGameScreen@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

void UI::CreateGameScreen::DisconnectSlots() // 0x5B2B2D
{
    mangled_assert("?DisconnectSlots@CreateGameScreen@UI@@QAEXXZ");
    todo("implement");
}

void UI::CreateGameScreen::SetGameName(wchar_t const *) // 0x5B3099
{
    mangled_assert("?SetGameName@CreateGameScreen@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::CreateGameScreen::SetGameTypeVisible(bool) // 0x5B30BC
{
    mangled_assert("?SetGameTypeVisible@CreateGameScreen@UI@@AAEX_N@Z");
    todo("implement");
}

wchar_t const *UI::CreateGameScreen::GetGameName() const // 0x5B2B45
{
    mangled_assert("?GetGameName@CreateGameScreen@UI@@QBEPB_WXZ");
    todo("implement");
}

wchar_t const *UI::CreateGameScreen::GetPassword() const // 0x5B2BA5
{
    mangled_assert("?GetPassword@CreateGameScreen@UI@@QBEPB_WXZ");
    todo("implement");
}

wchar_t const *UI::CreateGameScreen::GetGameRules() const // 0x5B2B5C
{
    mangled_assert("?GetGameRules@CreateGameScreen@UI@@QBEPB_WXZ");
    todo("implement");
}

void UI::CreateGameScreen::Update(unsigned __int32) // 0x5B3339
{
    mangled_assert("?Update@CreateGameScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::CreateGameScreen::AddGameRules(MD5Hash const &) // 0x5B2A50
{
    mangled_assert("?AddGameRules@CreateGameScreen@UI@@AAEXABVMD5Hash@@@Z");
    todo("implement");
}

void UI::CreateGameScreen::PopulateGameRules() // 0x5B2FF7
{
    mangled_assert("?PopulateGameRules@CreateGameScreen@UI@@AAEXXZ");
    todo("implement");
}

void UI::CreateGameScreen::OnAcceptClicked(UI::InterfaceElement *sender) // 0x5B2BC3
{
    mangled_assert("?OnAcceptClicked@CreateGameScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::CreateGameScreen::OnCancelClicked(UI::InterfaceElement *sender) // 0x5B2C9F
{
    mangled_assert("?OnCancelClicked@CreateGameScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::CreateGameScreen::OnGameTypeInfoClicked(UI::InterfaceElement *sender) // 0x5B2CF7
{
    mangled_assert("?OnGameTypeInfoClicked@CreateGameScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
