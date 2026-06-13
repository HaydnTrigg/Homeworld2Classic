#if 0
#ifndef __VP8_H__
#define __VP8_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum vp8_com_control_id
{
    VP8_SET_REFERENCE = 1, // 0x0001
    VP8_COPY_REFERENCE = 2, // 0x0002
    VP8_SET_POSTPROC = 3, // 0x0003
    VP8_SET_DBG_COLOR_REF_FRAME = 4, // 0x0004
    VP8_SET_DBG_COLOR_MB_MODES = 5, // 0x0005
    VP8_SET_DBG_COLOR_B_MODES = 6, // 0x0006
    VP8_SET_DBG_DISPLAY_MV = 7, // 0x0007
    VP9_GET_REFERENCE = 128, // 0x0080
    VP8_COMMON_CTRL_ID_MAX = 129, // 0x0081
    VP8_DECODER_CTRL_ID_START = 256, // 0x0100
};

enum vpx_ref_frame_type
{
    VP8_LAST_FRAME = (1 << 0),
    VP8_GOLD_FRAME = (1 << 1),
    VP8_ALTR_FRAME = (1 << 2),
};

/* ---------- definitions */

struct vp8_postproc_cfg
{
    __int32 post_proc_flag; // 0x0
    __int32 deblocking_level; // 0x4
    __int32 noise_level; // 0x8
};
static_assert(sizeof(vp8_postproc_cfg) == 12, "Invalid vp8_postproc_cfg size");

struct vpx_ref_frame
{
    vpx_ref_frame_type frame_type; // 0x0
    vpx_image img; // 0x4
};
static_assert(sizeof(vpx_ref_frame) == 84, "Invalid vpx_ref_frame size");

struct vp9_ref_frame
{
    __int32 idx; // 0x0
    vpx_image img; // 0x4
};
static_assert(sizeof(vp9_ref_frame) == 84, "Invalid vp9_ref_frame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VP8_H__
#endif
