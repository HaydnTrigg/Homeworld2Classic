#if 0
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYPOOL_H__
/* combined */
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _inline _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline _HMEMPOOL *MemoryPoolObj::Handle() // 0x10002180
{
    mangled_assert("?Handle@MemoryPoolObj@@QAEPAU_HMEMPOOL@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYPOOL_H__
/* combined */
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYPOOL_H__
/* combined */
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYPOOL_H__
/* combined */
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYPOOL_H__
/* combined */
#ifndef __MEMORYPOOL_H__
#define __MEMORYPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MemoryPoolObj
{
private:
    _HMEMPOOL *m_pool; // 0x0
    MemoryPoolObj *m_prev; // 0x4
    MemoryPoolObj *m_next; // 0x8
public:
    MemoryPoolObj(MemoryPoolObj const &);
    MemoryPoolObj(char const *, unsigned __int32);
    ~MemoryPoolObj();
    MemoryPoolObj &operator=(MemoryPoolObj const &);
    _HMEMPOOL *Handle();
private:
    void Release();
};
static_assert(sizeof(MemoryPoolObj) == 12, "Invalid MemoryPoolObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYPOOL_H__
#endif
