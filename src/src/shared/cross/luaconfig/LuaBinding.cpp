#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\LuaBinding.h>
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <boost\scoped_ptr.hpp>
#include <xstring>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void LuaBinding::StaticBind(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen);
extern void LuaBinding::StaticClear(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100010C6(LuaBinding::Obj *const);
LuaBinding::Obj::Obj() // 0x100010C6
{
    mangled_assert("??0Obj@LuaBinding@@QAE@XZ");
    todo("implement");
    _sub_100010C6(this);
}

_extern _sub_10001087(LuaBinding::Obj *const, LuaBinding::Obj const &);
LuaBinding::Obj::Obj(LuaBinding::Obj const &) // 0x10001087
{
    mangled_assert("??0Obj@LuaBinding@@QAE@ABV01@@Z");
    todo("implement");
    _sub_10001087(this, arg);
}

_extern void _sub_100010F3(LuaBinding::Obj *const);
LuaBinding::Obj::~Obj() // 0x100010F3
{
    mangled_assert("??1Obj@LuaBinding@@QAE@XZ");
    todo("implement");
    _sub_100010F3(this);
}

_extern _sub_1000109B(LuaBinding::Obj *const, LuaBinding::ObjInternalBase *);
LuaBinding::Obj::Obj(LuaBinding::ObjInternalBase *) // 0x1000109B
{
    mangled_assert("??0Obj@LuaBinding@@QAE@PAVObjInternalBase@1@@Z");
    todo("implement");
    _sub_1000109B(this, arg);
}

_extern LuaBinding::Obj &_sub_100010FF(LuaBinding::Obj *const, LuaBinding::Obj const &);
LuaBinding::Obj &LuaBinding::Obj::operator=(LuaBinding::Obj const &) // 0x100010FF
{
    mangled_assert("??4Obj@LuaBinding@@QAEAAV01@ABV01@@Z");
    todo("implement");
    LuaBinding::Obj & __result = _sub_100010FF(this, arg);
    return __result;
}

_extern bool _sub_100011E7(LuaBinding::Obj const *const);
bool LuaBinding::Obj::IsRegistered() const // 0x100011E7
{
    mangled_assert("?IsRegistered@Obj@LuaBinding@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_100011E7(this);
    return __result;
}

_extern void _sub_100011EF(LuaBinding::Obj *const);
void LuaBinding::Obj::Reset() // 0x100011EF
{
    mangled_assert("?Reset@Obj@LuaBinding@@QAEXXZ");
    todo("implement");
    _sub_100011EF(this);
}

_extern __int32 _sub_100011B5(lua_State *);
__int32 LuaBinding::Obj::Dispatcher(lua_State *L) // 0x100011B5
{
    mangled_assert("?Dispatcher@Obj@LuaBinding@@CGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_100011B5(L);
    return __result;
}

_extern _sub_100010CC(LuaBinding::ObjInternalBase *const, LuaConfig *, char const *, char const *);
LuaBinding::ObjInternalBase::ObjInternalBase(LuaConfig *, char const *, char const *) // 0x100010CC
{
    mangled_assert("??0ObjInternalBase@LuaBinding@@IAE@PAVLuaConfig@@PBD1@Z");
    todo("implement");
    _sub_100010CC(this, arg, arg, arg);
}

_extern void _sub_100010F8(LuaBinding::ObjInternalBase *const);
LuaBinding::ObjInternalBase::~ObjInternalBase() // 0x100010F8
{
    mangled_assert("??1ObjInternalBase@LuaBinding@@MAE@XZ");
    todo("implement");
    _sub_100010F8(this);
}

_extern char const *_sub_100011DF(LuaBinding::ObjInternalBase const *const);
char const *LuaBinding::ObjInternalBase::GetFunctionName() const // 0x100011DF
{
    mangled_assert("?GetFunctionName@ObjInternalBase@LuaBinding@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100011DF(this);
    return __result;
}

_extern char const *_sub_100011E3(LuaBinding::ObjInternalBase const *const);
char const *LuaBinding::ObjInternalBase::GetFunctionUsage() const // 0x100011E3
{
    mangled_assert("?GetFunctionUsage@ObjInternalBase@LuaBinding@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100011E3(this);
    return __result;
}

_extern void _sub_1000116E(LuaBinding::ObjInternalBase *const, lua_State *, unsigned __int32 const);
void LuaBinding::ObjInternalBase::CheckArgs(lua_State *, unsigned __int32 const) // 0x1000116E
{
    mangled_assert("?CheckArgs@ObjInternalBase@LuaBinding@@IAEXPAUlua_State@@I@Z");
    todo("implement");
    _sub_1000116E(this, arg, arg);
}

_extern void _sub_1000121F(LuaConfig &, LuaBinding::StaticBound const *, unsigned __int32);
void LuaBinding::StaticBind(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen) // 0x1000121F
{
    mangled_assert("?StaticBind@LuaBinding@@YGXAAVLuaConfig@@PBUStaticBound@1@I@Z");
    todo("implement");
    _sub_1000121F(lc, array, arrayLen);
}

_extern void _sub_10001249(LuaConfig &, LuaBinding::StaticBound const *, unsigned __int32);
void LuaBinding::StaticClear(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen) // 0x10001249
{
    mangled_assert("?StaticClear@LuaBinding@@YGXAAVLuaConfig@@PBUStaticBound@1@I@Z");
    todo("implement");
    _sub_10001249(lc, array, arrayLen);
}

/* ---------- private code */
#endif
