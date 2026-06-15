#if 0
#ifndef __CRITICALSECTION_H__
#define __CRITICALSECTION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::CriticalSection
{
public:
    _inline CriticalSection();
    _inline ~CriticalSection();
    _inline void Enter();
    _inline void Leave();
private:
    _RTL_CRITICAL_SECTION m_cs; // 0x0
};
static_assert(sizeof(Net::CriticalSection) == 24, "Invalid Net::CriticalSection size");

class Net::AutoLock
{
public:
    _inline AutoLock(Net::CriticalSection &);
    _inline ~AutoLock();
private:
    Net::CriticalSection &m_cs; // 0x0
};
static_assert(sizeof(Net::AutoLock) == 4, "Invalid Net::AutoLock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Net::CriticalSection::CriticalSection() // 0x6D1D0E
{
    mangled_assert("??0CriticalSection@Net@@QAE@XZ");
    todo("implement");
}

_inline Net::CriticalSection::~CriticalSection() // 0x6D23CA
{
    mangled_assert("??1CriticalSection@Net@@QAE@XZ");
    todo("implement");
}

_inline void Net::CriticalSection::Enter() // 0x461634
{
    mangled_assert("?Enter@CriticalSection@Net@@QAEXXZ");
    todo("implement");
}

_inline void Net::CriticalSection::Leave() // 0x461993
{
    mangled_assert("?Leave@CriticalSection@Net@@QAEXXZ");
    todo("implement");
}

_inline Net::AutoLock::AutoLock(Net::CriticalSection &) // 0x460608
{
    mangled_assert("??0AutoLock@Net@@QAE@AAVCriticalSection@1@@Z");
    todo("implement");
}

_inline Net::AutoLock::~AutoLock() // 0x460BDD
{
    mangled_assert("??1AutoLock@Net@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CRITICALSECTION_H__
#endif
