#if 0
#ifndef __JDHUFF_H__
#define __JDHUFF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct d_derived_tbl
{
    __int32 maxcode[18]; // 0x0
    __int32 valoffset[17]; // 0x48
    JHUFF_TBL *pub; // 0x8C
    __int32 look_nbits[256]; // 0x90
    unsigned char look_sym[256]; // 0x490
};
static_assert(sizeof(d_derived_tbl) == 1424, "Invalid d_derived_tbl size");

struct bitread_perm_state
{
    __int32 get_buffer; // 0x0
    __int32 bits_left; // 0x4
};
static_assert(sizeof(bitread_perm_state) == 8, "Invalid bitread_perm_state size");

struct bitread_working_state
{
    unsigned char const *next_input_byte; // 0x0
    unsigned __int32 bytes_in_buffer; // 0x4
    __int32 get_buffer; // 0x8
    __int32 bits_left; // 0xC
    jpeg_decompress_struct *cinfo; // 0x10
};
static_assert(sizeof(bitread_working_state) == 20, "Invalid bitread_working_state size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __JDHUFF_H__
#endif
