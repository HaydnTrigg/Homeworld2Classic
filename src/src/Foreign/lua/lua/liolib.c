#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <Mem\LuaCType.h>
#include <limits.h>
#include <assist\asciictype.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <wtime.inl>
#include <luadebug.h>
#include <errno.h>
#include <lua\lmem.h>
#include <lua\llimits.h>
#include <time.h>
#include <time.inl>
#include <swprintf.inl>
#include <lauxlib.h>
#include <lualib.h>
#include <lua.h>
#include <stddef.h>
#include <string.h>

/* ---------- constants */

/* ---------- definitions */

struct IOCtrl
{
    __int32 ref[2]; // 0x0
    __int32 iotag; // 0x8
    __int32 closedtag; // 0xC
};
static_assert(sizeof(IOCtrl) == 16, "Invalid IOCtrl size");

typedef __int32 errno_t;
typedef long long time_t;
typedef long long __time64_t;
typedef long clock_t;

/* ---------- prototypes */

extern __int32 errorfb(lua_State *L);
extern void lua_miniolibopen(lua_State *L);
extern void lua_iolibopen(lua_State *L);

_static __int32 pushresult(lua_State *L, __int32 i);
_static _iobuf *gethandle(lua_State *L, IOCtrl *ctrl, __int32 f);
_static _iobuf *getnonullfile(lua_State *L, IOCtrl *ctrl, __int32 arg);
_static _iobuf *getfilebyref(lua_State *L, IOCtrl *ctrl, __int32 inout);
_static void setfilebyname(lua_State *L, IOCtrl *ctrl, _iobuf *f, char const *name);
_static __int32 setreturn(lua_State *L, IOCtrl *ctrl, _iobuf *f, __int32 inout);
_static __int32 closefile(lua_State *L, IOCtrl *ctrl, _iobuf *f);
_static __int32 io_close(lua_State *L);
_static __int32 file_collect(lua_State *L);
_static __int32 io_open(lua_State *L);
_static __int32 io_fromto(lua_State *L, __int32 inout, char const *mode);
_static __int32 io_readfrom(lua_State *L);
_static __int32 io_writeto(lua_State *L);
_static __int32 io_appendto(lua_State *L);
_static __int32 read_number(lua_State *L, _iobuf *f);
_static __int32 read_word(lua_State *L, _iobuf *f);
_static __int32 read_line(lua_State *L, _iobuf *f);
_static void read_file(lua_State *L, _iobuf *f);
_static __int32 read_chars(lua_State *L, _iobuf *f, unsigned __int32 n);
_static __int32 io_read(lua_State *L);
_static __int32 io_write(lua_State *L);
_static __int32 io_seek(lua_State *L);
_static __int32 io_flush(lua_State *L);
_static __int32 io_execute(lua_State *L);
_static __int32 io_remove(lua_State *L);
_static __int32 io_rename(lua_State *L);
_static __int32 io_tmpname(lua_State *L);
_static __int32 io_getenv(lua_State *L);
_static __int32 io_clock(lua_State *L);
_static __int32 io_date(lua_State *L);
_static __int32 io_debug(lua_State *L);
_static void openwithcontrol(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern luaL_reg const miniolib[1]; // 0x1000FE44
    extern luaL_reg const iolib[9]; // 0x1000FE50
    extern luaL_reg const iolibtag[9]; // 0x1000FE98
    extern char const *const filenames[2]; // 0x1000FEE0
}

/* ---------- public code */

_extern __int32 _sub_10005C13(lua_State *);
__int32 errorfb(lua_State *L) // 0x10005C13
{
    mangled_assert("_errorfb@4");
    todo("implement");
    __int32 __result = _sub_10005C13(L);
    return __result;
}

_extern void _sub_100061B2(lua_State *);
void lua_miniolibopen(lua_State *L) // 0x100061B2
{
    mangled_assert("_lua_miniolibopen@4");
    todo("implement");
    _sub_100061B2(L);
}

_extern void _sub_1000619D(lua_State *);
void lua_iolibopen(lua_State *L) // 0x1000619D
{
    mangled_assert("_lua_iolibopen@4");
    todo("implement");
    _sub_1000619D(L);
}

/* ---------- private code */

_extern __int32 _sub_100062BE(lua_State *, __int32);
_static __int32 pushresult(lua_State *L, __int32 i) // 0x100062BE
{
    mangled_assert("pushresult");
    todo("implement");
    __int32 __result = _sub_100062BE(L, i);
    return __result;
}

