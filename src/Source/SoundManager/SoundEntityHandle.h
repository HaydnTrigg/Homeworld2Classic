#if 0
#ifndef __SOUNDENTITYHANDLE_H__
#define __SOUNDENTITYHANDLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundEntityHandle
{
public:
    static SoundEntityHandle Invalid;
    SoundEntityHandle();
    bool operator==(SoundEntityHandle const &) const;
    bool operator!=(SoundEntityHandle const &) const;
    unsigned long r0; // 0x0
    unsigned short r1; // 0x4
    unsigned short r2; // 0x6
};
static_assert(sizeof(SoundEntityHandle) == 8, "Invalid SoundEntityHandle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDENTITYHANDLE_H__
#endif
