#if 0
#ifndef __ZLIB_H__
#define __ZLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ZLIB_H__
/* combined */
#ifndef __ZLIB_H__
#define __ZLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct z_stream_s
{
    unsigned char *next_in; // 0x0
    unsigned __int32 avail_in; // 0x4
    unsigned long total_in; // 0x8
    unsigned char *next_out; // 0xC
    unsigned __int32 avail_out; // 0x10
    unsigned long total_out; // 0x14
    char *msg; // 0x18
    internal_state *state; // 0x1C
    void *(*zalloc)(void *, unsigned __int32, unsigned __int32); // 0x20
    void (*zfree)(void *, void *); // 0x24
    void *opaque; // 0x28
    __int32 data_type; // 0x2C
    unsigned long adler; // 0x30
    unsigned long reserved; // 0x34
};
static_assert(sizeof(z_stream_s) == 56, "Invalid z_stream_s size");

struct internal_state
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(internal_state) == 4, "Invalid internal_state size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ZLIB_H__
#endif
