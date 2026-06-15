#if 0
/* ---------- headers */

#include "decomp.h"
#include <Menus\Multiplayer\MultiplayerConnect.h>
#include <winefs.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <localizer\localizer.h>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <assist\stlexsmallvector.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <stdexcept>
#include <boost\preprocessor\facilities\empty.hpp>
#include <atlbase.h>
#include <xstring>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <xmemory0>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <atlrc.h>
#include <olectl.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <memory\memorylib.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <crtdefs.h>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <securitybaseapi.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <platform\cmdline.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <Mathlib\matrix3.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <LocalizerDirectory.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>
#include <debugapi.h>
#include <fileapi.h>
#include <boost\type_traits\is_class.hpp>
#include <new>
#include <boost\type_traits\is_union.hpp>
#include <xstddef>
#include <boost\type_traits\remove_cv.hpp>
#include <cderr.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <type_traits>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <winsock2.h>
#include <winapifamily.h>
#include <boost\type_traits\is_enum.hpp>
#include <windows.h>
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
#include <xutility>
#include <utility>
#include <poppack.h>
#include <iosfwd>
#include <UserInterface\NewUIScreenManager.h>
#include <vector>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <xmemory>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <prim.h>
#include <platform\osdef.h>
#include <fileio\fileioexports.h>
#include <boost\ref.hpp>
#include <Mathlib\mathutil.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <profileapi.h>
#include <compiler\compilerconfig.h>
#include <synchapi.h>
#include <boost\type_traits\is_pointer.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <mmsystem.h>
#include <UserInterface\Graphic.h>
#include <mmsyscom.h>
#include <process.h>
#include <Render\objects\texture.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <Render\objects\objects.h>
#include <list>
#include <ole2.h>
#include <inaddr.h>
#include <Render\objects\core.h>
#include <objbase.h>
#include <atlbase.inl>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <App\AppObj.h>
#include <combaseapi.h>
#include <Mathlib\matvec.h>
#include <platform\appinterface.h>
#include <assist\fixedstring.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <Mathlib\vector3.h>
#include <stdarg.h>
#include <NetworkDP8\source\exception.h>
#include <NetworkDP8\source\blowfish.h>
#include <Mathlib\vector4.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <Render\gl\lotypes.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\scoped_ptr.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <boost\assert.hpp>
#include <boost\type_traits\detail\ice_or.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <boost\type_traits\is_volatile.hpp>
#include <Render\gl\r_types.h>
#include <oaidl.h>
#include <commdlg.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <FrontEnd\Lobby.h>
#include <KeyBindings.h>
#include <FrontEnd\lobbydefines.h>
#include <dpapi.h>
#include <propidl.h>
#include <boost\pending\ct_if.hpp>
#include <config.h>
#include <unknwn.h>
#include <boost\cstdint.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <NetworkDP8\source\sessionenum.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\config.hpp>
#include <NetworkDP8\source\sessioninfo.h>
#include <minwinbase.h>
#include <cassert>
#include <boost\type_traits\is_stateless.hpp>
#include <atlcore.h>
#include <assert.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <Menus\MenuSupport.h>
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
#include <guiddef.h>
#include <stralign.h>
#include <boost\type_traits\intrinsics.hpp>
#include <jobapi.h>
#include <platform\keydefines.h>
#include <apiset.h>
#include <winsvc.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <assist\typemagic.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <atliface.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <boost\type_traits\is_float.hpp>
#include <luaconfig\luaconfig.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <lua.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\glext.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <UserInterface\uitypes.h>
#include <Mathlib\fastmath.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <platform\inputinterface.h>
#include <libloaderapi.h>
#include <platform\platformexports.h>
#include <sysinfoapi.h>
#include <atlchecked.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atlconv.h>
#include <debug\db.h>
#include <winsock.h>
#include <atlalloc.h>
#include <fileio\archivemanager.h>
#include <nb30.h>
#include <wincrypt.h>
#include <fileio\archive.h>
#include <fileio\archiveinternals.h>
#include <deque>
#include <timeapi.h>
#include <NetworkDP8\source\authentication.h>
#include <NetworkDP8\source\session.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <NetworkDP8\source\directplay.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <fibersapi.h>
#include <boost\thread\thread.hpp>
#include <boost\throw_exception.hpp>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <Menus\WaitMessage.h>
#include <winver.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <UserInterface\NewUIScreen.h>
#include <boost\detail\shared_count.hpp>
#include <LevelDesc.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <Hash.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\config\config.hpp>
#include <stack>
#include <UserInterface\pch.h>
#include <boost\detail\lwm_win32.hpp>
#include <fileio\md5.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\elem.hpp>
#include <winuser.h>
#include <boost\preprocessor\array\data.hpp>
#include <cguid.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <Menus\ErrorMessage.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\array\size.hpp>
#include <consoleapi.h>
#include <boost\preprocessor\cat.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\detail\prologue.hpp>
#include <Render\objects\textureregistry.h>
#include <Network\Authentication.h>
#include <boost\function\function_base.hpp>
#include <hash_map>
#include <version.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <xhash>
#include <prsht.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\utility\addressof.hpp>
#include <boost\get_pointer.hpp>
#include <swprintf.inl>
#include <iterator>
#include <wingdi.h>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <rpc.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <pshpack4.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <joystickapi.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <rpcdce.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern std::auto_ptr<Net::Session> MultiplayerConnect::HostServer(wchar_t const *sessionName, wchar_t const *password, wchar_t const *playerName, bool bVisible);
extern std::auto_ptr<Net::SessionEnumerator> MultiplayerConnect::EnumSession();

