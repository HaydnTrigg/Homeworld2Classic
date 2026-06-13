#if 0
#ifndef __VPX_DECODER_H__
#define __VPX_DECODER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct vpx_codec_dec_cfg
{
    unsigned __int32 threads; // 0x0
    unsigned __int32 w; // 0x4
    unsigned __int32 h; // 0x8
};
static_assert(sizeof(vpx_codec_dec_cfg) == 12, "Invalid vpx_codec_dec_cfg size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VPX_DECODER_H__
#endif
