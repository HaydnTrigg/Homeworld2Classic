#if 0
#ifndef __VPX_IMAGE_H__
#define __VPX_IMAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum vpx_img_fmt
{
    VPX_IMG_FMT_NONE = 0, // 0x0000
    VPX_IMG_FMT_RGB24 = 1, // 0x0001
    VPX_IMG_FMT_RGB32 = 2, // 0x0002
    VPX_IMG_FMT_RGB565 = 3, // 0x0003
    VPX_IMG_FMT_RGB555 = 4, // 0x0004
    VPX_IMG_FMT_UYVY = 5, // 0x0005
    VPX_IMG_FMT_YUY2 = 6, // 0x0006
    VPX_IMG_FMT_YVYU = 7, // 0x0007
    VPX_IMG_FMT_BGR24 = 8, // 0x0008
    VPX_IMG_FMT_RGB32_LE = 9, // 0x0009
    VPX_IMG_FMT_ARGB = 10, // 0x000A
    VPX_IMG_FMT_ARGB_LE = 11, // 0x000B
    VPX_IMG_FMT_RGB565_LE = 12, // 0x000C
    VPX_IMG_FMT_RGB555_LE = 13, // 0x000D
    VPX_IMG_FMT_YV12 = 769, // 0x0301
    VPX_IMG_FMT_I420 = 258, // 0x0102
    VPX_IMG_FMT_VPXYV12 = 771, // 0x0303
    VPX_IMG_FMT_VPXI420 = 260, // 0x0104
    VPX_IMG_FMT_I422 = 261, // 0x0105
    VPX_IMG_FMT_I444 = 262, // 0x0106
    VPX_IMG_FMT_444A = 1287, // 0x0507
};

/* ---------- definitions */

struct vpx_image
{
    vpx_img_fmt fmt; // 0x0
    unsigned __int32 w; // 0x4
    unsigned __int32 h; // 0x8
    unsigned __int32 d_w; // 0xC
    unsigned __int32 d_h; // 0x10
    unsigned __int32 x_chroma_shift; // 0x14
    unsigned __int32 y_chroma_shift; // 0x18
    unsigned char *planes[4]; // 0x1C
    __int32 stride[4]; // 0x2C
    __int32 bps; // 0x3C
    void *user_priv; // 0x40
    unsigned char *img_data; // 0x44
    __int32 img_data_owner; // 0x48
    __int32 self_allocd; // 0x4C
};
static_assert(sizeof(vpx_image) == 80, "Invalid vpx_image size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VPX_IMAGE_H__
#endif
