#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <time.inl>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <pch.h>
#include <boost\config\select_stdlib_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <malloc.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <boost\config\platform\win32.hpp>
#include <sal.h>
#include <concurrencysal.h>
#include <intrin.h>
#include <vadefs.h>
#include <setjmp.h>
#include <debug\ctassert.h>
#include <new>
#include <exception>
#include <set>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <algorithm>
#include <tuple>
#include <xmemory>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <cstdlib>
#include <limits>
#include <ymath.h>
#include <bitset>
#include <xlocinfo>
#include <string>
#include <xlocinfo.h>
#include <ctype.h>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <nmmintrin.h>
#include <stdio.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <string.h>
#include <queue>
#include <pmmintrin.h>
#include <debug\db.h>
#include <deque>
#include <share.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <crtdbg.h>
#include <vector>
#include <iterator>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <boost\throw_exception.hpp>
#include <ios>
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include <streambuf>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <boost\detail\lightweight_mutex.hpp>
#include <xlocale>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include <hash_set>
#include <xhash>
#include <list>
#include <stdexcept>
#include <xstring>
#include <xtr1common>
#include <cstring>
#include <eh.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <swprintf.inl>
#include <boost\shared_array.hpp>
#include <climits>
#include <cwchar>
#include <wchar.h>
#include <functional>
#include <xfunctional>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <stdlib.h>
#include <limits.h>
#include <cfloat>
#include <stack>
#include <float.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <locale.h>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>

/* ---------- constants */

/* ---------- definitions */

