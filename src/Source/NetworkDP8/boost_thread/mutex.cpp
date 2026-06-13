#if 0
/* ---------- headers */

#include "decomp.h"
#include <combaseapi.h>
#include <wow64apiset.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <iosfwd>
#include <cstdio>
#include <shellapi.h>
#include <winnls.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <stdio.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\boost_thread\mutex.hpp"
#include <datetimeapi.h>
#include <boost\type_traits\is_volatile.hpp>
#include <boost\config.hpp>
#include <processtopologyapi.h>
#include <winnt.h>
#include <boost\thread\detail\lock.hpp>
#include <wtime.inl>
#include <boost\config\user.hpp>
#include <kernelspecs.h>
#include <boost\thread\exceptions.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <pshpack2.h>
#include <basetsd.h>
#include <boost\thread\detail\config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <libloaderapi.h>
#include <stdexcept>
#include <boost\config\select_stdlib_config.hpp>
#include <sysinfoapi.h>
#include <exception>
#include <utility>
#include <objidlbase.h>
#include <boost\pending\ct_if.hpp>
#include <eh.h>
#include <xstddef>
#include <ncrypt.h>
#include <winreg.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <unknwnbase.h>
#include <crtdefs.h>
#include <oaidl.h>
#include <winsock.h>
#include <boost\type_traits\is_stateless.hpp>
#include <sal.h>
#include <commdlg.h>
#include <nb30.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <concurrencysal.h>
#include <boost\type_traits\is_pod.hpp>
#include <vadefs.h>
#include <boost\type_traits\is_scalar.hpp>
#include <timeapi.h>
#include <xtr1common>
#include <propidl.h>
#include <dpapi.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <unknwn.h>
#include <boost\type_traits\intrinsics.hpp>
#include <securityappcontainer.h>
#include <imm.h>
#include <fibersapi.h>
#include <winscard.h>
#include <winver.h>
#include <wtypes.h>
#include <verrsrc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <cfloat>
#include <rpcndr.h>
#include <boost\type_traits\is_convertible.hpp>
#include <float.h>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <boost\type_traits\is_empty.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <crtwrn.h>
#include <stralign.h>
#include <mciapi.h>
#include <boost\type_traits\is_float.hpp>
#include <winuser.h>
#include <boost\type_traits\is_member_pointer.hpp>
#include <ammintrin.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <mm3dnow.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <consoleapi.h>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <locale.h>
#include <xtgmath.h>
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <boost\limits.hpp>
#include <type_traits>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\boost_thread\timeconv.inl"
#include <boost\type_traits\is_fundamental.hpp>
#include <malloc.h>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\detail\ice_and.hpp>
#include <system_error>
#include <cerrno>
#include <wingdi.h>
#include <pshpack4.h>
#include <errno.h>
#include <urlmon.h>
#include <rpc.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <crtdbg.h>
#include <winerror.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <bcrypt.h>
#include <lzexpand.h>
#include <ddeml.h>
#include <new>
#include <boost\config\stdlib\dinkumware.hpp>
#include <cstring>
#include <wincrypt.h>
#include <boost\config\select_platform_config.hpp>
#include <string.h>
#include <boost\config\platform\win32.hpp>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <boost\thread\xtime.hpp>
#include <swprintf.inl>
#include <boost\cstdint.hpp>
#include <xrefwrap>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <boost\type_traits\is_same.hpp>
#include <oleauto.h>
#include <intrin.h>
#include <servprov.h>
#include <winioctl.h>
#include <boost\mem_fn.hpp>
#include <setjmp.h>
#include <cstddef>
#include <boost\preprocessor\enum.hpp>
#include <boost\get_pointer.hpp>
#include <boost\assert.hpp>
#include <stddef.h>
#include <debugapi.h>
#include <boost\preprocessor\repetition\enum.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <fileapi.h>
#include <boost\preprocessor\debug\error.hpp>
#include <boost\type_traits\is_arithmetic.hpp>
#include <cguid.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <cderr.h>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <dde.h>
#include <boost\preprocessor\control\if.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\config\suffix.hpp>
#include <windows.h>
#include <boost\preprocessor\facilities\empty.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\utility.hpp>
#include <winapifamily.h>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\utility\addressof.hpp>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <sdkddkver.h>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\detail\workaround.hpp>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <poppack.h>
#include <excpt.h>
#include <boost\preprocessor\tuple\eat.hpp>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <xlocinfo>
#include <boost\preprocessor\tuple\rem.hpp>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <xlocinfo.h>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <ctype.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\mpl\bool.hpp>
#include <boost\utility_fwd.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <boost\mpl\bool_fwd.hpp>
#include <climits>
#include <boost\preprocessor\inc.hpp>
#include <cmath>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <math.h>
#include <cwchar>
#include <mmiscapi2.h>
#include <list>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <memory>
#include <wchar.h>
#include <winefs.h>
#include <profileapi.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\type_traits\is_array.hpp>
#include <stdint.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\type_traits\config.hpp>
#include <inaddr.h>
#include <synchapi.h>
#include <boost\function\detail\function_iterate.hpp>
#include <share.h>
#include <xstring>
#include <mmsystem.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <xmemory0>
#include <mmsyscom.h>
#include <boost\function\function_template.hpp>
#include <cstdlib>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <limits>
#include <immintrin.h>
#include <ymath.h>
#include <stdlib.h>
#include <wmmintrin.h>
#include <limits.h>
#include <nmmintrin.h>
#include <smmintrin.h>
#include <use_ansi.h>
#include <winnetwk.h>
#include <pshpack8.h>
#include <boost\type_traits\is_class.hpp>
#include <tmmintrin.h>
#include <wnnc.h>
#include <boost\type_traits\is_union.hpp>
#include <boost\throw_exception.hpp>
#include <pmmintrin.h>
#include <stdarg.h>
#include <boost\type_traits\remove_cv.hpp>
#include <emmintrin.h>
#include <boost\checked_delete.hpp>
#include <mcx.h>
#include <oleidl.h>
#include <windef.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <xmmintrin.h>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <minwindef.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <boost\function\function_base.hpp>
#include <mmintrin.h>
#include <playsoundapi.h>
#include <specstrings.h>
#include <string>
#include <specstrings_strict.h>
#include <boost\type_traits\is_enum.hpp>
#include <iterator>
#include <handleapi.h>
#include <specstrings_undef.h>
#include <boost\type_traits\add_reference.hpp>
#include <istream>
#include <xatomic0.h>
#include <driverspecs.h>
#include <boost\type_traits\is_reference.hpp>
#include <ostream>
#include <sdv_driverspecs.h>
#include <ios>
#include <xlocnum>
#include <xdebug>
#include <threadpoolapiset.h>
#include <streambuf>
#include <xiosbase>
#include <msxml.h>
#include <objidl.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <xlocale>
#include <xutility>
#include <namespaceapi.h>
#include <typeinfo>
#include <boost\thread\thread.hpp>
#include <ktmtypes.h>
#include <boost\ref.hpp>
#include <boost\function.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <winsmcrd.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <boost\type_traits\is_pointer.hpp>
#include <xfacet>
#include <boost\preprocessor\config\config.hpp>
#include <boost\next_prior.hpp>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <minwinbase.h>
#include <boost\preprocessor\array\elem.hpp>
#include <boost\preprocessor\array\data.hpp>
#include <boost\preprocessor\tuple\elem.hpp>
#include <boost\preprocessor\array\size.hpp>
#include <boost\noncopyable.hpp>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <boost\preprocessor\cat.hpp>
#include <time.h>
#include <processenv.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <guiddef.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\function\detail\prologue.hpp>
#include <time.inl>
#include <jobapi.h>
#include <cassert>
#include <assert.h>
#include <apiset.h>
#include <algorithm>
#include <ole2.h>
#include <xmemory>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::allocator_arg_t allocator_arg; // 0x84CB9E
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB9F
}

