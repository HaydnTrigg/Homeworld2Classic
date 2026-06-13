#if 0
#ifndef __INTERFCE_H__
#define __INTERFCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _jpegdata
{
    unsigned char *ptr; // 0x0
    __int32 width; // 0x4
    __int32 height; // 0x8
    _iobuf *output_file; // 0xC
    _iobuf *input_file; // 0x10
    __int32 aritcoding; // 0x14
    __int32 CCIR601sampling; // 0x18
    __int32 smoothingfactor; // 0x1C
    __int32 quality; // 0x20
    unsigned __int32 hWnd; // 0x24
    __int32 ProgressMsg; // 0x28
    __int32 status; // 0x2C
    __int32 components; // 0x30
};
static_assert(sizeof(_jpegdata) == 52, "Invalid _jpegdata size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INTERFCE_H__
#endif
