#if 0
#ifndef __INIT_H__
#define __INIT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct InitModule
{
    char const *name; // 0x0
    bool (*startup)(); // 0x4
    bool (*shutdown)(); // 0x8
    bool (*save)(SaveGameData *, SaveType); // 0xC
    bool (*restore)(SaveGameData *); // 0x10
};
static_assert(sizeof(InitModule) == 20, "Invalid InitModule size");

struct InitList
{
    __int32 index; // 0x0
    InitModule const *module; // 0x4
};
static_assert(sizeof(InitList) == 8, "Invalid InitList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INIT_H__
#endif
