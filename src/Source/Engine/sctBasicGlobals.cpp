#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <Mathlib\vector3.h>
#include <stack>
#include <map>
#include <xtree>
#include <Mathlib\vector2.h>
#include <sctBasicGlobals.h>
#include <util\colour.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool sctIsUdword(__int32 stackloc);
extern bool sctIsSdword(__int32 stackloc);
extern bool sctIsReal32(__int32 stackloc);
extern bool sctIsBool(__int32 stackloc);
extern bool sctIsString(__int32 stackloc);
extern unsigned __int32 sctGetUdword(unsigned __int32 paramnum);
extern __int32 sctGetSdword(unsigned __int32 paramnum);
extern float sctGetReal32(unsigned __int32 paramnum);
extern bool sctGetBool(unsigned __int32 paramnum);
extern char *sctGetString(unsigned __int32 paramnum);
extern void sctPutUdword(unsigned __int32 var);
extern void sctPutSdword(__int32 var);
extern void sctPutReal32(float var);
extern void sctPutBool(bool var);
extern void sctPutString(char *var);
extern void sbgInitialize();

_static __int32 sbgGetUdword(lua_State *lstate);
_static __int32 sbgSetUdword(lua_State *lstate);
_static __int32 sbgGetSdword(lua_State *lstate);
_static __int32 sbgSetSdword(lua_State *lstate);
_static __int32 sbgGetReal32(lua_State *lstate);
_static __int32 sbgSetReal32(lua_State *lstate);
_static __int32 sbgGetBool(lua_State *lstate);
_static __int32 sbgSetBool(lua_State *lstate);
_static __int32 sbgGetString(lua_State *lstate);
_static __int32 sbgSetString(lua_State *lstate);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool sctTrue; // 0x836238
    extern bool sctFalse; // 0x844020
}

/* ---------- public code */

bool sctIsUdword(__int32 stackloc) // 0x4CA00D
{
    mangled_assert("?sctIsUdword@@YG_NH@Z");
    todo("implement");
}

bool sctIsSdword(__int32 stackloc) // 0x4C9FDB
{
    mangled_assert("?sctIsSdword@@YG_NH@Z");
    todo("implement");
}

bool sctIsReal32(__int32 stackloc) // 0x4C9FC2
{
    mangled_assert("?sctIsReal32@@YG_NH@Z");
    todo("implement");
}

bool sctIsBool(__int32 stackloc) // 0x4C9F8E
{
    mangled_assert("?sctIsBool@@YG_NH@Z");
    todo("implement");
}

bool sctIsString(__int32 stackloc) // 0x4C9FF4
{
    mangled_assert("?sctIsString@@YG_NH@Z");
    todo("implement");
}

unsigned __int32 sctGetUdword(unsigned __int32 paramnum) // 0x4C9F76
{
    mangled_assert("?sctGetUdword@@YGII@Z");
    todo("implement");
}

__int32 sctGetSdword(unsigned __int32 paramnum) // 0x4C9F43
{
    mangled_assert("?sctGetSdword@@YGHI@Z");
    todo("implement");
}

float sctGetReal32(unsigned __int32 paramnum) // 0x4C9F27
{
    mangled_assert("?sctGetReal32@@YGMI@Z");
    todo("implement");
}

bool sctGetBool(unsigned __int32 paramnum) // 0x4C9ED9
{
    mangled_assert("?sctGetBool@@YG_NI@Z");
    todo("implement");
}

char *sctGetString(unsigned __int32 paramnum) // 0x4C9F63
{
    mangled_assert("?sctGetString@@YGPADI@Z");
    todo("implement");
}

void sctPutUdword(unsigned __int32 var) // 0x4CA0B1
{
    mangled_assert("?sctPutUdword@@YGXI@Z");
    todo("implement");
}

void sctPutSdword(__int32 var) // 0x4CA07C
{
    mangled_assert("?sctPutSdword@@YGXH@Z");
    todo("implement");
}

void sctPutReal32(float var) // 0x4CA05D
{
    mangled_assert("?sctPutReal32@@YGXM@Z");
    todo("implement");
}

void sctPutBool(bool var) // 0x4CA026
{
    mangled_assert("?sctPutBool@@YGX_N@Z");
    todo("implement");
}

void sctPutString(char *var) // 0x4CA09E
{
    mangled_assert("?sctPutString@@YGXPAD@Z");
    todo("implement");
}

void sbgInitialize() // 0x4C9824
{
    mangled_assert("?sbgInitialize@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static __int32 sbgGetUdword(lua_State *lstate) // 0x4C97A3
{
    mangled_assert("sbgGetUdword");
    todo("implement");
}

_static __int32 sbgSetUdword(lua_State *lstate) // 0x4C9E28
{
    mangled_assert("sbgSetUdword");
    todo("implement");
}

_static __int32 sbgGetSdword(lua_State *lstate) // 0x4C96CA
{
    mangled_assert("sbgGetSdword");
    todo("implement");
}

_static __int32 sbgSetSdword(lua_State *lstate) // 0x4C9CC8
{
    mangled_assert("sbgSetSdword");
    todo("implement");
}

_static __int32 sbgGetReal32(lua_State *lstate) // 0x4C9658
{
    mangled_assert("sbgGetReal32");
    todo("implement");
}

_static __int32 sbgSetReal32(lua_State *lstate) // 0x4C9C1C
{
    mangled_assert("sbgSetReal32");
    todo("implement");
}

_static __int32 sbgGetBool(lua_State *lstate) // 0x4C95F7
{
    mangled_assert("sbgGetBool");
    todo("implement");
}

_static __int32 sbgSetBool(lua_State *lstate) // 0x4C9B33
{
    mangled_assert("sbgSetBool");
    todo("implement");
}

_static __int32 sbgGetString(lua_State *lstate) // 0x4C973D
{
    mangled_assert("sbgGetString");
    todo("implement");
}

_static __int32 sbgSetString(lua_State *lstate) // 0x4C9D79
{
    mangled_assert("sbgSetString");
    todo("implement");
}
#endif
