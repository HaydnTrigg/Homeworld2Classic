#ifndef __POOL_H__
#define __POOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::default_user_allocator_new_delete
{
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    static _inline char *Malloc(unsigned __int32 const bytes);
    static _inline void Free(char *const block);
};
static_assert(sizeof(boost::default_user_allocator_new_delete) == 1, "Invalid boost::default_user_allocator_new_delete size");

struct boost::default_user_allocator_Malloc_Free
{
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    static char *Malloc(unsigned __int32 const);
    static void Free(char *const);
};
static_assert(sizeof(boost::default_user_allocator_Malloc_Free) == 1, "Invalid boost::default_user_allocator_Malloc_Free size");

class boost::details::PODptr<unsigned int>
{
public:
    typedef unsigned __int32 size_type;
private:
    char *ptr; // 0x0
    unsigned __int32 sz; // 0x4
    _inline char *ptr_next_size() const;
    _inline char *ptr_next_ptr() const;
public:
    PODptr<unsigned int>();
    _inline PODptr<unsigned int>(char *const, unsigned __int32 const);
    _inline bool valid() const;
    _inline void invalidate();
    _inline char *begin() const;
    _inline char *&begin();
    _inline char *end() const;
    _inline unsigned __int32 total_size() const;
    _inline unsigned __int32 element_size() const;
    _inline unsigned __int32 &next_size() const;
    _inline char *&next_ptr() const;
    _inline void next(boost::details::PODptr<unsigned int> const &) const;
    _inline boost::details::PODptr<unsigned int> next() const;
};
static_assert(sizeof(boost::details::PODptr<unsigned int>) == 8, "Invalid boost::details::PODptr<unsigned int> size");

