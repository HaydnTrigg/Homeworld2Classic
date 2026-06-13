#if 0
#ifndef __CHATCRYPT_H__
#define __CHATCRYPT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _gs_crypt_key
{
    unsigned char state[256]; // 0x0
    unsigned char x; // 0x100
    unsigned char y; // 0x101
};
static_assert(sizeof(_gs_crypt_key) == 258, "Invalid _gs_crypt_key size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATCRYPT_H__
#endif
