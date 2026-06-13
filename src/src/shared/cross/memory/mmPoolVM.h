#if 0
#ifndef __MMPOOLVM_H__
#define __MMPOOLVM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MMPoolVM :
    public MMPoolBase
{
public:
    static unsigned long const MAGIC;
    class Internals
    {
public:
        enum
        {
            SIZEPAGE = 4096, // 0x1000
        };
        enum
        {
            SIZEREGION = 2097152, // 0x00200000
        };
        enum CheckMode
        {
            CHECK_Under = 0,
            CHECK_Over,
        };
        struct Region
        {
            void *vmblock; // 0x0
            MMPoolVM::Internals::RegionFreeBlock blocks[256]; // 0x4
            MMPoolVM::Internals::RegionFreeBlock blockhead; // 0xC04
            MMPoolVM::Internals::RegionFreeBlock blocktail; // 0xC10
            MMPoolVM::Internals::Region *prev; // 0xC1C
            MMPoolVM::Internals::Region *next; // 0xC20
        };
        static_assert(sizeof(Region) == 3108, "Invalid Region size");
        struct RegionFreeBlock
        {
            void *address; // 0x0
            MMPoolVM::Internals::RegionFreeBlock *prev; // 0x4
            MMPoolVM::Internals::RegionFreeBlock *next; // 0x8
        };
        static_assert(sizeof(RegionFreeBlock) == 12, "Invalid RegionFreeBlock size");
        struct Header
        {
            enum
            {
                SIGNATURE = 'VMPH', // 0x564D5048
            };
            unsigned long signature; // 0x0
            unsigned long magic; // 0x4
        };
        static_assert(sizeof(Header) == 8, "Invalid Header size");
        struct HeaderSmall :
            public MMPoolVM::Internals::Header
        {
            MMPoolVM::Internals::Region *parent; // 0x8
            MMPoolVM::Internals::RegionFreeBlock *block; // 0xC
        };
        static_assert(sizeof(HeaderSmall) == 16, "Invalid HeaderSmall size");
        struct HeaderSmallInUse :
            public MMPoolVM::Internals::HeaderSmall
        {
            enum
            {
                MAGIC = 'VMSM', // 0x564D534D
            };
            unsigned long offset; // 0x10
            MEMBLOCKTYPE type; // 0x14
        };
        static_assert(sizeof(HeaderSmallInUse) == 24, "Invalid HeaderSmallInUse size");
        struct HeaderSmallFree :
            public MMPoolVM::Internals::HeaderSmall
        {
            enum
            {
                MAGIC = 'VMFR', // 0x564D4652
            };
        };
        static_assert(sizeof(HeaderSmallFree) == 16, "Invalid HeaderSmallFree size");
        struct HeaderLarge :
            public MMPoolVM::Internals::Header
        {
            enum
            {
                MAGIC = 'VMLG', // 0x564D4C47
            };
            unsigned long offset; // 0x8
            MEMBLOCKTYPE type; // 0xC
            unsigned long allocsize; // 0x10
            unsigned long size; // 0x14
        };
        static_assert(sizeof(HeaderLarge) == 24, "Invalid HeaderLarge size");
    private:
        static MMPoolVM::Internals *s_instance;
        MMPoolVM::Internals::CheckMode const m_mode; // 0x0
        MMPoolVM::Internals::Region *m_regions; // 0x4
        unsigned long m_unique; // 0x8
        unsigned __int32 m_alloc; // 0xC
        unsigned __int32 m_allocMax; // 0x10
        unsigned __int32 m_large; // 0x14
        unsigned __int32 m_largeMax; // 0x18
        unsigned __int32 m_small; // 0x1C
        unsigned __int32 m_smallMax; // 0x20
        Internals();
        ~Internals();
    public:
        void *Alloc(unsigned __int32, MEMBLOCKTYPE, void (*)(_HMEMPOOL *const &, MEMBLOCKINFO const &));
        void Free(void *, MEMFREETYPE);
        unsigned __int32 GetAlloc() const;
        unsigned __int32 GetAllocMax() const;
    private:
        void GetOType(MMPoolVM::Internals::Header *&, void *);
        void GetUType(MMPoolVM::Internals::Header *&, void *);
        void *LargeAlloc(unsigned __int32, MEMBLOCKTYPE);
        void LargeFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE);
        unsigned __int32 LargeORaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&);
        unsigned __int32 LargeURaw(unsigned __int32, MMPoolVM::Internals::HeaderLarge *&, void *&);
        void LargeORel(void *, MMPoolVM::Internals::HeaderLarge *);
        void LargeURel(void *, MMPoolVM::Internals::HeaderLarge *);
        void LargeOLock(MMPoolVM::Internals::HeaderLarge *, void *);
        void LargeULock(MMPoolVM::Internals::HeaderLarge *, void *);
        void *SmallAlloc(unsigned __int32, MEMBLOCKTYPE);
        void SmallFree(void *, MMPoolVM::Internals::Header *, MEMFREETYPE);
        void SmallORaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&);
        void SmallURaw(MMPoolVM::Internals::HeaderSmallFree *, unsigned __int32, MMPoolVM::Internals::HeaderSmallInUse *&, void *&);
        void SmallOLock(MMPoolVM::Internals::HeaderSmallInUse *, void *);
        void SmallULock(MMPoolVM::Internals::HeaderSmallInUse *, void *);
        void SmallORel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *);
        void SmallURel(MMPoolVM::Internals::HeaderSmallFree *&, void *, MMPoolVM::Internals::HeaderSmallInUse *);
        void SmallNewRegion();
    };
    static_assert(sizeof(Internals) == 36, "Invalid Internals size");
private:
    __int32 m_locked; // 0x2C
    unsigned __int32 m_alloc; // 0x30
    unsigned __int32 m_allocMax; // 0x34
public:
    MMPoolVM(MMPoolVM const &); /* compiler_generated() */
private:
    MMPoolVM(char const *);
    virtual ~MMPoolVM() override;
public:
    static void ClassInitialize();
    static void ClassShutdown();
    static MMPoolVM *Create(char const *name, unsigned __int32 p);
    static MMPoolVM *ConvertTo(void *p);
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
};
static_assert(sizeof(MMPoolVM) == 56, "Invalid MMPoolVM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MMPOOLVM_H__
#endif
