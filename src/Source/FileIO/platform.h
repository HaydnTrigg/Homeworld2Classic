#if 0
#ifndef __PLATFORM_H__
#define __PLATFORM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum Plat::File::FileAttributes
{
    F_ATTRIBUTE_DIRECTORY = 1, // 0x0001
    F_ATTRIBUTE_FILE = 2, // 0x0002
    F_ATTRIBUTE_READ = 256, // 0x0100
    F_ATTRIBUTE_WRITE = 512, // 0x0200
};

enum Plat::File::FileOpenMode
{
    FO_READ = 0,
    FO_READWRITE,
    FO_WRITE,
};

/* ---------- definitions */

class Plat::CriticalSection
{
private:
    CriticalSection(Plat::CriticalSection const &);
public:
    CriticalSection();
    ~CriticalSection();
    void Enter();
    void Leave();
private:
    void *m_pData; // 0x0
    Plat::CriticalSection &operator=(Plat::CriticalSection const &);
};
static_assert(sizeof(Plat::CriticalSection) == 4, "Invalid Plat::CriticalSection size");

class Plat::CriticalLock
{
private:
    Plat::CriticalSection &m_refCS; // 0x0
    bool m_in; // 0x4
    CriticalLock(Plat::CriticalLock const &);
public:
    _inline CriticalLock(Plat::CriticalSection &);
    _inline ~CriticalLock();
    _inline void Unlock();
private:
    Plat::CriticalLock &operator=(Plat::CriticalLock const &);
};
static_assert(sizeof(Plat::CriticalLock) == 8, "Invalid Plat::CriticalLock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Plat::CriticalLock::CriticalLock(Plat::CriticalSection &) // 0x10001A99
{
    mangled_assert("??0CriticalLock@Plat@@QAE@AAVCriticalSection@1@@Z");
    todo("implement");
}

_inline Plat::CriticalLock::~CriticalLock() // 0x10001E03
{
    mangled_assert("??1CriticalLock@Plat@@QAE@XZ");
    todo("implement");
}

_inline void Plat::CriticalLock::Unlock() // 0x100039E1
{
    mangled_assert("?Unlock@CriticalLock@Plat@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PLATFORM_H__
/* combined */
#ifndef __PLATFORM_H__
#define __PLATFORM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum Plat::File::FileAttributes
{
    F_ATTRIBUTE_DIRECTORY = 1, // 0x0001
    F_ATTRIBUTE_FILE = 2, // 0x0002
    F_ATTRIBUTE_READ = 256, // 0x0100
    F_ATTRIBUTE_WRITE = 512, // 0x0200
};

/* ---------- definitions */

class Plat::CriticalSection
{
private:
    CriticalSection(Plat::CriticalSection const &);
public:
    CriticalSection();
    ~CriticalSection();
    void Enter();
    void Leave();
private:
    void *m_pData; // 0x0
    Plat::CriticalSection &operator=(Plat::CriticalSection const &);
};
static_assert(sizeof(Plat::CriticalSection) == 4, "Invalid Plat::CriticalSection size");

class Plat::CriticalLock
{
private:
    Plat::CriticalSection &m_refCS; // 0x0
    bool m_in; // 0x4
    CriticalLock(Plat::CriticalLock const &);
public:
    _inline CriticalLock(Plat::CriticalSection &);
    _inline ~CriticalLock();
    _inline void Unlock();
private:
    Plat::CriticalLock &operator=(Plat::CriticalLock const &);
};
static_assert(sizeof(Plat::CriticalLock) == 8, "Invalid Plat::CriticalLock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Plat::CriticalLock::CriticalLock(Plat::CriticalSection &) // 0x6C68D7
{
    mangled_assert("??0CriticalLock@Plat@@QAE@AAVCriticalSection@1@@Z");
    todo("implement");
}

_inline Plat::CriticalLock::~CriticalLock() // 0x6C6983
{
    mangled_assert("??1CriticalLock@Plat@@QAE@XZ");
    todo("implement");
}

_inline void Plat::CriticalLock::Unlock() // 0x6C76D4
{
    mangled_assert("?Unlock@CriticalLock@Plat@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PLATFORM_H__
#endif
