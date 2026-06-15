#if 0
#ifndef __WCHARBINDING_H__
#define __WCHARBINDING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool LuaBinding::ParmTraits<wchar_t const *>::Pop(wchar_t const *&t, lua_State *ls, __int32 n) // 0x72B90A
{
    mangled_assert("?Pop@?$ParmTraits@PB_W@LuaBinding@@SG_NAAPB_WPAUlua_State@@H@Z");
    todo("implement");
}

_inline void LuaBinding::ParmTraits<wchar_t const *>::Push(wchar_t const *const t, lua_State *ls) // 0x712A61
{
    mangled_assert("?Push@?$ParmTraits@PB_W@LuaBinding@@SGXQB_WPAUlua_State@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __WCHARBINDING_H__
#endif
