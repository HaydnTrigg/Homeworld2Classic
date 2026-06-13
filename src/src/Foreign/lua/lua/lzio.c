#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lzio.h>
#include <swprintf.inl>
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

typedef threadmbcinfostruct *pthreadmbcinfo;
typedef unsigned short wchar_t;
typedef localeinfo_struct *_locale_t;
typedef localerefcount locrefcount;
typedef char *va_list;
typedef zio ZIO;
typedef unsigned __int32 size_t;
typedef _iobuf FILE;
typedef threadlocaleinfostruct *pthreadlocinfo;

/* ---------- prototypes */

extern zio *luaZ_mopen(zio *z, char const *b, unsigned __int32 size, char const *name);
extern zio *luaZ_sopen(zio *z, char const *s, char const *name);
extern zio *luaZ_Fopen(zio *z, _iobuf *f, char const *name);
extern unsigned __int32 luaZ_read(zio *z, void *b, unsigned __int32 n);

_static __int32 zmfilbuf(zio *z);
_static __int32 zffilbuf(zio *z);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern zio *_sub_1000D097(zio *, char const *, unsigned __int32, char const *);
zio *luaZ_mopen(zio *z, char const *b, unsigned __int32 size, char const *name) // 0x1000D097
{
    mangled_assert("_luaZ_mopen@16");
    todo("implement");
    zio * __result = _sub_1000D097(z, b, size, name);
    return __result;
}

_extern zio *_sub_1000D118(zio *, char const *, char const *);
zio *luaZ_sopen(zio *z, char const *s, char const *name) // 0x1000D118
{
    mangled_assert("_luaZ_sopen@12");
    todo("implement");
    zio * __result = _sub_1000D118(z, s, name);
    return __result;
}

_extern zio *_sub_1000D06A(zio *, _iobuf *, char const *);
zio *luaZ_Fopen(zio *z, _iobuf *f, char const *name) // 0x1000D06A
{
    mangled_assert("_luaZ_Fopen@12");
    todo("implement");
    zio * __result = _sub_1000D06A(z, f, name);
    return __result;
}

_extern unsigned __int32 _sub_1000D0C5(zio *, void *, unsigned __int32);
unsigned __int32 luaZ_read(zio *z, void *b, unsigned __int32 n) // 0x1000D0C5
{
    mangled_assert("_luaZ_read@12");
    todo("implement");
    unsigned __int32 __result = _sub_1000D0C5(z, b, n);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_1000D190(zio *);
_static __int32 zmfilbuf(zio *z) // 0x1000D190
{
    mangled_assert("zmfilbuf");
    todo("implement");
    __int32 __result = _sub_1000D190(z);
    return __result;
}

_extern __int32 _sub_1000D141(zio *);
_static __int32 zffilbuf(zio *z) // 0x1000D141
{
    mangled_assert("zffilbuf");
    todo("implement");
    __int32 __result = _sub_1000D141(z);
    return __result;
}
#endif
