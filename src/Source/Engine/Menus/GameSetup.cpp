#if 0
/* ---------- headers */

#include "decomp.h"
#include <Badge.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <isteammatchmaking.h>
#include <assist\stlexsmallvector.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <specstrings_strict.h>
#include <stdexcept>
#include <recorder.h>
#include <xstring>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <orders.h>
#include <xmemory0>
#include <GameRulesLibrary.h>
#include <Mathlib\matrix4.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <orders_base.h>
#include <pch.h>
#include <isteamapps.h>
#include <memory\memorylib.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <sobid.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <crtdefs.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <ktmtypes.h>
#include <NetworkDP8\source\sessionenum.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <dpapi.h>
#include <propidl.h>
#include <Mathlib\matrix3.h>
#include <unknwn.h>
#include <boost\type_traits\is_stateless.hpp>
#include <UserInterface\NewListBox.h>
#include <Menus\MessageUtil.h>
#include <GameObj.h>
#include <KeyBindings.h>
#include <platform\osdef.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <util\statmonitor.h>
#include <BuildManager.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_pod.hpp>
#include <util\utilexports.h>
#include <Mathlib\mathutil.h>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <platform\timer.h>
#include <xfunctional>
#include <atlcore.h>
#include <new>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <boost\static_assert.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <xstddef>
#include <UserInterface\SharedGraphicFactory.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <type_traits>
#include <UserInterface\Graphic.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <Render\objects\texture.h>
#include <guiddef.h>
#include <stralign.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <jobapi.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <commandtype.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <isteamscreenshots.h>
#include <Mathlib\matvec.h>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <GameOptions.h>
#include <platform\keydefines.h>
#include <winsvc.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <xutility>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_float.hpp>
#include <utility>
#include <iosfwd>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <vector>
#include <isteamfriends.h>
#include <fileio\bytestream.h>
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <Render\gl\lotypes.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <platform\cmdline.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <fileio\filestream.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <luaconfig\luaconfig.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <lua.h>
#include <compiler\compilerconfig.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <Render\gl\r_types.h>
#include <atlchecked.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <list>
#include <atltrace.h>
#include <oleacc.h>
#include <Player.h>
#include <FrontEnd\lobbyevent.h>
#include <atlconv.h>
#include <ResearchManager.h>
#include <FrontEnd\lobbydefines.h>
#include <winsock.h>
#include <atlalloc.h>
#include <NetworkDP8\source\authentication.h>
#include <nb30.h>
#include <wincrypt.h>
#include <assist\fixedstring.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\vector3.h>
#include <NetworkDP8\source\session.h>
#include <isteamcontroller.h>
#include <Mathlib\vector4.h>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <steamcontrollerpublic.h>
#include <boost\thread\thread.hpp>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <UserInterface\NewDropDownListBox.h>
#include <gamemsg.h>
#include <map>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <UserInterface\ListBoxItem.h>
#include <xtree>
#include <fibersapi.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <UserInterface\TextButton.h>
#include <boost\scoped_ptr.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <UserInterface\NewButton.h>
#include <boost\preprocessor\config\config.hpp>
#include <boost\assert.hpp>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\UIDialog.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <Menus\ErrorMessage.h>
#include <UserInterface\NewUIScreen.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <Menus\PlayerSlotFrame.h>
#include <task.h>
#include <Mathlib\vector2.h>
#include <UserInterface\StyleSheet.h>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\size.hpp>
#include <isteammusicremote.h>
#include <stack>
#include <util\types.h>
#include <UserInterface\pch.h>
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
#include <boost\cstdint.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\config.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <cassert>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <Network\StagingArea.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <assert.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <gameSettings.h>
#include <UserInterface\uitypes.h>
#include <prsht.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <config.h>
#include <SteamFuncs.h>
#include <platform\inputinterface.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <syncChecking.h>
#include <steam_api.h>
#include <platform\platformexports.h>
#include <fileio\filepath.h>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <isteamclient.h>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <steamtypes.h>
#include <pshpack4.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <joystickapi.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <isteamuser.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <assist\typemagic.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <App\PlayerProfileMan.h>
#include <atlbase.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <App\PlayerProfile.h>
#include <isteamhtmlsurface.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\preprocessor\enum_params.hpp>
#include <App\PlayerProfileGameOptions.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <isteammusic.h>
#include <Mathlib\mathlibdll.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Mathlib\fastmath.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <FrontEnd\LobbySessionDesc.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <Menus\Multiplayer\CreateGameScreen.h>
#include <isteamremotestorage.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <debug\db.h>
#include <boost\type_traits\is_class.hpp>
#include <boost\type_traits\is_union.hpp>
#include <Menus\GameTypeInfo.h>
#include <playerresourcetype.h>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>
#include <Render\objects\compiledtext.h>
#include <isteamapplist.h>
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <FrontEnd\Lobby.h>
#include <deque>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <Menus\MenuSupport.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <Render\objects\textureregistry.h>
#include <numeric>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <localizer\localizer.h>
#include <hash_map>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <util\colour.h>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <boost\throw_exception.hpp>
#include <winapifamily.h>
#include <sobtypes.h>
#include <fixedpoint.h>
#include <windows.h>
#include <selection.h>
#include <util\fixed.h>
#include <savegamedef.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <boost\detail\shared_count.hpp>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <Menus\SaveLoadDialog.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <UserInterface\NewTextLabel.h>
#include <SquadronList.h>
#include <steamclientpublic.h>
#include <boost\detail\lwm_win32.hpp>
#include <poppack.h>
#include <UserInterface\uiprimitives.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <boost\ref.hpp>
#include <region.h>
#include <UserInterface\NewText.h>
#include <prim.h>
#include <Render\objects\textureproxy.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_pointer.hpp>
#include <Render\objects\fontsystem.h>
#include <profileapi.h>
#include <Render\objects\bitmapfont.h>
#include <isteamutils.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <Menus\Multiplayer\ChatUI.h>
#include <Menus\GameSetup.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <Race.h>
#include <LevelDesc.h>
#include <wchar.h>
#include <ole2.h>
#include <inaddr.h>
#include <boost\utility.hpp>
#include <Hash.h>
#include <objbase.h>
#include <atlbase.inl>
#include <boost\utility\addressof.hpp>
#include <version.h>
#include <swprintf.inl>
#include <fileio\md5.h>
#include <combaseapi.h>
#include <boost\detail\workaround.hpp>
#include <NetworkDP8\source\blowfish.h>
#include <UserInterface\DestinationTextInput.h>
#include <UserInterface\NewTextInput.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <algorithm>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <App\AppObj.h>
#include <LevelManager.h>
#include <stdarg.h>
#include <platform\appinterface.h>
#include <gamestructimpl.h>
#include <windef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool UI::LevelSortPred(UI::TextListBoxItem const *rhs, UI::TextListBoxItem const *lhs);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline UI::GameSetup::ChatStateData::ChatStateData() // 0x586AC0
{
    mangled_assert("??0ChatStateData@GameSetup@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::GameSetup::GameSetup(char const *) // 0x586AE5
{
    mangled_assert("??0GameSetup@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline StagingArea::ICallbacks::ICallbacks() // 0x586D35
{
    mangled_assert("??0ICallbacks@StagingArea@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::TextListBoxItem *,std::allocator<UI::TextListBoxItem *> >::~_List_buy<UI::TextListBoxItem *,std::allocator<UI::TextListBoxItem *> >() // 0x586D5B
{
    mangled_assert("??1?$_List_buy@PAVTextListBoxItem@UI@@V?$allocator@PAVTextListBoxItem@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::GameSetup::ChatStateData::~ChatStateData() // 0x586DA1
{
    mangled_assert("??1ChatStateData@GameSetup@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::GameSetup::~GameSetup() // 0x586DAE
{
    mangled_assert("??1GameSetup@UI@@UAE@XZ");
    todo("implement");
}

void UI::GameSetup::SetPreviousScreen(char const *) // 0x58A1AF
{
    mangled_assert("?SetPreviousScreen@GameSetup@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::GameSetup::InitializeSkirmish() // 0x58851E
{
    mangled_assert("?InitializeSkirmish@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::InitializeMultiplayer(std::auto_ptr<Net::Session>, unsigned long long) // 0x5881AF
{
    mangled_assert("?InitializeMultiplayer@GameSetup@UI@@QAEXV?$auto_ptr@VSession@Net@@@std@@_K@Z");
    todo("implement");
}

void UI::GameSetup::Initialize() // 0x587D2C
{
    mangled_assert("?Initialize@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::InitializePlayersFrame() // 0x5882EE
{
    mangled_assert("?InitializePlayersFrame@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::OnPreLoadFile(LuaConfig &) // 0x589C6E
{
    mangled_assert("?OnPreLoadFile@GameSetup@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::GameSetup::OnLoad(LuaConfig &) // 0x588C35
{
    mangled_assert("?OnLoad@GameSetup@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::GameSetup::OnPostLoad() // 0x5896D2
{
    mangled_assert("?OnPostLoad@GameSetup@UI@@MAEXXZ");
    todo("implement");
}

void UI::GameSetup::FillChatStateData() // 0x58758E
{
    mangled_assert("?FillChatStateData@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::ClearGameOptions() // 0x5874A2
{
    mangled_assert("?ClearGameOptions@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::AddGameRules(UI::NewDropDownListBox *, MD5Hash const &) // 0x587143
{
    mangled_assert("?AddGameRules@GameSetup@UI@@AAEXPAVNewDropDownListBox@2@ABVMD5Hash@@@Z");
    todo("implement");
}

void UI::GameSetup::FillGameTypeOptions() // 0x58773C
{
    mangled_assert("?FillGameTypeOptions@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::LoadGameOptions() // 0x5885CA
{
    mangled_assert("?LoadGameOptions@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::OnFocus(bool) // 0x588A8C
{
    mangled_assert("?OnFocus@GameSetup@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::GameSetup::EnableChatFrame(bool) // 0x58750D
{
    mangled_assert("?EnableChatFrame@GameSetup@UI@@AAEX_N@Z");
    todo("implement");
}

void UI::GameSetup::OnActivate(bool) // 0x5888E3
{
    mangled_assert("?OnActivate@GameSetup@UI@@MAEX_N@Z");
    todo("implement");
}

UI::GameSetup::ScreenType UI::GameSetup::GetScreenType() const // 0x587D0D
{
    mangled_assert("?GetScreenType@GameSetup@UI@@QBE?AW4ScreenType@12@XZ");
    todo("implement");
}

void UI::GameSetup::FillLevelListBox() // 0x587955
{
    mangled_assert("?FillLevelListBox@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::EnableGameOptions(bool) // 0x587558
{
    mangled_assert("?EnableGameOptions@GameSetup@UI@@AAEX_N@Z");
    todo("implement");
}

void UI::GameSetup::OnHostReady(bool) // 0x588BCC
{
    mangled_assert("?OnHostReady@GameSetup@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::GameSetup::SetLevel(LevelDesc const *) // 0x58A0A3
{
    mangled_assert("?SetLevel@GameSetup@UI@@AAEXPBVLevelDesc@@@Z");
    todo("implement");
}

void UI::GameSetup::ResizeMaxPlayers(__int32) // 0x589F49
{
    mangled_assert("?ResizeMaxPlayers@GameSetup@UI@@AAEXH@Z");
    todo("implement");
}

void UI::GameSetup::ApplyGameSettings() // 0x5871F6
{
    mangled_assert("?ApplyGameSettings@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::ShowChatState(UI::GameSetup::ChatStates) // 0x58A1D0
{
    mangled_assert("?ShowChatState@GameSetup@UI@@AAEXW4ChatStates@12@@Z");
    todo("implement");
}

void UI::GameSetup::OnGameTypeSelect(UI::InterfaceElement *sender, __int32 itemIndex) // 0x588AE4
{
    mangled_assert("?OnGameTypeSelect@GameSetup@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::GameSetup::OnMapSelect(UI::InterfaceElement *sender, __int32 mapIndex) // 0x58928B
{
    mangled_assert("?OnMapSelect@GameSetup@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::GameSetup::OnGameInfoClicked(UI::InterfaceElement *infoButton) // 0x588A8F
{
    mangled_assert("?OnGameInfoClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::GameSetupStoreOptionsInProfile() // 0x587B42
{
    mangled_assert("?GameSetupStoreOptionsInProfile@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::OnStartGameClicked(UI::InterfaceElement *startButton) // 0x589E57
{
    mangled_assert("?OnStartGameClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnSendClicked(UI::InterfaceElement *startButton) // 0x589DC9
{
    mangled_assert("?OnSendClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnBackClicked(UI::InterfaceElement *startButton) // 0x5889CC
{
    mangled_assert("?OnBackClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::DoSessionCancel() // 0x5874DB
{
    mangled_assert("?DoSessionCancel@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::OnCollapsePlayersClicked(UI::InterfaceElement *startButton) // 0x5889FA
{
    mangled_assert("?OnCollapsePlayersClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnLobbyChatClicked(UI::InterfaceElement *startButton) // 0x589074
{
    mangled_assert("?OnLobbyChatClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnLoadGameClicked(UI::InterfaceElement *loadButton) // 0x589036
{
    mangled_assert("?OnLoadGameClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnLoadRecordedGameClicked(UI::InterfaceElement *loadButton) // 0x589047
{
    mangled_assert("?OnLoadRecordedGameClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnMoreOptionsClicked(UI::InterfaceElement *moreOptionsButton) // 0x589321
{
    mangled_assert("?OnMoreOptionsClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnPresetsClicked(UI::InterfaceElement *presetButton) // 0x589C8F
{
    mangled_assert("?OnPresetsClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::OnLobbyPlayerConnect(wchar_t const *, bool) // 0x58921E
{
    mangled_assert("?OnLobbyPlayerConnect@GameSetup@UI@@EAEXPB_W_N@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
}

void UI::GameSetup::OnLobbyPlayerDisconnect(wchar_t const *) // 0x58924F
{
    mangled_assert("?OnLobbyPlayerDisconnect@GameSetup@UI@@EAEXPB_W@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
}

void UI::GameSetup::OnLobbyPlayerChanged(wchar_t const *) // 0x589216
{
    mangled_assert("?OnLobbyPlayerChanged@GameSetup@UI@@EAEXPB_W@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
}

void UI::GameSetup::OnLobbyDisconnected(wchar_t const *) // 0x58914D
{
    mangled_assert("?OnLobbyDisconnected@GameSetup@UI@@EAEXPB_W@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
}

void UI::GameSetup::OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) // 0x58905B
{
    mangled_assert("?OnLobbyChat@GameSetup@UI@@EAEXW4LobbyChatType@@PB_W1@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
}

void UI::GameSetup::OnErrorClicked(UI::InterfaceElement *sender) // 0x588A57
{
    mangled_assert("?OnErrorClicked@GameSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::GameSetup::Update(unsigned __int32) // 0x58A2B5
{
    mangled_assert("?Update@GameSetup@UI@@MAEXI@Z");
    todo("implement");
}

void UI::GameSetup::UpdateStartButton(bool) // 0x58AFD9
{
    mangled_assert("?UpdateStartButton@GameSetup@UI@@AAEX_N@Z");
    todo("implement");
}

void UI::GameSetup::UpdatePositions() // 0x58AF2D
{
    mangled_assert("?UpdatePositions@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::FillHostSettings(StagingArea::HostSettings &) // 0x587844
{
    mangled_assert("?FillHostSettings@GameSetup@UI@@AAEXAAUHostSettings@StagingArea@@@Z");
    todo("implement");
}

void UI::GameSetup::UpdateLobbyGameStarted() // 0x58A852
{
    mangled_assert("?UpdateLobbyGameStarted@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::UpdateLobbySession() // 0x58A894
{
    mangled_assert("?UpdateLobbySession@GameSetup@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameSetup::OnNetCreateHost(StagingArea::HostSettings &) // 0x5893A5
{
    mangled_assert("?OnNetCreateHost@GameSetup@UI@@UAEXAAUHostSettings@StagingArea@@@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

bool UI::GameSetup::OnNetCreatePlayer(StagingArea::PlayerSettings &) // 0x5893F1
{
    mangled_assert("?OnNetCreatePlayer@GameSetup@UI@@UAE_NAAUPlayerSettings@StagingArea@@@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::OnNetDestroyPlayer(__int32) // 0x58947A
{
    mangled_assert("?OnNetDestroyPlayer@GameSetup@UI@@UAEXH@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::OnNetPlayerSettings(StagingArea::PlayerSettings const &, wchar_t const *, bool, bool) // 0x5895F8
{
    mangled_assert("?OnNetPlayerSettings@GameSetup@UI@@UAEXABUPlayerSettings@StagingArea@@PB_W_N2@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::OnNetHostSettings(StagingArea::HostSettings const &) // 0x589540
{
    mangled_assert("?OnNetHostSettings@GameSetup@UI@@UAEXABUHostSettings@StagingArea@@@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::UpdateClientHostSettings(StagingArea::HostSettings const &) // 0x58A612
{
    mangled_assert("?UpdateClientHostSettings@GameSetup@UI@@AAEXABUHostSettings@StagingArea@@@Z");
    todo("implement");
}

void UI::GameSetup::OnNetStartGame() // 0x5896C7
{
    mangled_assert("?OnNetStartGame@GameSetup@UI@@UAEXXZ");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::OnNetChat(__int32, wchar_t const *) // 0x58934B
{
    mangled_assert("?OnNetChat@GameSetup@UI@@UAEXHPB_W@Z");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::OnNetHostMigration() // 0x5894D9
{
    mangled_assert("?OnNetHostMigration@GameSetup@UI@@UAEXXZ");
    // __shifted(UI::GameSetup, 416);
    todo("implement");
}

void UI::GameSetup::UpdateMapName(char const *) // 0x58AC27
{
    mangled_assert("?UpdateMapName@GameSetup@UI@@AAEXPBD@Z");
    todo("implement");
}

void UI::GameSetup::ScrollOptionsUp() // 0x58A024
{
    mangled_assert("?ScrollOptionsUp@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::ScrollOptionsDown() // 0x589FC5
{
    mangled_assert("?ScrollOptionsDown@GameSetup@UI@@QAEXXZ");
    todo("implement");
}

void UI::GameSetup::AddChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &) // 0x5870E6
{
    mangled_assert("?AddChatMessages@GameSetup@UI@@QAEXABV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool UI::LevelSortPred(UI::TextListBoxItem const *rhs, UI::TextListBoxItem const *lhs) // 0x588593
{
    mangled_assert("UI::LevelSortPred");
    todo("implement");
}
#endif
