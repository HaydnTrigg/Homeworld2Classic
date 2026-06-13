#if 0
/* ---------- headers */

#include "decomp.h"
#include <steam_api.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <set>
#include <isteamclient.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <steamtypes.h>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <stdexcept>
#include <xstring>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <xmemory0>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <pch.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <isteamuser.h>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <crtdefs.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <boost\function\detail\prologue.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <isteamhtmlsurface.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <isteammusic.h>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <new>
#include <isteamremotestorage.h>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <exception>
#include <xstddef>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <type_traits>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <isteamapplist.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <isteamhttp.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <steamhttpenums.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <xutility>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <utility>
#include <iosfwd>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <vector>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <steamclientpublic.h>
#include <boost\function\function_template.hpp>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <isteamutils.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <poppack.h>
#include <fileio\md5.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <xtree>
#include <boost\ref.hpp>
#include <boost\assert.hpp>
#include <gamestructimpl.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <Badge.h>
#include <profileapi.h>
#include <isteammatchmaking.h>
#include <boost\type_traits\is_pointer.hpp>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <synchapi.h>
#include <mmsystem.h>
#include <GameRulesLibrary.h>
#include <mmsyscom.h>
#include <process.h>
#include <isteamapps.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <combaseapi.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <NetworkDP8\source\blowfish.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <cassert>
#include <stdarg.h>
#include <assert.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\static_assert.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\pending\ct_if.hpp>
#include <isteamscreenshots.h>
#include <dpapi.h>
#include <propidl.h>
#include <NetworkDP8\source\sessionenum.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <isteamfriends.h>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <jobapi.h>
#include <apiset.h>
#include <NetworkDP8\source\sessiondesc.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <atliface.h>
#include <boost\type_traits\is_float.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <savegamedef.h>
#include <isteamcontroller.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <steamcontrollerpublic.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <isteammusicremote.h>
#include <NetworkDP8\source\authentication.h>
#include <Network\StagingArea.h>
#include <timeapi.h>
#include <gameSettings.h>
#include <wchar.h>
#include <NetworkDP8\source\session.h>
#include <boost\utility.hpp>
#include <config.h>
#include <NetworkDP8\source\directplay.h>
#include <boost\utility\addressof.hpp>
#include <syncChecking.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <boost\detail\workaround.hpp>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <commandtype.h>
#include <boost\preprocessor\iterate.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <SteamFuncs.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>

/* ---------- constants */

