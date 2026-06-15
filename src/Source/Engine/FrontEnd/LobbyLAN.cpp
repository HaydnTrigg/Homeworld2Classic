#if 0
/* ---------- headers */

#include "decomp.h"
#include <objbase.h>
#include <atlbase.inl>
#include <FrontEnd\lobbyroomdesc.h>
#include <isteamhttp.h>
#include <Menus\WaitMessage.h>
#include <combaseapi.h>
#include <assist\stlexsmallvector.h>
#include <steamhttpenums.h>
#include <stdexcept>
#include <Render\gl\r_defines.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <xstring>
#include <Render\gl\glext.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <stdarg.h>
#include <memory\memorylib.h>
#include <windef.h>
#include <crtdefs.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <specstrings_strict.h>
#include <steamclientpublic.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <KeyBindings.h>
#include <config.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <Mathlib\matrix3.h>
#include <oaidl.h>
#include <UserInterface\uitypes.h>
#include <commdlg.h>
#include <platform\inputinterface.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <version.h>
#include <platform\platformexports.h>
#include <isteamutils.h>
#include <ktmtypes.h>
#include <platform\keydefines.h>
#include <new>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <xstddef>
#include <boost\type_traits\is_stateless.hpp>
#include <FrontEnd\lobbynetwork.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <type_traits>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_pod.hpp>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <atlcore.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <hash_map>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <xhash>
#include <xutility>
#include <processenv.h>
#include <rpcnsip.h>
#include <Menus\GameSetup.h>
#include <utility>
#include <guiddef.h>
#include <stralign.h>
#include <iosfwd>
#include <Race.h>
#include <gamestructimpl.h>
#include <isteammatchmaking.h>
#include <vector>
#include <Badge.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <xmemory>
#include <jobapi.h>
#include <fileio\fileioexports.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <Render\objects\textureregistry.h>
#include <winsvc.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_float.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <compiler\compilerconfig.h>
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <list>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <assist\fixedstring.h>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atlchecked.h>
#include <Mathlib\vector3.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <Mathlib\vector4.h>
#include <atltrace.h>
#include <oleacc.h>
#include <NetworkDP8\source\blowfish.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <boost\static_assert.hpp>
#include <xtree>
#include <nb30.h>
#include <wincrypt.h>
#include <boost\scoped_ptr.hpp>
#include <NetworkDP8\source\session.h>
#include <boost\assert.hpp>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <boost\thread\thread.hpp>
#include <isteamscreenshots.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <fibersapi.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <isteamfriends.h>
#include <boost\preprocessor\config\config.hpp>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <LevelDesc.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <Hash.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <fileio\md5.h>
#include <boost\cstdint.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\config.hpp>
#include <boost\preprocessor\array\size.hpp>
#include <NetworkDP8\source\sessionenum.h>
#include <winuser.h>
#include <boost\preprocessor\cat.hpp>
#include <cassert>
#include <NetworkDP8\source\sessioninfo.h>
#include <cguid.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <assert.h>
#include <App\PlayerProfileGameOptions.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <Network\StagingArea.h>
#include <consoleapi.h>
#include <boost\function\detail\prologue.hpp>
#include <gameSettings.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\function\function_base.hpp>
#include <syncChecking.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
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
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <isteamcontroller.h>
#include <platform\osdef.h>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <steamcontrollerpublic.h>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <assist\typemagic.h>
#include <pshpack4.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <joystickapi.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <FrontEnd\lobbyevent.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <UserInterface\Graphic.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <UserInterface\UIDialog.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <atlbase.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <UserInterface\NewFrame.h>
#include <Render\objects\core.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\preprocessor\enum_params.hpp>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <isteammusicremote.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
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
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <UserInterface\StyleSheet.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <debug\db.h>
#include <UserInterface\pch.h>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <Render\gl\lotypes.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <deque>
#include <oleidl.h>
#include <mcx.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <NetworkDP8\source\authentication.h>
#include <stack>
#include <SteamFuncs.h>
#include <boost\type_traits\is_class.hpp>
#include <Mathlib\mathutil.h>
#include <steam_api.h>
#include <boost\type_traits\is_union.hpp>
#include <util\colour.h>
#include <isteamclient.h>
#include <boost\shared_ptr.hpp>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>
#include <App\PlayerProfileMan.h>
#include <steamtypes.h>
#include <Render\gl\r_types.h>
#include <Render\objects\textureproxy.h>
#include <boost\throw_exception.hpp>
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <App\PlayerProfile.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <luaconfig\luaconfig.h>
#include <savegamedef.h>
#include <lua.h>
#include <boost\detail\shared_count.hpp>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <isteamuser.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <winapifamily.h>
#include <task.h>
#include <windows.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <isteamhtmlsurface.h>
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
#include <FrontEnd\LobbyPlayerDesc.h>
#include <poppack.h>
#include <isteammusic.h>
#include <util\buffermessage.h>
#include <boost\ref.hpp>
#include <FrontEnd\LobbyLAN.h>
#include <region.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <FrontEnd\lobbydefines.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\type_traits\is_pointer.hpp>
#include <prim.h>
#include <isteamremotestorage.h>
#include <profileapi.h>
#include <boost\utility\addressof.hpp>
#include <swprintf.inl>
#include <iterator>
#include <boost\detail\workaround.hpp>
#include <synchapi.h>
#include <queue>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <isteamapplist.h>
#include <ole2.h>
#include <inaddr.h>
#include <LevelManager.h>
#include <Menus\Multiplayer\MultiplayerConnect.h>

