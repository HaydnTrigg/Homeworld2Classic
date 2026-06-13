#if 0
#ifndef __PROFILEPERFRAME_H__
#define __PROFILEPERFRAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Profile::ProfilePerFrame
{
public:
    ProfilePerFrame(char const *);
    ~ProfilePerFrame();
private:
    unsigned long long m_startTime; // 0x0
    unsigned long long m_cycles; // 0x8
};
static_assert(sizeof(Profile::ProfilePerFrame) == 16, "Invalid Profile::ProfilePerFrame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PROFILEPERFRAME_H__
#endif
