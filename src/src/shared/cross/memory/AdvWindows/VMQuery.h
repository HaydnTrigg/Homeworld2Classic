#if 0
#ifndef __VMQUERY_H__
#define __VMQUERY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct VMQUERY
{
    void *pvRgnBaseAddress; // 0x0
    unsigned long dwRgnProtection; // 0x4
    unsigned long RgnSize; // 0x8
    unsigned long dwRgnStorage; // 0xC
    unsigned long dwRgnBlocks; // 0x10
    unsigned long dwRgnGuardBlks; // 0x14
    __int32 fRgnIsAStack; // 0x18
    void *pvBlkBaseAddress; // 0x1C
    unsigned long dwBlkProtection; // 0x20
    unsigned long BlkSize; // 0x24
    unsigned long dwBlkStorage; // 0x28
};
static_assert(sizeof(VMQUERY) == 44, "Invalid VMQUERY size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VMQUERY_H__
#endif