enum `anonymous-namespace'::EMessageType
{
    MSG_Ping = 0,
    MSG_PlayerSettings,
    MSG_HostSettings,
    MSG_StartGame,
    MSG_Chat,
};

/* ---------- definitions */

typedef `anonymous-namespace'::MessageBase ?A0x5f49ec9f::MessageBase;
typedef `anonymous-namespace'::EMessageType ?A0x5f49ec9f::EMessageType;
typedef `anonymous-namespace'::MsgPing ?A0x5f49ec9f::MsgPing;
typedef `anonymous-namespace'::MsgPlayerSettings ?A0x5f49ec9f::MsgPlayerSettings;
typedef `anonymous-namespace'::MsgHostSettings ?A0x5f49ec9f::MsgHostSettings;
typedef `anonymous-namespace'::MsgStartGame ?A0x5f49ec9f::MsgStartGame;

struct `anonymous-namespace'::MessageBase
{
    unsigned char m_magic; // 0x0
    unsigned char m_type; // 0x1
    MessageBase(unsigned char);
};
static_assert(sizeof(`anonymous-namespace'::MessageBase) == 2, "Invalid `anonymous-namespace'::MessageBase size");

struct `anonymous-namespace'::MsgPing :
    public `anonymous-namespace'::MessageBase
{
    MsgPing();
};
static_assert(sizeof(`anonymous-namespace'::MsgPing) == 2, "Invalid `anonymous-namespace'::MsgPing size");

struct `anonymous-namespace'::MsgPlayerSettings :
    public `anonymous-namespace'::MessageBase
{
    StagingArea::PlayerSettings m_settings; // 0x2
    MsgPlayerSettings(StagingArea::PlayerSettings const &);
};
static_assert(sizeof(`anonymous-namespace'::MsgPlayerSettings) == 47, "Invalid `anonymous-namespace'::MsgPlayerSettings size");

struct `anonymous-namespace'::MsgHostSettings :
    public `anonymous-namespace'::MessageBase
{
    StagingArea::HostSettings m_settings; // 0x2
    MsgHostSettings(StagingArea::HostSettings const &);
};
static_assert(sizeof(`anonymous-namespace'::MsgHostSettings) == 81, "Invalid `anonymous-namespace'::MsgHostSettings size");

struct `anonymous-namespace'::MsgStartGame :
    public `anonymous-namespace'::MessageBase
{
    StagingArea::HostSettings m_hostSettings; // 0x2
    StagingArea::PlayerSettings m_playersSettings[6]; // 0x51
    MsgStartGame(StagingArea::HostSettings const &, StagingArea::PlayerSettings const *);
};
static_assert(sizeof(`anonymous-namespace'::MsgStartGame) == 351, "Invalid `anonymous-namespace'::MsgStartGame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const PING_TIME_INTERVAL; // 0x7A6330
    extern std::_Nil _Nil_obj; // 0x846D94
}

/* ---------- public code */

_extern _sub_5BFF92(StagingArea::PlayerSettings *const, __int32);
StagingArea::PlayerSettings::PlayerSettings(__int32) // 0x5BFF92
{
    mangled_assert("??0PlayerSettings@StagingArea@@QAE@H@Z");
    todo("implement");
    _sub_5BFF92(this, arg);
}

_extern _sub_5BFEDF(StagingArea::HostSettings *const);
StagingArea::HostSettings::HostSettings() // 0x5BFEDF
{
    mangled_assert("??0HostSettings@StagingArea@@QAE@XZ");
    todo("implement");
    _sub_5BFEDF(this);
}

_extern _sub_5BFFBF(StagingArea *const, std::auto_ptr<Net::Session>, StagingArea::ICallbacks *, unsigned long long);
StagingArea::StagingArea(std::auto_ptr<Net::Session>, StagingArea::ICallbacks *, unsigned long long) // 0x5BFFBF
{
    mangled_assert("??0StagingArea@@QAE@V?$auto_ptr@VSession@Net@@@std@@PAUICallbacks@0@_K@Z");
    todo("implement");
    _sub_5BFFBF(this, arg, arg, arg);
}

_extern void _sub_5C00A7(StagingArea *const);
StagingArea::~StagingArea() // 0x5C00A7
{
    mangled_assert("??1StagingArea@@QAE@XZ");
    todo("implement");
    _sub_5C00A7(this);
}

_extern __int32 _sub_5C0102(StagingArea const *const, __int32);
__int32 StagingArea::GetPing(__int32) const // 0x5C0102
{
    mangled_assert("?GetPing@StagingArea@@QBEHH@Z");
    todo("implement");
    __int32 __result = _sub_5C0102(this, arg);
    return __result;
}

_extern void _sub_5C00D4(StagingArea *const, unsigned __int32);
void StagingArea::DropPlayer(unsigned __int32) // 0x5C00D4
{
    mangled_assert("?DropPlayer@StagingArea@@QAEXI@Z");
    todo("implement");
    _sub_5C00D4(this, arg);
}

_extern __int32 _sub_5C00DB(StagingArea const *const, unsigned __int32);
__int32 StagingArea::FindSlotID(unsigned __int32) const // 0x5C00DB
{
    mangled_assert("?FindSlotID@StagingArea@@ABEHI@Z");
    todo("implement");
    __int32 __result = _sub_5C00DB(this, arg);
    return __result;
}

_extern __int32 _sub_5C00FB(StagingArea const *const);
__int32 StagingArea::GetNumberPlayer() const // 0x5C00FB
{
    mangled_assert("?GetNumberPlayer@StagingArea@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5C00FB(this);
    return __result;
}

_extern void _sub_5C0147(StagingArea *const, unsigned __int32);
void StagingArea::OnCreatePlayer(unsigned __int32) // 0x5C0147
{
    mangled_assert("?OnCreatePlayer@StagingArea@@AAEXI@Z");
    todo("implement");
    _sub_5C0147(this, arg);
}

_extern void _sub_5C01CB(StagingArea *const, unsigned __int32);
void StagingArea::OnDestroyPlayer(unsigned __int32) // 0x5C01CB
{
    mangled_assert("?OnDestroyPlayer@StagingArea@@AAEXI@Z");
    todo("implement");
    _sub_5C01CB(this, arg);
}

_extern void _sub_5C025B(StagingArea *const, Net::Message const &);
void StagingArea::OnMessage(Net::Message const &) // 0x5C025B
{
    mangled_assert("?OnMessage@StagingArea@@AAEXABVMessage@Net@@@Z");
    todo("implement");
    _sub_5C025B(this, arg);
}

_extern void _sub_5C0301(StagingArea *const, StagingArea::PlayerSettings const &);
void StagingArea::OnPlayerSettings(StagingArea::PlayerSettings const &) // 0x5C0301
{
    mangled_assert("?OnPlayerSettings@StagingArea@@AAEXABUPlayerSettings@1@@Z");
    todo("implement");
    _sub_5C0301(this, arg);
}

_extern void _sub_5C023E(StagingArea *const, StagingArea::HostSettings const &);
void StagingArea::OnHostSettings(StagingArea::HostSettings const &) // 0x5C023E
{
    mangled_assert("?OnHostSettings@StagingArea@@AAEXABUHostSettings@1@@Z");
    todo("implement");
    _sub_5C023E(this, arg);
}

_extern void _sub_5C0400(StagingArea *const, StagingArea::HostSettings const &, StagingArea::PlayerSettings const *);
void StagingArea::OnStartGame(StagingArea::HostSettings const &, StagingArea::PlayerSettings const *) // 0x5C0400
{
    mangled_assert("?OnStartGame@StagingArea@@AAEXABUHostSettings@1@QBUPlayerSettings@1@@Z");
    todo("implement");
    _sub_5C0400(this, arg, arg);
}

_extern void _sub_5C0236(StagingArea *const);
void StagingArea::OnHostMigration() // 0x5C0236
{
    mangled_assert("?OnHostMigration@StagingArea@@AAEXXZ");
    todo("implement");
    _sub_5C0236(this);
}

_extern void _sub_5C0778(StagingArea *const, StagingArea::PlayerSettings const &);
void StagingArea::UpdatePlayerSettings(StagingArea::PlayerSettings const &) // 0x5C0778
{
    mangled_assert("?UpdatePlayerSettings@StagingArea@@QAEXABUPlayerSettings@1@@Z");
    todo("implement");
    _sub_5C0778(this, arg);
}

_extern void _sub_5C071A(StagingArea *const, StagingArea::HostSettings const &);
void StagingArea::UpdateHostSettings(StagingArea::HostSettings const &) // 0x5C071A
{
    mangled_assert("?UpdateHostSettings@StagingArea@@QAEXABUHostSettings@1@@Z");
    todo("implement");
    _sub_5C071A(this, arg);
}

_extern void _sub_5C044A(StagingArea const *const, wchar_t const *, unsigned __int32);
void StagingArea::SendChatMessage(wchar_t const *, unsigned __int32) const // 0x5C044A
{
    mangled_assert("?SendChatMessage@StagingArea@@QBEXPB_WI@Z");
    todo("implement");
    _sub_5C044A(this, arg, arg);
}

_extern void _sub_5C056A(StagingArea const *const, __int32, unsigned __int32);
void StagingArea::SendPlayerSettings(__int32, unsigned __int32) const // 0x5C056A
{
    mangled_assert("?SendPlayerSettings@StagingArea@@ABEXHI@Z");
    todo("implement");
    _sub_5C056A(this, arg, arg);
}

_extern void _sub_5C051C(StagingArea const *const, unsigned __int32);
void StagingArea::SendHostSettings(unsigned __int32) const // 0x5C051C
{
    mangled_assert("?SendHostSettings@StagingArea@@ABEXI@Z");
    todo("implement");
    _sub_5C051C(this, arg);
}

_extern void _sub_5C05BE(StagingArea *const);
void StagingArea::StartGame() // 0x5C05BE
{
    mangled_assert("?StartGame@StagingArea@@QAEXXZ");
    todo("implement");
    _sub_5C05BE(this);
}

_extern void _sub_5C0636(StagingArea *const, float);
void StagingArea::Update(float) // 0x5C0636
{
    mangled_assert("?Update@StagingArea@@QAEXM@Z");
    todo("implement");
    _sub_5C0636(this, arg);
}

/* ---------- private code */
#endif
