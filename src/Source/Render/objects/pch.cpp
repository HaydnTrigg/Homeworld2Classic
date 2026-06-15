#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xiosbase>
#include <xhash>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <limits>
#include <memory\memorylib.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <share.h>
#include <compiler\compilerconfig.h>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <map>
#include <xtree>
#include <xdebug>
#include <typeinfo>
#include <xfacet>
#include <memory.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <float.h>
#include <algorithm>
#include <crtwrn.h>
#include <util\types.h>
#include <xtr1common>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <debug\db.h>
#include <locale.h>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <errno.h>
#include <cstring>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <iterator>
#include <swprintf.inl>
#include <istream>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <climits>
#include <xtgmath.h>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

typedef char bool8;
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
typedef __int32 errno_t;
typedef long _off_t;
typedef long long fpos_t;
typedef unsigned short ushort;
typedef unsigned long _fsize_t;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef unsigned __int32 uint32;
typedef unsigned __int32 rsize_t;
typedef double real64;
typedef threadlocaleinfostruct threadlocinfo;
typedef long long _Longlong;
typedef unsigned long _Uint32t;
typedef void (*_se_translator_function)(unsigned __int32, _EXCEPTION_POINTERS *);
typedef unsigned char uint8;
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef unsigned __int32 uintptr_t;
typedef void *_HFILE;
typedef _lldiv_t lldiv_t;
typedef _div_t div_t;
typedef unsigned short uint16;
typedef void (*unexpected_function)();
typedef long long time_t;
typedef __int32 int32;
typedef wchar_t _Wint_t;
typedef _s__CatchableType _CatchableType;
typedef void (*terminate_handler)();
typedef unsigned __int32 udword;
typedef char __static_assert_t[1];
typedef char sbyte;
typedef long off_t;
typedef unsigned long long uint64;
typedef __int32 ptrdiff_t;
typedef wchar_t wide_char_type;
typedef localeinfo_struct *_locale_t;
typedef __int32 (*_CRT_REPORT_HOOKW)(__int32, wchar_t *, __int32 *);
typedef type_info const &__RTtypeidReturnType;
typedef __int32 sdword;
typedef _ldiv_t ldiv_t;
typedef unsigned short wint_t;
typedef char int8;
typedef localerefcount locrefcount;
typedef void (*unexpected_handler)();
typedef float float32;
typedef void (*dbStringOutputCB)(char const **, unsigned __int32, unsigned long);
typedef char *va_list;
typedef __JUMP_BUFFER _JUMP_BUFFER;
typedef _heapinfo _HEAPINFO;
typedef unsigned __int32 dev_t;
typedef _s__RTTICompleteObjectLocator __RTTICompleteObjectLocator;
typedef void (*_purecall_handler)();
typedef short int16;
typedef long long __time64_t;
typedef _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;
typedef long long sqword;
typedef __int32 (*_CRT_REPORT_HOOK)(__int32, char *, __int32 *);
typedef _s__ThrowInfo _ThrowInfo;
typedef unsigned long long _ULonglong;
typedef unsigned short _ino_t;
typedef __int32 intptr_t;
typedef short bool16;
typedef unsigned long long uqword;
typedef unsigned __int32 size_t;
typedef void (*terminate_function)();
typedef void (*_CRT_DUMP_CLIENT)(void *, unsigned __int32);
typedef __int32 mbstate_t;
typedef unsigned short wctype_t;
typedef _GUID const &__rcGUID_t;
typedef double float64;
typedef unsigned __int32 uint;
typedef __int32 (*_CRT_ALLOC_HOOK)(__int32, void *, unsigned __int32, __int32, long, unsigned char const *, __int32);
typedef localeinfo_struct _locale_tstruct;
typedef _iobuf FILE;
typedef void (*MEMCBALLOCPTR)(_HMEMPOOL *const &, MEMBLOCKINFO const &);
typedef unsigned __int32 _dev_t;
typedef unsigned short uword;
typedef long long int64;
typedef unsigned short ino_t;
typedef void (*_PMFN)(void *);
typedef __int32 jmp_buf[16];
typedef float real32;
typedef unsigned __int32 char32_t;
typedef void (*_invalid_parameter_handler)(wchar_t const *, wchar_t const *, wchar_t const *, unsigned __int32, unsigned __int32);
typedef __int32 _Mbstatet;
typedef unsigned char ubyte;
typedef threadlocaleinfostruct *pthreadlocinfo;
typedef short sword;
typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef long __time32_t;

/* ---------- prototypes */

/* ---------- globals */

extern __int32 __@@_PchSym_@00@UsrxplibRkxhsrkUslnvdliowCxozhhrxUhixUrmgvinvwrzgvUhlfixvUivmwviUlyqvxghUivovzhvUlyqUkxsOlyq@288FE2B26DB6F749; // 0x101A5684

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x101A5689
    extern std::allocator_arg_t allocator_arg; // 0x101A5688
}

/* ---------- public code */

/* ---------- private code */
#endif
