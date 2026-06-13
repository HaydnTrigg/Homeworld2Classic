#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <new>
#include <Memory\mmpeeksmall.h>
#include <Memory\mmPeek.h>
#include <.h>
#include <Memory\MemorySmall.h>
#include <debug\ctassert.h>
#include <Memory\mmCRT.h>
#include <debug\db.h>
#include <Memory\mmThreadLock.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::FSChunks
{
public:
    `anonymous-namespace'::FSChunks *prev; // 0x0
    `anonymous-namespace'::FSChunks *next; // 0x4
private:
    unsigned __int32 const m_allocElement; // 0x8
    unsigned __int32 m_allocBuffer; // 0xC
    unsigned __int32 m_allocMax; // 0x10
    unsigned __int32 m_vmem; // 0x14
    unsigned short m_freeHead; // 0x18
    unsigned short m_freeCount; // 0x1A
    unsigned short m_buf[1]; // 0x1C
    FSChunks(`anonymous-namespace'::FSChunks const &);
    FSChunks(unsigned __int32);
    ~FSChunks();
public:
    static `anonymous-namespace'::FSChunks *Create(unsigned __int32);
    void Release();
    void *Alloc();
    void Free(void *);
    void Reset(unsigned __int32, unsigned __int32);
    void Extend();
    bool IsNotFull() const;
    bool IsOwner(void const *) const;
    unsigned __int32 GetAllocCount() const;
    unsigned __int32 GetMemorySize() const;
private:
    unsigned __int32 CalcChunkSizeof(unsigned __int32);
    unsigned __int32 CalcChunkBuffer(unsigned __int32, unsigned __int32);
    unsigned __int32 CalcChunkMax(unsigned __int32, unsigned __int32);
    `anonymous-namespace'::FSChunks &operator=(`anonymous-namespace'::FSChunks const &);
};
static_assert(sizeof(`anonymous-namespace'::FSChunks) == 32, "Invalid `anonymous-namespace'::FSChunks size");

class `anonymous-namespace'::FSPool
{
private:
    unsigned __int32 m_sizeofAlloc; // 0x0
    unsigned __int32 m_allocCount; // 0x4
    unsigned __int32 m_allocCountMax; // 0x8
    `anonymous-namespace'::FSChunks *m_head; // 0xC
    FSPool(`anonymous-namespace'::FSPool const &);
public:
    FSPool(unsigned __int32 const);
    ~FSPool();
    unsigned __int32 GetAllocSize() const;
    unsigned __int32 GetAllocCount() const;
    unsigned __int32 GetAllocMax() const;
    unsigned __int32 GetMemorySize() const;
    void *Alloc();
    void Free(void *);
    void Shrink();
private:
    void ChunkUnlink(`anonymous-namespace'::FSChunks *);
    void ChunkLink(`anonymous-namespace'::FSChunks *);
    `anonymous-namespace'::FSPool &operator=(`anonymous-namespace'::FSPool const &);
};
static_assert(sizeof(`anonymous-namespace'::FSPool) == 16, "Invalid `anonymous-namespace'::FSPool size");

class `anonymous-namespace'::SmallInternals
{
private:
    static `anonymous-namespace'::SmallInternals *s_llhead;
    `anonymous-namespace'::SmallInternals *m_llprev; // 0x0
    `anonymous-namespace'::SmallInternals *m_llnext; // 0x4
    char const *m_name; // 0x8
    `anonymous-namespace'::FSPool *m_fs[32]; // 0xC
    __int32 m_refcount; // 0x8C
    SmallInternals(`anonymous-namespace'::SmallInternals const &);
    SmallInternals(char const *);
    ~SmallInternals();
public:
    static `anonymous-namespace'::SmallInternals *Create(char const *);
    `anonymous-namespace'::SmallInternals *AddRef();
    void Release();
    void *Alloc(unsigned __int32);
    void Free(void *, unsigned __int32);
    void Shrink();
private:
    void LogIt();
    `anonymous-namespace'::SmallInternals &operator=(`anonymous-namespace'::SmallInternals const &);
};
static_assert(sizeof(`anonymous-namespace'::SmallInternals) == 144, "Invalid `anonymous-namespace'::SmallInternals size");

typedef `anonymous-namespace'::FSChunks ?A0x79a48f2f::FSChunks;
typedef `anonymous-namespace'::FSPool ?A0x79a48f2f::FSPool;
typedef `anonymous-namespace'::SmallInternals ?A0x79a48f2f::SmallInternals;

/* ---------- prototypes */

extern unsigned __int32 MPeekVMMapSmall(MPeekSmallChunk *buf, unsigned __int32 bufsize);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100022C0(MemPoolSmall *const, char const *);
MemPoolSmall::MemPoolSmall(char const *) // 0x100022C0
{
    mangled_assert("??0MemPoolSmall@@QAE@PBD@Z");
    todo("implement");
    _sub_100022C0(this, arg);
}

_extern void _sub_100023C0(MemPoolSmall *const);
MemPoolSmall::~MemPoolSmall() // 0x100023C0
{
    mangled_assert("??1MemPoolSmall@@QAE@XZ");
    todo("implement");
    _sub_100023C0(this);
}

_extern _sub_10002280(MemPoolSmall *const, MemPoolSmall const &);
MemPoolSmall::MemPoolSmall(MemPoolSmall const &) // 0x10002280
{
    mangled_assert("??0MemPoolSmall@@QAE@ABV0@@Z");
    todo("implement");
    _sub_10002280(this, arg);
}

_extern MemPoolSmall &_sub_10002550(MemPoolSmall *const, MemPoolSmall const &);
MemPoolSmall &MemPoolSmall::operator=(MemPoolSmall const &) // 0x10002550
{
    mangled_assert("??4MemPoolSmall@@QAEAAV0@ABV0@@Z");
    todo("implement");
    MemPoolSmall & __result = _sub_10002550(this, arg);
    return __result;
}

_extern void *_sub_10002830(MemPoolSmall *const, unsigned __int32);
void *MemPoolSmall::Alloc(unsigned __int32) // 0x10002830
{
    mangled_assert("?Alloc@MemPoolSmall@@QAEPAXI@Z");
    todo("implement");
    void * __result = _sub_10002830(this, arg);
    return __result;
}

_extern void _sub_10002BB0(MemPoolSmall *const, void *, unsigned __int32);
void MemPoolSmall::Free(void *, unsigned __int32) // 0x10002BB0
{
    mangled_assert("?Free@MemPoolSmall@@QAEXPAXI@Z");
    todo("implement");
    _sub_10002BB0(this, arg, arg);
}

_extern void _sub_10003020(MemPoolSmall *const);
void MemPoolSmall::Shrink() // 0x10003020
{
    mangled_assert("?Shrink@MemPoolSmall@@QAEXXZ");
    todo("implement");
    _sub_10003020(this);
}

_extern unsigned __int32 _sub_10002DE0(MPeekSmallChunk *, unsigned __int32);
unsigned __int32 MPeekVMMapSmall(MPeekSmallChunk *buf, unsigned __int32 bufsize) // 0x10002DE0
{
    mangled_assert("?MPeekVMMapSmall@@YGIPAUMPeekSmallChunk@@I@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10002DE0(buf, bufsize);
    return __result;
}

/* ---------- private code */
#endif
