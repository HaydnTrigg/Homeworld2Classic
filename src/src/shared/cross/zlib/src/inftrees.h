#if 0
#ifndef __INFTREES_H__
#define __INFTREES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct inflate_huft_s
{
    <unnamed-tag> word; // 0x0
    unsigned __int32 base; // 0x4
};
static_assert(sizeof(inflate_huft_s) == 8, "Invalid inflate_huft_s size");

union <unnamed-tag>
{
    <unnamed-tag> what; // 0x0
    unsigned __int32 pad; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 4, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    unsigned char Exop; // 0x0
    unsigned char Bits; // 0x1
};
static_assert(sizeof(<unnamed-tag>) == 2, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INFTREES_H__
#endif
