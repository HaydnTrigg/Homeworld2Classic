#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\libwebm\mkvreader.hpp"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\libwebm\mkvparser.hpp"
#include <cstdlib>
#include <yvals.h>
#include <xkeycheck.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <stdlib.h>
#include <limits.h>
#include <cstddef>
#include <stddef.h>
#include <swprintf.inl>
#include <cassert>
#include <assert.h>
#include <use_ansi.h>
#include <cstdio>
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_738850(mkvparser::IMkvReader *const);
_inline mkvparser::IMkvReader::IMkvReader() // 0x738850
{
    mangled_assert("??0IMkvReader@mkvparser@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_738850(this);
}

_extern _sub_738860(mkvparser::MkvReader *const);
mkvparser::MkvReader::MkvReader() // 0x738860
{
    mangled_assert("??0MkvReader@mkvparser@@QAE@XZ");
    todo("implement");
    _sub_738860(this);
}

_extern void _sub_738870(mkvparser::MkvReader *const);
mkvparser::MkvReader::~MkvReader() // 0x738870
{
    mangled_assert("??1MkvReader@mkvparser@@UAE@XZ");
    todo("implement");
    _sub_738870(this);
}

_extern __int32 _sub_738910(mkvparser::MkvReader *const, char const *);
__int32 mkvparser::MkvReader::Open(char const *) // 0x738910
{
    mangled_assert("?Open@MkvReader@mkvparser@@QAEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_738910(this, arg);
    return __result;
}

_extern void _sub_7388B0(mkvparser::MkvReader *const);
void mkvparser::MkvReader::Close() // 0x7388B0
{
    mangled_assert("?Close@MkvReader@mkvparser@@QAEXXZ");
    todo("implement");
    _sub_7388B0(this);
}

_extern __int32 _sub_7388D0(mkvparser::MkvReader *const, long long *, long long *);
__int32 mkvparser::MkvReader::Length(long long *, long long *) // 0x7388D0
{
    mangled_assert("?Length@MkvReader@mkvparser@@UAEHPA_J0@Z");
    todo("implement");
    __int32 __result = _sub_7388D0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_738990(mkvparser::MkvReader *const, long long, long, unsigned char *);
__int32 mkvparser::MkvReader::Read(long long, long, unsigned char *) // 0x738990
{
    mangled_assert("?Read@MkvReader@mkvparser@@UAEH_JJPAE@Z");
    todo("implement");
    __int32 __result = _sub_738990(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
