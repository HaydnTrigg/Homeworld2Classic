#if 0
#ifndef __MEMORYSMALL_H__
#define __MEMORYSMALL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemPoolSmall
{
public:
    enum
    {
        SIZETHRESHOLD = 128, // 0x0080
    };
    MemPoolSmall(MemPoolSmall const &);
    MemPoolSmall(char const *);
    ~MemPoolSmall();
    MemPoolSmall &operator=(MemPoolSmall const &);
    void *Alloc(unsigned __int32);
    void Free(void *, unsigned __int32);
    void Shrink();
private:
    void *m_internals; // 0x0
};
static_assert(sizeof(MemPoolSmall) == 4, "Invalid MemPoolSmall size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYSMALL_H__
/* combined */
#ifndef __MEMORYSMALL_H__
#define __MEMORYSMALL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYSMALL_H__
#endif
