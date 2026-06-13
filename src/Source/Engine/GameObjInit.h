#if 0
#ifndef __GAMEOBJINIT_H__
#define __GAMEOBJINIT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameObjInit
{
public:
    static char const *Initialize();
    static char const *Shutdown();
    static char const *Save(SaveGameData *saveGameData, SaveType saveType);
    static char const *Restore(SaveGameData *saveGameData);
};
static_assert(sizeof(GameObjInit) == 1, "Invalid GameObjInit size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMEOBJINIT_H__
#endif
