#if 0
#ifndef __SAVEGAMEOBJECTREGISTRY_H__
#define __SAVEGAMEOBJECTREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct SaveGameObjectRegistry
{
    char const *objectNameID; // 0x0
    SaveObject *(*constructionCallBack)(SaveGameData *); // 0x4
};
static_assert(sizeof(SaveGameObjectRegistry) == 8, "Invalid SaveGameObjectRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SAVEGAMEOBJECTREGISTRY_H__
#endif
