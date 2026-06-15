#if 0
/* ---------- headers */

#include "decomp.h"
#include <system_error>
#include <boost\type_traits\detail\ice_and.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <cerrno>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <errno.h>
#include <securitybaseapi.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <wtime.inl>
#include <boost\thread\thread.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\utility.hpp>
#include <crtdefs.h>
#include <boost\utility\addressof.hpp>
#include <boost\detail\workaround.hpp>
#include <debugapi.h>
#include <boost\utility\base_from_member.hpp>
#include <fileapi.h>
#include <boost\utility_fwd.hpp>
#include <cderr.h>
#include <cfloat>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <float.h>
#include <boost\type_traits\is_same.hpp>
#include <winsock2.h>
#include <crtwrn.h>
#include <winapifamily.h>
#include <intrin.h>
#include <windows.h>
#include <setjmp.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <new>
#include <excpt.h>
#include <poppack.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <xstddef>
#include <boost\mem_fn.hpp>
#include <boost\assert.hpp>
#include <boost\get_pointer.hpp>
#include <boost\preprocessor\enum.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <xtgmath.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <profileapi.h>
#include <boost\checked_delete.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <synchapi.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <mmsystem.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <mmsyscom.h>
#include <process.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <xlocinfo>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\tuple\rem.hpp>
#include <ole2.h>
#include <inaddr.h>
#include <xlocinfo.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\enum_params.hpp>
#include <objbase.h>
#include <atlbase.inl>
#include <ctype.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <combaseapi.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <boost\preprocessor\inc.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <wnnc.h>
#include <memory>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <stdarg.h>
#include <stdint.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <windef.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <share.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <specstrings_strict.h>
#include <immintrin.h>
#include <boost\function\function_template.hpp>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <wmmintrin.h>
#include <boost\next_prior.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <nmmintrin.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <smmintrin.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\address.h"
#include <type_traits>
#include <tmmintrin.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <pmmintrin.h>
#include <oaidl.h>
#include <emmintrin.h>
#include <boost\noncopyable.hpp>
#include <boost\type_traits\is_class.hpp>
#include <commdlg.h>
#include <xmmintrin.h>
#include <boost\type_traits\is_union.hpp>
#include <vector>
#include <namespaceapi.h>
#include <mmintrin.h>
#include <boost\type_traits\remove_cv.hpp>
#include <ktmtypes.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <xatomic0.h>
#include <unknwn.h>
#include <cstring>
#include <boost\type_traits\is_enum.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <crtdbg.h>
#include <string>
#include <boost\type_traits\add_reference.hpp>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <iterator>
#include <boost\type_traits\is_reference.hpp>
#include <minwinbase.h>
#include <istream>
#include <atlcore.h>
#include <ostream>
#include <xdebug>
#include <winscard.h>
#include <tchar.h>
#include <ios>
#include <wtypes.h>
#include <mbstring.h>
#include <xlocnum>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <streambuf>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <xiosbase>
#include <guiddef.h>
#include <stralign.h>
#include <boost\function.hpp>
#include <xlocale>
#include <boost\ref.hpp>
#include <xrefwrap>
#include <boost\preprocessor\iterate.hpp>
#include <typeinfo>
#include <jobapi.h>
#include <climits>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <cmath>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <apiset.h>
#include <math.h>
#include <boost\preprocessor\config\config.hpp>
#include <xfacet>
#include <boost\type_traits\is_pointer.hpp>
#include <winsvc.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\preprocessor\array\elem.hpp>
#include <wow64apiset.h>
#include <ktmw32.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include <algorithm>
#include <boost\preprocessor\array\data.hpp>
#include <atliface.h>
#include <xmemory>
#include <boost\preprocessor\tuple\elem.hpp>
#include <xmemory0>
#include <boost\preprocessor\array\size.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <cstdlib>
#include <boost\preprocessor\cat.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <limits>
#include <boost\preprocessor\slot\slot.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <ymath.h>
#include <cassert>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <kernelspecs.h>
#include <urlmon.h>
#include <assert.h>
#include <boost\function\detail\prologue.hpp>
#include <basetsd.h>
#include <pshpack2.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\directplay.h"
#include <boost\throw_exception.hpp>
#include <libloaderapi.h>
#include <boost\cstdint.hpp>
#include <sysinfoapi.h>
#include <boost\config.hpp>
#include <atlchecked.h>
#include <boost\config\user.hpp>
#include <boost\function\function_base.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\config\select_compiler_config.hpp>
#include <stdexcept>
#include <atltrace.h>
#include <oleacc.h>
#include <boost\config\compiler\visualc.hpp>
#include <xstring>
#include <atlconv.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\type_traits\detail\ice_or.hpp>
#include <winsock.h>
#include <atlalloc.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <nb30.h>
#include <wincrypt.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\config\platform\win32.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <timeapi.h>
#include <cwchar>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <wchar.h>
#include <fibersapi.h>
#include <boost\pending\ct_if.hpp>
#include <winver.h>
#include <list>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\type_traits\is_stateless.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\type_traits\is_pod.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\type_traits\is_scalar.hpp>
#include <winuser.h>
#include <cguid.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <atlsimpcoll.h>
#include <boost\type_traits\intrinsics.hpp>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\config\suffix.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <prsht.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\directplaydeleter.h"
#include <boost\type_traits\is_convertible.hpp>
#include <ammintrin.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <pshpack4.h>
#include <wingdi.h>
#include <mm3dnow.h>
#include <boost\type_traits\is_float.hpp>
#include <rpc.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <joystickapi.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <rpcdce.h>
#include <swprintf.inl>
#include <xutility>
#include <winerror.h>
#include <utility>
#include <winefs.h>
#include <iosfwd>
#include <cstdio>
#include <locale.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <stdio.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <atlbase.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\exception.h"

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::ComInit
{
    ComInit();
    ~ComInit();
};
static_assert(sizeof(`anonymous-namespace'::ComInit) == 1, "Invalid `anonymous-namespace'::ComInit size");

/* ---------- prototypes */

/* ---------- globals */

extern boost::thread *Net::DirectPlay::s_pendingOperation; // 0x84CB74
extern Net::DirectPlay::ExitHelper Net::DirectPlay::s_exitHelper; // 0x84CB7B
extern _GUID CLSID_NETWORKSIMULATOR_DP8SP_TCPIP; // 0x83FED8

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB78
    extern std::allocator_arg_t allocator_arg; // 0x84CB79
}

/* ---------- public code */

Net::DirectPlay::DirectPlay() // 0x6D63C1
{
    mangled_assert("??0DirectPlay@Net@@QAE@XZ");
    todo("implement");
}

_inline ATL::CComPtr<IDirectPlay8Peer>::~CComPtr<IDirectPlay8Peer>() // 0x6D648C
{
    mangled_assert("??1?$CComPtr@UIDirectPlay8Peer@@@ATL@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Net::DirectPlay::~DirectPlay() // 0x6D64BF
{
    mangled_assert("??1DirectPlay@Net@@UAE@XZ");
    todo("implement");
}

bool Net::DirectPlay::GetLocalAddresses(std::vector<Net::Address,std::allocator<Net::Address> > &, unsigned short) const // 0x6D665E
{
    mangled_assert("?GetLocalAddresses@DirectPlay@Net@@QBE_NAAV?$vector@VAddress@Net@@V?$allocator@VAddress@Net@@@std@@@std@@G@Z");
    todo("implement");
}

HRESULT Net::DirectPlay::Callback(unsigned long, void *) // 0x6D6653
{
    mangled_assert("?Callback@DirectPlay@Net@@MAEJKPAX@Z");
    todo("implement");
}

HRESULT Net::DirectPlay::Callback(void *context, unsigned long msg, void *data) // 0x6D6634
{
    mangled_assert("?Callback@DirectPlay@Net@@CGJPAXK0@Z");
    todo("implement");
}

_GUID const &Net::DirectPlay::GetProvider() // 0x6D6756
{
    mangled_assert("?GetProvider@DirectPlay@Net@@SGABU_GUID@@XZ");
    todo("implement");
}

void Net::DirectPlay::WaitPendingOperation() // 0x6D67DB
{
    mangled_assert("?WaitPendingOperation@DirectPlay@Net@@CGXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
