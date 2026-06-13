#if 0
#ifndef __DEFLATE_H__
#define __DEFLATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ct_data_s
{
    <unnamed-tag> fc; // 0x0
    <unnamed-tag> dl; // 0x2
};
static_assert(sizeof(ct_data_s) == 4, "Invalid ct_data_s size");

union <unnamed-tag>
{
    unsigned short freq; // 0x0
    unsigned short code; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 2, "Invalid <unnamed-tag> size");

union <unnamed-tag>
{
    unsigned short dad; // 0x0
    unsigned short len; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 2, "Invalid <unnamed-tag> size");

struct tree_desc_s
{
    ct_data_s *dyn_tree; // 0x0
    __int32 max_code; // 0x4
    static_tree_desc_s *stat_desc; // 0x8
};
static_assert(sizeof(tree_desc_s) == 12, "Invalid tree_desc_s size");

struct internal_state
{
    z_stream_s *strm; // 0x0
    __int32 status; // 0x4
    unsigned char *pending_buf; // 0x8
    unsigned long pending_buf_size; // 0xC
    unsigned char *pending_out; // 0x10
    __int32 pending; // 0x14
    __int32 noheader; // 0x18
    unsigned char data_type; // 0x1C
    unsigned char method; // 0x1D
    __int32 last_flush; // 0x20
    unsigned __int32 w_size; // 0x24
    unsigned __int32 w_bits; // 0x28
    unsigned __int32 w_mask; // 0x2C
    unsigned char *window; // 0x30
    unsigned long window_size; // 0x34
    unsigned short *prev; // 0x38
    unsigned short *head; // 0x3C
    unsigned __int32 ins_h; // 0x40
    unsigned __int32 hash_size; // 0x44
    unsigned __int32 hash_bits; // 0x48
    unsigned __int32 hash_mask; // 0x4C
    unsigned __int32 hash_shift; // 0x50
    long block_start; // 0x54
    unsigned __int32 match_length; // 0x58
    unsigned __int32 prev_match; // 0x5C
    __int32 match_available; // 0x60
    unsigned __int32 strstart; // 0x64
    unsigned __int32 match_start; // 0x68
    unsigned __int32 lookahead; // 0x6C
    unsigned __int32 prev_length; // 0x70
    unsigned __int32 max_chain_length; // 0x74
    unsigned __int32 max_lazy_match; // 0x78
    __int32 level; // 0x7C
    __int32 strategy; // 0x80
    unsigned __int32 good_match; // 0x84
    __int32 nice_match; // 0x88
    ct_data_s dyn_ltree[573]; // 0x8C
    ct_data_s dyn_dtree[61]; // 0x980
    ct_data_s bl_tree[39]; // 0xA74
    tree_desc_s l_desc; // 0xB10
    tree_desc_s d_desc; // 0xB1C
    tree_desc_s bl_desc; // 0xB28
    unsigned short bl_count[16]; // 0xB34
    __int32 heap[573]; // 0xB54
    __int32 heap_len; // 0x1448
    __int32 heap_max; // 0x144C
    unsigned char depth[573]; // 0x1450
    unsigned char *l_buf; // 0x1690
    unsigned __int32 lit_bufsize; // 0x1694
    unsigned __int32 last_lit; // 0x1698
    unsigned short *d_buf; // 0x169C
    unsigned long opt_len; // 0x16A0
    unsigned long static_len; // 0x16A4
    unsigned __int32 matches; // 0x16A8
    __int32 last_eob_len; // 0x16AC
    unsigned short bi_buf; // 0x16B0
    __int32 bi_valid; // 0x16B4
};
static_assert(sizeof(internal_state) == 5816, "Invalid internal_state size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEFLATE_H__
#endif
