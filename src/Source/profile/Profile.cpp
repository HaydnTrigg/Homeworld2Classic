#if 0
/* ---------- headers */

#include "decomp.h"
#include <immintrin.h>
#include <cstdio>
#include <wmmintrin.h>
#include <stdio.h>
#include <Profile\Profile.h>
#include <nmmintrin.h>
#include <iostream>
#include <istream>
#include <smmintrin.h>
#include <ostream>
#include <tmmintrin.h>
#include <type_traits>
#include <xlocinfo>
#include <pmmintrin.h>
#include <ios>
#include <xlocnum>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <climits>
#include <mmintrin.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <xutility>
#include <crtdefs.h>
#include <xatomic0.h>
#include <utility>
#include <streambuf>
#include <sal.h>
#include <iosfwd>
#include <xiosbase>
#include <concurrencysal.h>
#include <xlocale>
#include <crtdbg.h>
#include <malloc.h>
#include <vadefs.h>
#include <cstring>
#include <share.h>
#include <string.h>
#include <limits.h>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <xdebug>
#include <typeinfo>
#include <list>
#include <xmemory>
#include <xfacet>
#include <cwchar>
#include <wchar.h>
#include <stdexcept>
#include <exception>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <cstdlib>
#include <stdlib.h>
#include <swprintf.inl>
#include <xstring>
#include <xmemory0>
#include <limits>
#include <ymath.h>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <new>
#include <use_ansi.h>
#include <locale.h>
#include <wtime.inl>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <intrin.h>
#include <setjmp.h>
#include <eh.h>
#include <xtgmath.h>
#include <xtr1common>
#include <map>
#include <xtree>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>

/* ---------- constants */

/* ---------- definitions */

typedef long long _Longlong;
typedef unsigned long _Uint32t;
typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef unsigned __int32 uint32_t;
typedef unsigned long long uint64_t;
typedef _s__CatchableTypeArray _CatchableTypeArray;
typedef std::errc::errc generic_errno;
typedef long long streamoff;
typedef unsigned long _Atomic_counter_t;
typedef void *nullptr_t;
typedef std::integral_constant<bool,1> true_type;
typedef bool _Bool;
typedef std::float_denorm_style float_denorm_style;
typedef std::integral_constant<bool,0> false_type;
typedef unsigned long _Atomic_integral_t;
typedef std::_Container_base0 _Container_base;
typedef long long streamsize;
typedef unsigned long _Uint4_t;
typedef std::basic_ostream<char,std::char_traits<char> > ostream;
typedef std::fpos<int> streampos;
typedef std::float_round_style float_round_style;
typedef std::io_errc::io_errc _Io_errc;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > string;
typedef __int32 errno_t;
typedef long long fpos_t;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef unsigned __int32 rsize_t;
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef _lldiv_t lldiv_t;
typedef void (*unexpected_function)();
typedef long long time_t;
typedef _s__CatchableType _CatchableType;
typedef void (*terminate_handler)();
typedef __int32 ptrdiff_t;
typedef localeinfo_struct *_locale_t;
typedef _ldiv_t ldiv_t;
typedef unsigned short wint_t;
typedef localerefcount locrefcount;
typedef void (*unexpected_handler)();
typedef char *va_list;
typedef long long __time64_t;
typedef unsigned __int32 size_t;
typedef void (*terminate_function)();
typedef __int32 mbstate_t;
typedef _iobuf FILE;
typedef void (*_PMFN)(void *);
typedef __int32 _Mbstatet;
typedef threadlocaleinfostruct *pthreadlocinfo;

/* ---------- prototypes */

/* ---------- globals */

extern std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > Profile::FunctionInfo::s_functions; // 0x100070F8
extern Profile::Proxy *Profile::Proxy::s_active; // 0x100070F0
extern bool Profile::Stats::s_enabled; // 0x10007000
extern Profile::MemHook const *Profile::Stats::s_memhook; // 0x100070F4
extern std::_Generic_error_category std::_Error_objects<int>::_Generic_object; // 0x10007004
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x10007008
extern std::_System_error_category std::_Error_objects<int>::_System_object; // 0x1000700C

/* ---------- private variables */

_static
{
    extern std::allocator_arg_t allocator_arg; // 0x10007100
    extern std::piecewise_construct_t piecewise_construct; // 0x10007101
}

/* ---------- public code */

_extern void _sub_10002350(Profile::Stats const *const, bool, bool, std::basic_ostream<char,std::char_traits<char> > &);
void Profile::Stats::Dump(bool, bool, std::basic_ostream<char,std::char_traits<char> > &) const // 0x10002350
{
    mangled_assert("?Dump@Stats@Profile@@QBEX_N0AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_10002350(this, arg, arg, arg);
}

_extern void _sub_10001C80(std::_List_buy<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > *const);
_inline std::_List_buy<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> >::~_List_buy<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> >() // 0x10001C80
{
    mangled_assert("??1?$_List_buy@PAVFunctionInfo@Profile@@V?$allocator@PAVFunctionInfo@Profile@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001C80(this);
}

_extern void _sub_10001D00(std::_Generic_error_category *const);
_inline std::_Generic_error_category::~_Generic_error_category() // 0x10001D00
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001D00(this);
}

_extern void _sub_10001D10(std::_Iostream_error_category *const);
_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x10001D10
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001D10(this);
}

_extern void _sub_10001D40(std::_System_error_category *const);
_inline std::_System_error_category::~_System_error_category() // 0x10001D40
{
    mangled_assert("??1_System_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001D40(this);
}

_extern void _sub_100027D0(Profile::Stats *const);
void Profile::Stats::EnterFunction() // 0x100027D0
{
    mangled_assert("?EnterFunction@Stats@Profile@@QAEXXZ");
    todo("implement");
    _sub_100027D0(this);
}

_extern void _sub_10002840(Profile::Stats *const);
void Profile::Stats::LeaveFunction() // 0x10002840
{
    mangled_assert("?LeaveFunction@Stats@Profile@@QAEXXZ");
    todo("implement");
    _sub_10002840(this);
}

_extern void _sub_10002720(bool, std::basic_ostream<char,std::char_traits<char> > &);
void Profile::FunctionInfo::DumpAll(bool bNewFormat, std::basic_ostream<char,std::char_traits<char> > &stream) // 0x10002720
{
    mangled_assert("?DumpAll@FunctionInfo@Profile@@SGX_NAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_10002720(bNewFormat, stream);
}

_extern void _sub_100020F0(Profile::FunctionInfo const *const, bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &);
void Profile::FunctionInfo::Dump(bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &) const // 0x100020F0
{
    mangled_assert("?Dump@FunctionInfo@Profile@@ABEX_NAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@ABVStats@2@@Z");
    todo("implement");
    _sub_100020F0(this, arg, arg, arg);
}

_extern void _sub_10002010();
void Profile::FunctionInfo::ClearAll() // 0x10002010
{
    mangled_assert("?ClearAll@FunctionInfo@Profile@@SGXXZ");
    todo("implement");
    _sub_10002010();
}

/* ---------- private code */
#endif
