#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <isteamclient.h>
#include <assist\stlexsmallvector.h>
#include <steamtypes.h>
#include <boost\ref.hpp>
#include <stdexcept>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <profileapi.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <isteamuser.h>
#include <synchapi.h>
#include <boost\type_traits\is_pointer.hpp>
#include <crtdefs.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <isteamhtmlsurface.h>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <combaseapi.h>
#include <isteammusic.h>
#include <Mathlib\matrix3.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <Render\objects\compiledtext.h>
#include <stdarg.h>
#include <NetworkDP8\source\exception.h>
#include <NetworkDP8\source\blowfish.h>
#include <windef.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <isteamremotestorage.h>
#include <new>
#include <specstrings.h>
#include <playsoundapi.h>
#include <localizer\localizer.h>
#include <specstrings_strict.h>
#include <xstddef>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <FrontEnd\lobbyevent.h>
#include <type_traits>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <FrontEnd\lobbydefines.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <isteamapplist.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <oaidl.h>
#include <isteamhttp.h>
#include <commdlg.h>
#include <steamhttpenums.h>
#include <namespaceapi.h>
#include <UserInterface\NewTextInput.h>
#include <xutility>
#include <ktmtypes.h>
#include <UserInterface\NewTextLabel.h>
#include <utility>
#include <iosfwd>
#include <UserInterface\uiprimitives.h>
#include <vector>
#include <dpapi.h>
#include <propidl.h>
#include <boost\pending\ct_if.hpp>
#include <UserInterface\NewText.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <unknwn.h>
#include <Render\objects\fontsystem.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <NetworkDP8\source\sessionenum.h>
#include <UserInterface\NewButton.h>
#include <Render\objects\bitmapfont.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <minwinbase.h>
#include <boost\type_traits\is_stateless.hpp>
#include <steamclientpublic.h>
#include <atlcore.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <compiler\compilerconfig.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_pod.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\is_scalar.hpp>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <Network\StagingArea.h>
#include <guiddef.h>
#include <stralign.h>
#include <boost\type_traits\intrinsics.hpp>
#include <gameSettings.h>
#include <list>
#include <syncChecking.h>
#include <jobapi.h>
#include <isteamutils.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <apiset.h>
#include <assist\fixedstring.h>
#include <prim.h>
#include <platform\osdef.h>
#include <winsvc.h>
#include <Mathlib\vector3.h>
#include <Menus\WaitMessage.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <atliface.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <boost\type_traits\is_float.hpp>
#include <map>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Render\objects\texture.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <boost\assert.hpp>
#include <Render\objects\objects.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <Render\objects\core.h>
#include <libloaderapi.h>
#include <isteammatchmaking.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <sysinfoapi.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <Mathlib\matvec.h>
#include <atlchecked.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <Mathlib\vector2.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <util\types.h>
#include <atltrace.h>
#include <oleacc.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <timeapi.h>
#include <boost\config.hpp>
#include <NetworkDP8\source\authentication.h>
#include <cassert>
#include <assert.h>
#include <NetworkDP8\source\session.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <NetworkDP8\source\directplay.h>
#include <fibersapi.h>
#include <boost\thread\thread.hpp>
#include <App\PlayerProfile.h>
#include <Render\gl\r_types.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <App\PlayerProfileGameOptions.h>
#include <boost\preprocessor\iterate.hpp>
#include <winver.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\config\config.hpp>
#include <KeyBindings.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <config.h>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\elem.hpp>
#include <winuser.h>
#include <boost\preprocessor\array\data.hpp>
#include <assist\typemagic.h>
#include <cguid.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <atlsimpcoll.h>
#include <boost\preprocessor\array\size.hpp>
#include <consoleapi.h>
#include <boost\preprocessor\cat.hpp>
#include <Menus\MessageUtil.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <isteamscreenshots.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\detail\prologue.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\function\function_base.hpp>
#include <Mathlib\fastmath.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <Menus\Multiplayer\MultiplayerCommon.h>
#include <isteamfriends.h>
#include <prsht.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <platform\keydefines.h>
#include <wingdi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <rpc.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <pshpack4.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <joystickapi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <debug\db.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <Render\objects\cliprect.h>
#include <winerror.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <Menus\Multiplayer\MultiplayerConnect.h>
#include <winefs.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <luaconfig\luaconfig.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <Menus\GameSetup.h>
#include <deque>
#include <lua.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <Race.h>
#include <LevelManager.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <atlbase.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <gamestructimpl.h>
#include <UserInterface\uitypes.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <Badge.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <isteamcontroller.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <savegamedef.h>
#include <steamcontrollerpublic.h>
#include <boost\detail\shared_count.hpp>
#include <securitybaseapi.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <App\PlayerProfileMan.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <Menus\Multiplayer\CreateGameScreen.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <LevelDesc.h>
#include <boost\function\detail\maybe_include.hpp>
#include <UserInterface\UIDialog.h>
#include <Hash.h>
#include <boost\function\function_template.hpp>
#include <fileio\md5.h>
#include <debugapi.h>
#include <fileapi.h>
#include <boost\type_traits\is_class.hpp>
#include <boost\type_traits\is_union.hpp>
#include <isteammusicremote.h>
#include <boost\type_traits\remove_cv.hpp>
#include <cderr.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <Menus\Multiplayer\DirectConnectionScreen.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <UserInterface\NewUIScreen.h>
#include <winsock2.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <winapifamily.h>
#include <boost\type_traits\is_enum.hpp>
#include <boost\utility\addressof.hpp>
#include <boost\static_assert.hpp>
#include <stack>
#include <UserInterface\pch.h>
#include <windows.h>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\add_reference.hpp>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <boost\type_traits\is_reference.hpp>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <poppack.h>
#include <SteamFuncs.h>
#include <steam_api.h>

