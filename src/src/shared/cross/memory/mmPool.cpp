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

_extern void _sub_10005360(MEMBLOCKTYPE, MEMFREETYPE);
void MMPoolCheckFree(MEMBLOCKTYPE a, MEMFREETYPE f) // 0x10005360
{
    mangled_assert("?MMPoolCheckFree@@YGXW4MEMBLOCKTYPE@@W4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_10005360(a, f);
}

_extern void _sub_10005370(char const *, unsigned __int32);
void MMPoolCheckLeaks(char const *poolname, unsigned __int32 allocs) // 0x10005370
{
    mangled_assert("?MMPoolCheckLeaks@@YGXPBDI@Z");
    todo("implement");
    _sub_10005370(poolname, allocs);
}

_extern void _sub_100053B0(void *, unsigned __int32);
void MMPoolFill(void *p, unsigned __int32 size) // 0x100053B0
{
    mangled_assert("?MMPoolFill@@YGXPAXI@Z");
    todo("implement");
    _sub_100053B0(p, size);
}

_extern _sub_10004640(MMPoolBase *const, char const *, unsigned long const);
MMPoolBase::MMPoolBase(char const *, unsigned long const) // 0x10004640
{
    mangled_assert("??0MMPoolBase@@IAE@PBDK@Z");
    todo("implement");
    _sub_10004640(this, arg, arg);
}

_extern void _sub_10004770(MMPoolBase *const);
MMPoolBase::~MMPoolBase() // 0x10004770
{
    mangled_assert("??1MMPoolBase@@MAE@XZ");
    todo("implement");
    _sub_10004770(this);
}

_extern char const *_sub_10005290(MMPoolBase const *const);
char const *MMPoolBase::GetName() const // 0x10005290
{
    mangled_assert("?GetName@MMPoolBase@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10005290(this);
    return __result;
}

_extern void _sub_10004C20();
void MMPool::ClassInitialize() // 0x10004C20
{
    mangled_assert("?ClassInitialize@MMPool@@SGXXZ");
    todo("implement");
    _sub_10004C20();
}

_extern void _sub_10004C40();
void MMPool::ClassShutdown() // 0x10004C40
{
    mangled_assert("?ClassShutdown@MMPool@@SGXXZ");
    todo("implement");
    _sub_10004C40();
}

_extern MMPool *_sub_10004DC0(char const *, unsigned __int32);
MMPool *MMPool::Create(char const *name, unsigned __int32 initialSize) // 0x10004DC0
{
    mangled_assert("?Create@MMPool@@SGPAV1@PBDI@Z");
    todo("implement");
    MMPool * __result = _sub_10004DC0(name, initialSize);
    return __result;
}

_extern void _sub_10004EA0(MMPool *const);
void MMPool::Destroy() // 0x10004EA0
{
    mangled_assert("?Destroy@MMPool@@UAEXXZ");
    todo("implement");
    _sub_10004EA0(this);
}

_extern _sub_100045D0(MMPool *const, char const *, unsigned __int32);
MMPool::MMPool(char const *, unsigned __int32) // 0x100045D0
{
    mangled_assert("??0MMPool@@AAE@PBDI@Z");
    todo("implement");
    _sub_100045D0(this, arg, arg);
}

_extern void _sub_100046D0(MMPool *const);
MMPool::~MMPool() // 0x100046D0
{
    mangled_assert("??1MMPool@@EAE@XZ");
    todo("implement");
    _sub_100046D0(this);
}

_extern MMPool *_sub_10004CE0(void *);
MMPool *MMPool::ConvertTo(void *p) // 0x10004CE0
{
    mangled_assert("?ConvertTo@MMPool@@SGPAV1@PAX@Z");
    todo("implement");
    MMPool * __result = _sub_10004CE0(p);
    return __result;
}

_extern unsigned __int32 _sub_10005270(MMPool const *const);
unsigned __int32 MMPool::GetMemorySize() const // 0x10005270
{
    mangled_assert("?GetMemorySize@MMPool@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10005270(this);
    return __result;
}

_extern unsigned __int32 _sub_10005280(MMPool const *const);
unsigned __int32 MMPool::GetMemorySizeMax() const // 0x10005280
{
    mangled_assert("?GetMemorySizeMax@MMPool@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10005280(this);
    return __result;
}

_extern unsigned long _sub_10005260(MMPool const *const);
unsigned long MMPool::GetHandle() const // 0x10005260
{
    mangled_assert("?GetHandle@MMPool@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_10005260(this);
    return __result;
}

_extern unsigned __int32 _sub_10005220(MMPool const *const);
unsigned __int32 MMPool::GetAlloc() const // 0x10005220
{
    mangled_assert("?GetAlloc@MMPool@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10005220(this);
    return __result;
}

_extern unsigned __int32 _sub_10005230(MMPool const *const);
unsigned __int32 MMPool::GetAllocMax() const // 0x10005230
{
    mangled_assert("?GetAllocMax@MMPool@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10005230(this);
    return __result;
}

_extern void _sub_10005510(MMPool *const);
void MMPool::Validate() // 0x10005510
{
    mangled_assert("?Validate@MMPool@@UAEXXZ");
    todo("implement");
    _sub_10005510(this);
}

_extern void *_sub_10004AB0(MMPool *const, unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
void *MMPool::Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) // 0x10004AB0
{
    mangled_assert("?Alloc@MMPool@@UAEPAXIW4MEMBLOCKTYPE@@P6GXABQAU_HMEMPOOL@@ABUMEMBLOCKINFO@@@Z@Z");
    todo("implement");
    void * __result = _sub_10004AB0(this, arg, arg, arg);
    return __result;
}

_extern void _sub_100051D0(MMPool *const, void *, MEMFREETYPE);
void MMPool::Free(void *, MEMFREETYPE) // 0x100051D0
{
    mangled_assert("?Free@MMPool@@UAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_100051D0(this, arg, arg);
}

_extern bool _sub_10004C00(MMPool *const, MEMBLOCKINFO const &);
bool MMPool::AllocExist(MEMBLOCKINFO const &) // 0x10004C00
{
    mangled_assert("?AllocExist@MMPool@@UAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
    bool __result = _sub_10004C00(this, arg);
    return __result;
}

_extern void _sub_10005350(MMPool *const);
void MMPool::Lock() // 0x10005350
{
    mangled_assert("?Lock@MMPool@@UAEXXZ");
    todo("implement");
    _sub_10005350(this);
}

_extern void _sub_10005500(MMPool *const);
void MMPool::Unlock() // 0x10005500
{
    mangled_assert("?Unlock@MMPool@@UAEXXZ");
    todo("implement");
    _sub_10005500(this);
}

_extern MMAllocInfo *_sub_10004D00();
MMAllocInfo *MMAllocInfo::Create() // 0x10004D00
{
    mangled_assert("?Create@MMAllocInfo@@SGPAV1@XZ");
    todo("implement");
    MMAllocInfo * __result = _sub_10004D00();
    return __result;
}

_extern void _sub_10004E30(MMAllocInfo *);
void MMAllocInfo::Destroy(MMAllocInfo *p) // 0x10004E30
{
    mangled_assert("?Destroy@MMAllocInfo@@SGXPAV1@@Z");
    todo("implement");
    _sub_10004E30(p);
}

_extern _sub_100045A0(MMAllocInfo *const);
MMAllocInfo::MMAllocInfo() // 0x100045A0
{
    mangled_assert("??0MMAllocInfo@@AAE@XZ");
    todo("implement");
    _sub_100045A0(this);
}

_extern void _sub_100046B0(MMAllocInfo *const);
MMAllocInfo::~MMAllocInfo() // 0x100046B0
{
    mangled_assert("??1MMAllocInfo@@AAE@XZ");
    todo("implement");
    _sub_100046B0(this);
}

_extern unsigned __int32 _sub_100054E0(MMAllocInfo const *const);
unsigned __int32 MMAllocInfo::Size() const // 0x100054E0
{
    mangled_assert("?Size@MMAllocInfo@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100054E0(this);
    return __result;
}

_extern unsigned __int32 _sub_100053C0(MMAllocInfo const *const);
unsigned __int32 MMAllocInfo::MemorySize() const // 0x100053C0
{
    mangled_assert("?MemorySize@MMAllocInfo@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100053C0(this);
    return __result;
}

_extern unsigned __int32 _sub_100053D0(MMAllocInfo const *const);
unsigned __int32 MMAllocInfo::MemorySizeMax() const // 0x100053D0
{
    mangled_assert("?MemorySizeMax@MMAllocInfo@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100053D0(this);
    return __result;
}

_extern void _sub_10004EE0(MMAllocInfo *const);
void MMAllocInfo::ExtendHashTable() // 0x10004EE0
{
    mangled_assert("?ExtendHashTable@MMAllocInfo@@AAEXXZ");
    todo("implement");
    _sub_10004EE0(this);
}

_extern MMAllocInfo::AllocEntry const *_sub_10004880(MMAllocInfo *const, void *, unsigned __int32, MEMBLOCKTYPE);
MMAllocInfo::AllocEntry const *MMAllocInfo::Add(void *, unsigned __int32, MEMBLOCKTYPE) // 0x10004880
{
    mangled_assert("?Add@MMAllocInfo@@QAEPBUAllocEntry@1@PAXIW4MEMBLOCKTYPE@@@Z");
    todo("implement");
    MMAllocInfo::AllocEntry const * __result = _sub_10004880(this, arg, arg, arg);
    return __result;
}

_extern void _sub_10005410(MMAllocInfo *const, void *, MEMFREETYPE);
void MMAllocInfo::Rmv(void *, MEMFREETYPE) // 0x10005410
{
    mangled_assert("?Rmv@MMAllocInfo@@QAEXPAXW4MEMFREETYPE@@@Z");
    todo("implement");
    _sub_10005410(this, arg, arg);
}

_extern bool _sub_10004B90(MMAllocInfo *const, MEMBLOCKINFO const &);
bool MMAllocInfo::AllocExist(MEMBLOCKINFO const &) // 0x10004B90
{
    mangled_assert("?AllocExist@MMAllocInfo@@QAE_NABUMEMBLOCKINFO@@@Z");
    todo("implement");
    bool __result = _sub_10004B90(this, arg);
    return __result;
}

_extern bool _sub_10005160(MMAllocInfo *const, MMAllocInfo::AllocEntry *&, unsigned __int32, MMAllocInfo::AllocEntry *, MMAllocInfo::AllocEntry *&);
bool MMAllocInfo::FindFreeSlot(MMAllocInfo::AllocEntry *&, unsigned __int32, MMAllocInfo::AllocEntry *, MMAllocInfo::AllocEntry *&) // 0x10005160
{
    mangled_assert("?FindFreeSlot@MMAllocInfo@@AAE_NAAPAUAllocEntry@1@IPAU21@0@Z");
    todo("implement");
    bool __result = _sub_10005160(this, arg, arg, arg, arg);
    return __result;
}

_extern MMAllocInfo::AllocEntry *_sub_100053E0(MMAllocInfo *const, MMAllocInfo::AllocEntry *&);
MMAllocInfo::AllocEntry *MMAllocInfo::NewBucket(MMAllocInfo::AllocEntry *&) // 0x100053E0
{
    mangled_assert("?NewBucket@MMAllocInfo@@AAEPAUAllocEntry@1@AAPAU21@@Z");
    todo("implement");
    MMAllocInfo::AllocEntry * __result = _sub_100053E0(this, arg);
    return __result;
}

_extern void _sub_10004E00(MMAllocInfo *const, MMAllocInfo::AllocEntry *&, MMAllocInfo::AllocEntry *);
void MMAllocInfo::DeleteBucket(MMAllocInfo::AllocEntry *&, MMAllocInfo::AllocEntry *) // 0x10004E00
{
    mangled_assert("?DeleteBucket@MMAllocInfo@@AAEXAAPAUAllocEntry@1@PAU21@@Z");
    todo("implement");
    _sub_10004E00(this, arg, arg);
}

_extern MMAllocTrace *_sub_10004D90();
MMAllocTrace *MMAllocTrace::Create() // 0x10004D90
{
    mangled_assert("?Create@MMAllocTrace@@SGPAV1@XZ");
    todo("implement");
    MMAllocTrace * __result = _sub_10004D90();
    return __result;
}

_extern void _sub_10004E80(MMAllocTrace *);
void MMAllocTrace::Destroy(MMAllocTrace *p) // 0x10004E80
{
    mangled_assert("?Destroy@MMAllocTrace@@SGXPAV1@@Z");
    todo("implement");
    _sub_10004E80(p);
}

_extern _sub_100045C0(MMAllocTrace *const);
MMAllocTrace::MMAllocTrace() // 0x100045C0
{
    mangled_assert("??0MMAllocTrace@@QAE@XZ");
    todo("implement");
    _sub_100045C0(this);
}

_extern void _sub_100046C0(MMAllocTrace *const);
MMAllocTrace::~MMAllocTrace() // 0x100046C0
{
    mangled_assert("??1MMAllocTrace@@QAE@XZ");
    todo("implement");
    _sub_100046C0(this);
}

_extern unsigned __int32 _sub_100054F0(MMAllocTrace const *const);
unsigned __int32 MMAllocTrace::Size() const // 0x100054F0
{
    mangled_assert("?Size@MMAllocTrace@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100054F0(this);
    return __result;
}

_extern unsigned __int32 _sub_10004970(MMAllocTrace *const);
unsigned __int32 MMAllocTrace::AddTrace() // 0x10004970
{
    mangled_assert("?AddTrace@MMAllocTrace@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10004970(this);
    return __result;
}

_extern _sub_10004670(MMSnapshot *const);
MMSnapshot::MMSnapshot() // 0x10004670
{
    mangled_assert("??0MMSnapshot@@AAE@XZ");
    todo("implement");
    _sub_10004670(this);
}

_extern void _sub_10004780(MMSnapshot *const);
MMSnapshot::~MMSnapshot() // 0x10004780
{
    mangled_assert("??1MMSnapshot@@AAE@XZ");
    todo("implement");
    _sub_10004780(this);
}

_extern MMSnapshot *_sub_10004DF0(MMPool const *);
MMSnapshot *MMSnapshot::Create(MMPool const *pool) // 0x10004DF0
{
    mangled_assert("?Create@MMSnapshot@@SGPAV1@PBVMMPool@@@Z");
    todo("implement");
    MMSnapshot * __result = _sub_10004DF0(pool);
    return __result;
}

_extern MMSnapshot *_sub_10004CA0(void *);
MMSnapshot *MMSnapshot::Convert(void *p) // 0x10004CA0
{
    mangled_assert("?Convert@MMSnapshot@@SGPAV1@PAX@Z");
    todo("implement");
    MMSnapshot * __result = _sub_10004CA0(p);
    return __result;
}

_extern void _sub_10004EC0(MMSnapshot *);
void MMSnapshot::Destroy(MMSnapshot *p) // 0x10004EC0
{
    mangled_assert("?Destroy@MMSnapshot@@SGXPAV1@@Z");
    todo("implement");
    _sub_10004EC0(p);
}

_extern MMSnapshotIterator *_sub_100052D0(MMSnapshot *);
MMSnapshotIterator *MMSnapshot::IterCreate(MMSnapshot *snap) // 0x100052D0
{
    mangled_assert("?IterCreate@MMSnapshot@@SGPAVMMSnapshotIterator@@PAV1@@Z");
    todo("implement");
    MMSnapshotIterator * __result = _sub_100052D0(snap);
    return __result;
}

_extern void _sub_10005330(MMSnapshotIterator *);
void MMSnapshot::IterDestroy(MMSnapshotIterator *p) // 0x10005330
{
    mangled_assert("?IterDestroy@MMSnapshot@@SGXPAVMMSnapshotIterator@@@Z");
    todo("implement");
    _sub_10005330(p);
}

_extern MEMBLOCKINFO const &_sub_10005240(MMSnapshot const *const, unsigned __int32);
MEMBLOCKINFO const &MMSnapshot::GetAt(unsigned __int32) const // 0x10005240
{
    mangled_assert("?GetAt@MMSnapshot@@QBEABUMEMBLOCKINFO@@I@Z");
    todo("implement");
    MEMBLOCKINFO const & __result = _sub_10005240(this, arg);
    return __result;
}

_extern _sub_10004690(MMSnapshotIterator *const);
MMSnapshotIterator::MMSnapshotIterator() // 0x10004690
{
    mangled_assert("??0MMSnapshotIterator@@AAE@XZ");
    todo("implement");
    _sub_10004690(this);
}

_extern void _sub_10004790(MMSnapshotIterator *const);
MMSnapshotIterator::~MMSnapshotIterator() // 0x10004790
{
    mangled_assert("??1MMSnapshotIterator@@AAE@XZ");
    todo("implement");
    _sub_10004790(this);
}

_extern MMSnapshotIterator *_sub_10004CC0(void *);
MMSnapshotIterator *MMSnapshotIterator::Convert(void *p) // 0x10004CC0
{
    mangled_assert("?Convert@MMSnapshotIterator@@SGPAV1@PAX@Z");
    todo("implement");
    MMSnapshotIterator * __result = _sub_10004CC0(p);
    return __result;
}

_extern bool _sub_100052B0(MMSnapshotIterator *const);
bool MMSnapshotIterator::GoNext() // 0x100052B0
{
    mangled_assert("?GoNext@MMSnapshotIterator@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_100052B0(this);
    return __result;
}

_extern MEMBLOCKINFO const &_sub_10005200(MMSnapshotIterator const *const);
MEMBLOCKINFO const &MMSnapshotIterator::Get() const // 0x10005200
{
    mangled_assert("?Get@MMSnapshotIterator@@QBEABUMEMBLOCKINFO@@XZ");
    todo("implement");
    MEMBLOCKINFO const & __result = _sub_10005200(this);
    return __result;
}

/* ---------- private code */

_extern unsigned long _sub_10005540(void const *, unsigned __int32);
_static unsigned long hashBlock(void const *memblock, unsigned __int32 len) // 0x10005540
{
    mangled_assert("hashBlock");
    todo("implement");
    unsigned long __result = _sub_10005540(memblock, len);
    return __result;
}
#endif
