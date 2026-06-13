#if 0
#ifndef __GHTTPBUFFER_H__
#define __GHTTPBUFFER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct GHIBuffer
{
    GHIConnection *connection; // 0x0
    char *data; // 0x4
    __int32 size; // 0x8
    __int32 len; // 0xC
    __int32 pos; // 0x10
    __int32 sizeIncrement; // 0x14
    GHTTPBool fixed; // 0x18
    GHTTPBool dontFree; // 0x1C
};
static_assert(sizeof(GHIBuffer) == 32, "Invalid GHIBuffer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GHTTPBUFFER_H__
#endif