/* ---------- globals */

extern ConnectionAgent *ConnectionAgent::s_instance; // 0x846D74

/* ---------- private variables */

_static
{
    extern char const *k_ArchiveFileSignature; // 0x83AA3C
    extern char const *k_ArchiveMD5SecurityKey; // 0x83AA40
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x83AA44
}

/* ---------- public code */

std::auto_ptr<Net::Session> MultiplayerConnect::HostServer(wchar_t const *sessionName, wchar_t const *password, wchar_t const *playerName, bool bVisible) // 0x5B9239
{
    mangled_assert("?HostServer@MultiplayerConnect@@YG?AV?$auto_ptr@VSession@Net@@@std@@PB_W00_N@Z");
    todo("implement");
}

std::auto_ptr<Net::SessionEnumerator> MultiplayerConnect::EnumSession() // 0x5B8EE2
{
    mangled_assert("?EnumSession@MultiplayerConnect@@YG?AV?$auto_ptr@VSessionEnumerator@Net@@@std@@XZ");
    todo("implement");
}

ConnectionAgent::ConnectionAgent(wchar_t const *, unsigned short, wchar_t const *, wchar_t const *) // 0x5B89F6
{
    mangled_assert("??0ConnectionAgent@@QAE@PB_WG00@Z");
    todo("implement");
}

_inline Net::Authentication::~Authentication() // 0x5B8BAD
{
    mangled_assert("??1Authentication@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ConnectionAgent::~ConnectionAgent() // 0x5B8BC8
{
    mangled_assert("??1ConnectionAgent@@QAE@XZ");
    todo("implement");
}

_inline Net::EAuthenticationFailed::~EAuthenticationFailed() // 0x5B8C58
{
    mangled_assert("??1EAuthenticationFailed@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::EHostNotFound::~EHostNotFound() // 0x5B8C70
{
    mangled_assert("??1EHostNotFound@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::EInvalidAddress::~EInvalidAddress() // 0x5B8C7A
{
    mangled_assert("??1EInvalidAddress@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::EInvalidPassword::~EInvalidPassword() // 0x5B8C84
{
    mangled_assert("??1EInvalidPassword@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::ESessionFull::~ESessionFull() // 0x5B8C8E
{
    mangled_assert("??1ESessionFull@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::Exception::~Exception() // 0x5B8C98
{
    mangled_assert("??1Exception@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Net::PlayerDescription::~PlayerDescription() // 0x5B8CA2
{
    mangled_assert("??1PlayerDescription@Net@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void ConnectionAgent::Connect() // 0x5B8D25
{
    mangled_assert("?Connect@ConnectionAgent@@AAEXXZ");
    todo("implement");
}

void ConnectionAgent::EnumHostForPort() // 0x5B8E32
{
    mangled_assert("?EnumHostForPort@ConnectionAgent@@AAEXXZ");
    todo("implement");
}

std::auto_ptr<Net::Session> ConnectionAgent::GetResult() // 0x5B921D
{
    mangled_assert("?GetResult@ConnectionAgent@@QAE?AV?$auto_ptr@VSession@Net@@@std@@XZ");
    todo("implement");
}

void ConnectionAgent::OnCancel(UI::InterfaceElement *) // 0x5B93E2
{
    mangled_assert("?OnCancel@ConnectionAgent@@CGXPAVInterfaceElement@UI@@@Z");
    todo("implement");
}

bool ConnectionAgent::Update(unsigned __int32) // 0x5B96AA
{
    mangled_assert("?Update@ConnectionAgent@@QAE_NI@Z");
    todo("implement");
}

void ConnectionAgent::ReportError(HRESULT) const // 0x5B9419
{
    mangled_assert("?ReportError@ConnectionAgent@@ABEXJ@Z");
    todo("implement");
}

void ConnectionAgent::StateConnect(unsigned __int32) // 0x5B9551
{
    mangled_assert("?StateConnect@ConnectionAgent@@AAEXI@Z");
    todo("implement");
}

void ConnectionAgent::StateEnumHost(unsigned __int32) // 0x5B9592
{
    mangled_assert("?StateEnumHost@ConnectionAgent@@AAEXI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
