#if 0
#ifndef __INTHASH_H__
#define __INTHASH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HashPack<unsigned int>
{
public:
    long long key; // 0x0
    unsigned __int32 value; // 0x8
};
static_assert(sizeof(HashPack<unsigned int>) == 16, "Invalid HashPack<unsigned int> size");

class IntHash<unsigned int>
{
public:
    IntHash<unsigned int>();
    ~IntHash<unsigned int>();
    void clear();
    __int32 getNumHashBins();
    __int32 getHashBucketSize(__int32);
    void drawDebugGraph(__int32, __int32, __int32, __int32);
    _inline void insert(unsigned short, unsigned short, unsigned short, unsigned __int32 const &);
    _inline void insert(unsigned short, unsigned short, unsigned short);
    _inline bool doesExist(unsigned short, unsigned short, unsigned short);
    _inline unsigned __int32 *find(unsigned short, unsigned short, unsigned short);
protected:
    _inline __int32 makeHashKey(unsigned short, unsigned short, unsigned short);
    _inline long long makeFullKey(unsigned short, unsigned short, unsigned short);
    _inline __int32 makeRoom(__int32);
    __int32 tableSize[4096]; // 0x0
    __int32 tableCapacity[4096]; // 0x4000
    HashPack<unsigned int> *table[4096]; // 0x8000
};
static_assert(sizeof(IntHash<unsigned int>) == 49152, "Invalid IntHash<unsigned int> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INTHASH_H__
#endif
