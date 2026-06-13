#if 0
#ifndef __VP8DX_H__
#define __VP8DX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct vp8_decrypt_init
{
    void (*decrypt_cb)(void *, unsigned char const *, unsigned char *, __int32); // 0x0
    void *decrypt_state; // 0x4
};
static_assert(sizeof(vp8_decrypt_init) == 8, "Invalid vp8_decrypt_init size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VP8DX_H__
#endif
