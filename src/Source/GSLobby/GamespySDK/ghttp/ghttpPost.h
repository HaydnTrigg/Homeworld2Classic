#if 0
#ifndef __GHTTPPOST_H__
#define __GHTTPPOST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GHIPostingResult
{
    GHIPostingError = 0,
    GHIPostingDone,
    GHIPostingPosting,
};

/* ---------- definitions */

struct GHIPostingState
{
    DArrayImplementation *states; // 0x0
    __int32 index; // 0x4
    __int32 bytesPosted; // 0x8
    __int32 totalBytes; // 0xC
    void (*callback)(__int32, __int32, __int32, __int32, __int32, void *); // 0x10
    void *param; // 0x14
};
static_assert(sizeof(GHIPostingState) == 24, "Invalid GHIPostingState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GHTTPPOST_H__
#endif