_extern _iobuf *_sub_10006091(lua_State *, IOCtrl *, __int32);
_static _iobuf *gethandle(lua_State *L, IOCtrl *ctrl, __int32 f) // 0x10006091
{
    mangled_assert("gethandle");
    todo("implement");
    _iobuf * __result = _sub_10006091(L, ctrl, f);
    return __result;
}

_extern _iobuf *_sub_100060D6(lua_State *, IOCtrl *, __int32);
_static _iobuf *getnonullfile(lua_State *L, IOCtrl *ctrl, __int32 arg) // 0x100060D6
{
    mangled_assert("getnonullfile");
    todo("implement");
    _iobuf * __result = _sub_100060D6(L, ctrl, arg);
    return __result;
}

_extern _iobuf *_sub_1000603F(lua_State *, IOCtrl *, __int32);
_static _iobuf *getfilebyref(lua_State *L, IOCtrl *ctrl, __int32 inout) // 0x1000603F
{
    mangled_assert("getfilebyref");
    todo("implement");
    _iobuf * __result = _sub_1000603F(L, ctrl, inout);
    return __result;
}

_extern void _sub_1000659A(lua_State *, IOCtrl *, _iobuf *, char const *);
_static void setfilebyname(lua_State *L, IOCtrl *ctrl, _iobuf *f, char const *name) // 0x1000659A
{
    mangled_assert("setfilebyname");
    todo("implement");
    _sub_1000659A(L, ctrl, f, name);
}

_extern __int32 _sub_100065BD(lua_State *, IOCtrl *, _iobuf *, __int32);
_static __int32 setreturn(lua_State *L, IOCtrl *ctrl, _iobuf *f, __int32 inout) // 0x100065BD
{
    mangled_assert("setreturn");
    todo("implement");
    __int32 __result = _sub_100065BD(L, ctrl, f, inout);
    return __result;
}

_extern __int32 _sub_10005F9F(lua_State *, IOCtrl *, _iobuf *);
_static __int32 closefile(lua_State *L, IOCtrl *ctrl, _iobuf *f) // 0x10005F9F
{
    mangled_assert("closefile");
    todo("implement");
    __int32 __result = _sub_10005F9F(L, ctrl, f);
    return __result;
}

_extern __int32 _sub_10005EA9(lua_State *);
_static __int32 io_close(lua_State *L) // 0x10005EA9
{
    mangled_assert("io_close");
    todo("implement");
    __int32 __result = _sub_10005EA9(L);
    return __result;
}

_extern __int32 _sub_10005FF7(lua_State *);
_static __int32 file_collect(lua_State *L) // 0x10005FF7
{
    mangled_assert("file_collect");
    todo("implement");
    __int32 __result = _sub_10005FF7(L);
    return __result;
}

_extern __int32 _sub_10005EDE(lua_State *);
_static __int32 io_open(lua_State *L) // 0x10005EDE
{
    mangled_assert("io_open");
    todo("implement");
    __int32 __result = _sub_10005EDE(L);
    return __result;
}

_extern __int32 _sub_10006105(lua_State *, __int32, char const *);
_static __int32 io_fromto(lua_State *L, __int32 inout, char const *mode) // 0x10006105
{
    mangled_assert("io_fromto");
    todo("implement");
    __int32 __result = _sub_10006105(L, inout, mode);
    return __result;
}

_extern __int32 _sub_10005F34(lua_State *);
_static __int32 io_readfrom(lua_State *L) // 0x10005F34
{
    mangled_assert("io_readfrom");
    todo("implement");
    __int32 __result = _sub_10005F34(L);
    return __result;
}

_extern __int32 _sub_10005F47(lua_State *);
_static __int32 io_writeto(lua_State *L) // 0x10005F47
{
    mangled_assert("io_writeto");
    todo("implement");
    __int32 __result = _sub_10005F47(L);
    return __result;
}

_extern __int32 _sub_10005F5A(lua_State *);
_static __int32 io_appendto(lua_State *L) // 0x10005F5A
{
    mangled_assert("io_appendto");
    todo("implement");
    __int32 __result = _sub_10005F5A(L);
    return __result;
}

_extern __int32 _sub_1000649D(lua_State *, _iobuf *);
_static __int32 read_number(lua_State *L, _iobuf *f) // 0x1000649D
{
    mangled_assert("read_number");
    todo("implement");
    __int32 __result = _sub_1000649D(L, f);
    return __result;
}

