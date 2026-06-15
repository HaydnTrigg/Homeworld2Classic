#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <new>
#include <Memory\mmCRT.h>
#include <Memory\mmStackTrace.h>
#include <debug\ctassert.h>
#include <.h>
#include <Memory\mmPool.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void MMPoolCheckFree(MEMBLOCKTYPE a, MEMFREETYPE f);
extern void MMPoolCheckLeaks(char const *poolname, unsigned __int32 allocs);
extern void MMPoolFill(void *p, unsigned __int32 size);

_static unsigned long hashBlock(void const *memblock, unsigned __int32 len);

/* ---------- globals */

extern unsigned long const MMPool::MAGIC; // 0x1000837C
extern unsigned __int32 MMAllocInfo::maxqty; // 0x1000B288
extern unsigned __int32 MMAllocInfo::maxskip; // 0x1000B28C
extern unsigned __int32 MMAllocTrace::maxskip; // 0x1000B290
extern unsigned long const MMSnapshot::MAGIC; // 0x10008380
extern unsigned long const MMSnapshotIterator::MAGIC; // 0x10008384

/* ---------- private variables */

_static
{
    extern unsigned __int32 const AllocEntrySizePrimes[5]; // 0x10008388
    extern void *s_POOLHEAP; // 0x1000B294
    extern void *s_INFOHEAP; // 0x1000B298
    extern MMAllocTrace *s_traces; // 0x1000B29C
    extern unsigned __int32 s_unique; // 0x1000B020
}

/* ---------- public code */

void MMPoolCheckFree(MEMBLOCKTYPE a, MEMFREETYPE f) // 0x10005360
{
    mangled_assert("?MMPoolCheckFree@@YGXW4MEMBLOCKTYPE@@W4MEMFREETYPE@@@Z");
    todo("implement");
}

void MMPoolCheckLeaks(char const *poolname, unsigned __int32 allocs) // 0x10005370
{
    mangled_assert("?MMPoolCheckLeaks@@YGXPBDI@Z");
    todo("implement");
}

void MMPoolFill(void *p, unsigned __int32 size) // 0x100053B0
{
    mangled_assert("?MMPoolFill@@YGXPAXI@Z");
    todo("implement");
}

MMPoolBase::MMPoolBase(char const *, unsigned long const) // 0x10004640
{
    mangled_assert("??0MMPoolBase@@IAE@PBDK@Z");
    todo("implement");
}

MMPoolBase::~MMPoolBase() // 0x10004770
{
    mangled_assert("??1MMPoolBase@@MAE@XZ");
    todo("implement");
}

char const *MMPoolBase::GetName() const // 0x10005290
{
    mangled_assert("?GetName@MMPoolBase@@QBEPBDXZ");
    todo("implement");
}

void MMPool::ClassInitialize() // 0x10004C20
{
    mangled_assert("?ClassInitialize@MMPool@@SGXXZ");
    todo("implement");
}

void MMPool::ClassShutdown() // 0x10004C40
{
    mangled_assert("?ClassShutdown@MMPool@@SGXXZ");
    todo("implement");
}

MMPool *MMPool::Create(char const *name, unsigned __int32 initialSize) // 0x10004DC0
{
    mangled_assert("?Create@MMPool@@SGPAV1@PBDI@Z");
    todo("implement");
}

void MMPool::Destroy() // 0x10004EA0
{
    mangled_assert("?Destroy@MMPool@@UAEXXZ");
    todo("implement");
}

MMPool::MMPool(char const *, unsigned __int32) // 0x100045D0
{
    mangled_assert("??0MMPool@@AAE@PBDI@Z");
    todo("implement");
}

MMPool::~MMPool() // 0x100046D0
{
    mangled_assert("??1MMPool@@EAE@XZ");
    todo("implement");
}

MMPool *MMPool::ConvertTo(void *p) // 0x10004CE0
{
    mangled_assert("?ConvertTo@MMPool@@SGPAV1@PAX@Z");
    todo("implement");
}

unsigned __int32 MMPool::GetMemorySize() const // 0x10005270
{
    mangled_assert("?GetMemorySize@MMPool@@UBEIXZ");
    todo("implement");
}

unsigned __int32 MMPool::GetMemorySizeMax() const // 0x10005280
{
    mangled_assert("?GetMemorySizeMax@MMPool@@UBEIXZ");
    todo("implement");
}

