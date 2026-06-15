#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

#include <memory\memorylib.h>

/* ---------- constants */

/* ---------- definitions */


class MemoryPoolObj
{
private:
    HMEMPOOL m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const & rhs);
    MemoryPoolObj(char const * poolName, unsigned __int32 initialSize);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const & rhs);
    HMEMPOOL Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline HMEMPOOL MemoryPoolObj::Handle() // 0x10002180
{
    mangled_assert("?Handle@MemoryPoolObj@@QAEPAU_HMEMPOOL@@XZ");
    
    return m_pool;
}

/* ---------- private code */

#endif // __MEMORYPOOL_H__
