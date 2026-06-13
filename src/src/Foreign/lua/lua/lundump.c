#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <lua\lstring.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lundump.h>
#include <lua\lzio.h>
#include <swprintf.inl>
#include <lua\lmem.h>
#include <lua\lfunc.h>
#include <lua\lobject.h>
#include <lua\llimits.h>
#include <limits.h>
#include <stddef.h>
#include <lua.h>
#include <lua\lopcodes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Proto *luaU_undump(lua_State *L, zio *Z);
extern __int32 luaU_endianess();

_static char const *ZNAME(zio *Z);
_static void unexpectedEOZ(lua_State *L, zio *Z);
_static __int32 ezgetc(lua_State *L, zio *Z);
_static void ezread(lua_State *L, zio *Z, void *b, __int32 n);
_static void LoadBlock(lua_State *L, void *b, unsigned __int32 size, zio *Z, __int32 swap);
_static void LoadVector(lua_State *L, void *b, __int32 m, unsigned __int32 size, zio *Z, __int32 swap);
_static __int32 LoadInt(lua_State *L, zio *Z, __int32 swap);
_static unsigned __int32 LoadSize(lua_State *L, zio *Z, __int32 swap);
_static double LoadNumber(lua_State *L, zio *Z, __int32 swap);
_static TString *LoadString(lua_State *L, zio *Z, __int32 swap);
_static void LoadCode(lua_State *L, Proto *tf, zio *Z, __int32 swap);
_static void LoadLocals(lua_State *L, Proto *tf, zio *Z, __int32 swap);
_static void LoadLines(lua_State *L, Proto *tf, zio *Z, __int32 swap);
_static void LoadConstants(lua_State *L, Proto *tf, zio *Z, __int32 swap);
_static Proto *LoadFunction(lua_State *L, zio *Z, __int32 swap);
_static void LoadSignature(lua_State *L, zio *Z);
_static void TestSize(lua_State *L, __int32 s, char const *what, zio *Z);
_static __int32 LoadHeader(lua_State *L, zio *Z);
_static Proto *LoadChunk(lua_State *L, zio *Z);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern Proto *_sub_1000BD32(lua_State *, zio *);
Proto *luaU_undump(lua_State *L, zio *Z) // 0x1000BD32
{
    mangled_assert("_luaU_undump@8");
    todo("implement");
    Proto * __result = _sub_1000BD32(L, Z);
    return __result;
}

_extern __int32 _sub_1000BD2E();
__int32 luaU_endianess() // 0x1000BD2E
{
    mangled_assert("_luaU_endianess@0");
    todo("implement");
    __int32 __result = _sub_1000BD2E();
    return __result;
}

/* ---------- private code */

_extern char const *_sub_1000BCBE(zio *);
_static char const *ZNAME(zio *Z) // 0x1000BCBE
{
    mangled_assert("ZNAME");
    todo("implement");
    char const * __result = _sub_1000BCBE(Z);
    return __result;
}

_extern void _sub_1000BDBA(lua_State *, zio *);
_static void unexpectedEOZ(lua_State *L, zio *Z) // 0x1000BDBA
{
    mangled_assert("unexpectedEOZ");
    todo("implement");
    _sub_1000BDBA(L, Z);
}

_extern __int32 _sub_1000BCD1(lua_State *, zio *);
_static __int32 ezgetc(lua_State *L, zio *Z) // 0x1000BCD1
{
    mangled_assert("ezgetc");
    todo("implement");
    __int32 __result = _sub_1000BCD1(L, Z);
    return __result;
}

_extern void _sub_1000BD0A(lua_State *, zio *, void *, __int32);
_static void ezread(lua_State *L, zio *Z, void *b, __int32 n) // 0x1000BD0A
{
    mangled_assert("ezread");
    todo("implement");
    _sub_1000BD0A(L, Z, b, n);
}

_extern void _sub_1000B62D(lua_State *, void *, unsigned __int32, zio *, __int32);
_static void LoadBlock(lua_State *L, void *b, unsigned __int32 size, zio *Z, __int32 swap) // 0x1000B62D
{
    mangled_assert("LoadBlock");
    todo("implement");
    _sub_1000B62D(L, b, size, Z, swap);
}

_extern void _sub_1000BBF7(lua_State *, void *, __int32, unsigned __int32, zio *, __int32);
_static void LoadVector(lua_State *L, void *b, __int32 m, unsigned __int32 size, zio *Z, __int32 swap) // 0x1000BBF7
{
    mangled_assert("LoadVector");
    todo("implement");
    _sub_1000BBF7(L, b, m, size, Z, swap);
}

