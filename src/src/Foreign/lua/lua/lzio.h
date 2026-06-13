#if 0
#ifndef __LZIO_H__
#define __LZIO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct zio
{
    unsigned __int32 n; // 0x0
    unsigned char const *p; // 0x4
    __int32 (*filbuf)(zio *); // 0x8
    void *u; // 0xC
    char const *name; // 0x10
    unsigned char buffer[256]; // 0x14
};
static_assert(sizeof(zio) == 276, "Invalid zio size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LZIO_H__
#endif
