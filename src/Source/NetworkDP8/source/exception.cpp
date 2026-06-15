#if 0
/* ---------- headers */

#include "decomp.h"
#include <localizer\localizer.h>
#include <assist\typemagic.h>
#include <crtdefs.h>
#include <locale.h>
#include <system_error>
#include <new>
#include <cerrno>
#include <xstddef>
#include <errno.h>
#include <cwchar>
#include <intrin.h>
#include <wchar.h>
#include <setjmp.h>
#include <cstdlib>
#include <streambuf>
#include <xiosbase>
#include <swprintf.inl>
#include <xlocale>
#include <cstring>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <limits>
#include <ymath.h>
#include <xtgmath.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <smmintrin.h>
#include <type_traits>
#include <tmmintrin.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <vector>
#include <utility>
#include <xatomic0.h>
#include <xmemory>
#include <iosfwd>
#include <crtdbg.h>
#include <share.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\pch.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\NetworkDP8\source\exception.h"
#include <string>
#include <xrefwrap>
#include <iterator>
#include <istream>
#include <wtime.inl>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <climits>
#include <cmath>
#include <math.h>
#include <xdebug>
#include <typeinfo>
#include <xfacet>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>
#include <cstdio>
#include <stdio.h>
#include <ammintrin.h>
#include <mm3dnow.h>

/* ---------- constants */

enum
{
    LM_HostNotFound = 1200, // 0x04B0
    LM_InvalidAddress = 1201, // 0x04B1
    LM_InvalidPassword = 1202, // 0x04B2
    LM_NoNetwork = 1203, // 0x04B3
    LM_GameFull = 1204, // 0x04B4
    LM_AuthenticationFailed = 1205, // 0x04B5
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CB66
    extern std::allocator_arg_t allocator_arg; // 0x84CB67
}

/* ---------- public code */

Net::EHostNotFound::EHostNotFound() // 0x6D5278
{
    mangled_assert("??0EHostNotFound@Net@@QAE@XZ");
    todo("implement");
}

Net::EInvalidAddress::EInvalidAddress() // 0x6D52BE
{
    mangled_assert("??0EInvalidAddress@Net@@QAE@XZ");
    todo("implement");
}

Net::EInvalidPassword::EInvalidPassword() // 0x6D5304
{
    mangled_assert("??0EInvalidPassword@Net@@QAE@XZ");
    todo("implement");
}

Net::ENoNetwork::ENoNetwork() // 0x6D534A
{
    mangled_assert("??0ENoNetwork@Net@@QAE@XZ");
    todo("implement");
}

Net::ESessionFull::ESessionFull() // 0x6D5390
{
    mangled_assert("??0ESessionFull@Net@@QAE@XZ");
    todo("implement");
}

Net::EAuthenticationFailed::EAuthenticationFailed(unsigned char const *, unsigned __int32) // 0x6D51D3
{
    mangled_assert("??0EAuthenticationFailed@Net@@QAE@PBEI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
