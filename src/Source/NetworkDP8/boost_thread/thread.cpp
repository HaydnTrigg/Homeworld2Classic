#if 0
/* ---------- headers */

#include "decomp.h"
#include <driverspecs.h>
#include <xfacet>
#include <sdv_driverspecs.h>
#include <iosfwd>
#include <cstdio>
#include <threadpoolapiset.h>
#include <stdio.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\boost_thread\thread.hpp"
#include <boost\config.hpp>
#include <msxml.h>
#include <objidl.h>
#include <boost\type_traits\is_class.hpp>
#include <boost\function.hpp>
#include <wtime.inl>
#include <boost\config\user.hpp>
#include <namespaceapi.h>
#include <boost\thread\xtime.hpp>
#include <boost\type_traits\is_union.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <ktmtypes.h>
#include <boost\cstdint.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\throw_exception.hpp>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <winsmcrd.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <boost\preprocessor\config\config.hpp>
#include <utility>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <xstddef>
#include <mmiscapi.h>
#include <wincon.h>
#include <winbase.h>
#include <boost\type_traits\is_enum.hpp>
#include <boost\function\function_base.hpp>
#include <boost\preprocessor\array\elem.hpp>
#include <yvals.h>
#include <mmeapi.h>
#include <apisetcconv.h>
#include <boost\type_traits\add_reference.hpp>
#include <stdexcept>
#include <boost\preprocessor\array\data.hpp>
#include <xkeycheck.h>
#include <minwinbase.h>
#include <boost\type_traits\is_reference.hpp>
#include <xstring>
#include <boost\preprocessor\tuple\elem.hpp>
#include <crtdefs.h>
#include <boost\preprocessor\array\size.hpp>
#include <sal.h>
#include <malloc.h>
#include <boost\preprocessor\cat.hpp>
#include <concurrencysal.h>
#include <climits>
#include <boost\preprocessor\slot\slot.hpp>
#include <vadefs.h>
#include <ime_cmodes.h>
#include <errhandlingapi.h>
#include <cmath>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <process.h>
#include <processenv.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <math.h>
#include <boost\function\detail\prologue.hpp>
#include <xtr1common>
#include <guiddef.h>
#include <cassert>
#include <boost\ref.hpp>
#include <assert.h>
#include <jobapi.h>
#include <algorithm>
#include <xmemory>
#include <apiset.h>
#include <xmemory0>
#include <ole2.h>
#include <boost\type_traits\is_pointer.hpp>
#include <cstdlib>
#include <objbase.h>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <limits>
#include <combaseapi.h>
#include <wow64apiset.h>
#include <ymath.h>
#include <shellapi.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <kernelspecs.h>
#include <pshpack2.h>
#include <basetsd.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <boost\thread\condition.hpp>
#include <type_traits>
#include <ncrypt.h>
#include <winreg.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <winsock.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <commdlg.h>
#include <nb30.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <ammintrin.h>
#include <timeapi.h>
#include <mm3dnow.h>
#include <propidl.h>
#include <dpapi.h>
#include <crtdbg.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <imm.h>
#include <fibersapi.h>
#include <boost\pending\ct_if.hpp>
#include <locale.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <cstring>
#include <winscard.h>
#include <winver.h>
#include <boost\config\select_platform_config.hpp>
#include <string.h>
#include <wtypes.h>
#include <verrsrc.h>
#include <list>
#include <boost\config\platform\win32.hpp>
#include <rpcndr.h>
#include <boost\type_traits\is_stateless.hpp>
#include <swprintf.inl>
#include <rpcnsip.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <system_error>
#include <stralign.h>
#include <mciapi.h>
#include <boost\type_traits\is_pod.hpp>
#include <cerrno>
#include <xrefwrap>
#include <winuser.h>
#include <boost\type_traits\is_scalar.hpp>
#include <errno.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <consoleapi.h>
#include <boost\type_traits\intrinsics.hpp>
#include <winsvc.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\boost_thread\timeconv.inl"
#include <winperf.h>
#include <dlgs.h>
#include <memoryapi.h>
#include <cstddef>
#include <stddef.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <boost\type_traits\is_convertible.hpp>
#include <wingdi.h>
#include <pshpack4.h>
#include <boost\type_traits\is_empty.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <urlmon.h>
#include <rpc.h>
#include <boost\type_traits\is_float.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <joystickapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <rpcdce.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <boost\config\suffix.hpp>
#include <winerror.h>
#include <boost\utility.hpp>
#include <bcrypt.h>
#include <boost\utility\addressof.hpp>
#include <boost\detail\workaround.hpp>
#include <lzexpand.h>
#include <ddeml.h>
#include <intrin.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <setjmp.h>
#include <wincrypt.h>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\is_void.hpp>
#include <boost\utility\base_from_member.hpp>
#include <boost\type_traits\detail\ice_and.hpp>
#include <boost\utility_fwd.hpp>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <cwchar>
#include <wchar.h>
#include <rpcsal.h>
#include <securitybaseapi.h>
#include <boost\bind\mem_fn_cc.hpp>
#include <oleauto.h>
#include <servprov.h>
#include <winioctl.h>
#include <stdlib.h>
#include <xlocinfo>
#include <cfloat>
#include <limits.h>
#include <debugapi.h>
#include <xlocinfo.h>
#include <float.h>
#include <fileapi.h>
#include <ctype.h>
#include <crtwrn.h>
#include <use_ansi.h>
#include <cguid.h>
#include <cderr.h>
#include <boost\checked_delete.hpp>
#include <dde.h>
#include <boost\type_traits\is_same.hpp>
#include <memory>
#include <windows.h>
#include <stdint.h>
#include <winapifamily.h>
#include <xtgmath.h>
#include <winspool.h>
#include <wtypesbase.h>
#include <rpcnterr.h>
#include <threadpoollegacyapiset.h>
#include <sdkddkver.h>
#include <share.h>
#include <prsht.h>
#include <rpcasync.h>
#include <rpcnsi.h>
#include <poppack.h>
#include <excpt.h>
#include <boost\mem_fn.hpp>
#include <immintrin.h>
#include <boost\preprocessor\enum.hpp>
#include <boost\get_pointer.hpp>
#include <boost\assert.hpp>
#include <wmmintrin.h>
#include <boost\preprocessor\repetition\enum.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <nmmintrin.h>
#include <boost\preprocessor\debug\error.hpp>
#include <boost\type_traits\is_arithmetic.hpp>
#include <smmintrin.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\type_traits\is_integral.hpp>
#include <tmmintrin.h>
#include <boost\preprocessor\control\iif.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <pmmintrin.h>
#include <mmiscapi2.h>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <emmintrin.h>
#include <winefs.h>
#include <profileapi.h>
#include <boost\preprocessor\control\if.hpp>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <xmmintrin.h>
#include <boost\preprocessor\logical\bool.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <mmintrin.h>
#include <inaddr.h>
#include <synchapi.h>
#include <boost\preprocessor\facilities\empty.hpp>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <mmsystem.h>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\next_prior.hpp>
#include <mmsyscom.h>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <string>
#include <xatomic0.h>
#include <new>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <boost\preprocessor\tuple\eat.hpp>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <iterator>
#include <exception>
#include <boost\preprocessor\tuple\rem.hpp>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <istream>
#include <eh.h>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <ostream>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\mpl\bool.hpp>
#include <ios>
#include <boost\noncopyable.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <boost\mpl\bool_fwd.hpp>
#include <xlocnum>
#include <xdebug>
#include <winnetwk.h>
#include <pshpack8.h>
#include <boost\preprocessor\inc.hpp>
#include <streambuf>
#include <xutility>
#include <wnnc.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <xiosbase>
#include <stdarg.h>
#include <boost\thread\mutex.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <xlocale>
#include <mcx.h>
#include <oleidl.h>
#include <windef.h>
#include <boost\thread\detail\lock.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\type_traits\is_array.hpp>
#include <typeinfo>
#include <rpcdcep.h>
#include <bemapiset.h>
#include <minwindef.h>
#include <boost\thread\exceptions.hpp>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\type_traits\config.hpp>
#include <playsoundapi.h>
#include <specstrings.h>
#include <boost\thread\detail\config.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <specstrings_strict.h>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <handleapi.h>
#include <specstrings_undef.h>
#include <boost\function\function_template.hpp>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::thread_param
{
public:
    thread_param(`anonymous-namespace'::thread_param const &); /* compiler_generated() */
    thread_param(boost::function0<void,std::allocator<boost::function_base> > const &);
    void wait();
    void started();
    boost::mutex m_mutex; // 0x0
    boost::condition m_condition; // 0x4
    boost::function0<void,std::allocator<boost::function_base> > const &m_threadfunc; // 0x1C
    bool m_started; // 0x20
    ~thread_param(); /* compiler_generated() */
    `anonymous-namespace'::thread_param &operator=(`anonymous-namespace'::thread_param const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::thread_param) == 36, "Invalid `anonymous-namespace'::thread_param size");