typedef _s__CatchableTypeArray _CatchableTypeArray;
typedef __int32 (*_onexit_t)();
typedef unsigned short char16_t;
typedef std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t> > > wnumget;
typedef double max_align_t;
typedef std::basic_ios<char,std::char_traits<char> > ios;
typedef std::basic_streambuf<char,std::char_traits<char> > streambuf;
typedef std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char> > > numput;
typedef std::errc::errc generic_errno;
typedef long long streamoff;
typedef long _Atomic_flag_t;
typedef std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char> > > numget;
typedef unsigned long _Atomic_counter_t;
typedef std::basic_istream<wchar_t,std::char_traits<wchar_t> > wistream;
typedef std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t> > > wnumput;
typedef void *nullptr_t;
typedef void (*new_handler)();
typedef std::pointer_safety::pointer_safety _Pointer_safety;
typedef std::integral_constant<bool,1> true_type;
typedef bool _Bool;
typedef std::float_denorm_style float_denorm_style;
typedef std::integral_constant<bool,0> false_type;
typedef void (*_Prhand)(std::exception const &);
typedef unsigned long _Atomic_integral_t;
typedef std::basic_istream<char,std::char_traits<char> > istream;
typedef std::_Container_base0 _Container_base;
typedef long long streamsize;
typedef std::basic_ios<wchar_t,std::char_traits<wchar_t> > wios;
typedef unsigned long _Uint4_t;
typedef std::fpos<int> wstreampos;
typedef std::basic_ostream<char,std::char_traits<char> > ostream;
typedef std::basic_ostream<wchar_t,std::char_traits<wchar_t> > wostream;
typedef std::fpos<int> streampos;
typedef std::basic_streambuf<wchar_t,std::char_traits<wchar_t> > wstreambuf;
typedef std::basic_iostream<wchar_t,std::char_traits<wchar_t> > wiostream;
typedef std::_Iterator_base0 _Iterator_base;
typedef std::float_round_style float_round_style;
typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > wstring;
typedef std::io_errc::io_errc _Io_errc;
typedef unsigned __int32 _Vbase;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > string;
typedef std::basic_iostream<char,std::char_traits<char> > iostream;
typedef unsigned long long uint_least64_t;
typedef unsigned long long uintmax_t;
typedef __int32 errno_t;
typedef long _off_t;
typedef long long fpos_t;
typedef unsigned long _fsize_t;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef unsigned __int32 rsize_t;
typedef threadlocaleinfostruct threadlocinfo;
typedef long long _Longlong;
typedef unsigned long _Uint32t;
typedef void (*_se_translator_function)(unsigned __int32, _EXCEPTION_POINTERS *);
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef char int8_t;
typedef long long int_least64_t;
typedef unsigned __int32 uintptr_t;
typedef void *_HFILE;
typedef _lldiv_t lldiv_t;
typedef __int32 int_least32_t;
typedef _div_t div_t;
typedef char int_fast8_t;
typedef void (*unexpected_function)();
typedef unsigned short uint16_t;
typedef long long time_t;
typedef __int32 int32_t;
typedef unsigned char uint_fast8_t;
typedef wchar_t _Wint_t;
typedef _s__CatchableType _CatchableType;
typedef unsigned __int32 uint32_t;
typedef unsigned long long uint64_t;
typedef long long intmax_t;
typedef long long int_fast64_t;
typedef void (*terminate_handler)();
typedef char __static_assert_t[1];
typedef long off_t;
typedef unsigned char uint8_t;
typedef __int32 ptrdiff_t;
typedef wchar_t wide_char_type;
typedef unsigned short uint_least16_t;
typedef localeinfo_struct *_locale_t;
typedef __int32 (*_CRT_REPORT_HOOKW)(__int32, wchar_t *, __int32 *);
typedef type_info const &__RTtypeidReturnType;
typedef _ldiv_t ldiv_t;
typedef unsigned short wint_t;
typedef unsigned __int32 uint_least32_t;
typedef char int_least8_t;
typedef unsigned __int32 uint_fast32_t;
typedef localerefcount locrefcount;
typedef void (*unexpected_handler)();
typedef void (*dbStringOutputCB)(char const **, unsigned __int32, unsigned long);
typedef short int16_t;
typedef char *va_list;
typedef __int32 int_fast32_t;
typedef __JUMP_BUFFER _JUMP_BUFFER;
typedef _heapinfo _HEAPINFO;
typedef unsigned __int32 dev_t;
typedef _s__RTTICompleteObjectLocator __RTTICompleteObjectLocator;
typedef void (*_purecall_handler)();
typedef __int32 int_fast16_t;
typedef long long __time64_t;
typedef _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;
typedef __int32 (*_CRT_REPORT_HOOK)(__int32, char *, __int32 *);
typedef _s__ThrowInfo _ThrowInfo;
typedef unsigned long long _ULonglong;
typedef unsigned short _ino_t;
typedef __int32 intptr_t;
typedef unsigned __int32 uint_fast16_t;
typedef unsigned __int32 size_t;
typedef long long int64_t;
typedef void (*terminate_function)();
typedef void (*_CRT_DUMP_CLIENT)(void *, unsigned __int32);
typedef __int32 mbstate_t;
typedef unsigned long long uint_fast64_t;
typedef unsigned short wctype_t;
typedef _GUID const &__rcGUID_t;
typedef __int32 (*_CRT_ALLOC_HOOK)(__int32, void *, unsigned __int32, __int32, long, unsigned char const *, __int32);
typedef localeinfo_struct _locale_tstruct;
typedef _iobuf FILE;
typedef void (*MEMCBALLOCPTR)(_HMEMPOOL *const &, MEMBLOCKINFO const &);
typedef unsigned __int32 _dev_t;
typedef unsigned char uint_least8_t;
typedef unsigned short ino_t;
typedef void (*_PMFN)(void *);
typedef __int32 jmp_buf[16];
typedef short int_least16_t;
typedef unsigned __int32 char32_t;
typedef long clock_t;
typedef void (*_invalid_parameter_handler)(wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32, unsigned __int32);
typedef __int32 _Mbstatet;
typedef threadlocaleinfostruct *pthreadlocinfo;
typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef long __time32_t;

/* ---------- prototypes */

/* ---------- globals */

extern __int32 __@@_PchSym_@00@UsrxplibRkxhsrkUslnvdliowCxozhhrxUhixUrmgvinvwrzgvUhlfixvUurovrlUivovzhvUlyqUkxsOlyq@41C4BBBD0C5BEC8A; // 0x1001F878

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F87D
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F87C
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F87F
    extern std::allocator_arg_t allocator_arg; // 0x1001F87E
}

/* ---------- public code */

/* ---------- private code */
#endif