/* ---------- constants */

/* ---------- definitions */

struct EnumInfo
{
    wchar_t m_levelName[64]; // 0x0
    wchar_t m_gameMode[32]; // 0x80
    unsigned char m_versionMajor; // 0xC0
    unsigned char m_versionMinor; // 0xC1
    unsigned char m_nbPlayers; // 0xC2
    unsigned char m_maxPlayers; // 0xC3
};
static_assert(sizeof(EnumInfo) == 196, "Invalid EnumInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

LobbyLAN::LobbyLAN() // 0x471ACC
{
    mangled_assert("??0LobbyLAN@@QAE@XZ");
    todo("implement");
}

_inline Net::SessionInfo::SessionInfo(Net::SessionInfo const &) // 0x471B39
{
    mangled_assert("??0SessionInfo@Net@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

LobbyLAN::~LobbyLAN() // 0x471BE1
{
    mangled_assert("??1LobbyLAN@@UAE@XZ");
    todo("implement");
}

_inline Net::SessionInfo::~SessionInfo() // 0x471C1A
{
    mangled_assert("??1SessionInfo@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::Address &Net::Address::operator=(Net::Address const &) // 0x471CC4
{
    mangled_assert("??4Address@Net@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Net::SessionInfo &Net::SessionInfo::operator=(Net::SessionInfo const &) // 0x471CD6
{
    mangled_assert("??4SessionInfo@Net@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void LobbyLAN::Think() // 0x4722F0
{
    mangled_assert("?Think@LobbyLAN@@UAEXXZ");
    todo("implement");
}

bool LobbyLAN::GetMessage(BufferMessage &) // 0x471E59
{
    mangled_assert("?GetMessage@LobbyLAN@@UAE_NAAVBufferMessage@@@Z");
    todo("implement");
}

_inline Net::Address::Address(Net::Address const &) // 0x471AB1
{
    mangled_assert("??0Address@Net@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

bool LobbyLAN::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x471FEB
{
    mangled_assert("?SessionGetDescription@LobbyLAN@@UBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
}

bool LobbyLAN::SessionUpdate(unsigned long long) const // 0x4722DA
{
    mangled_assert("?SessionUpdate@LobbyLAN@@UBE_N_K@Z");
    todo("implement");
}

void LobbyLAN::SessionList() // 0x47228D
{
    mangled_assert("?SessionList@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::SessionJoin(wchar_t const *) // 0x472274
{
    mangled_assert("?SessionJoin@LobbyLAN@@UAEXPB_W@Z");
    todo("implement");
}

void LobbyLAN::SessionHost(LobbySessionDesc const &, Net::Session *) // 0x47224C
{
    mangled_assert("?SessionHost@LobbyLAN@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

void LobbyLAN::SessionCancel() // 0x471F30
{
    mangled_assert("?SessionCancel@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::SessionStarted() // 0x4722D9
{
    mangled_assert("?SessionStarted@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::SessionEnableJoin(bool) // 0x471FE8
{
    mangled_assert("?SessionEnableJoin@LobbyLAN@@UAEX_N@Z");
    todo("implement");
}

void LobbyLAN::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x471F31
{
    mangled_assert("?SessionChangeSettings@LobbyLAN@@UAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
}

bool LobbyLAN::SessionCreateVisible() const // 0x471FE5
{
    mangled_assert("?SessionCreateVisible@LobbyLAN@@UBE_NXZ");
    todo("implement");
}

void LobbyLAN::RoomList() // 0x471F2F
{
    mangled_assert("?RoomList@LobbyLAN@@UAEXXZ");
    todo("implement");
}

bool LobbyLAN::RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const // 0x471F1C
{
    mangled_assert("?RoomGetDescription@LobbyLAN@@UBE_NIAAVLobbyRoomDesc@@@Z");
    todo("implement");
}

bool LobbyLAN::RoomJoinTitle() // 0x471F26
{
    mangled_assert("?RoomJoinTitle@LobbyLAN@@UAE_NXZ");
    todo("implement");
}

bool LobbyLAN::RoomJoin(unsigned __int32) // 0x471F21
{
    mangled_assert("?RoomJoin@LobbyLAN@@UAE_NI@Z");
    todo("implement");
}

bool LobbyLAN::RoomLeave() // 0x471F29
{
    mangled_assert("?RoomLeave@LobbyLAN@@UAE_NXZ");
    todo("implement");
}

bool LobbyLAN::RoomLeaveTitle() // 0x471F2C
{
    mangled_assert("?RoomLeaveTitle@LobbyLAN@@UAE_NXZ");
    todo("implement");
}

void LobbyLAN::PlayerUpdateList() // 0x471F1B
{
    mangled_assert("?PlayerUpdateList@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x471EFF
{
    mangled_assert("?PlayerGetList@LobbyLAN@@UAEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool LobbyLAN::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) // 0x471EFA
{
    mangled_assert("?PlayerGetDescription@LobbyLAN@@UAE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
}

void LobbyLAN::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x471F02
{
    mangled_assert("?PlayerGetName@LobbyLAN@@UAEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

void LobbyLAN::PlayerChangeSettings() // 0x471EF9
{
    mangled_assert("?PlayerChangeSettings@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::PlayerSetViewingRoom(LobbyRoomType) // 0x471F18
{
    mangled_assert("?PlayerSetViewingRoom@LobbyLAN@@UAEXW4LobbyRoomType@@@Z");
    todo("implement");
}

void LobbyLAN::PlayerSetPlaying(bool) // 0x471F15
{
    mangled_assert("?PlayerSetPlaying@LobbyLAN@@UAEX_N@Z");
    todo("implement");
}

LobbyChatStatus LobbyLAN::ChatGetStatus() // 0x471E4D
{
    mangled_assert("?ChatGetStatus@LobbyLAN@@UAE?AW4LobbyChatStatus@@XZ");
    todo("implement");
}

void LobbyLAN::ChatConnect(char const *) // 0x471E49
{
    mangled_assert("?ChatConnect@LobbyLAN@@UAEXPBD@Z");
    todo("implement");
}

void LobbyLAN::ChatDisconnect() // 0x471E4C
{
    mangled_assert("?ChatDisconnect@LobbyLAN@@UAEXXZ");
    todo("implement");
}

void LobbyLAN::ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) // 0x471E51
{
    mangled_assert("?ChatSend@LobbyLAN@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
}

bool LobbyLAN::CDAuthenticate(char const *) // 0x471E44
{
    mangled_assert("?CDAuthenticate@LobbyLAN@@UAE_NPBD@Z");
    todo("implement");
}

void LobbyLAN::UpdateSessionList() // 0x47231D
{
    mangled_assert("?UpdateSessionList@LobbyLAN@@AAEXXZ");
    todo("implement");
}

void LobbyLAN::SessionListStop() // 0x4722C3
{
    mangled_assert("?SessionListStop@LobbyLAN@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
