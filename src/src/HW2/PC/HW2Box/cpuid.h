#if 0
#ifndef __CPUID_H__
#define __CPUID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _processor_info
{
    char v_name[13]; // 0x0
    char model_name[30]; // 0xD
    __int32 family; // 0x2C
    __int32 model; // 0x30
    __int32 stepping; // 0x34
    __int32 feature; // 0x38
    __int32 os_support; // 0x3C
    __int32 checks; // 0x40
};
static_assert(sizeof(_processor_info) == 68, "Invalid _processor_info size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CPUID_H__
#endif
