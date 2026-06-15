#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\config\suffix.hpp>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>
#include <debugapi.h>
#include <fileapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <cstring>
#include <cwchar>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <wchar.h>
#include <cderr.h>
#include <boost\type_traits\is_volatile.hpp>
#include <swprintf.inl>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <crtdefs.h>
#include <xdebug>
#include <winsock2.h>
#include <winapifamily.h>
#include <windows.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <poppack.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <boost\pending\ct_if.hpp>
#include <typeinfo>
#include <list>
#include <boost\type_traits\is_stateless.hpp>
#include <xfacet>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <boost\type_traits\is_pod.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\type_traits\is_scalar.hpp>
#include <string>
#include <profileapi.h>
#include <new>
#include <iterator>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <istream>
#include <xstddef>
#include <synchapi.h>
#include <boost\type_traits\intrinsics.hpp>
#include <ostream>
#include <mmsystem.h>
#include <ios>
#include <mmsyscom.h>
#include <process.h>
#include <xlocnum>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <climits>
#include <ole2.h>
#include <inaddr.h>
#include <cmath>
#include <objbase.h>
#include <atlbase.inl>
#include <math.h>
#include <combaseapi.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <boost\type_traits\is_convertible.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <wnnc.h>
#include <boost\type_traits\is_float.hpp>
#include <stdarg.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\directplay.h"
#include <boost\type_traits\is_member_pointer.hpp>
#include <windef.h>
#include <boost\thread\thread.hpp>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\utility.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\utility\addressof.hpp>
#include <specstrings_strict.h>
#include <boost\detail\workaround.hpp>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\type_traits\is_fundamental.hpp>
#include <boost\utility_fwd.hpp>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <oaidl.h>
#include <commdlg.h>
#include <namespaceapi.h>
#include <ammintrin.h>
#include <ktmtypes.h>
#include <mm3dnow.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <minwinbase.h>
#include <atlcore.h>
#include <winscard.h>
#include <tchar.h>
#include <wtypes.h>
#include <mbstring.h>
#include <cstdlib>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <wtime.inl>
#include <streambuf>
#include <processenv.h>
#include <rpcnsip.h>
#include <xiosbase>
#include <guiddef.h>
#include <stralign.h>
#include <boost\checked_delete.hpp>
#include <xlocale>
#include <stdexcept>
#include <jobapi.h>
#include <xstring>
#include <boost\type_traits\is_same.hpp>
#include <xmemory0>
#include <apiset.h>
#include <limits>
#include <winsvc.h>
#include <ymath.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <atliface.h>
#include <boost\mem_fn.hpp>
#include <boost\assert.hpp>
#include <boost\get_pointer.hpp>
#include <boost\preprocessor\enum.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <locale.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <kernelspecs.h>
#include <urlmon.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <system_error>
#include <basetsd.h>
#include <pshpack2.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <cerrno>
#include <libloaderapi.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <errno.h>
#include <sysinfoapi.h>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\address.h"
#include <atlchecked.h>
#include <boost\next_prior.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <boost\cstdint.hpp>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <boost\config.hpp>
#include <atltrace.h>
#include <oleacc.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <boost\config\user.hpp>
#include <intrin.h>
#include <atlconv.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <setjmp.h>
#include <winsock.h>
#include <atlalloc.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\tuple\rem.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <nb30.h>
#include <wincrypt.h>
#include <boost\noncopyable.hpp>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\throw_exception.hpp>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <utility>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <iosfwd>
#include <timeapi.h>
#include <boost\preprocessor\inc.hpp>
#include <cstdio>
#include <boost\function\function_base.hpp>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <stdio.h>
#include <memory>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <stdint.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <fibersapi.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <type_traits>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <winver.h>
#include <boost\function\function_template.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <mciapi.h>
#include <comcat.h>
#include <winuser.h>
#include <boost\function.hpp>
#include <cguid.h>
#include <boost\preprocessor\iterate.hpp>
#include <boost\type_traits\is_class.hpp>
#include <crtdbg.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\type_traits\is_union.hpp>
#include <vector>
#include <consoleapi.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\config\config.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\preprocessor\array\elem.hpp>
#include <boost\preprocessor\array\data.hpp>
#include <boost\type_traits\is_enum.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <boost\type_traits\add_reference.hpp>
#include <prsht.h>
#include <boost\preprocessor\array\size.hpp>
#include <boost\type_traits\is_reference.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <immintrin.h>
#include <boost\preprocessor\cat.hpp>
#include <boost\config\select_platform_config.hpp>
#include <wmmintrin.h>
#include <pshpack4.h>
#include <wingdi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <xrefwrap>
#include <boost\config\platform\win32.hpp>
#include <nmmintrin.h>
#include <rpc.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <smmintrin.h>
#include <boost\function\detail\prologue.hpp>
#include <tmmintrin.h>
#include <xlocinfo>
#include <joystickapi.h>
#include <cassert>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <rpcdce.h>
#include <assert.h>
#include <emmintrin.h>
#include <ctype.h>
#include <winerror.h>
#include <algorithm>
#include <boost\ref.hpp>
#include <xmmintrin.h>
#include <winefs.h>
#include <xmemory>
#include <mmintrin.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <xtgmath.h>
#include <atlbase.h>
#include <boost\type_traits\is_pointer.hpp>
#include <xatomic0.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <atlrc.h>
#include <olectl.h>
#include <share.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <xutility>
#include <securitybaseapi.h>
#include <oleidl.h>
#include <mcx.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::allocator_arg_t allocator_arg; // 0x84CB63
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB62
}

/* ---------- public code */

Net::Address *Net::Address::Create(_GUID const &device, unsigned short port) // 0x6D4DE6
{
    mangled_assert("?Create@Address@Net@@SGPAV12@ABU_GUID@@G@Z");
    todo("implement");
}

Net::Address *Net::Address::Create(wchar_t const *name, unsigned short port) // 0x6D4EA6
{
    mangled_assert("?Create@Address@Net@@SGPAV12@PB_WG@Z");
    todo("implement");
}

Net::Address::Address(ATL::CComPtr<IDirectPlay8Address> const &) // 0x6D4DC8
{
    mangled_assert("??0Address@Net@@AAE@ABV?$CComPtr@UIDirectPlay8Address@@@ATL@@@Z");
    todo("implement");
}

IDirectPlay8Address *Net::Address::GetRaw() const // 0x6D4F9B
{
    mangled_assert("?GetRaw@Address@Net@@QBEPAUIDirectPlay8Address@@XZ");
    todo("implement");
}

bool Net::Address::GetURL(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, unsigned short &) const // 0x6D4F9E
{
    mangled_assert("?GetURL@Address@Net@@QBE_NAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AAG@Z");
    todo("implement");
}

/* ---------- private code */
#endif
