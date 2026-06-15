#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\typemagic.h>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\LuaUtils.h>
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <boost\scoped_ptr.hpp>
#include <xstring>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool __LCGetVal(LuaConfig &L, char const *field, double &v);
extern bool __LCGetVal(LuaConfig &L, char const *field, float &v);
extern bool __LCGetVal(LuaConfig &L, char const *field, bool &v);
extern bool __LCGetVal(LuaConfig &L, char const *field, long &v);
extern bool __LCGetVal(LuaConfig &L, char const *field, unsigned long &v);
extern void __LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, char *outstring, unsigned long maxn, __LCMsg const &output);
extern void __LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outstring, __LCMsg const &output);
extern void __LCSetVal(LuaConfig &L, char const *field, double v);
extern void __LCSetVal(LuaConfig &L, char const *field, float v);
extern void __LCSetVal(LuaConfig &L, char const *field, bool v);
extern void __LCSetVal(LuaConfig &L, char const *field, long v);
extern void __LCSetVal(LuaConfig &L, char const *field, unsigned long v);
extern void LCGetSetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, char *outstring, unsigned long maxn);
extern void LCGetSetWString(LuaConfig &lua, char const *header, char const *field, wchar_t const *defstring, wchar_t *outstring, unsigned long maxn);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline __LCMsgTrace::__LCMsgTrace(__LCMsgTrace const &) // 0x10006C1B
{
    mangled_assert("??0__LCMsgTrace@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline __LCMsgTrace::__LCMsgTrace() // 0x10006C26
{
    mangled_assert("??0__LCMsgTrace@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline __LCMsgWarning::__LCMsgWarning(__LCMsgWarning const &) // 0x10006C2F
{
    mangled_assert("??0__LCMsgWarning@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, double &v) // 0x10006EA4
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAN@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, float &v) // 0x10006E76
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAM@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, bool &v) // 0x10006EB8
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAA_N@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, long &v) // 0x10006DE7
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAJ@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, unsigned long &v) // 0x10006E2F
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAK@Z");
    todo("implement");
}

void __LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, char *outstring, unsigned long maxn, __LCMsg const &output) // 0x10006D7E
{
    mangled_assert("?__LCGetString@@YGXAAVLuaConfig@@PBD11PADKABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outstring, __LCMsg const &output) // 0x10006D1C
{
    mangled_assert("?__LCGetString@@YGXAAVLuaConfig@@PBD11AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV__LCMsg@@@Z");
    todo("implement");
}

void __LCSetVal(LuaConfig &L, char const *field, double v) // 0x10006F65
{
    mangled_assert("?__LCSetVal@@YGXAAVLuaConfig@@PBDN@Z");
    todo("implement");
}

void __LCSetVal(LuaConfig &L, char const *field, float v) // 0x10006F45
{
    mangled_assert("?__LCSetVal@@YGXAAVLuaConfig@@PBDM@Z");
    todo("implement");
}

void __LCSetVal(LuaConfig &L, char const *field, bool v) // 0x10006F82
{
    mangled_assert("?__LCSetVal@@YGXAAVLuaConfig@@PBD_N@Z");
    todo("implement");
}

void __LCSetVal(LuaConfig &L, char const *field, long v) // 0x10006EF5
{
    mangled_assert("?__LCSetVal@@YGXAAVLuaConfig@@PBDJ@Z");
    todo("implement");
}

void __LCSetVal(LuaConfig &L, char const *field, unsigned long v) // 0x10006F16
{
    mangled_assert("?__LCSetVal@@YGXAAVLuaConfig@@PBDK@Z");
    todo("implement");
}

void LCGetSetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, char *outstring, unsigned long maxn) // 0x10006C56
{
    mangled_assert("?LCGetSetString@@YGXAAVLuaConfig@@PBD11PADK@Z");
    todo("implement");
}

void LCGetSetWString(LuaConfig &lua, char const *header, char const *field, wchar_t const *defstring, wchar_t *outstring, unsigned long maxn) // 0x10006CA8
{
    mangled_assert("?LCGetSetWString@@YGXAAVLuaConfig@@PBD1PB_WPA_WK@Z");
    todo("implement");
}

void __LCMsgTrace::Write(char const *) const // 0x10006CFC
{
    mangled_assert("?Write@__LCMsgTrace@@UBEXPBD@Z");
    todo("implement");
}

__LCMsgWarning::__LCMsgWarning(unsigned long) // 0x10006C44
{
    mangled_assert("??0__LCMsgWarning@@QAE@K@Z");
    todo("implement");
}

_inline __LCMsgTrace &__LCMsgTrace::operator=(__LCMsgTrace const &) // 0x10001B48
{
}

void __LCMsgWarning::Write(char const *) const // 0x10006D0A
{
    mangled_assert("?Write@__LCMsgWarning@@UBEXPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
