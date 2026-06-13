#if 0
#ifndef __ADDRESS2UDWORDMAPPER_H__
#define __ADDRESS2UDWORDMAPPER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Address2UdwordMapper
{
public:
    Address2UdwordMapper(Address2UdwordMapper const &); /* compiler_generated() */
    Address2UdwordMapper(__int32);
    ~Address2UdwordMapper();
    bool lookup(void *, unsigned __int32 *);
    bool add(void *, unsigned __int32);
    void update(__int32);
    unsigned __int32 size();
    struct Pair
    {
        void *key; // 0x0
        unsigned __int32 value; // 0x4
        unsigned __int32 frame; // 0x8
    };
    static_assert(sizeof(Pair) == 12, "Invalid Pair size");
    typedef std::vector<Address2UdwordMapper::Pair,std::allocator<Address2UdwordMapper::Pair> > PairContainer;
private:
    std::vector<Address2UdwordMapper::Pair,std::allocator<Address2UdwordMapper::Pair> > m_pair; // 0x0
    __int32 m_updateNb; // 0xC
public:
    Address2UdwordMapper &operator=(Address2UdwordMapper const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Address2UdwordMapper) == 16, "Invalid Address2UdwordMapper size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ADDRESS2UDWORDMAPPER_H__
#endif
