#if 0
#ifndef __MMPOOL_H__
#define __MMPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MMPoolBase
{
public:
    MMPoolBase *m_next; // 0x4
protected:
    unsigned long const m_magic; // 0x8
private:
    char m_name[32]; // 0xC
public:
    MMPoolBase(MMPoolBase const &); /* compiler_generated() */
protected:
    MMPoolBase(char const *, unsigned long const);
    virtual ~MMPoolBase();
public:
    char const *GetName() const;
    virtual void *Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) = 0;
    virtual void Free(void *, MEMFREETYPE) = 0;
    virtual bool AllocExist(MEMBLOCKINFO const &) = 0;
    virtual void Validate() = 0;
    virtual void Lock() = 0;
    virtual void Unlock() = 0;
    virtual unsigned __int32 GetMemorySize() const = 0;
    virtual unsigned __int32 GetMemorySizeMax() const = 0;
    virtual unsigned __int32 GetAlloc() const = 0;
    virtual unsigned __int32 GetAllocMax() const = 0;
    virtual void Destroy() = 0;
};
static_assert(sizeof(MMPoolBase) == 44, "Invalid MMPoolBase size");

class MMPool :
    public MMPoolBase
{
public:
    static unsigned long const MAGIC;
private:
    void *m_heap; // 0x2C
    __int32 m_locked; // 0x30
    unsigned __int32 m_alloc; // 0x34
    unsigned __int32 m_allocMax; // 0x38
    MMAllocInfo *m_infos; // 0x3C
    MMPool(MMPool const &);
    MMPool(char const *, unsigned __int32);
    virtual ~MMPool() override;
public:
    static void ClassInitialize();
    static void ClassShutdown();
    static MMPool *Create(char const *name, unsigned __int32 initialSize);
    static MMPool *ConvertTo(void *p);
    unsigned long GetHandle() const;
    virtual void *Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &)) override;
    virtual void Free(void *, MEMFREETYPE) override;
    virtual bool AllocExist(MEMBLOCKINFO const &) override;
    virtual void Validate() override;
    virtual void Lock() override;
    virtual void Unlock() override;
    virtual unsigned __int32 GetMemorySize() const override;
    virtual unsigned __int32 GetMemorySizeMax() const override;
    virtual unsigned __int32 GetAlloc() const override;
    virtual unsigned __int32 GetAllocMax() const override;
    virtual void Destroy() override;
private:
    MMPool &operator=(MMPool const &);
};
static_assert(sizeof(MMPool) == 64, "Invalid MMPool size");

class MMAllocInfo
{
public:
    struct AllocEntry
    {
        unsigned long address : 32; // 0x0
        unsigned long traceindex : 32; // 0x4
        unsigned long unique : 32; // 0x8
        unsigned long size : 28; // 0xC
        unsigned long type : 4; // 0xC
        MMAllocInfo::AllocEntry *pNext; // 0x10
    };
    static_assert(sizeof(AllocEntry) == 20, "Invalid AllocEntry size");
private:
    unsigned __int32 m_memsize; // 0x0
    unsigned __int32 m_memsizeMax; // 0x4
    unsigned __int32 m_qty; // 0x8
    MMAllocInfo::AllocEntry *m_closedHash; // 0xC
    unsigned __int32 m_closedHashSize; // 0x10
    void *m_FreeBucketsHeap; // 0x14
    MMAllocInfo::AllocEntry *m_FreeBuckets; // 0x18
    unsigned __int32 m_FreeBucketsSize; // 0x1C
    MMAllocInfo(MMAllocInfo const &);
    MMAllocInfo();
    ~MMAllocInfo();
public:
    static MMAllocInfo *Create();
    static void Destroy(MMAllocInfo *p);
    static unsigned __int32 maxqty;
    static unsigned __int32 maxskip;
    unsigned __int32 Size() const;
    unsigned __int32 MemorySize() const;
    unsigned __int32 MemorySizeMax() const;
    MMAllocInfo::AllocEntry const *Add(void *, unsigned __int32, MEMBLOCKTYPE);
    void Rmv(void *, MEMFREETYPE);
    bool AllocExist(MEMBLOCKINFO const &);
private:
    bool FindFreeSlot(MMAllocInfo::AllocEntry *&, unsigned __int32, MMAllocInfo::AllocEntry *, MMAllocInfo::AllocEntry *&);
    void ExtendHashTable();
    MMAllocInfo::AllocEntry *NewBucket(MMAllocInfo::AllocEntry *&);
    void DeleteBucket(MMAllocInfo::AllocEntry *&, MMAllocInfo::AllocEntry *);
    MMAllocInfo &operator=(MMAllocInfo const &);
};
static_assert(sizeof(MMAllocInfo) == 32, "Invalid MMAllocInfo size");

class MMAllocTrace
{
public:
    struct TraceEntry
    {
        long callstack[32]; // 0x0
    };
    static_assert(sizeof(TraceEntry) == 128, "Invalid TraceEntry size");
    unsigned __int32 m_qty; // 0x0
    MMAllocTrace::TraceEntry m_closedHash[97151]; // 0x4
private:
    MMAllocTrace(MMAllocTrace const &);
public:
    MMAllocTrace();
    ~MMAllocTrace();
    static MMAllocTrace *Create();
    static void Destroy(MMAllocTrace *p);
    static unsigned __int32 maxskip;
    unsigned __int32 Size() const;
    unsigned __int32 AddTrace();
private:
    MMAllocTrace &operator=(MMAllocTrace const &);
};
static_assert(sizeof(MMAllocTrace) == 12435332, "Invalid MMAllocTrace size");

class MMSnapshot
{
private:
    static unsigned long const MAGIC;
    unsigned long m_magic; // 0x0
    char m_name[32]; // 0x4
    unsigned __int32 m_itercount; // 0x24
    unsigned __int32 m_allocsqty; // 0x28
    MMSnapshot(MMSnapshot const &);
    MMSnapshot();
    ~MMSnapshot();
public:
    static MMSnapshot *Create(MMPool const *pool);
    static void Destroy(MMSnapshot *p);
    static MMSnapshot *Convert(void *p);
    static MMSnapshotIterator *IterCreate(MMSnapshot *snap);
    static void IterDestroy(MMSnapshotIterator *p);
    MEMBLOCKINFO const &GetAt(unsigned __int32) const;
    _inline unsigned __int32 GetQty() const;
private:
    MMSnapshot &operator=(MMSnapshot const &);
};
static_assert(sizeof(MMSnapshot) == 44, "Invalid MMSnapshot size");

class MMSnapshotIterator
{
private:
    static unsigned long const MAGIC;
    unsigned long m_magic; // 0x0
    MMSnapshot *m_snapshot; // 0x4
    unsigned __int32 m_index; // 0x8
    MMSnapshotIterator(MMSnapshotIterator const &);
    MMSnapshotIterator();
    ~MMSnapshotIterator();
public:
    static MMSnapshotIterator *Convert(void *p);
    MEMBLOCKINFO const &Get() const;
    bool GoNext();
private:
    MMSnapshotIterator &operator=(MMSnapshotIterator const &);
};
static_assert(sizeof(MMSnapshotIterator) == 12, "Invalid MMSnapshotIterator size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_100052A0(MMSnapshot const *const);
_inline unsigned __int32 MMSnapshot::GetQty() const // 0x100052A0
{
    mangled_assert("?GetQty@MMSnapshot@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100052A0(this);
    return __result;
}

/* ---------- private code */

#endif // __MMPOOL_H__
#endif
