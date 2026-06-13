#if 0
#ifndef __MEMORYFSALLOC_H__
#define __MEMORYFSALLOC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class mempool_fs_alloc<FXManager::Handle>
{
public:
    MemPoolSmall m_pool; // 0x0
    struct value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef FXManager::Handle *pointer;
    typedef FXManager::Handle const *const_pointer;
    typedef FXManager::Handle &reference;
    typedef FXManager::Handle const &const_reference;
    FXManager::Handle const *address(FXManager::Handle const &) const;
    FXManager::Handle *address(FXManager::Handle &) const;
    mempool_fs_alloc<FXManager::Handle>(mempool_fs_alloc<FXManager::Handle> const &); /* compiler_generated() */
    _inline mempool_fs_alloc<FXManager::Handle>(MemPoolSmall const &);
    mempool_fs_alloc<FXManager::Handle>(char const *);
    _inline ~mempool_fs_alloc<FXManager::Handle>();
    mempool_fs_alloc<FXManager::Handle> &operator=(mempool_fs_alloc<FXManager::Handle> const &);
    void construct(FXManager::Handle *, FXManager::Handle const &);
    void destroy(FXManager::Handle *);
    FXManager::Handle *allocate(unsigned __int32, void const *);
    void deallocate(FXManager::Handle *, unsigned __int32);
    void __dflt_ctor_closure(); /* compiler_generated() */
    struct ?$rebind@UHandle@FXManager@@;
    struct ?$rebind@U?$_List_node@UHandle@FXManager@@PAX@std@@;
};
static_assert(sizeof(mempool_fs_alloc<FXManager::Handle>) == 4, "Invalid mempool_fs_alloc<FXManager::Handle> size");

class mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >
{
public:
    MemPoolSmall m_pool; // 0x0
    typedef std::_List_node<FXManager::Handle,void *> value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::_List_node<FXManager::Handle,void *> *pointer;
    typedef std::_List_node<FXManager::Handle,void *> const *const_pointer;
    typedef std::_List_node<FXManager::Handle,void *> &reference;
    typedef std::_List_node<FXManager::Handle,void *> const &const_reference;
    std::_List_node<FXManager::Handle,void *> const *address(std::_List_node<FXManager::Handle,void *> const &) const;
    std::_List_node<FXManager::Handle,void *> *address(std::_List_node<FXManager::Handle,void *> &) const;
    mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > const &); /* compiler_generated() */
    mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >(MemPoolSmall const &);
    mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >(char const *);
    _inline ~mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >();
    mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > &operator=(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > const &);
    void construct(std::_List_node<FXManager::Handle,void *> *, std::_List_node<FXManager::Handle,void *> const &);
    void destroy(std::_List_node<FXManager::Handle,void *> *);
    _inline std::_List_node<FXManager::Handle,void *> *allocate(unsigned __int32, void const *);
    _inline void deallocate(std::_List_node<FXManager::Handle,void *> *, unsigned __int32);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >) == 4, "Invalid mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6DBAFC(mempool_fs_alloc<FXManager::Handle> *const, MemPoolSmall const &);
_inline mempool_fs_alloc<FXManager::Handle>::mempool_fs_alloc<FXManager::Handle>(MemPoolSmall const &) // 0x6DBAFC
{
    mangled_assert("??0?$mempool_fs_alloc@UHandle@FXManager@@@@QAE@ABVMemPoolSmall@@@Z");
    todo("implement");
    _sub_6DBAFC(this, arg);
}

_extern _sub_6D9399(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > *const, mempool_fs_alloc<FXManager::Handle> const &);
_inline mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >::mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> ><FXManager::Handle>(mempool_fs_alloc<FXManager::Handle> const &) // 0x6D9399
{
    mangled_assert("??$?0UHandle@FXManager@@@?$mempool_fs_alloc@U?$_List_node@UHandle@FXManager@@PAX@std@@@@QAE@ABV?$mempool_fs_alloc@UHandle@FXManager@@@@@Z");
    todo("implement");
    _sub_6D9399(this, arg);
}

_extern void _sub_6DC07B(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > *const);
_inline mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >::~mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >() // 0x6DC07B
{
    mangled_assert("??1?$mempool_fs_alloc@U?$_List_node@UHandle@FXManager@@PAX@std@@@@QAE@XZ");
    todo("implement");
    _sub_6DC07B(this);
}

_extern void _sub_6DC081(mempool_fs_alloc<FXManager::Handle> *const);
_inline mempool_fs_alloc<FXManager::Handle>::~mempool_fs_alloc<FXManager::Handle>() // 0x6DC081
{
    mangled_assert("??1?$mempool_fs_alloc@UHandle@FXManager@@@@QAE@XZ");
    todo("implement");
    _sub_6DC081(this);
}

_extern std::_List_node<FXManager::Handle,void *> *_sub_6E02C0(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > *const, unsigned __int32, void const *);
_inline std::_List_node<FXManager::Handle,void *> *mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >::allocate(unsigned __int32, void const *) // 0x6E02C0
{
    mangled_assert("?allocate@?$mempool_fs_alloc@U?$_List_node@UHandle@FXManager@@PAX@std@@@@QAEPAU?$_List_node@UHandle@FXManager@@PAX@std@@IPBX@Z");
    todo("implement");
    std::_List_node<FXManager::Handle,void *> * __result = _sub_6E02C0(this, arg, arg);
    return __result;
}

_extern void _sub_6E06EB(mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > *const, std::_List_node<FXManager::Handle,void *> *, unsigned __int32);
_inline void mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> >::deallocate(std::_List_node<FXManager::Handle,void *> *, unsigned __int32) // 0x6E06EB
{
    mangled_assert("?deallocate@?$mempool_fs_alloc@U?$_List_node@UHandle@FXManager@@PAX@std@@@@QAEXPAU?$_List_node@UHandle@FXManager@@PAX@std@@I@Z");
    todo("implement");
    _sub_6E06EB(this, arg, arg);
}

/* ---------- private code */

#endif // __MEMORYFSALLOC_H__
#endif
