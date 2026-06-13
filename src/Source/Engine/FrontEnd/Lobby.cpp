#if 0
/* ---------- headers */

#include "decomp.h"
#include <profileapi.h>
#include <assist\stlexsmallvector.h>
#include <synchapi.h>
#include <stdexcept>
#include <xstring>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <util\buffermessage.h>
#include <pch.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <memory\memorylib.h>
#include <ole2.h>
#include <inaddr.h>
#include <crtdefs.h>
#include <objbase.h>
#include <atlbase.inl>
#include <combaseapi.h>
#include <NetworkDP8\source\blowfish.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <Mathlib\matrix3.h>
#include <Menus\Multiplayer\InGameDisconnect.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <UserInterface\StyleSheet.h>
#include <boost\checked_delete.hpp>
#include <specstrings_strict.h>
#include <UserInterface\pch.h>
#include <FrontEnd\lobbynetwork.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <FrontEnd\LobbySessionDesc.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <new>
#include <xstddef>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <profile\profile.h>
#include <FrontEnd\lobbyroomdesc.h>
#include <oaidl.h>
#include <type_traits>
#include <iostream>
#include <commdlg.h>
#include <namespaceapi.h>
#include <boost\pending\ct_if.hpp>
#include <ktmtypes.h>
#include <Render\objects\textureregistry.h>
#include <NetworkDP8\source\sessionenum.h>
#include <hash_map>
#include <dpapi.h>
#include <propidl.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <xhash>
#include <unknwn.h>
#include <boost\type_traits\is_stateless.hpp>
#include <xutility>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <utility>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <iosfwd>
#include <boost\type_traits\is_pod.hpp>
#include <vector>
#include <minwinbase.h>
#include <boost\type_traits\is_scalar.hpp>
#include <fileio\bytestream.h>
#include <xmemory>
#include <atlcore.h>
#include <fileio\fileioexports.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\intrinsics.hpp>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <guiddef.h>
#include <stralign.h>
#include <compiler\compilerconfig.h>
#include <task.h>
#include <jobapi.h>
#include <stack>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <apiset.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <list>
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
#include <atliface.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <Mathlib\vector3.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <Mathlib\vector4.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <map>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <xtree>
#include <libloaderapi.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <sysinfoapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <boost\scoped_ptr.hpp>
#include <atlchecked.h>
#include <boost\assert.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <NetworkDP8\source\authentication.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <NetworkDP8\source\session.h>
#include <timeapi.h>
#include <NetworkDP8\source\directplay.h>
#include <boost\thread\thread.hpp>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\cstdint.hpp>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\preprocessor\iterate.hpp>
#include <Menus\WaitMessage.h>
#include <fibersapi.h>
#include <boost\config.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <UserInterface\NewUIScreen.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <cassert>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <boost\preprocessor\config\config.hpp>
#include <assert.h>
#include <prim.h>
#include <platform\osdef.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\array\elem.hpp>
#include <Mathlib\mathutil.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\array\data.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\size.hpp>
#include <winuser.h>
#include <boost\preprocessor\cat.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <cguid.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <UserInterface\Graphic.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <Render\objects\texture.h>
#include <consoleapi.h>
#include <boost\function\detail\prologue.hpp>
#include <Render\objects\objects.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\function\function_base.hpp>
#include <Render\objects\core.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <assist\typemagic.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <Mathlib\matvec.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <fileio\ramstream.h>
#include <prsht.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <wingdi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <Mathlib\mathlibdll.h>
#include <rpc.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <Mathlib\fastmath.h>
#include <Render\gl\lotypes.h>
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
#include <Menus\Multiplayer\MultiplayerConnect.h>
#include <winefs.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <debug\db.h>
#include <Render\gl\r_types.h>
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
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <localizer\localizer.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <KeyBindings.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <config.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <securitybaseapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <FrontEnd\lobbyevent.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <boost\throw_exception.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\type_traits\is_class.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\type_traits\is_union.hpp>
#include <debugapi.h>
#include <boost\type_traits\remove_cv.hpp>
#include <fileapi.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <platform\keydefines.h>
#include <cderr.h>
#include <boost\type_traits\is_enum.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\add_reference.hpp>
#include <winsock2.h>
#include <boost\type_traits\is_reference.hpp>
#include <winapifamily.h>
#include <windows.h>
#include <FrontEnd\Lobby.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <luaconfig\luaconfig.h>
#include <FrontEnd\lobbydefines.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <lua.h>
#include <string>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <boost\utility\addressof.hpp>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <poppack.h>
#include <boost\detail\workaround.hpp>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <boost\ref.hpp>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_pointer.hpp>

