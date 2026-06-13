#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <assist\stlexsmallvector.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <UserInterface\Graphic.h>
#include <stdexcept>
#include <UserInterface\NewUIScreenManager.h>
#include <xstring>
#include <Render\objects\texture.h>
#include <isteamhtmlsurface.h>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <Render\objects\objects.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <pch.h>
#include <Render\objects\core.h>
#include <memory\memorylib.h>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <winapifamily.h>
#include <Mathlib\matvec.h>
#include <crtdefs.h>
#include <isteammusic.h>
#include <windows.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <poppack.h>
#include <isteamremotestorage.h>
#include <boost\ref.hpp>
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix3.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_pointer.hpp>
#include <profileapi.h>
#include <isteamapplist.h>
#include <new>
#include <synchapi.h>
#include <Render\gl\r_types.h>
#include <isteamhttp.h>
#include <mmsystem.h>
#include <xstddef>
#include <steamhttpenums.h>
#include <mmsyscom.h>
#include <process.h>
#include <type_traits>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <KeyBindings.h>
#include <combaseapi.h>
#include <NetworkDP8\source\blowfish.h>
#include <config.h>
#include <UserInterface\UIDialog.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <xutility>
#include <steamclientpublic.h>
#include <stdarg.h>
#include <utility>
#include <iosfwd>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <windef.h>
#include <vector>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <specstrings_strict.h>
#include <Menus\Multiplayer\LobbyScreenDoc.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <FrontEnd\LobbySessionDesc.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <compiler\compilerconfig.h>
#include <isteamutils.h>
#include <platform\keydefines.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <Render\objects\cliprect.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <list>
#include <ktmtypes.h>
#include <NetworkDP8\source\sessionenum.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <dpapi.h>
#include <propidl.h>
#include <luaconfig\luaconfig.h>
#include <unknwn.h>
#include <boost\type_traits\is_stateless.hpp>
#include <lua.h>
#include <LevelDesc.h>
#include <Menus\Multiplayer\GameInfoScreen.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <UserInterface\NewFrame.h>
#include <Mathlib\vector3.h>
#include <Render\gl\r_defines.h>
#include <Hash.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_pod.hpp>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\vector4.h>
#include <Render\gl\glext.h>
#include <fileio\md5.h>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <UserInterface\uitypes.h>
#include <atlcore.h>
#include <platform\inputinterface.h>
#include <isteammatchmaking.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <map>
#include <platform\platformexports.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <xtree>
#include <LevelManager.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <Menus\Multiplayer\MultiplayerCommon.h>
#include <boost\scoped_ptr.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <UserInterface\ListBoxItem.h>
#include <isteamapps.h>
#include <gamestructimpl.h>
#include <guiddef.h>
#include <stralign.h>
#include <boost\assert.hpp>
#include <UserInterface\TextButton.h>
#include <Badge.h>
#include <jobapi.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <GameRulesLibrary.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <Mathlib\vector2.h>
#include <winsvc.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <util\types.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_float.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <UserInterface\NewButton.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\cstdint.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\config.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <cassert>
#include <kernelspecs.h>
#include <urlmon.h>
#include <UserInterface\NewUIScreen.h>
#include <assert.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <Menus\WaitMessage.h>
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <stack>
#include <UserInterface\pch.h>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atlchecked.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <atltrace.h>
#include <oleacc.h>
#include <FrontEnd\lobbynetwork.h>
#include <atlconv.h>
#include <boost\static_assert.hpp>
#include <winsock.h>
#include <atlalloc.h>
#include <NetworkDP8\source\authentication.h>
#include <isteamscreenshots.h>
#include <nb30.h>
#include <wincrypt.h>
#include <Menus\Multiplayer\GameFilterScreen.h>
#include <NetworkDP8\source\session.h>
#include <Render\objects\textureregistry.h>
#include <assist\typemagic.h>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <hash_map>
#include <isteamfriends.h>
#include <boost\thread\thread.hpp>
#include <UserInterface\Table.h>
#include <xhash>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <UserInterface\TableCell.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <fibersapi.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\preprocessor\config\config.hpp>
#include <Mathlib\fastmath.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <Render\objects\compiledtext.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\size.hpp>
#include <winuser.h>
#include <boost\preprocessor\cat.hpp>
#include <cguid.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <localizer\localizer.h>
#include <debug\db.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <consoleapi.h>
#include <boost\function\detail\prologue.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\function\function_base.hpp>
#include <App\AppObj.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <deque>
#include <Menus\Multiplayer\LobbyScreenView.h>
#include <platform\appinterface.h>
#include <isteamcontroller.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <Menus\Multiplayer\GameFilter.h>
#include <steamcontrollerpublic.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <prsht.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <UserInterface\DestinationTextInput.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <UserInterface\NewTextInput.h>
#include <boost\throw_exception.hpp>
#include <Menus\Multiplayer\ChatUI.h>
#include <Menus\MessageUtil.h>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <UserInterface\NewTextLabel.h>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <UserInterface\uiprimitives.h>
#include <savegamedef.h>
#include <pshpack4.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <UserInterface\NewText.h>
#include <boost\detail\shared_count.hpp>
#include <FrontEnd\LobbyPlayerDesc.h>
#include <joystickapi.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <Render\objects\fontsystem.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <Render\objects\bitmapfont.h>
#include <boost\detail\lwm_win32.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <Menus\Multiplayer\MultiplayerConnect.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <isteammusicremote.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <atlbase.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <Menus\ErrorMessage.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\preprocessor\enum_params.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <FrontEnd\Lobby.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <Menus\Multiplayer\CreateGameScreen.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <FrontEnd\lobbyevent.h>
#include <FrontEnd\LobbySteam.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <FrontEnd\lobbydefines.h>
#include <steam_api.h>
#include <boost\utility\addressof.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <UserInterface\NewListBox.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <isteamclient.h>
#include <Menus\GameSetup.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\detail\workaround.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <prim.h>
#include <platform\osdef.h>
#include <steamtypes.h>
#include <Race.h>
#include <Network\StagingArea.h>
#include <SteamFuncs.h>
#include <boost\function\function_template.hpp>
#include <gameSettings.h>
#include <Mathlib\mathutil.h>
#include <syncChecking.h>
#include <boost\type_traits\is_class.hpp>
#include <boost\type_traits\is_union.hpp>
#include <isteamuser.h>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>

