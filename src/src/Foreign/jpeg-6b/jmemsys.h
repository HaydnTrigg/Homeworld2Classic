#if 0
#ifndef __JMEMSYS_H__
#define __JMEMSYS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct backing_store_struct
{
    void (*read_backing_store)(jpeg_common_struct *, backing_store_struct *, void *, long, long); // 0x0
    void (*write_backing_store)(jpeg_common_struct *, backing_store_struct *, void *, long, long); // 0x4
    void (*close_backing_store)(jpeg_common_struct *, backing_store_struct *); // 0x8
    _iobuf *temp_file; // 0xC
    char temp_name[64]; // 0x10
};
static_assert(sizeof(backing_store_struct) == 80, "Invalid backing_store_struct size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __JMEMSYS_H__
#endif