/* ---------- constants */

/* ---------- definitions */

class LobbyTask :
    public Task
{
public:
    LobbyTask(LobbyTask const &); /* compiler_generated() */
    _inline LobbyTask();
    _inline void SetLobby(Lobby *);
    virtual _inline __int32 taskFunction(float) override;
private:
    Lobby *m_lobby; // 0x30
public:
    virtual _inline ~LobbyTask() override; /* compiler_generated() */
    LobbyTask &operator=(LobbyTask const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyTask) == 52, "Invalid LobbyTask size");

typedef std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > IgnoreCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float k_TaskPeriod; // 0x834964
}

/* ---------- public code */

_extern _sub_46D17B(LobbyTask *const);
_inline LobbyTask::LobbyTask() // 0x46D17B
{
    mangled_assert("??0LobbyTask@@QAE@XZ");
    todo("implement");
    _sub_46D17B(this);
}

_extern _sub_46D191(LobbySessionDesc::Param *const, LobbySessionDesc::Param const &);
_inline LobbySessionDesc::Param::Param(LobbySessionDesc::Param const &) // 0x46D191
{
    mangled_assert("??0Param@LobbySessionDesc@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_46D191(this, arg);
}

_extern void _sub_46D1CE(ATL::CComPtr<IDirectPlay8Address> *const);
_inline ATL::CComPtr<IDirectPlay8Address>::~CComPtr<IDirectPlay8Address>() // 0x46D1CE
{
    mangled_assert("??1?$CComPtr@UIDirectPlay8Address@@@ATL@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D1CE(this);
}

_extern void _sub_46D1F1(std::_List_buy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > *const);
_inline std::_List_buy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >::~_List_buy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >() // 0x46D1F1
{
    mangled_assert("??1?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D1F1(this);
}

_extern void _sub_46D21A(Net::Address *const);
_inline Net::Address::~Address() // 0x46D21A
{
    mangled_assert("??1Address@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D21A(this);
}

_extern void _sub_46DF9C(LobbyTask *const, Lobby *);
_inline void LobbyTask::SetLobby(Lobby *) // 0x46DF9C
{
    mangled_assert("?SetLobby@LobbyTask@@QAEXPAVLobby@@@Z");
    todo("implement");
    _sub_46DF9C(this, arg);
}

_extern void _sub_46D227(BufferMessage *const);
_inline BufferMessage::~BufferMessage() // 0x46D227
{
    mangled_assert("??1BufferMessage@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D227(this);
}

_extern void _sub_46D22F(Lobby::Data *const);
_inline Lobby::Data::~Data() // 0x46D22F
{
    mangled_assert("??1Data@Lobby@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D22F(this);
}

_extern __int32 _sub_46E434(LobbyTask *const, float);
_inline __int32 LobbyTask::taskFunction(float) // 0x46E434
{
    mangled_assert("?taskFunction@LobbyTask@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_46E434(this, arg);
    return __result;
}

_extern _sub_46D095(Lobby::Data *const);
_inline Lobby::Data::Data() // 0x46D095
{
    mangled_assert("??0Data@Lobby@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D095(this);
}

_extern _sub_46D0F2(InGameDisconnect *const);
_inline InGameDisconnect::InGameDisconnect() // 0x46D0F2
{
    mangled_assert("??0InGameDisconnect@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D0F2(this);
}

_extern _sub_46D0FB(Lobby *const);
Lobby::Lobby() // 0x46D0FB
{
    mangled_assert("??0Lobby@@QAE@XZ");
    todo("implement");
    _sub_46D0FB(this);
}

_extern _sub_46D172(LobbyEvent *const);
_inline LobbyEvent::LobbyEvent() // 0x46D172
{
    mangled_assert("??0LobbyEvent@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D172(this);
}

_extern void _sub_46D25F(Lobby *const);
Lobby::~Lobby() // 0x46D25F
{
    mangled_assert("??1Lobby@@QAE@XZ");
    todo("implement");
    _sub_46D25F(this);
}

_extern void _sub_46D297(LobbySessionDesc *const);
_inline LobbySessionDesc::~LobbySessionDesc() // 0x46D297
{
    mangled_assert("??1LobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D297(this);
}

_extern void _sub_46D29C(LobbyTask *const);
_inline LobbyTask::~LobbyTask() // 0x46D29C
{
    mangled_assert("??1LobbyTask@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D29C(this);
}

_extern void _sub_46D2A1(LobbySessionDesc::Param *const);
_inline LobbySessionDesc::Param::~Param() // 0x46D2A1
{
    mangled_assert("??1Param@LobbySessionDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D2A1(this);
}

_extern void _sub_46D2B8(Net::SessionDescription *const);
_inline Net::SessionDescription::~SessionDescription() // 0x46D2B8
{
    mangled_assert("??1SessionDescription@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46D2B8(this);
}

_extern LobbySessionDesc &_sub_46D41A(LobbySessionDesc *const, LobbySessionDesc const &);
_inline LobbySessionDesc &LobbySessionDesc::operator=(LobbySessionDesc const &) // 0x46D41A
{
    mangled_assert("??4LobbySessionDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    LobbySessionDesc & __result = _sub_46D41A(this, arg);
    return __result;
}

_extern LobbySessionDesc::Param &_sub_46D42C(LobbySessionDesc::Param *const, LobbySessionDesc::Param const &);
_inline LobbySessionDesc::Param &LobbySessionDesc::Param::operator=(LobbySessionDesc::Param const &) // 0x46D42C
{
    mangled_assert("??4Param@LobbySessionDesc@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    LobbySessionDesc::Param & __result = _sub_46D42C(this, arg);
    return __result;
}

_extern void _sub_46DFA6(Lobby *const, LobbyNetwork *);
void Lobby::SetNetwork(LobbyNetwork *) // 0x46DFA6
{
    mangled_assert("?SetNetwork@Lobby@@QAEXPAVLobbyNetwork@@@Z");
    todo("implement");
    _sub_46DFA6(this, arg);
}

_extern LobbyNetwork *_sub_46D61A(Lobby const *const);
LobbyNetwork *Lobby::GetNetwork() const // 0x46D61A
{
    mangled_assert("?GetNetwork@Lobby@@QBEPAVLobbyNetwork@@XZ");
    todo("implement");
    LobbyNetwork * __result = _sub_46D61A(this);
    return __result;
}

_extern void _sub_46D64D(Lobby *const);
void Lobby::Initialize() // 0x46D64D
{
    mangled_assert("?Initialize@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46D64D(this);
}

_extern void _sub_46DFCB(Lobby *const);
void Lobby::Shutdown() // 0x46DFCB
{
    mangled_assert("?Shutdown@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DFCB(this);
}

_extern void _sub_46DF91(Lobby *const, LobbyEvent *);
void Lobby::SetEventCallback(LobbyEvent *) // 0x46DF91
{
    mangled_assert("?SetEventCallback@Lobby@@QAEXPAVLobbyEvent@@@Z");
    todo("implement");
    _sub_46DF91(this, arg);
}

_extern void _sub_46DFDB(Lobby *const);
void Lobby::Think() // 0x46DFDB
{
    mangled_assert("?Think@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DFDB(this);
}

_extern void _sub_46DFEA(Lobby *const);
void Lobby::Update() // 0x46DFEA
{
    mangled_assert("?Update@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DFEA(this);
}

_extern void _sub_46D728(Lobby *const, BufferMessage const &);
void Lobby::ProcessMessage(BufferMessage const &) // 0x46D728
{
    mangled_assert("?ProcessMessage@Lobby@@AAEXABVBufferMessage@@@Z");
    todo("implement");
    _sub_46D728(this, arg);
}

_extern void _sub_46DD95(Lobby *const);
void Lobby::SessionGetList() // 0x46DD95
{
    mangled_assert("?SessionGetList@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DD95(this);
}

_extern void _sub_46DDA4(Lobby *const);
void Lobby::SessionGetListStop() // 0x46DDA4
{
    mangled_assert("?SessionGetListStop@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DDA4(this);
}

_extern void _sub_46DCAC(Lobby *const);
void Lobby::RefreshPlayers() // 0x46DCAC
{
    mangled_assert("?RefreshPlayers@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DCAC(this);
}

_extern void _sub_46DCBB(Lobby *const);
void Lobby::RefreshRooms() // 0x46DCBB
{
    mangled_assert("?RefreshRooms@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DCBB(this);
}

_extern void _sub_46DDB3(Lobby *const, Net::Session *, LobbySessionDesc const &);
void Lobby::SessionHost(Net::Session *, LobbySessionDesc const &) // 0x46DDB3
{
    mangled_assert("?SessionHost@Lobby@@QAEXPAVSession@Net@@ABVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_46DDB3(this, arg, arg);
}

_extern void _sub_46DEF2(Lobby *const, wchar_t const *);
void Lobby::SessionJoin(wchar_t const *) // 0x46DEF2
{
    mangled_assert("?SessionJoin@Lobby@@QAEXPB_W@Z");
    todo("implement");
    _sub_46DEF2(this, arg);
}

_extern void _sub_46DD31(Lobby *const);
void Lobby::SessionCancel() // 0x46DD31
{
    mangled_assert("?SessionCancel@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DD31(this);
}

_extern void _sub_46DD63(Lobby *const, bool);
void Lobby::SessionEnableJoin(bool) // 0x46DD63
{
    mangled_assert("?SessionEnableJoin@Lobby@@QAEX_N@Z");
    todo("implement");
    _sub_46DD63(this, arg);
}

_extern bool _sub_46DD74(Lobby const *const, unsigned long long, LobbySessionDesc &);
bool Lobby::SessionGetDescription(unsigned long long, LobbySessionDesc &) const // 0x46DD74
{
    mangled_assert("?SessionGetDescription@Lobby@@QBE_N_KAAVLobbySessionDesc@@@Z");
    todo("implement");
    bool __result = _sub_46DD74(this, arg, arg);
    return __result;
}

_extern bool _sub_46DF12(Lobby const *const, unsigned long long);
bool Lobby::SessionUpdate(unsigned long long) const // 0x46DF12
{
    mangled_assert("?SessionUpdate@Lobby@@QBE_N_K@Z");
    todo("implement");
    bool __result = _sub_46DF12(this, arg);
    return __result;
}

_extern void _sub_46DD40(Lobby *const, LobbySessionDesc const &, Net::Session *);
void Lobby::SessionChangeSettings(LobbySessionDesc const &, Net::Session *) // 0x46DD40
{
    mangled_assert("?SessionChangeSettings@Lobby@@QAEXABVLobbySessionDesc@@PAVSession@Net@@@Z");
    todo("implement");
    _sub_46DD40(this, arg, arg);
}

_extern void _sub_46DF03(Lobby *const);
void Lobby::SessionStart() // 0x46DF03
{
    mangled_assert("?SessionStart@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46DF03(this);
}

_extern bool _sub_46DEE1(Lobby const *const);
bool Lobby::SessionIsCreateVisible() const // 0x46DEE1
{
    mangled_assert("?SessionIsCreateVisible@Lobby@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46DEE1(this);
    return __result;
}

_extern void _sub_46DF2F(Lobby *const, unsigned long long);
void Lobby::SessionUpdated(unsigned long long) // 0x46DF2F
{
    mangled_assert("?SessionUpdated@Lobby@@QAEX_K@Z");
    todo("implement");
    _sub_46DF2F(this, arg);
}

_extern void _sub_46D6F5(Lobby const *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void Lobby::PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) const // 0x46D6F5
{
    mangled_assert("?PlayerGetName@Lobby@@QBEXAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_46D6F5(this, arg);
}

_extern bool _sub_46D6DA(Lobby *const, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &);
bool Lobby::PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) // 0x46D6DA
{
    mangled_assert("?PlayerGetList@Lobby@@QAE_NAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_46D6DA(this, arg);
    return __result;
}

_extern bool _sub_46D6C7(Lobby const *const, wchar_t const *, LobbyPlayerDesc &);
bool Lobby::PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) const // 0x46D6C7
{
    mangled_assert("?PlayerGetDescription@Lobby@@QBE_NPB_WAAVLobbyPlayerDesc@@@Z");
    todo("implement");
    bool __result = _sub_46D6C7(this, arg, arg);
    return __result;
}

_extern void _sub_46D717(Lobby *const, LobbyRoomType);
void Lobby::PlayerSetViewingRoom(LobbyRoomType) // 0x46D717
{
    mangled_assert("?PlayerSetViewingRoom@Lobby@@QAEXW4LobbyRoomType@@@Z");
    todo("implement");
    _sub_46D717(this, arg);
}

_extern void _sub_46D706(Lobby *const, bool);
void Lobby::PlayerSetPlaying(bool) // 0x46D706
{
    mangled_assert("?PlayerSetPlaying@Lobby@@QAEX_N@Z");
    todo("implement");
    _sub_46D706(this, arg);
}

_extern bool _sub_46DCCA(Lobby const *const, unsigned __int32, LobbyRoomDesc &);
bool Lobby::RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const // 0x46DCCA
{
    mangled_assert("?RoomGetDescription@Lobby@@QBE_NIAAVLobbyRoomDesc@@@Z");
    todo("implement");
    bool __result = _sub_46DCCA(this, arg, arg);
    return __result;
}

_extern bool _sub_46DCFE(Lobby *const);
bool Lobby::RoomJoinTitle() // 0x46DCFE
{
    mangled_assert("?RoomJoinTitle@Lobby@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_46DCFE(this);
    return __result;
}

_extern bool _sub_46DCEB(Lobby *const, unsigned __int32);
bool Lobby::RoomJoin(unsigned __int32) // 0x46DCEB
{
    mangled_assert("?RoomJoin@Lobby@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_46DCEB(this, arg);
    return __result;
}

_extern bool _sub_46DD0F(Lobby *const);
bool Lobby::RoomLeave() // 0x46DD0F
{
    mangled_assert("?RoomLeave@Lobby@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_46DD0F(this);
    return __result;
}

_extern bool _sub_46DD20(Lobby *const);
bool Lobby::RoomLeaveTitle() // 0x46DD20
{
    mangled_assert("?RoomLeaveTitle@Lobby@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_46DD20(this);
    return __result;
}

_extern unsigned __int32 _sub_46DCDD(Lobby const *const);
unsigned __int32 Lobby::RoomGetLastJoined() const // 0x46DCDD
{
    mangled_assert("?RoomGetLastJoined@Lobby@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46DCDD(this);
    return __result;
}

_extern void _sub_46D536(Lobby *const, char const *);
void Lobby::ChatConnect(char const *) // 0x46D536
{
    mangled_assert("?ChatConnect@Lobby@@QAEXPBD@Z");
    todo("implement");
    _sub_46D536(this, arg);
}

_extern void _sub_46D547(Lobby *const);
void Lobby::ChatDisconnect() // 0x46D547
{
    mangled_assert("?ChatDisconnect@Lobby@@QAEXXZ");
    todo("implement");
    _sub_46D547(this);
}

_extern void _sub_46D5ED(Lobby *const, LobbyChatType, wchar_t const *, wchar_t const *);
void Lobby::ChatSendMessage(LobbyChatType, wchar_t const *, wchar_t const *) // 0x46D5ED
{
    mangled_assert("?ChatSendMessage@Lobby@@QAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
    _sub_46D5ED(this, arg, arg, arg);
}

_extern void _sub_46D5E4(Lobby *const, LobbyChatType, wchar_t const *, wchar_t const *);
void Lobby::ChatReceiveMessage(LobbyChatType, wchar_t const *, wchar_t const *) // 0x46D5E4
{
    mangled_assert("?ChatReceiveMessage@Lobby@@QAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
    _sub_46D5E4(this, arg, arg, arg);
}

_extern bool _sub_46D62A(Lobby const *const);
bool Lobby::HasChat() const // 0x46D62A
{
    mangled_assert("?HasChat@Lobby@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46D62A(this);
    return __result;
}

_extern bool _sub_46D676(Lobby *const, wchar_t const *);
bool Lobby::IsIgnoring(wchar_t const *) // 0x46D676
{
    mangled_assert("?IsIgnoring@Lobby@@AAE_NPB_W@Z");
    todo("implement");
    bool __result = _sub_46D676(this, arg);
    return __result;
}

_extern void _sub_46D556(Lobby *const, wchar_t const *, bool);
void Lobby::ChatIgnore(wchar_t const *, bool) // 0x46D556
{
    mangled_assert("?ChatIgnore@Lobby@@QAEXPB_W_N@Z");
    todo("implement");
    _sub_46D556(this, arg, arg);
}

_extern bool _sub_46D520(Lobby *const, char const *);
bool Lobby::CDAuthenticate(char const *) // 0x46D520
{
    mangled_assert("?CDAuthenticate@Lobby@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_46D520(this, arg);
    return __result;
}

_extern void _sub_46D602(Lobby const *const, LobbySessionDesc &);
void Lobby::GetHostLobbySessionDesc(LobbySessionDesc &) const // 0x46D602
{
    mangled_assert("?GetHostLobbySessionDesc@Lobby@@QBEXAAVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_46D602(this, arg);
}

_extern LobbyEvent *_sub_46D614(Lobby *const);
LobbyEvent *Lobby::GetInGameLobbyEvent() // 0x46D614
{
    mangled_assert("?GetInGameLobbyEvent@Lobby@@QAEPAVLobbyEvent@@XZ");
    todo("implement");
    LobbyEvent * __result = _sub_46D614(this);
    return __result;
}

/* ---------- private code */
#endif
