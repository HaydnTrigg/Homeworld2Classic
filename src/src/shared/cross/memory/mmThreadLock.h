#if 0
#ifndef __MMTHREADLOCK_H__
#define __MMTHREADLOCK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MMThreadLockObj
{
private:
    MMThreadLockObj(MMThreadLockObj const &);
public:
    MMThreadLockObj();
    ~MMThreadLockObj();
    _inline void Enter();
    _inline void Exit();
private:
    _RTL_CRITICAL_SECTION m_cs; // 0x0
    MMThreadLockObj &operator=(MMThreadLockObj const &);
};
static_assert(sizeof(MMThreadLockObj) == 24, "Invalid MMThreadLockObj size");

class MMThreadLock
{
private:
    MMThreadLock(MMThreadLock const &);
public:
    _inline MMThreadLock(MMThreadLockObj *);
    _inline ~MMThreadLock();
    _inline void Release();
private:
    static void *operator new(unsigned __int32);
    static void *operator new[](unsigned __int32);
    static void operator delete(void *);
    static void operator delete[](void *);
    MMThreadLockObj *m_obj; // 0x0
    bool m_locked; // 0x4
    MMThreadLock &operator=(MMThreadLock const &);
};
static_assert(sizeof(MMThreadLock) == 8, "Invalid MMThreadLock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void MMThreadLockObj::Enter() // 0x10001070
{
    mangled_assert("?Enter@MMThreadLockObj@@QAEXXZ");
    todo("implement");
}

_inline void MMThreadLockObj::Exit() // 0x10001080
{
    mangled_assert("?Exit@MMThreadLockObj@@QAEXXZ");
    todo("implement");
}

_inline MMThreadLock::MMThreadLock(MMThreadLockObj *) // 0x10001000
{
    mangled_assert("??0MMThreadLock@@QAE@PAVMMThreadLockObj@@@Z");
    todo("implement");
}

_inline void MMThreadLock::Release() // 0x10002040
{
    mangled_assert("?Release@MMThreadLock@@QAEXXZ");
    todo("implement");
}

_inline MMThreadLock::~MMThreadLock() // 0x10001020
{
    mangled_assert("??1MMThreadLock@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MMTHREADLOCK_H__
#endif