_extern __int32 _sub_1000BA30(lua_State *, zio *, __int32);
_static __int32 LoadInt(lua_State *L, zio *Z, __int32 swap) // 0x1000BA30
{
    mangled_assert("LoadInt");
    todo("implement");
    __int32 __result = _sub_1000BA30(L, Z, swap);
    return __result;
}

_extern unsigned __int32 _sub_1000BB7E(lua_State *, zio *, __int32);
_static unsigned __int32 LoadSize(lua_State *L, zio *Z, __int32 swap) // 0x1000BB7E
{
    mangled_assert("LoadSize");
    todo("implement");
    unsigned __int32 __result = _sub_1000BB7E(L, Z, swap);
    return __result;
}

_extern double _sub_1000BB14(lua_State *, zio *, __int32);
_static double LoadNumber(lua_State *L, zio *Z, __int32 swap) // 0x1000BB14
{
    mangled_assert("LoadNumber");
    todo("implement");
    double __result = _sub_1000BB14(L, Z, swap);
    return __result;
}

_extern TString *_sub_1000BB9C(lua_State *, zio *, __int32);
_static TString *LoadString(lua_State *L, zio *Z, __int32 swap) // 0x1000BB9C
{
    mangled_assert("LoadString");
    todo("implement");
    TString * __result = _sub_1000BB9C(L, Z, swap);
    return __result;
}

_extern void _sub_1000B6A0(lua_State *, Proto *, zio *, __int32);
_static void LoadCode(lua_State *L, Proto *tf, zio *Z, __int32 swap) // 0x1000B6A0
{
    mangled_assert("LoadCode");
    todo("implement");
    _sub_1000B6A0(L, tf, Z, swap);
}

_extern void _sub_1000BA94(lua_State *, Proto *, zio *, __int32);
_static void LoadLocals(lua_State *L, Proto *tf, zio *Z, __int32 swap) // 0x1000BA94
{
    mangled_assert("LoadLocals");
    todo("implement");
    _sub_1000BA94(L, tf, Z, swap);
}

_extern void _sub_1000BA4E(lua_State *, Proto *, zio *, __int32);
_static void LoadLines(lua_State *L, Proto *tf, zio *Z, __int32 swap) // 0x1000BA4E
{
    mangled_assert("LoadLines");
    todo("implement");
    _sub_1000BA4E(L, tf, Z, swap);
}

_extern void _sub_1000B717(lua_State *, Proto *, zio *, __int32);
_static void LoadConstants(lua_State *L, Proto *tf, zio *Z, __int32 swap) // 0x1000B717
{
    mangled_assert("LoadConstants");
    todo("implement");
    _sub_1000B717(L, tf, Z, swap);
}

_extern Proto *_sub_1000B7ED(lua_State *, zio *, __int32);
_static Proto *LoadFunction(lua_State *L, zio *Z, __int32 swap) // 0x1000B7ED
{
    mangled_assert("LoadFunction");
    todo("implement");
    Proto * __result = _sub_1000B7ED(L, Z, swap);
    return __result;
}

_extern void _sub_1000BB34(lua_State *, zio *);
_static void LoadSignature(lua_State *L, zio *Z) // 0x1000BB34
{
    mangled_assert("LoadSignature");
    todo("implement");
    _sub_1000BB34(L, Z);
}

_extern void _sub_1000BC80(lua_State *, __int32, char const *, zio *);
_static void TestSize(lua_State *L, __int32 s, char const *what, zio *Z) // 0x1000BC80
{
    mangled_assert("TestSize");
    todo("implement");
    _sub_1000BC80(L, s, what, Z);
}

_extern __int32 _sub_1000B898(lua_State *, zio *);
_static __int32 LoadHeader(lua_State *L, zio *Z) // 0x1000B898
{
    mangled_assert("LoadHeader");
    todo("implement");
    __int32 __result = _sub_1000B898(L, Z);
    return __result;
}

_extern Proto *_sub_1000B682(lua_State *, zio *);
_static Proto *LoadChunk(lua_State *L, zio *Z) // 0x1000B682
{
    mangled_assert("LoadChunk");
    todo("implement");
    Proto * __result = _sub_1000B682(L, Z);
    return __result;
}
#endif
