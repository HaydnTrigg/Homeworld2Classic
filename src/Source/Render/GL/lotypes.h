#if 0
#ifndef __LOTYPES_H__
#define __LOTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct rndloDevice
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > description; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename; // 0x18
    unsigned __int32 uniqueID; // 0x30
    _inline rndloDevice(rndloDevice const &); /* compiler_generated() */
    _inline rndloDevice(); /* compiler_generated() */
    _inline ~rndloDevice(); /* compiler_generated() */
    rndloDevice &operator=(rndloDevice const &); /* compiler_generated() */
};
static_assert(sizeof(rndloDevice) == 52, "Invalid rndloDevice size");

struct glDynaloadTable
{
    char *name; // 0x0
    unsigned __int32 fn; // 0x4
};
static_assert(sizeof(glDynaloadTable) == 8, "Invalid glDynaloadTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOTYPES_H__
/* combined */
#ifndef __LOTYPES_H__
#define __LOTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct rndloDevice
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > description; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename; // 0x18
    unsigned __int32 uniqueID; // 0x30
    rndloDevice(rndloDevice const &); /* compiler_generated() */
    rndloDevice(); /* compiler_generated() */
    ~rndloDevice(); /* compiler_generated() */
    rndloDevice &operator=(rndloDevice const &); /* compiler_generated() */
};
static_assert(sizeof(rndloDevice) == 52, "Invalid rndloDevice size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOTYPES_H__
/* combined */
#ifndef __LOTYPES_H__
#define __LOTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOTYPES_H__
#endif
