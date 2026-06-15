#if 0
/* ---------- headers */

#include "decomp.h"
#include <cstdio>
#include <boost\type_traits\is_float.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <stdio.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <boost\next_prior.hpp>
#include <securitybaseapi.h>
#include <locale.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <boost\noncopyable.hpp>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <crtdefs.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <wtime.inl>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <debugapi.h>
#include <fileapi.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <cderr.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <winsock2.h>
#include <cfloat>
#include <winapifamily.h>
#include <float.h>
#include <windows.h>
#include <new>
#include <crtwrn.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <intrin.h>
#include <boost\function.hpp>
#include <xstddef>
#include <excpt.h>
#include <poppack.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <setjmp.h>
#include <boost\preprocessor\iterate.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\preprocessor\config\config.hpp>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <boost\type_traits\is_same.hpp>
#include <xtgmath.h>
#include <boost\preprocessor\array\elem.hpp>
#include <boost\preprocessor\array\data.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <profileapi.h>
#include <boost\preprocessor\array\size.hpp>
#include <boost\preprocessor\cat.hpp>
#include <boost\mem_fn.hpp>
#include <synchapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <boost\assert.hpp>
#include <boost\get_pointer.hpp>
#include <boost\preprocessor\enum.hpp>
#include <mmsystem.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <mmsyscom.h>
#include <process.h>
#include <boost\function\detail\prologue.hpp>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include "src\Source\NetworkDP8\source\directplay.h"
#include <algorithm>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <ole2.h>
#include <inaddr.h>
#include <boost\cstdint.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <objbase.h>
#include <atlbase.inl>
#include <boost\config.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <combaseapi.h>
#include <boost\config\user.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <boost\config\compiler\visualc.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <wnnc.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <stdarg.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <windef.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\config\platform\win32.hpp>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\tuple\rem.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <xlocinfo>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\enum_params.hpp>
#include <specstrings_strict.h>
#include <xlocinfo.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <ctype.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <immintrin.h>
#include <boost\preprocessor\inc.hpp>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <wmmintrin.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <nmmintrin.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <smmintrin.h>
#include <memory>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <oaidl.h>
#include <type_traits>
#include <tmmintrin.h>
#include <stdexcept>
#include <stdint.h>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <commdlg.h>
#include <pmmintrin.h>
#include <xstring>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <vector>
#include <namespaceapi.h>
#include <emmintrin.h>
#include <share.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <ktmtypes.h>
#include <xmmintrin.h>
#include <boost\function\function_template.hpp>
#include <mmintrin.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <xatomic0.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <cstring>
#include <minwinbase.h>
#include <crtdbg.h>
#include <boost\type_traits\is_class.hpp>
#include <atlcore.h>
#include <boost\type_traits\is_union.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\remove_cv.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\config\suffix.hpp>
#include <boost\throw_exception.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <guiddef.h>
#include <stralign.h>
#include <boost\type_traits\is_enum.hpp>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\add_reference.hpp>
#include <jobapi.h>
#include <string>
#include <boost\type_traits\is_reference.hpp>
#include <xrefwrap>
#include <iterator>
#include <apiset.h>
#include <climits>
#include <istream>
#include <winsvc.h>
#include <cmath>
#include <ostream>
#include <xdebug>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include "src\Source\NetworkDP8\pch.h"
#include <cassert>
#include <math.h>
#include <ios>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <assert.h>
#include <xlocnum>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <atliface.h>
#include "src\Source\NetworkDP8\source\sessionenum.h"
#include <streambuf>
#include <list>
#include <xiosbase>
#include <boost\ref.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <xmemory>
#include <xlocale>
#include <datetimeapi.h>
#include <shtypes.h>
#include <xmemory0>
#include <typeinfo>
#include <winnt.h>
#include <processtopologyapi.h>
#include <cstdlib>
#include <kernelspecs.h>
#include <urlmon.h>
#include <limits>
#include <boost\type_traits\is_pointer.hpp>
#include <basetsd.h>
#include <pshpack2.h>
#include <ymath.h>
#include <xfacet>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <atlchecked.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <boost\thread\thread.hpp>
#include <winsock.h>
#include <atlalloc.h>
#include <boost\utility.hpp>
#include <nb30.h>
#include <wincrypt.h>
#include "src\Source\NetworkDP8\source\criticalsection.h"
#include <boost\utility\addressof.hpp>
#include <boost\detail\workaround.hpp>
#include <timeapi.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <fibersapi.h>
#include <cwchar>
#include <boost\type_traits\detail\ice_or.hpp>
#include <wchar.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <winver.h>
#include <boost\type_traits\is_volatile.hpp>
#include <verrsrc.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <mciapi.h>
#include <comcat.h>
#include <winuser.h>
#include <cguid.h>
#include <boost\pending\ct_if.hpp>
#include <atlsimpcoll.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\type_traits\is_stateless.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <boost\checked_delete.hpp>
#include <boost\type_traits\is_pod.hpp>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_scalar.hpp>
#include <prsht.h>
#include "src\Source\NetworkDP8\source\sessioninfo.h"
#include "src\Source\NetworkDP8\source\address.h"
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <pshpack4.h>
#include <wingdi.h>
#include "src\Source\NetworkDP8\source\exception.h"
#include <boost\type_traits\intrinsics.hpp>
#include <rpc.h>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <winefs.h>
#include <swprintf.inl>
#include <xutility>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <utility>
#include <boost\type_traits\is_convertible.hpp>
#include <ddeml.h>
#include <lzexpand.h>
#include <iosfwd>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <atlbase.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB6A
    extern std::allocator_arg_t allocator_arg; // 0x84CB6B
}

/* ---------- public code */

Net::SessionEnumerator::SessionEnumerator(_GUID const &, Net::Address const *) // 0x6D5AA4
{
    mangled_assert("??0SessionEnumerator@Net@@QAE@ABU_GUID@@PBVAddress@1@@Z");
    todo("implement");
}

Net::SessionEnumerator::~SessionEnumerator() // 0x6D5BA8
{
    mangled_assert("??1SessionEnumerator@Net@@UAE@XZ");
    todo("implement");
}

HRESULT Net::SessionEnumerator::Callback(unsigned long, void *) // 0x6D5D29
{
    mangled_assert("?Callback@SessionEnumerator@Net@@EAEJKPAX@Z");
    todo("implement");
}

HRESULT Net::SessionEnumerator::CB_EnumHost(_DPNMSG_ENUM_HOSTS_RESPONSE const &) // 0x6D5C46
{
    mangled_assert("?CB_EnumHost@SessionEnumerator@Net@@AAEJABU_DPNMSG_ENUM_HOSTS_RESPONSE@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
