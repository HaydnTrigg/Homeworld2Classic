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

LuaBinding::Obj::Obj() // 0x100010C6
{
    mangled_assert("??0Obj@LuaBinding@@QAE@XZ");
    todo("implement");
}

LuaBinding::Obj::Obj(LuaBinding::Obj const &) // 0x10001087
{
    mangled_assert("??0Obj@LuaBinding@@QAE@ABV01@@Z");
    todo("implement");
}

LuaBinding::Obj::~Obj() // 0x100010F3
{
    mangled_assert("??1Obj@LuaBinding@@QAE@XZ");
    todo("implement");
}

LuaBinding::Obj::Obj(LuaBinding::ObjInternalBase *) // 0x1000109B
{
    mangled_assert("??0Obj@LuaBinding@@QAE@PAVObjInternalBase@1@@Z");
    todo("implement");
}

LuaBinding::Obj &LuaBinding::Obj::operator=(LuaBinding::Obj const &) // 0x100010FF
{
    mangled_assert("??4Obj@LuaBinding@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

bool LuaBinding::Obj::IsRegistered() const // 0x100011E7
{
    mangled_assert("?IsRegistered@Obj@LuaBinding@@QBE_NXZ");
    todo("implement");
}

void LuaBinding::Obj::Reset() // 0x100011EF
{
    mangled_assert("?Reset@Obj@LuaBinding@@QAEXXZ");
    todo("implement");
}

__int32 LuaBinding::Obj::Dispatcher(lua_State *L) // 0x100011B5
{
    mangled_assert("?Dispatcher@Obj@LuaBinding@@CGHPAUlua_State@@@Z");
    todo("implement");
}

LuaBinding::ObjInternalBase::ObjInternalBase(LuaConfig *, char const *, char const *) // 0x100010CC
{
    mangled_assert("??0ObjInternalBase@LuaBinding@@IAE@PAVLuaConfig@@PBD1@Z");
    todo("implement");
}

LuaBinding::ObjInternalBase::~ObjInternalBase() // 0x100010F8
{
    mangled_assert("??1ObjInternalBase@LuaBinding@@MAE@XZ");
    todo("implement");
}

char const *LuaBinding::ObjInternalBase::GetFunctionName() const // 0x100011DF
{
    mangled_assert("?GetFunctionName@ObjInternalBase@LuaBinding@@QBEPBDXZ");
    todo("implement");
}

char const *LuaBinding::ObjInternalBase::GetFunctionUsage() const // 0x100011E3
{
    mangled_assert("?GetFunctionUsage@ObjInternalBase@LuaBinding@@QBEPBDXZ");
    todo("implement");
}

void LuaBinding::ObjInternalBase::CheckArgs(lua_State *, unsigned __int32 const) // 0x1000116E
{
    mangled_assert("?CheckArgs@ObjInternalBase@LuaBinding@@IAEXPAUlua_State@@I@Z");
    todo("implement");
}

void LuaBinding::StaticBind(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen) // 0x1000121F
{
    mangled_assert("?StaticBind@LuaBinding@@YGXAAVLuaConfig@@PBUStaticBound@1@I@Z");
    todo("implement");
}

void LuaBinding::StaticClear(LuaConfig &lc, LuaBinding::StaticBound const *array, unsigned __int32 arrayLen) // 0x10001249
{
    mangled_assert("?StaticClear@LuaBinding@@YGXAAVLuaConfig@@PBUStaticBound@1@I@Z");
    todo("implement");
}

/* ---------- private code */
#endif
