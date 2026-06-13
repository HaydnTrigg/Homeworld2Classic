#if 0
#ifndef __GAMELUA_H__
#define __GAMELUA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameLua
{
public:
    static bool Initialize();
    static bool Shutdown();
};
static_assert(sizeof(GameLua) == 1, "Invalid GameLua size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMELUA_H__
#endif
