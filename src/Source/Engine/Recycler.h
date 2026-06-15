#if 0
#ifndef __RECYCLER_H__
#define __RECYCLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Recyclable
{
public:
    Recyclable(Recyclable const &); /* compiler_generated() */
    Recyclable();
    virtual ~Recyclable();
    virtual _inline void recycleReinitialize();
    virtual _inline void recycleFree();
    virtual void recycleExpire(float);
protected:
    Recyclable *m_pRecyclableNext; // 0x4
    Recycler *m_pOwnerRecycler; // 0x8
    float m_recycleExpiredTime; // 0xC
public:
    Recyclable &operator=(Recyclable const &); /* compiler_generated() */
};
static_assert(sizeof(Recyclable) == 16, "Invalid Recyclable size");

class RecyclableFactory
{
public:
    virtual Recyclable *create() = 0;
    RecyclableFactory(RecyclableFactory const &); /* compiler_generated() */
    RecyclableFactory(); /* compiler_generated() */
    RecyclableFactory &operator=(RecyclableFactory const &); /* compiler_generated() */
};
static_assert(sizeof(RecyclableFactory) == 4, "Invalid RecyclableFactory size");

class Recycler
{
public:
    Recycler(Recycler const &); /* compiler_generated() */
    Recycler();
    virtual ~Recycler();
    void setGarbageCollectThreshold(float);
    void setRecyclableFactory(RecyclableFactory *);
    Recyclable *giveMeRecyclable();
    void recycle(Recyclable *);
    unsigned __int32 garbageCollect(float);
    void recycleClear();
    enum StatType
    {
        ST_NumAllocated = 0,
        ST_NumReused,
        ST_NumCollected,
        ST_NumInUse,
        ST_MaxInUse,
        ST_NumInList,
        ST_MaxInList,
        ST_NumStatTypes,
    };
    __int32 getStat(unsigned __int32) const;
    char const *getStatString(unsigned __int32) const;
    void clearStats();
protected:
    float m_threshold; // 0x4
    Recyclable *m_pHead; // 0x8
    RecyclableFactory *m_pFactory; // 0xC
    __int32 m_stats[7]; // 0x10
public:
    Recycler &operator=(Recycler const &); /* compiler_generated() */
};
static_assert(sizeof(Recycler) == 44, "Invalid Recycler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Recyclable::recycleReinitialize() // 0x624930
{
    mangled_assert("?recycleReinitialize@Recyclable@@UAEXXZ");
    todo("implement");
}

_inline void Recyclable::recycleFree() // 0x62492F
{
    mangled_assert("?recycleFree@Recyclable@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RECYCLER_H__
#endif
