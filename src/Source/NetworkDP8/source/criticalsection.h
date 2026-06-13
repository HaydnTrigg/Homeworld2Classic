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

_extern _sub_6D1D0E(Net::CriticalSection *const);
_inline Net::CriticalSection::CriticalSection() // 0x6D1D0E
{
    mangled_assert("??0CriticalSection@Net@@QAE@XZ");
    todo("implement");
    _sub_6D1D0E(this);
}

_extern void _sub_6D23CA(Net::CriticalSection *const);
_inline Net::CriticalSection::~CriticalSection() // 0x6D23CA
{
    mangled_assert("??1CriticalSection@Net@@QAE@XZ");
    todo("implement");
    _sub_6D23CA(this);
}

_extern void _sub_461634(Net::CriticalSection *const);
_inline void Net::CriticalSection::Enter() // 0x461634
{
    mangled_assert("?Enter@CriticalSection@Net@@QAEXXZ");
    todo("implement");
    _sub_461634(this);
}

_extern void _sub_461993(Net::CriticalSection *const);
_inline void Net::CriticalSection::Leave() // 0x461993
{
    mangled_assert("?Leave@CriticalSection@Net@@QAEXXZ");
    todo("implement");
    _sub_461993(this);
}

_extern _sub_460608(Net::AutoLock *const, Net::CriticalSection &);
_inline Net::AutoLock::AutoLock(Net::CriticalSection &) // 0x460608
{
    mangled_assert("??0AutoLock@Net@@QAE@AAVCriticalSection@1@@Z");
    todo("implement");
    _sub_460608(this, arg);
}

_extern void _sub_460BDD(Net::AutoLock *const);
_inline Net::AutoLock::~AutoLock() // 0x460BDD
{
    mangled_assert("??1AutoLock@Net@@QAE@XZ");
    todo("implement");
    _sub_460BDD(this);
}

/* ---------- private code */

#endif // __CRITICALSECTION_H__
#endif
