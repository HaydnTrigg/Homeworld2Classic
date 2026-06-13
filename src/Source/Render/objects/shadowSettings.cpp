#if 0
/* ---------- headers */

#include "decomp.h"
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
#include <Objects\shadowSettings.h>
#include <Objects\Objects.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <debug\db.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
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
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern ShadowManager *ShadowManager::m_instance; // 0x10132C2C

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132C31
    extern std::allocator_arg_t allocator_arg; // 0x10132C30
}

/* ---------- public code */

_extern ShadowManager &_sub_10097F40(ShadowManager *const, ShadowManager const &);
_inline ShadowManager &ShadowManager::operator=(ShadowManager const &) // 0x10097F40
{
    mangled_assert("??4ShadowManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ShadowManager & __result = _sub_10097F40(this, arg);
    return __result;
}

_extern bool _sub_10097FD0();
bool ShadowManager::startup() // 0x10097FD0
{
    mangled_assert("?startup@ShadowManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10097FD0();
    return __result;
}

_extern bool _sub_10097FA0();
bool ShadowManager::shutdown() // 0x10097FA0
{
    mangled_assert("?shutdown@ShadowManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10097FA0();
    return __result;
}

/* ---------- private code */
#endif