_extern __int32 _sub_100064DB(lua_State *, _iobuf *);
_static __int32 read_word(lua_State *L, _iobuf *f) // 0x100064DB
{
    mangled_assert("read_word");
    todo("implement");
    __int32 __result = _sub_100064DB(L, f);
    return __result;
}

_extern __int32 _sub_10006411(lua_State *, _iobuf *);
_static __int32 read_line(lua_State *L, _iobuf *f) // 0x10006411
{
    mangled_assert("read_line");
    todo("implement");
    __int32 __result = _sub_10006411(L, f);
    return __result;
}

_extern void _sub_100063A7(lua_State *, _iobuf *);
_static void read_file(lua_State *L, _iobuf *f) // 0x100063A7
{
    mangled_assert("read_file");
    todo("implement");
    _sub_100063A7(L, f);
}

_extern __int32 _sub_1000631C(lua_State *, _iobuf *, unsigned __int32);
_static __int32 read_chars(lua_State *L, _iobuf *f, unsigned __int32 n) // 0x1000631C
{
    mangled_assert("read_chars");
    todo("implement");
    __int32 __result = _sub_1000631C(L, f, n);
    return __result;
}

_extern __int32 _sub_100056E6(lua_State *);
_static __int32 io_read(lua_State *L) // 0x100056E6
{
    mangled_assert("io_read");
    todo("implement");
    __int32 __result = _sub_100056E6(L);
    return __result;
}

_extern __int32 _sub_10005855(lua_State *);
_static __int32 io_write(lua_State *L) // 0x10005855
{
    mangled_assert("io_write");
    todo("implement");
    __int32 __result = _sub_10005855(L);
    return __result;
}

_extern __int32 _sub_1000591A(lua_State *);
_static __int32 io_seek(lua_State *L) // 0x1000591A
{
    mangled_assert("io_seek");
    todo("implement");
    __int32 __result = _sub_1000591A(L);
    return __result;
}

_extern __int32 _sub_100059D2(lua_State *);
_static __int32 io_flush(lua_State *L) // 0x100059D2
{
    mangled_assert("io_flush");
    todo("implement");
    __int32 __result = _sub_100059D2(L);
    return __result;
}

_extern __int32 _sub_10005A2C(lua_State *);
_static __int32 io_execute(lua_State *L) // 0x10005A2C
{
    mangled_assert("io_execute");
    todo("implement");
    __int32 __result = _sub_10005A2C(L);
    return __result;
}

_extern __int32 _sub_10005A5D(lua_State *);
_static __int32 io_remove(lua_State *L) // 0x10005A5D
{
    mangled_assert("io_remove");
    todo("implement");
    __int32 __result = _sub_10005A5D(L);
    return __result;
}

_extern __int32 _sub_10005A84(lua_State *);
_static __int32 io_rename(lua_State *L) // 0x10005A84
{
    mangled_assert("io_rename");
    todo("implement");
    __int32 __result = _sub_10005A84(L);
    return __result;
}

_extern __int32 _sub_10005ABA(lua_State *);
_static __int32 io_tmpname(lua_State *L) // 0x10005ABA
{
    mangled_assert("io_tmpname");
    todo("implement");
    __int32 __result = _sub_10005ABA(L);
    return __result;
}

_extern __int32 _sub_10005AD3(lua_State *);
_static __int32 io_getenv(lua_State *L) // 0x10005AD3
{
    mangled_assert("io_getenv");
    todo("implement");
    __int32 __result = _sub_10005AD3(L);
    return __result;
}

_extern __int32 _sub_10005AF8(lua_State *);
_static __int32 io_clock(lua_State *L) // 0x10005AF8
{
    mangled_assert("io_clock");
    todo("implement");
    __int32 __result = _sub_10005AF8(L);
    return __result;
}

_extern __int32 _sub_10005B24(lua_State *);
_static __int32 io_date(lua_State *L) // 0x10005B24
{
    mangled_assert("io_date");
    todo("implement");
    __int32 __result = _sub_10005B24(L);
    return __result;
}

_extern __int32 _sub_10005B96(lua_State *);
_static __int32 io_debug(lua_State *L) // 0x10005B96
{
    mangled_assert("io_debug");
    todo("implement");
    __int32 __result = _sub_10005B96(L);
    return __result;
}

_extern void _sub_100061C5(lua_State *);
_static void openwithcontrol(lua_State *L) // 0x100061C5
{
    mangled_assert("openwithcontrol");
    todo("implement");
    _sub_100061C5(L);
}
#endif
