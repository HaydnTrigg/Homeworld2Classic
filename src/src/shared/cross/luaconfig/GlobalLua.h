#if 0
#ifndef __GLOBALLUA_H__
#define __GLOBALLUA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GlobalLua
{
public:
    static void Initialize();
    static void Shutdown();
    static LuaConfig *GetState();
private:
    GlobalLua();
    static LuaConfig *s_luaState;
};
static_assert(sizeof(GlobalLua) == 1, "Invalid GlobalLua size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GLOBALLUA_H__
#endif
