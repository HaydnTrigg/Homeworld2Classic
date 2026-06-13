#if 0
#ifndef __APPLUA_H__
#define __APPLUA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AppLua
{
public:
    static bool Initialize(LuaConfig &globalState);
    static bool Shutdown(LuaConfig &globalState);
    static void Run();
};
static_assert(sizeof(AppLua) == 1, "Invalid AppLua size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __APPLUA_H__
#endif