unsigned long MMPool::GetHandle() const // 0x10005260
{
    mangled_assert("?GetHandle@MMPool@@QBEKXZ");
    todo("implement");
}

unsigned __int32 MMPool::GetAlloc() const // 0x10005220
{
    mangled_assert("?GetAlloc@MMPool@@UBEIXZ");
    todo("implement");
}

unsigned __int32 MMPool::GetAllocMax() const // 0x10005230
{
    mangled_assert("?GetAllocMax@MMPool@@UBEIXZ");
    todo("implement");
}

void MMPool::Validate() // 0x10005510
{
    mangled_assert("?Validate@MMPool@@UAEXXZ");
    todo("implement");
}

void *MMPool::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x10004AB0
{
    mangled_assert("?Alloc@MMPool@@UAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
}

void MMPool::Free(void *, MEMFREETYPE) // 0x100051D0
{
    mangled_assert("?Free@MMPool@@UAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
}

bool MMPool::AllocExist(MEMBLOCKINFO const &) // 0x10004C00
{
    mangled_assert("?AllocExist@MMPool@@UAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
}

void MMPool::Lock() // 0x10005350
{
    mangled_assert("?Lock@MMPool@@UAEXXZ");
    todo("implement");
}

void MMPool::Unlock() // 0x10005500
{
    mangled_assert("?Unlock@MMPool@@UAEXXZ");
    todo("implement");
}

MMAllocInfo *MMAllocInfo::Create() // 0x10004D00
{
    mangled_assert("?Create@MMAllocInfo@@SGPAV1@XZ");
    todo("implement");
}

void MMAllocInfo::Destroy(MMAllocInfo *p) // 0x10004E30
{
    mangled_assert("?Destroy@MMAllocInfo@@SGXPAV1@@Z");
    todo("implement");
}

MMAllocInfo::MMAllocInfo() // 0x100045A0
{
    mangled_assert("??0MMAllocInfo@@AAE@XZ");
    todo("implement");
}

MMAllocInfo::~MMAllocInfo() // 0x100046B0
{
    mangled_assert("??1MMAllocInfo@@AAE@XZ");
    todo("implement");
}

unsigned __int32 MMAllocInfo::Size() const // 0x100054E0
{
    mangled_assert("?Size@MMAllocInfo@@QBEIXZ");
    todo("implement");
}

unsigned __int32 MMAllocInfo::MemorySize() const // 0x100053C0
{
    mangled_assert("?MemorySize@MMAllocInfo@@QBEIXZ");
    todo("implement");
}

unsigned __int32 MMAllocInfo::MemorySizeMax() const // 0x100053D0
{
    mangled_assert("?MemorySizeMax@MMAllocInfo@@QBEIXZ");
    todo("implement");
}

void MMAllocInfo::ExtendHashTable() // 0x10004EE0
{
    mangled_assert("?ExtendHashTable@MMAllocInfo@@AAEXXZ");
    todo("implement");
}

MMAllocInfo::AllocEntry const *MMAllocInfo::Add(void *, unsigned __int32, MEMBLOCKTYPE) // 0x10004880
{
    mangled_assert("?Add@MMAllocInfo@@QAEPBUAllocEntry@1@PAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
}

void MMAllocInfo::Rmv(void *, MEMFREETYPE) // 0x10005410
{
    mangled_assert("?Rmv@MMAllocInfo@@QAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
}

bool MMAllocInfo::AllocExist(MEMBLOCKINFO const &) // 0x10004B90
{
    mangled_assert("?AllocExist@MMAllocInfo@@QAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
}

bool MMAllocInfo::FindFreeSlot(MMAllocInfo::AllocEntry *&, unsigned __int32, MMAllocInfo::AllocEntry *, MMAllocInfo::AllocEntry *&) // 0x10005160
{
    mangled_assert("?FindFreeSlot@MMAllocInfo@@AAE_NAAPAUAllocEntry@1@IPAU21@0@Z");
    todo("implement");
}

MMAllocInfo::AllocEntry *MMAllocInfo::NewBucket(MMAllocInfo::AllocEntry *&) // 0x100053E0
{
    mangled_assert("?NewBucket@MMAllocInfo@@AAEPAUAllocEntry@1@AAPAU21@@Z");
    todo("implement");
}

void MMAllocInfo::DeleteBucket(MMAllocInfo::AllocEntry *&, MMAllocInfo::AllocEntry *) // 0x10004E00
{
    mangled_assert("?DeleteBucket@MMAllocInfo@@AAEXAAPAUAllocEntry@1@PAU21@@Z");
    todo("implement");
}

MMAllocTrace *MMAllocTrace::Create() // 0x10004D90
{
    mangled_assert("?Create@MMAllocTrace@@SGPAV1@XZ");
    todo("implement");
}

void MMAllocTrace::Destroy(MMAllocTrace *p) // 0x10004E80
{
    mangled_assert("?Destroy@MMAllocTrace@@SGXPAV1@@Z");
    todo("implement");
}

MMAllocTrace::MMAllocTrace() // 0x100045C0
{
    mangled_assert("??0MMAllocTrace@@QAE@XZ");
    todo("implement");
}

MMAllocTrace::~MMAllocTrace() // 0x100046C0
{
    mangled_assert("??1MMAllocTrace@@QAE@XZ");
    todo("implement");
}

unsigned __int32 MMAllocTrace::Size() const // 0x100054F0
{
    mangled_assert("?Size@MMAllocTrace@@QBEIXZ");
    todo("implement");
}

unsigned __int32 MMAllocTrace::AddTrace() // 0x10004970
{
    mangled_assert("?AddTrace@MMAllocTrace@@QAEIXZ");
    todo("implement");
}

MMSnapshot::MMSnapshot() // 0x10004670
{
    mangled_assert("??0MMSnapshot@@AAE@XZ");
    todo("implement");
}

MMSnapshot::~MMSnapshot() // 0x10004780
{
    mangled_assert("??1MMSnapshot@@AAE@XZ");
    todo("implement");
}

MMSnapshot *MMSnapshot::Create(MMPool const *pool) // 0x10004DF0
{
    mangled_assert("?Create@MMSnapshot@@SGPAV1@PBVMMPool@@@Z");
    todo("implement");
}

MMSnapshot *MMSnapshot::Convert(void *p) // 0x10004CA0
{
    mangled_assert("?Convert@MMSnapshot@@SGPAV1@PAX@Z");
    todo("implement");
}

void MMSnapshot::Destroy(MMSnapshot *p) // 0x10004EC0
{
    mangled_assert("?Destroy@MMSnapshot@@SGXPAV1@@Z");
    todo("implement");
}

MMSnapshotIterator *MMSnapshot::IterCreate(MMSnapshot *snap) // 0x100052D0
{
    mangled_assert("?IterCreate@MMSnapshot@@SGPAVMMSnapshotIterator@@PAV1@@Z");
    todo("implement");
}

void MMSnapshot::IterDestroy(MMSnapshotIterator *p) // 0x10005330
{
    mangled_assert("?IterDestroy@MMSnapshot@@SGXPAVMMSnapshotIterator@@@Z");
    todo("implement");
}

MEMBLOCKINFO const &MMSnapshot::GetAt(unsigned __int32) const // 0x10005240
{
    mangled_assert("?GetAt@MMSnapshot@@QBEABUMEMBLOCKINFO@@I@Z");
    todo("implement");
}

MMSnapshotIterator::MMSnapshotIterator() // 0x10004690
{
    mangled_assert("??0MMSnapshotIterator@@AAE@XZ");
    todo("implement");
}

MMSnapshotIterator::~MMSnapshotIterator() // 0x10004790
{
    mangled_assert("??1MMSnapshotIterator@@AAE@XZ");
    todo("implement");
}

MMSnapshotIterator *MMSnapshotIterator::Convert(void *p) // 0x10004CC0
{
    mangled_assert("?Convert@MMSnapshotIterator@@SGPAV1@PAX@Z");
    todo("implement");
}

bool MMSnapshotIterator::GoNext() // 0x100052B0
{
    mangled_assert("?GoNext@MMSnapshotIterator@@QAE_NXZ");
    todo("implement");
}

MEMBLOCKINFO const &MMSnapshotIterator::Get() const // 0x10005200
{
    mangled_assert("?Get@MMSnapshotIterator@@QBEABUMEMBLOCKINFO@@XZ");
    todo("implement");
}

/* ---------- private code */

_static unsigned long hashBlock(void const *memblock, unsigned __int32 len) // 0x10005540
{
    mangled_assert("hashBlock");
    todo("implement");
}
#endif