/* ---------- constants */

enum `anonymous-namespace'::LocalizedMessages
{
    LM_GameName = 0,
    LM_Number,
};

/* ---------- definitions */

typedef `anonymous-namespace'::LocalizedMessages ?A0x77361285::LocalizedMessages;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5B33E9(UI::DirectConnectionScreen *const, char const *);
UI::DirectConnectionScreen::DirectConnectionScreen(char const *) // 0x5B33E9
{
    mangled_assert("??0DirectConnectionScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5B33E9(this, arg);
}

_extern void _sub_5B3459(UI::DirectConnectionScreen::Data *const);
_inline UI::DirectConnectionScreen::Data::~Data() // 0x5B3459
{
    mangled_assert("??1Data@DirectConnectionScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B3459(this);
}

_extern void _sub_5B349C(UI::DirectConnectionScreen *const);
UI::DirectConnectionScreen::~DirectConnectionScreen() // 0x5B349C
{
    mangled_assert("??1DirectConnectionScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_5B349C(this);
}

_extern void _sub_5B3A1D(UI::DirectConnectionScreen *const, LuaConfig &);
void UI::DirectConnectionScreen::OnPreLoadFile(LuaConfig &) // 0x5B3A1D
{
    mangled_assert("?OnPreLoadFile@DirectConnectionScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5B3A1D(this, arg);
}

_extern _sub_5B3389(UI::DirectConnectionScreen::Data *const);
_inline UI::DirectConnectionScreen::Data::Data() // 0x5B3389
{
    mangled_assert("??0Data@DirectConnectionScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B3389(this);
}

_extern void _sub_5B394F(UI::DirectConnectionScreen *const, LuaConfig &);
void UI::DirectConnectionScreen::OnLoad(LuaConfig &) // 0x5B394F
{
    mangled_assert("?OnLoad@DirectConnectionScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5B394F(this, arg);
}

_extern void _sub_5B396C(UI::DirectConnectionScreen *const);
void UI::DirectConnectionScreen::OnPostLoad() // 0x5B396C
{
    mangled_assert("?OnPostLoad@DirectConnectionScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_5B396C(this);
}

_extern void _sub_5B363B(UI::DirectConnectionScreen *const, bool);
void UI::DirectConnectionScreen::OnActivate(bool) // 0x5B363B
{
    mangled_assert("?OnActivate@DirectConnectionScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5B363B(this, arg);
}

_extern void _sub_5B3A3E(UI::DirectConnectionScreen *const, unsigned __int32);
void UI::DirectConnectionScreen::Update(unsigned __int32) // 0x5B3A3E
{
    mangled_assert("?Update@DirectConnectionScreen@UI@@MAEXI@Z");
    todo("implement");
    _sub_5B3A3E(this, arg);
}

_extern void _sub_5B3838(UI::InterfaceElement *);
void UI::DirectConnectionScreen::OnHost(UI::InterfaceElement *sender) // 0x5B3838
{
    mangled_assert("?OnHost@DirectConnectionScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B3838(sender);
}

_extern void _sub_5B3669(UI::InterfaceElement *);
void UI::DirectConnectionScreen::OnCreateGameClicked_Host(UI::InterfaceElement *sender) // 0x5B3669
{
    mangled_assert("?OnCreateGameClicked_Host@DirectConnectionScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B3669(sender);
}

_extern void _sub_5B37BE(UI::InterfaceElement *);
void UI::DirectConnectionScreen::OnCreateGameClicked_Join(UI::InterfaceElement *sender) // 0x5B37BE
{
    mangled_assert("?OnCreateGameClicked_Join@DirectConnectionScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B37BE(sender);
}

_extern void _sub_5B35AD(UI::DirectConnectionScreen *const, wchar_t const *);
void UI::DirectConnectionScreen::DoJoinGame(wchar_t const *) // 0x5B35AD
{
    mangled_assert("?DoJoinGame@DirectConnectionScreen@UI@@AAEXPB_W@Z");
    todo("implement");
    _sub_5B35AD(this, arg);
}

_extern void _sub_5B38CB(UI::InterfaceElement *);
void UI::DirectConnectionScreen::OnIPAccept(UI::InterfaceElement *sender) // 0x5B38CB
{
    mangled_assert("?OnIPAccept@DirectConnectionScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B38CB(sender);
}

_extern void _sub_5B353D(UI::DirectConnectionScreen *const);
void UI::DirectConnectionScreen::DoConnect() // 0x5B353D
{
    mangled_assert("?DoConnect@DirectConnectionScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_5B353D(this);
}

/* ---------- private code */
#endif
