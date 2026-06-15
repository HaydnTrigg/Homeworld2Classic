#ifndef __XTIME_H__
#define __XTIME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum boost::<unnamed-tag>
{
    TIME_UTC = 1, // 0x0001
    TIME_TAI = 2, // 0x0002
    TIME_MONOTONIC = 3, // 0x0003
    TIME_PROCESS = 4, // 0x0004
    TIME_THREAD = 5, // 0x0005
    TIME_LOCAL = 6, // 0x0006
    TIME_SYNC = 7, // 0x0007
    TIME_RESOLUTION = 8, // 0x0008
};

/* ---------- definitions */

struct boost::xtime
{
    long long sec; // 0x0
    __int32 nsec; // 0x8
};
static_assert(sizeof(boost::xtime) == 16, "Invalid boost::xtime size");

/* ---------- prototypes */

extern _inline __int32 boost::xtime_cmp(boost::xtime const &xt1, boost::xtime const &xt2);

/* ---------- globals */

/* ---------- public code */

_inline __int32 boost::xtime_cmp(boost::xtime const &xt1, boost::xtime const &xt2) // 0x6D867F
{
    mangled_assert("?xtime_cmp@boost@@YGHABUxtime@1@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __XTIME_H__
