#ifndef __SIMPLE_SEGREGATED_STORAGE_H__
#define __SIMPLE_SEGREGATED_STORAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::simple_segregated_storage<unsigned int>
{
public:
    typedef unsigned __int32 size_type;
    _inline simple_segregated_storage<unsigned int>();
private:
    simple_segregated_storage<unsigned int>(boost::simple_segregated_storage<unsigned int> const &);
    void operator=(boost::simple_segregated_storage<unsigned int> const &);
    static void *try_Malloc_n(void *&, unsigned __int32, unsigned __int32);
protected:
    void *first; // 0x0
    void *find_prev(void *);
    static _inline void *&nextof(void *const ptr);
public:
    static void *segregate(void *block, unsigned __int32 sz, unsigned __int32 partition_sz, void *end);
    _inline void add_block(void *const, unsigned __int32 const, unsigned __int32 const);
    void add_ordered_block(void *const, unsigned __int32 const, unsigned __int32 const);
    _inline bool empty() const;
    _inline void *Malloc();
    _inline void Free(void *const);
    _inline void ordered_Free(void *const);
    void *Malloc_n(unsigned __int32, unsigned __int32);
    void Free_n(void *const, unsigned __int32 const, unsigned __int32 const);
    void ordered_Free_n(void *const, unsigned __int32 const, unsigned __int32 const);
};
static_assert(sizeof(boost::simple_segregated_storage<unsigned int>) == 4, "Invalid boost::simple_segregated_storage<unsigned int> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void *&boost::simple_segregated_storage<unsigned int>::nextof(void *const ptr) // 0x51DFEF
{
    mangled_assert("?nextof@?$simple_segregated_storage@I@boost@@KGAAPAXQAX@Z");
    todo("implement");
}

_inline boost::simple_segregated_storage<unsigned int>::simple_segregated_storage<unsigned int>() // 0x51D0A4
{
    mangled_assert("??0?$simple_segregated_storage@I@boost@@QAE@XZ");
    todo("implement");
}

_inline void boost::simple_segregated_storage<unsigned int>::add_block(void *const, unsigned __int32 const, unsigned __int32 const) // 0x51DB4D
{
    mangled_assert("?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z");
    todo("implement");
}

_inline bool boost::simple_segregated_storage<unsigned int>::empty() const // 0x51DC6D
{
    mangled_assert("?empty@?$simple_segregated_storage@I@boost@@QBE_NXZ");
    todo("implement");
}

_inline void *boost::simple_segregated_storage<unsigned int>::Malloc() // 0x51D854
{
    mangled_assert("?Malloc@?$simple_segregated_storage@I@boost@@QAEPAXXZ");
    todo("implement");
}

_inline void boost::simple_segregated_storage<unsigned int>::Free(void *const) // 0x51D551
{
    mangled_assert("?Free@?$simple_segregated_storage@I@boost@@QAEXQAX@Z");
    todo("implement");
}

_inline void boost::simple_segregated_storage<unsigned int>::ordered_Free(void *const) // 0x51DFFB
{
    mangled_assert("?ordered_Free@?$simple_segregated_storage@I@boost@@QAEXQAX@Z");
    todo("implement");
}

void *boost::simple_segregated_storage<unsigned int>::find_prev(void *) // 0x51DF46
{
    mangled_assert("?find_prev@?$simple_segregated_storage@I@boost@@IAEPAXPAX@Z");
    todo("implement");
}

void *boost::simple_segregated_storage<unsigned int>::segregate(void *block, unsigned __int32 sz, unsigned __int32 partition_sz, void *end) // 0x51E12A
{
    mangled_assert("?segregate@?$simple_segregated_storage@I@boost@@SGPAXPAXII0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SIMPLE_SEGREGATED_STORAGE_H__
