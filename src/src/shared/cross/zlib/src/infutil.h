#if 0
#ifndef __INFUTIL_H__
#define __INFUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum inflate_block_mode
{
    TYPE = 0,
    LENS,
    STORED,
    TABLE,
    BTREE,
    DTREE,
    CODES,
    DRY,
    DONE,
    BAD,
};

/* ---------- definitions */

struct inflate_blocks_state
{
    inflate_block_mode mode; // 0x0
    <unnamed-tag> sub; // 0x4
    unsigned __int32 last; // 0x18
    unsigned __int32 bitk; // 0x1C
    unsigned long bitb; // 0x20
    inflate_huft_s *hufts; // 0x24
    unsigned char *window; // 0x28
    unsigned char *end; // 0x2C
    unsigned char *read; // 0x30
    unsigned char *write; // 0x34
    unsigned long (*checkfn)(unsigned long, unsigned char const *, unsigned __int32); // 0x38
    unsigned long check; // 0x3C
};
static_assert(sizeof(inflate_blocks_state) == 64, "Invalid inflate_blocks_state size");

union <unnamed-tag>
{
    unsigned __int32 left; // 0x0
    <unnamed-tag> trees; // 0x0
    <unnamed-tag> decode; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 20, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    unsigned __int32 table; // 0x0
    unsigned __int32 index; // 0x4
    unsigned __int32 *blens; // 0x8
    unsigned __int32 bb; // 0xC
    inflate_huft_s *tb; // 0x10
};
static_assert(sizeof(<unnamed-tag>) == 20, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    inflate_codes_state *codes; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 4, "Invalid <unnamed-tag> size");

struct internal_state
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(internal_state) == 4, "Invalid internal_state size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INFUTIL_H__
#endif
