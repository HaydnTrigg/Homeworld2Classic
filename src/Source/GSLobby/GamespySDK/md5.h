#if 0
#ifndef __MD5_H__
#define __MD5_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MD5_CTX
{
    unsigned __int32 state[4]; // 0x0
    unsigned __int32 count[2]; // 0x10
    unsigned char buffer[64]; // 0x18
};
static_assert(sizeof(MD5_CTX) == 88, "Invalid MD5_CTX size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MD5_H__
#endif