/* ---------- constants */

enum `anonymous-namespace'::<unnamed-tag>
{
    ROOMID_Invalid = -1,
};

enum `anonymous-namespace'::LocalizedMessages
{
    LM_Joining = 0,
    LM_Disconnected,
    LM_CouldNotJoinRoom,
    LM_Number,
};

/* ---------- definitions */

typedef std::vector<UI::PlayerSlotFrame *,std::allocator<UI::PlayerSlotFrame *> > PlayerSlots;
typedef std::vector<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > DropDownListBoxMap;
typedef `anonymous-namespace'::LocalizedMessages ?A0xbaa39e63::LocalizedMessages;

class UI::LobbyScreenGameDisabled :
    public UI::LobbyScreenView::GameDisableTest
{
public:
    virtual _inline bool Test(LobbySessionDesc const &) override;
    LobbyScreenGameDisabled(UI::LobbyScreenGameDisabled const &); /* compiler_generated() */
    _inline LobbyScreenGameDisabled(); /* compiler_generated() */
    UI::LobbyScreenGameDisabled &operator=(UI::LobbyScreenGameDisabled const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LobbyScreenGameDisabled) == 4, "Invalid UI::LobbyScreenGameDisabled size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_5B62D9(UI::LobbyScreenGameDisabled *const, LobbySessionDesc const &);
_inline bool UI::LobbyScreenGameDisabled::Test(LobbySessionDesc const &) // 0x5B62D9
{
    mangled_assert("?Test@LobbyScreenGameDisabled@UI@@UAE_NABVLobbySessionDesc@@@Z");
    todo("implement");
    bool __result = _sub_5B62D9(this, arg);
    return __result;
}

_extern _sub_5B476D(UI::LobbyScreen::Data *const);
_inline UI::LobbyScreen::Data::Data() // 0x5B476D
{
    mangled_assert("??0Data@LobbyScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B476D(this);
}

_extern _sub_5B47D5(UI::LobbyScreenView::GameDisableTest *const);
_inline UI::LobbyScreenView::GameDisableTest::GameDisableTest() // 0x5B47D5
{
    mangled_assert("??0GameDisableTest@LobbyScreenView@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B47D5(this);
}

_extern _sub_5B47DE(UI::LobbyScreen *const, char const *);
UI::LobbyScreen::LobbyScreen(char const *) // 0x5B47DE
{
    mangled_assert("??0LobbyScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5B47DE(this, arg);
}

_extern _sub_5B4995(UI::LobbyScreenGameDisabled *const);
_inline UI::LobbyScreenGameDisabled::LobbyScreenGameDisabled() // 0x5B4995
{
    mangled_assert("??0LobbyScreenGameDisabled@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B4995(this);
}

_extern void _sub_5B49C5(std::_Tree_buy<std::pair<unsigned __int64 const ,LobbySessionDesc>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > *const);
_inline std::_Tree_buy<std::pair<unsigned __int64 const ,LobbySessionDesc>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > >::~_Tree_buy<std::pair<unsigned __int64 const ,LobbySessionDesc>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > >() // 0x5B49C5
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CB_KVLobbySessionDesc@@@std@@V?$allocator@U?$pair@$$CB_KVLobbySessionDesc@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B49C5(this);
}

_extern void _sub_5B49CE(std::_Tree_comp<0,std::_Tmap_traits<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> >,0> >() // 0x5B49CE
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@_KVLobbySessionDesc@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KVLobbySessionDesc@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B49CE(this);
}

_extern void _sub_5B49D7(std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > *const);
_inline std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > >::~map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > >() // 0x5B49D7
{
    mangled_assert("??1?$map@_KVLobbySessionDesc@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KVLobbySessionDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B49D7(this);
}

_extern void _sub_5B49DC(std::pair<unsigned __int64 const ,LobbySessionDesc> *const);
_inline std::pair<unsigned __int64 const ,LobbySessionDesc>::~pair<unsigned __int64 const ,LobbySessionDesc>() // 0x5B49DC
{
    mangled_assert("??1?$pair@$$CB_KVLobbySessionDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B49DC(this);
}

_extern void _sub_5B49E4(UI::LobbyScreen::Data *const);
_inline UI::LobbyScreen::Data::~Data() // 0x5B49E4
{
    mangled_assert("??1Data@LobbyScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B49E4(this);
}

_extern void _sub_5B4A1B(UI::LobbyScreen *const);
UI::LobbyScreen::~LobbyScreen() // 0x5B4A1B
{
    mangled_assert("??1LobbyScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_5B4A1B(this);
}

_extern void _sub_5B4AEA(UI::LobbyScreenDoc *const);
_inline UI::LobbyScreenDoc::~LobbyScreenDoc() // 0x5B4AEA
{
    mangled_assert("??1LobbyScreenDoc@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B4AEA(this);
}

_extern void _sub_5B6109(UI::LobbyScreen *const, LuaConfig &);
void UI::LobbyScreen::OnPreLoadFile(LuaConfig &) // 0x5B6109
{
    mangled_assert("?OnPreLoadFile@LobbyScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5B6109(this, arg);
}

_extern void _sub_5B5583(UI::LobbyScreen *const, LuaConfig &);
void UI::LobbyScreen::OnLoad(LuaConfig &) // 0x5B5583
{
    mangled_assert("?OnLoad@LobbyScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5B5583(this, arg);
}

_extern void _sub_5B5DAC(UI::LobbyScreen *const);
void UI::LobbyScreen::OnPostLoad() // 0x5B5DAC
{
    mangled_assert("?OnPostLoad@LobbyScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_5B5DAC(this);
}

_extern void _sub_5B5D09(UI::LobbyScreen *const, bool);
void UI::LobbyScreen::OnPostActivate(bool) // 0x5B5D09
{
    mangled_assert("?OnPostActivate@LobbyScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5B5D09(this, arg);
}

_extern void _sub_5B4F94(UI::LobbyScreen *const, bool);
void UI::LobbyScreen::OnActivate(bool) // 0x5B4F94
{
    mangled_assert("?OnActivate@LobbyScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5B4F94(this, arg);
}

_extern void _sub_5B4C6D(UI::LobbyScreen *const);
void UI::LobbyScreen::DoActivatedAndJoined() // 0x5B4C6D
{
    mangled_assert("?DoActivatedAndJoined@LobbyScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_5B4C6D(this);
}

_extern void _sub_5B6347(UI::LobbyScreen *const, unsigned __int32);
void UI::LobbyScreen::Update(unsigned __int32) // 0x5B6347
{
    mangled_assert("?Update@LobbyScreen@UI@@UAEXI@Z");
    todo("implement");
    _sub_5B6347(this, arg);
}

_extern UI::LobbyScreenView *_sub_5B4F87(UI::LobbyScreen *const);
UI::LobbyScreenView *UI::LobbyScreen::GetView() // 0x5B4F87
{
    mangled_assert("?GetView@LobbyScreen@UI@@QAEPAVLobbyScreenView@2@XZ");
    todo("implement");
    UI::LobbyScreenView * __result = _sub_5B4F87(this);
    return __result;
}

_extern void _sub_5B6256(UI::LobbyScreen *const, char const *);
void UI::LobbyScreen::SetPreviousScreen(char const *) // 0x5B6256
{
    mangled_assert("?SetPreviousScreen@LobbyScreen@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_5B6256(this, arg);
}

_extern void _sub_5B628E(UI::LobbyScreen *const, wchar_t const *);
void UI::LobbyScreen::SetRoomName(wchar_t const *) // 0x5B628E
{
    mangled_assert("?SetRoomName@LobbyScreen@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5B628E(this, arg);
}

_extern void _sub_5B627B(UI::LobbyScreen *const, unsigned __int32);
void UI::LobbyScreen::SetRoomID(unsigned __int32) // 0x5B627B
{
    mangled_assert("?SetRoomID@LobbyScreen@UI@@QAEXI@Z");
    todo("implement");
    _sub_5B627B(this, arg);
}

_extern void _sub_5B61C8(UI::LobbyScreen *const, bool);
void UI::LobbyScreen::SetIsLanGame(bool) // 0x5B61C8
{
    mangled_assert("?SetIsLanGame@LobbyScreen@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5B61C8(this, arg);
}

_extern void _sub_5B6243(UI::LobbyScreen *const, bool);
void UI::LobbyScreen::SetJoinRoom(bool) // 0x5B6243
{
    mangled_assert("?SetJoinRoom@LobbyScreen@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5B6243(this, arg);
}

_extern void _sub_5B4CA0(UI::LobbyScreen *const);
void UI::LobbyScreen::DoConnect() // 0x5B4CA0
{
    mangled_assert("?DoConnect@LobbyScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_5B4CA0(this);
}

_extern void _sub_5B4DF7(UI::LobbyScreen *const);
void UI::LobbyScreen::DoConnectCancel() // 0x5B4DF7
{
    mangled_assert("?DoConnectCancel@LobbyScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_5B4DF7(this);
}

_extern void _sub_5B5078(UI::InterfaceElement *);
void UI::LobbyScreen::OnBackClicked(UI::InterfaceElement *sender) // 0x5B5078
{
    mangled_assert("?OnBackClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B5078(sender);
}

_extern void _sub_5B5411(UI::InterfaceElement *);
void UI::LobbyScreen::OnJoinGameClicked(UI::InterfaceElement *sender) // 0x5B5411
{
    mangled_assert("?OnJoinGameClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B5411(sender);
}

_extern void _sub_5B5C11(UI::InterfaceElement *);
void UI::LobbyScreen::OnPasswordClicked_Join(UI::InterfaceElement *sender) // 0x5B5C11
{
    mangled_assert("?OnPasswordClicked_Join@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B5C11(sender);
}

_extern void _sub_5B59C5(UI::InterfaceElement *);
void UI::LobbyScreen::OnPasswordClicked_Host(UI::InterfaceElement *sender) // 0x5B59C5
{
    mangled_assert("?OnPasswordClicked_Host@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B59C5(sender);
}

_extern void _sub_5B4E08(UI::LobbyScreen *const, unsigned long long, wchar_t const *);
void UI::LobbyScreen::DoJoinGame(unsigned long long, wchar_t const *) // 0x5B4E08
{
    mangled_assert("?DoJoinGame@LobbyScreen@UI@@AAEX_KPB_W@Z");
    todo("implement");
    _sub_5B4E08(this, arg, arg);
}

_extern void _sub_5B4F29(UI::LobbyScreen *const);
void UI::LobbyScreen::DoRefreshGames() // 0x5B4F29
{
    mangled_assert("?DoRefreshGames@LobbyScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_5B4F29(this);
}

_extern void _sub_5B536C(UI::InterfaceElement *);
void UI::LobbyScreen::OnHostGameClicked(UI::InterfaceElement *sender) // 0x5B536C
{
    mangled_assert("?OnHostGameClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B536C(sender);
}

_extern void _sub_5B6198(UI::InterfaceElement *);
void UI::LobbyScreen::OnSendClicked(UI::InterfaceElement *sender) // 0x5B6198
{
    mangled_assert("?OnSendClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B6198(sender);
}

_extern void _sub_5B51E7(UI::InterfaceElement *);
void UI::LobbyScreen::OnFiltersClicked(UI::InterfaceElement *sender) // 0x5B51E7
{
    mangled_assert("?OnFiltersClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B51E7(sender);
}

_extern void _sub_5B6162(UI::InterfaceElement *);
void UI::LobbyScreen::OnRefreshClicked(UI::InterfaceElement *sender) // 0x5B6162
{
    mangled_assert("?OnRefreshClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B6162(sender);
}

_extern void _sub_5B525D(UI::InterfaceElement *);
void UI::LobbyScreen::OnGameInfoClicked(UI::InterfaceElement *sender) // 0x5B525D
{
    mangled_assert("?OnGameInfoClicked@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B525D(sender);
}

_extern void _sub_5B5157(UI::InterfaceElement *);
void UI::LobbyScreen::OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender) // 0x5B5157
{
    mangled_assert("?OnErrorClicked_BackToMainMenu@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B5157(sender);
}

_extern void _sub_5B518E(UI::InterfaceElement *);
void UI::LobbyScreen::OnFilterClicked_Accept(UI::InterfaceElement *sender) // 0x5B518E
{
    mangled_assert("?OnFilterClicked_Accept@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B518E(sender);
}

_extern void _sub_5B618C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::LobbyScreen::OnRowDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5B618C
{
    mangled_assert("?OnRowDoubleClicked@LobbyScreen@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5B618C(sender, x, y, b);
}

_extern void _sub_5B5796(LobbyEvent * const, wchar_t const *, bool);
void UI::LobbyScreen::OnLobbyPlayerConnect(wchar_t const *, bool) // 0x5B5796
{
    mangled_assert("?OnLobbyPlayerConnect@LobbyScreen@UI@@EAEXPB_W_N@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B5796(this, arg, arg);
}

_extern void _sub_5B57C2(LobbyEvent * const, wchar_t const *);
void UI::LobbyScreen::OnLobbyPlayerDisconnect(wchar_t const *) // 0x5B57C2
{
    mangled_assert("?OnLobbyPlayerDisconnect@LobbyScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B57C2(this, arg);
}

_extern void _sub_5B578C(LobbyEvent * const, wchar_t const *);
void UI::LobbyScreen::OnLobbyPlayerChanged(wchar_t const *) // 0x5B578C
{
    mangled_assert("?OnLobbyPlayerChanged@LobbyScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B578C(this, arg);
}

_extern void _sub_5B56AC(LobbyEvent * const, LobbyChatType, wchar_t const *, wchar_t const *);
void UI::LobbyScreen::OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) // 0x5B56AC
{
    mangled_assert("?OnLobbyChat@LobbyScreen@UI@@EAEXW4LobbyChatType@@PB_W1@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B56AC(this, arg, arg, arg);
}

_extern void _sub_5B56CA(LobbyEvent * const, wchar_t const *);
void UI::LobbyScreen::OnLobbyDisconnected(wchar_t const *) // 0x5B56CA
{
    mangled_assert("?OnLobbyDisconnected@LobbyScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B56CA(this, arg);
}

_extern void _sub_5B5863(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
void UI::LobbyScreen::OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) // 0x5B5863
{
    mangled_assert("?OnLobbySessionAdded@LobbyScreen@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B5863(this, arg, arg);
}

_extern void _sub_5B5892(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
void UI::LobbyScreen::OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) // 0x5B5892
{
    mangled_assert("?OnLobbySessionAddedDirect@LobbyScreen@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B5892(this, arg, arg);
}

_extern void _sub_5B58C1(LobbyEvent * const, unsigned long long);
void UI::LobbyScreen::OnLobbySessionDeleted(unsigned long long) // 0x5B58C1
{
    mangled_assert("?OnLobbySessionDeleted@LobbyScreen@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B58C1(this, arg);
}

_extern void _sub_5B58EC(LobbyEvent * const, unsigned long long);
void UI::LobbyScreen::OnLobbySessionUpdated(unsigned long long) // 0x5B58EC
{
    mangled_assert("?OnLobbySessionUpdated@LobbyScreen@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B58EC(this, arg);
}

_extern void _sub_5B57ED(LobbyEvent * const, LobbyRoomType, bool);
void UI::LobbyScreen::OnLobbyRoomJoinedResult(LobbyRoomType, bool) // 0x5B57ED
{
    mangled_assert("?OnLobbyRoomJoinedResult@LobbyScreen@UI@@EAEXW4LobbyRoomType@@_N@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B57ED(this, arg, arg);
}

_extern void _sub_5B50E3(UI::InterfaceElement *);
void UI::LobbyScreen::OnErrorClicked_Back(UI::InterfaceElement *sender) // 0x5B50E3
{
    mangled_assert("?OnErrorClicked_Back@LobbyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B50E3(sender);
}

_extern void _sub_5B62A5(bool);
void UI::LobbyScreen::Show(bool isLanGame) // 0x5B62A5
{
    mangled_assert("?Show@LobbyScreen@UI@@SGX_N@Z");
    todo("implement");
    _sub_5B62A5(isLanGame);
}

_extern void _sub_5B4C10(UI::LobbyScreen *const, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &);
void UI::LobbyScreen::AddChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &) // 0x5B4C10
{
    mangled_assert("?AddChatMessages@LobbyScreen@UI@@QAEXABV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_5B4C10(this, arg);
}

/* ---------- private code */
#endif