/* ---------- public code */

_extern _sub_6D87B9(boost::mutex *const);
boost::mutex::mutex() // 0x6D87B9
{
    mangled_assert("??0mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D87B9(this);
}

_extern void _sub_6D8891(boost::mutex *const);
boost::mutex::~mutex() // 0x6D8891
{
    mangled_assert("??1mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D8891(this);
}

_extern void _sub_6D88C3(boost::mutex *const);
void boost::mutex::do_lock() // 0x6D88C3
{
    mangled_assert("?do_lock@mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D88C3(this);
}

_extern void _sub_6D898C(boost::mutex *const);
void boost::mutex::do_unlock() // 0x6D898C
{
    mangled_assert("?do_unlock@mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D898C(this);
}

_extern void _sub_6D88B8(boost::mutex *const, void *&);
void boost::mutex::do_lock(void *&) // 0x6D88B8
{
    mangled_assert("?do_lock@mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D88B8(this, arg);
}

_extern void _sub_6D8981(boost::mutex *const, void *&);
void boost::mutex::do_unlock(void *&) // 0x6D8981
{
    mangled_assert("?do_unlock@mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D8981(this, arg);
}

_extern _sub_6D885B(boost::try_mutex *const);
boost::try_mutex::try_mutex() // 0x6D885B
{
    mangled_assert("??0try_mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D885B(this);
}

_extern void _sub_6D88AF(boost::try_mutex *const);
boost::try_mutex::~try_mutex() // 0x6D88AF
{
    mangled_assert("??1try_mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D88AF(this);
}

_extern void _sub_6D88F1(boost::try_mutex *const);
void boost::try_mutex::do_lock() // 0x6D88F1
{
    mangled_assert("?do_lock@try_mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D88F1(this);
}

_extern bool _sub_6D8971(boost::try_mutex *const);
bool boost::try_mutex::do_trylock() // 0x6D8971
{
    mangled_assert("?do_trylock@try_mutex@boost@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6D8971(this);
    return __result;
}

_extern void _sub_6D89B4(boost::try_mutex *const);
void boost::try_mutex::do_unlock() // 0x6D89B4
{
    mangled_assert("?do_unlock@try_mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D89B4(this);
}

_extern void _sub_6D88E4(boost::try_mutex *const, void *&);
void boost::try_mutex::do_lock(void *&) // 0x6D88E4
{
    mangled_assert("?do_lock@try_mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D88E4(this, arg);
}

_extern void _sub_6D89A9(boost::try_mutex *const, void *&);
void boost::try_mutex::do_unlock(void *&) // 0x6D89A9
{
    mangled_assert("?do_unlock@try_mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D89A9(this, arg);
}

_extern _sub_6D8825(boost::timed_mutex *const);
boost::timed_mutex::timed_mutex() // 0x6D8825
{
    mangled_assert("??0timed_mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D8825(this);
}

_extern void _sub_6D88A6(boost::timed_mutex *const);
boost::timed_mutex::~timed_mutex() // 0x6D88A6
{
    mangled_assert("??1timed_mutex@boost@@QAE@XZ");
    todo("implement");
    _sub_6D88A6(this);
}

_extern void _sub_6D88D9(boost::timed_mutex *const);
void boost::timed_mutex::do_lock() // 0x6D88D9
{
    mangled_assert("?do_lock@timed_mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D88D9(this);
}

_extern bool _sub_6D8961(boost::timed_mutex *const);
bool boost::timed_mutex::do_trylock() // 0x6D8961
{
    mangled_assert("?do_trylock@timed_mutex@boost@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6D8961(this);
    return __result;
}

_extern bool _sub_6D88FC(boost::timed_mutex *const, boost::xtime const &);
bool boost::timed_mutex::do_timedlock(boost::xtime const &) // 0x6D88FC
{
    mangled_assert("?do_timedlock@timed_mutex@boost@@AAE_NABUxtime@2@@Z");
    todo("implement");
    bool __result = _sub_6D88FC(this, arg);
    return __result;
}

_extern void _sub_6D89A0(boost::timed_mutex *const);
void boost::timed_mutex::do_unlock() // 0x6D89A0
{
    mangled_assert("?do_unlock@timed_mutex@boost@@AAEXXZ");
    todo("implement");
    _sub_6D89A0(this);
}

_extern void _sub_6D88CC(boost::timed_mutex *const, void *&);
void boost::timed_mutex::do_lock(void *&) // 0x6D88CC
{
    mangled_assert("?do_lock@timed_mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D88CC(this, arg);
}

_extern void _sub_6D8995(boost::timed_mutex *const, void *&);
void boost::timed_mutex::do_unlock(void *&) // 0x6D8995
{
    mangled_assert("?do_unlock@timed_mutex@boost@@AAEXAAPAX@Z");
    todo("implement");
    _sub_6D8995(this, arg);
}

/* ---------- private code */
#endif
