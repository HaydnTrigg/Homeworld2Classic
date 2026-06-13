#if 0
#ifndef __VPX_CODEC_H__
#define __VPX_CODEC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum vpx_codec_err_t
{
    VPX_CODEC_OK = 0,
    VPX_CODEC_ERROR,
    VPX_CODEC_MEM_ERROR,
    VPX_CODEC_ABI_MISMATCH,
    VPX_CODEC_INCAPABLE,
    VPX_CODEC_UNSUP_BITSTREAM,
    VPX_CODEC_UNSUP_FEATURE,
    VPX_CODEC_CORRUPT_FRAME,
    VPX_CODEC_INVALID_PARAM,
    VPX_CODEC_LIST_END,
};

/* ---------- definitions */

struct vpx_codec_ctx
{
    char const *name; // 0x0
    vpx_codec_iface const *iface; // 0x4
    vpx_codec_err_t err; // 0x8
    char const *err_detail; // 0xC
    long init_flags; // 0x10
    union
    {
        vpx_codec_dec_cfg *dec; // 0x0
        vpx_codec_enc_cfg *enc; // 0x0
        void *raw; // 0x0
    } config; // 0x14
    vpx_codec_priv *priv; // 0x18
    union <unnamed-type-config>
    {
        vpx_codec_dec_cfg *dec; // 0x0
        vpx_codec_enc_cfg *enc; // 0x0
        void *raw; // 0x0
    };
    static_assert(sizeof(<unnamed-type-config>) == 4, "Invalid <unnamed-type-config> size");
};
static_assert(sizeof(vpx_codec_ctx) == 28, "Invalid vpx_codec_ctx size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VPX_CODEC_H__
#endif