typedef `anonymous-namespace'::thread_param ?A0xf6567e27::thread_param;

/* ---------- prototypes */

extern unsigned __int32 thread_proxy(void *param);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::allocator_arg_t allocator_arg; // 0x84CB98
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB99
}

/* ---------- public code */

_extern _sub_6D7C50(boost::bad_function_call *const, boost::bad_function_call const &);
_inline boost::bad_function_call::bad_function_call(boost::bad_function_call const &) // 0x6D7C50
{
    mangled_assert("??0bad_function_call@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6D7C50(this, arg);
}

_extern _sub_6D7C9B(boost::lock_error *const, boost::lock_error const &);
_inline boost::lock_error::lock_error(boost::lock_error const &) // 0x6D7C9B
{
    mangled_assert("??0lock_error@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6D7C9B(this, arg);
}

_extern _sub_6D7CB7(std::runtime_error *const, std::runtime_error const &);
_inline std::runtime_error::runtime_error(std::runtime_error const &) // 0x6D7CB7
{
    mangled_assert("??0runtime_error@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6D7CB7(this, arg);
}

_extern unsigned __int32 _sub_6D86A1(void *);
unsigned __int32 thread_proxy(void *param) // 0x6D86A1
{
    mangled_assert("_thread_proxy@4");
    todo("implement");
    unsigned __int32 __result = _sub_6D86A1(param);
    return __result;
}

_extern _sub_6D7D85(boost::thread *const);
boost::thread::thread() // 0x6D7D85
{
    mangled_assert("??0thread@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7D85(this);
}

_extern _sub_6D7CF0(boost::thread *const, boost::function0<void,std::allocator<boost::function_base> > const &);
boost::thread::thread(boost::function0<void,std::allocator<boost::function_base> > const &) // 0x6D7CF0
{
    mangled_assert("??0thread@boost@@QAE@ABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@1@@Z");
    todo("implement");
    _sub_6D7CF0(this, arg);
}

_extern void _sub_6D7E94(boost::thread *const);
boost::thread::~thread() // 0x6D7E94
{
    mangled_assert("??1thread@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7E94(this);
}

_extern bool _sub_6D7F64(boost::thread const *const, boost::thread const &);
bool boost::thread::operator==(boost::thread const &) const // 0x6D7F64
{
    mangled_assert("??8thread@boost@@QBE_NABV01@@Z");
    todo("implement");
    bool __result = _sub_6D7F64(this, arg);
    return __result;
}

_extern bool _sub_6D7F9F(boost::thread const *const, boost::thread const &);
bool boost::thread::operator!=(boost::thread const &) const // 0x6D7F9F
{
    mangled_assert("??9thread@boost@@QBE_NABV01@@Z");
    todo("implement");
    bool __result = _sub_6D7F9F(this, arg);
    return __result;
}

_extern void _sub_6D838D(boost::thread *const);
void boost::thread::join() // 0x6D838D
{
    mangled_assert("?join@thread@boost@@QAEXXZ");
    todo("implement");
    _sub_6D838D(this);
}

_extern void _sub_6D84C9(boost::xtime const &);
void boost::thread::sleep(boost::xtime const &xt) // 0x6D84C9
{
    mangled_assert("?sleep@thread@boost@@SGXABUxtime@2@@Z");
    todo("implement");
    _sub_6D84C9(xt);
}

_extern void _sub_6D8698();
void boost::thread::yield() // 0x6D8698
{
    mangled_assert("?yield@thread@boost@@SGXXZ");
    todo("implement");
    _sub_6D8698();
}

_extern _sub_6D7DA1(boost::thread_group *const);
boost::thread_group::thread_group() // 0x6D7DA1
{
    mangled_assert("??0thread_group@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7DA1(this);
}

_extern _sub_6D7E1B(boost::thread_resource_error *const, boost::thread_resource_error const &);
_inline boost::thread_resource_error::thread_resource_error(boost::thread_resource_error const &) // 0x6D7E1B
{
    mangled_assert("??0thread_resource_error@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6D7E1B(this, arg);
}

_extern void _sub_6D7E40(std::_List_buy<boost::thread *,std::allocator<boost::thread *> > *const);
_inline std::_List_buy<boost::thread *,std::allocator<boost::thread *> >::~_List_buy<boost::thread *,std::allocator<boost::thread *> >() // 0x6D7E40
{
    mangled_assert("??1?$_List_buy@PAVthread@boost@@V?$allocator@PAVthread@boost@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D7E40(this);
}

_extern void _sub_6D7E7D(boost::bad_function_call *const);
_inline boost::bad_function_call::~bad_function_call() // 0x6D7E7D
{
    mangled_assert("??1bad_function_call@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D7E7D(this);
}

_extern void _sub_6D7E88(boost::lock_error *const);
_inline boost::lock_error::~lock_error() // 0x6D7E88
{
    mangled_assert("??1lock_error@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D7E88(this);
}

_extern void _sub_6D7EA3(boost::thread_group *const);
boost::thread_group::~thread_group() // 0x6D7EA3
{
    mangled_assert("??1thread_group@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7EA3(this);
}

_extern void _sub_6D7E8E(std::runtime_error *const);
_inline std::runtime_error::~runtime_error() // 0x6D7E8E
{
    mangled_assert("??1runtime_error@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D7E8E(this);
}

_extern void _sub_6D7F38(boost::thread_resource_error *const);
_inline boost::thread_resource_error::~thread_resource_error() // 0x6D7F38
{
    mangled_assert("??1thread_resource_error@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D7F38(this);
}

_extern boost::thread *_sub_6D82C9(boost::thread_group *const, boost::function0<void,std::allocator<boost::function_base> > const &);
boost::thread *boost::thread_group::create_thread(boost::function0<void,std::allocator<boost::function_base> > const &) // 0x6D82C9
{
    mangled_assert("?create_thread@thread_group@boost@@QAEPAVthread@2@ABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@2@@Z");
    todo("implement");
    boost::thread * __result = _sub_6D82C9(this, arg);
    return __result;
}

_extern void _sub_6D81DC(boost::thread_group *const, boost::thread *);
void boost::thread_group::add_thread(boost::thread *) // 0x6D81DC
{
    mangled_assert("?add_thread@thread_group@boost@@QAEXPAVthread@2@@Z");
    todo("implement");
    _sub_6D81DC(this, arg);
}

_extern void _sub_6D8476(boost::thread_group *const, boost::thread *);
void boost::thread_group::remove_thread(boost::thread *) // 0x6D8476
{
    mangled_assert("?remove_thread@thread_group@boost@@QAEXPAVthread@2@@Z");
    todo("implement");
    _sub_6D8476(this, arg);
}

_extern void _sub_6D83A8(boost::thread_group *const);
void boost::thread_group::join_all() // 0x6D83A8
{
    mangled_assert("?join_all@thread_group@boost@@QAEXXZ");
    todo("implement");
    _sub_6D83A8(this);
}

/* ---------- private code */
#endif
