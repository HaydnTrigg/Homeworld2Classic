#if 0
#ifndef __SB_CRYPT_H__
#define __SB_CRYPT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _GOACryptState
{
    unsigned char cards[256]; // 0x0
    unsigned char rotor; // 0x100
    unsigned char ratchet; // 0x101
    unsigned char avalanche; // 0x102
    unsigned char last_plain; // 0x103
    unsigned char last_cipher; // 0x104
};
static_assert(sizeof(_GOACryptState) == 261, "Invalid _GOACryptState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SB_CRYPT_H__
#endif
