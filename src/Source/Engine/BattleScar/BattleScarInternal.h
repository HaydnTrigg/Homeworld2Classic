#if 0
#ifndef __BATTLESCARINTERNAL_H__
#define __BATTLESCARINTERNAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct BattleScarInternal::ObjHeader
{
    long index; // 0x0
    long id; // 0x4
    BattleScarInternal::ObjHeader *next; // 0x8
};
static_assert(sizeof(BattleScarInternal::ObjHeader) == 12, "Invalid BattleScarInternal::ObjHeader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BATTLESCARINTERNAL_H__
#endif