class boost::pool<boost::default_user_allocator_new_delete> :
    protected boost::simple_segregated_storage<unsigned int>
{
public:
    typedef boost::default_user_allocator_new_delete user_allocator;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
private:
    static unsigned __int32 const min_alloc_size;
    void *Malloc_need_resize();
    void *ordered_Malloc_need_resize();
protected:
    boost::details::PODptr<unsigned int> list; // 0x4
    unsigned __int32 const requested_size; // 0xC
    unsigned __int32 next_size; // 0x10
    boost::simple_segregated_storage<unsigned int> const &store() const;
    _inline boost::simple_segregated_storage<unsigned int> &store();
    boost::details::PODptr<unsigned int> find_POD(void *const) const;
public:
    bool is_from(void *const) const;
protected:
    static bool is_from(void *const, char *const, unsigned __int32 const);
    _inline unsigned __int32 alloc_size() const;
    static void *&nextof(void *const);
public:
    pool<boost::default_user_allocator_new_delete>(boost::pool<boost::default_user_allocator_new_delete> const &); /* compiler_generated() */
    _inline pool<boost::default_user_allocator_new_delete>(unsigned __int32 const, unsigned __int32 const);
    _inline ~pool<boost::default_user_allocator_new_delete>();
    bool release_memory();
    bool purge_memory();
    unsigned __int32 get_next_size() const;
    void set_next_size(unsigned __int32 const);
    _inline void *Malloc();
    void *ordered_Malloc(unsigned __int32);
    _inline void *ordered_Malloc();
    void Free(void *const, unsigned __int32 const);
    _inline void Free(void *const);
    void ordered_Free(void *const, unsigned __int32 const);
    _inline void ordered_Free(void *const);
    boost::pool<boost::default_user_allocator_new_delete> &operator=(boost::pool<boost::default_user_allocator_new_delete> const &); /* compiler_generated() */
};
static_assert(sizeof(boost::pool<boost::default_user_allocator_new_delete>) == 20, "Invalid boost::pool<boost::default_user_allocator_new_delete> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char *_sub_51D85B(unsigned __int32 const);
_inline char *boost::default_user_allocator_new_delete::Malloc(unsigned __int32 const bytes) // 0x51D85B
{
    mangled_assert("?Malloc@default_user_allocator_new_delete@boost@@SGPADI@Z");
    todo("implement");
    char * __result = _sub_51D85B(bytes);
    return __result;
}

_extern void _sub_51D55E(char *const);
_inline void boost::default_user_allocator_new_delete::Free(char *const block) // 0x51D55E
{
    mangled_assert("?Free@default_user_allocator_new_delete@boost@@SGXQAD@Z");
    todo("implement");
    _sub_51D55E(block);
}

_extern char *_sub_51E0ED(boost::details::PODptr<unsigned int> const *const);
_inline char *boost::details::PODptr<unsigned int>::ptr_next_size() const // 0x51E0ED
{
    mangled_assert("?ptr_next_size@?$PODptr@I@details@boost@@ABEPADXZ");
    todo("implement");
    char * __result = _sub_51E0ED(this);
    return __result;
}

_extern char *_sub_51E0E4(boost::details::PODptr<unsigned int> const *const);
_inline char *boost::details::PODptr<unsigned int>::ptr_next_ptr() const // 0x51E0E4
{
    mangled_assert("?ptr_next_ptr@?$PODptr@I@details@boost@@ABEPADXZ");
    todo("implement");
    char * __result = _sub_51E0E4(this);
    return __result;
}

_extern _sub_51CFA7(boost::details::PODptr<unsigned int> *const, char *const, unsigned __int32 const);
_inline boost::details::PODptr<unsigned int>::PODptr<unsigned int>(char *const, unsigned __int32 const) // 0x51CFA7
{
    mangled_assert("??0?$PODptr@I@details@boost@@QAE@QADI@Z");
    todo("implement");
    _sub_51CFA7(this, arg, arg);
}

_extern bool _sub_51E174(boost::details::PODptr<unsigned int> const *const);
_inline bool boost::details::PODptr<unsigned int>::valid() const // 0x51E174
{
    mangled_assert("?valid@?$PODptr@I@details@boost@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_51E174(this);
    return __result;
}

_extern void _sub_51DF67(boost::details::PODptr<unsigned int> *const);
_inline void boost::details::PODptr<unsigned int>::invalidate() // 0x51DF67
{
    mangled_assert("?invalidate@?$PODptr@I@details@boost@@QAEXXZ");
    todo("implement");
    _sub_51DF67(this);
}

_extern char *&_sub_51DB9F(boost::details::PODptr<unsigned int> *const);
_inline char *&boost::details::PODptr<unsigned int>::begin() // 0x51DB9F
{
    mangled_assert("?begin@?$PODptr@I@details@boost@@QAEAAPADXZ");
    todo("implement");
    char *& __result = _sub_51DB9F(this);
    return __result;
}

_extern char *_sub_51DBA2(boost::details::PODptr<unsigned int> const *const);
_inline char *boost::details::PODptr<unsigned int>::begin() const // 0x51DBA2
{
    mangled_assert("?begin@?$PODptr@I@details@boost@@QBEPADXZ");
    todo("implement");
    char * __result = _sub_51DBA2(this);
    return __result;
}

_extern char *_sub_51DC75(boost::details::PODptr<unsigned int> const *const);
_inline char *boost::details::PODptr<unsigned int>::end() const // 0x51DC75
{
    mangled_assert("?end@?$PODptr@I@details@boost@@QBEPADXZ");
    todo("implement");
    char * __result = _sub_51DC75(this);
    return __result;
}

_extern unsigned __int32 _sub_51E170(boost::details::PODptr<unsigned int> const *const);
_inline unsigned __int32 boost::details::PODptr<unsigned int>::total_size() const // 0x51E170
{
    mangled_assert("?total_size@?$PODptr@I@details@boost@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_51E170(this);
    return __result;
}

_extern unsigned __int32 _sub_51DC66(boost::details::PODptr<unsigned int> const *const);
_inline unsigned __int32 boost::details::PODptr<unsigned int>::element_size() const // 0x51DC66
{
    mangled_assert("?element_size@?$PODptr@I@details@boost@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_51DC66(this);
    return __result;
}

_extern unsigned __int32 &_sub_51DFDF(boost::details::PODptr<unsigned int> const *const);
_inline unsigned __int32 &boost::details::PODptr<unsigned int>::next_size() const // 0x51DFDF
{
    mangled_assert("?next_size@?$PODptr@I@details@boost@@QBEAAIXZ");
    todo("implement");
    unsigned __int32 & __result = _sub_51DFDF(this);
    return __result;
}

_extern char *&_sub_51DFD6(boost::details::PODptr<unsigned int> const *const);
_inline char *&boost::details::PODptr<unsigned int>::next_ptr() const // 0x51DFD6
{
    mangled_assert("?next_ptr@?$PODptr@I@details@boost@@QBEAAPADXZ");
    todo("implement");
    char *& __result = _sub_51DFD6(this);
    return __result;
}

_extern boost::details::PODptr<unsigned int> _sub_51DF99(boost::details::PODptr<unsigned int> const *const);
_inline boost::details::PODptr<unsigned int> boost::details::PODptr<unsigned int>::next() const // 0x51DF99
{
    mangled_assert("?next@?$PODptr@I@details@boost@@QBE?AV123@XZ");
    todo("implement");
    boost::details::PODptr<unsigned int> __result = _sub_51DF99(this);
    return __result;
}

_extern void _sub_51DFB4(boost::details::PODptr<unsigned int> const *const, boost::details::PODptr<unsigned int> const &);
_inline void boost::details::PODptr<unsigned int>::next(boost::details::PODptr<unsigned int> const &) const // 0x51DFB4
{
    mangled_assert("?next@?$PODptr@I@details@boost@@QBEXABV123@@Z");
    todo("implement");
    _sub_51DFB4(this, arg);
}

_extern boost::simple_segregated_storage<unsigned int> &_sub_51E16D(boost::pool<boost::default_user_allocator_new_delete> *const);
_inline boost::simple_segregated_storage<unsigned int> &boost::pool<boost::default_user_allocator_new_delete>::store() // 0x51E16D
{
    mangled_assert("?store@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@IAEAAV?$simple_segregated_storage@I@2@XZ");
    todo("implement");
    boost::simple_segregated_storage<unsigned int> & __result = _sub_51E16D(this);
    return __result;
}

_extern unsigned __int32 _sub_51DB69(boost::pool<boost::default_user_allocator_new_delete> const *const);
_inline unsigned __int32 boost::pool<boost::default_user_allocator_new_delete>::alloc_size() const // 0x51DB69
{
    mangled_assert("?alloc_size@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@IBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_51DB69(this);
    return __result;
}

_extern _sub_51D087(boost::pool<boost::default_user_allocator_new_delete> *const, unsigned __int32 const, unsigned __int32 const);
_inline boost::pool<boost::default_user_allocator_new_delete>::pool<boost::default_user_allocator_new_delete>(unsigned __int32 const, unsigned __int32 const) // 0x51D087
{
    mangled_assert("??0?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE@II@Z");
    todo("implement");
    _sub_51D087(this, arg, arg);
}

_extern void _sub_51D255(boost::pool<boost::default_user_allocator_new_delete> *const);
_inline boost::pool<boost::default_user_allocator_new_delete>::~pool<boost::default_user_allocator_new_delete>() // 0x51D255
{
    mangled_assert("??1?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE@XZ");
    todo("implement");
    _sub_51D255(this);
}

_extern void *_sub_55A89E(boost::pool<boost::default_user_allocator_new_delete> *const);
_inline void *boost::pool<boost::default_user_allocator_new_delete>::Malloc() // 0x55A89E
{
    mangled_assert("?Malloc@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAEPAXXZ");
    todo("implement");
    void * __result = _sub_55A89E(this);
    return __result;
}

_extern void *_sub_51E022(boost::pool<boost::default_user_allocator_new_delete> *const);
_inline void *boost::pool<boost::default_user_allocator_new_delete>::ordered_Malloc() // 0x51E022
{
    mangled_assert("?ordered_Malloc@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAEPAXXZ");
    todo("implement");
    void * __result = _sub_51E022(this);
    return __result;
}

_extern void _sub_55A88D(boost::pool<boost::default_user_allocator_new_delete> *const, void *const);
_inline void boost::pool<boost::default_user_allocator_new_delete>::Free(void *const) // 0x55A88D
{
    mangled_assert("?Free@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAEXQAX@Z");
    todo("implement");
    _sub_55A88D(this, arg);
}

_extern void _sub_51DFF6(boost::pool<boost::default_user_allocator_new_delete> *const, void *const);
_inline void boost::pool<boost::default_user_allocator_new_delete>::ordered_Free(void *const) // 0x51DFF6
{
    mangled_assert("?ordered_Free@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAEXQAX@Z");
    todo("implement");
    _sub_51DFF6(this, arg);
}

_extern bool _sub_51E0F6(boost::pool<boost::default_user_allocator_new_delete> *const);
bool boost::pool<boost::default_user_allocator_new_delete>::purge_memory() // 0x51E0F6
{
    mangled_assert("?purge_memory@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_51E0F6(this);
    return __result;
}

_extern void *_sub_55A8AE(boost::pool<boost::default_user_allocator_new_delete> *const);
void *boost::pool<boost::default_user_allocator_new_delete>::Malloc_need_resize() // 0x55A8AE
{
    mangled_assert("?Malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ");
    todo("implement");
    void * __result = _sub_55A8AE(this);
    return __result;
}

_extern void *_sub_51E032(boost::pool<boost::default_user_allocator_new_delete> *const);
void *boost::pool<boost::default_user_allocator_new_delete>::ordered_Malloc_need_resize() // 0x51E032
{
    mangled_assert("?ordered_Malloc_need_resize@?$pool@Udefault_user_allocator_new_delete@boost@@@boost@@AAEPAXXZ");
    todo("implement");
    void * __result = _sub_51E032(this);
    return __result;
}

/* ---------- private code */

#endif // __POOL_H__
