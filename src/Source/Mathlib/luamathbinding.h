#if 0
#ifndef __LUAMATHBINDING_H__
#define __LUAMATHBINDING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline bool LuaBinding::getvector4(vector4 &v, lua_State *ls, __int32 n);
extern _inline bool LuaBinding::getvector3(vector3 &v, lua_State *ls, __int32 n);
extern _inline void LuaBinding::putvector3(vector3 const &v, lua_State *ls);

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_5C9F16(vector4 &, lua_State *, __int32);
_inline bool LuaBinding::getvector4(vector4 &v, lua_State *ls, __int32 n) // 0x5C9F16
{
    mangled_assert("?getvector4@LuaBinding@@YG_NAAVvector4@@PAUlua_State@@H@Z");
    todo("implement");
    bool __result = _sub_5C9F16(v, ls, n);
    return __result;
}

_extern bool _sub_468DC7(vector3 &, lua_State *, __int32);
_inline bool LuaBinding::getvector3(vector3 &v, lua_State *ls, __int32 n) // 0x468DC7
{
    mangled_assert("?getvector3@LuaBinding@@YG_NAAVvector3@@PAUlua_State@@H@Z");
    todo("implement");
    bool __result = _sub_468DC7(v, ls, n);
    return __result;
}

_extern bool _sub_5C8A2C(vector4 &, lua_State *, __int32);
_inline bool LuaBinding::ParmTraits<vector4>::Pop(vector4 &t, lua_State *ls, __int32 n) // 0x5C8A2C
{
    mangled_assert("?Pop@?$ParmTraits@Vvector4@@@LuaBinding@@SG_NAAVvector4@@PAUlua_State@@H@Z");
    todo("implement");
    bool __result = _sub_5C8A2C(t, ls, n);
    return __result;
}

_extern bool _sub_468218(vector3 &, lua_State *, __int32);
_inline bool LuaBinding::ParmTraits<vector3>::Pop(vector3 &t, lua_State *ls, __int32 n) // 0x468218
{
    mangled_assert("?Pop@?$ParmTraits@Vvector3@@@LuaBinding@@SG_NAAVvector3@@PAUlua_State@@H@Z");
    todo("implement");
    bool __result = _sub_468218(t, ls, n);
    return __result;
}

_extern void _sub_716601(vector3 const &, lua_State *);
_inline void LuaBinding::putvector3(vector3 const &v, lua_State *ls) // 0x716601
{
    mangled_assert("?putvector3@LuaBinding@@YGXABVvector3@@PAUlua_State@@@Z");
    todo("implement");
    _sub_716601(v, ls);
}

_extern void _sub_715298(vector3 const, lua_State *);
_inline void LuaBinding::ParmTraits<vector3>::Push(vector3 const t, lua_State *ls) // 0x715298
{
    mangled_assert("?Push@?$ParmTraits@Vvector3@@@LuaBinding@@SGXVvector3@@PAUlua_State@@@Z");
    todo("implement");
    _sub_715298(t, ls);
}

/* ---------- private code */

#endif // __LUAMATHBINDING_H__
#endif
