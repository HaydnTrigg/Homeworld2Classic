#if 0
#ifndef __MEMORYALLOC_H__
#define __MEMORYALLOC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class mempool_alloc<EffectAnimationList::AnimationInstance>
{
public:
    _HMEMPOOL *m_pool; // 0x0
    struct value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef EffectAnimationList::AnimationInstance *pointer;
    typedef EffectAnimationList::AnimationInstance const *const_pointer;
    typedef EffectAnimationList::AnimationInstance &reference;
    typedef EffectAnimationList::AnimationInstance const &const_reference;
    EffectAnimationList::AnimationInstance const *address(EffectAnimationList::AnimationInstance const &) const;
    EffectAnimationList::AnimationInstance *address(EffectAnimationList::AnimationInstance &) const;
    _inline mempool_alloc<EffectAnimationList::AnimationInstance>(_HMEMPOOL *);
    _inline ~mempool_alloc<EffectAnimationList::AnimationInstance>();
    mempool_alloc<EffectAnimationList::AnimationInstance> &operator=(mempool_alloc<EffectAnimationList::AnimationInstance> const &);
    void construct(EffectAnimationList::AnimationInstance *, EffectAnimationList::AnimationInstance const &);
    void destroy(EffectAnimationList::AnimationInstance *);
    EffectAnimationList::AnimationInstance *allocate(unsigned __int32, void const *);
    void deallocate(EffectAnimationList::AnimationInstance *, unsigned __int32);
    struct ?$rebind@UAnimationInstance@EffectAnimationList@@;
    struct ?$rebind@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@;
};
static_assert(sizeof(mempool_alloc<EffectAnimationList::AnimationInstance>) == 4, "Invalid mempool_alloc<EffectAnimationList::AnimationInstance> size");

class mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >
{
public:
    _HMEMPOOL *m_pool; // 0x0
    typedef std::_List_node<EffectAnimationList::AnimationInstance,void *> value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::_List_node<EffectAnimationList::AnimationInstance,void *> *pointer;
    typedef std::_List_node<EffectAnimationList::AnimationInstance,void *> const *const_pointer;
    typedef std::_List_node<EffectAnimationList::AnimationInstance,void *> &reference;
    typedef std::_List_node<EffectAnimationList::AnimationInstance,void *> const &const_reference;
    std::_List_node<EffectAnimationList::AnimationInstance,void *> const *address(std::_List_node<EffectAnimationList::AnimationInstance,void *> const &) const;
    std::_List_node<EffectAnimationList::AnimationInstance,void *> *address(std::_List_node<EffectAnimationList::AnimationInstance,void *> &) const;
    mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >(_HMEMPOOL *);
    _inline ~mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >();
    mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > &operator=(mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > const &);
    void construct(std::_List_node<EffectAnimationList::AnimationInstance,void *> *, std::_List_node<EffectAnimationList::AnimationInstance,void *> const &);
    void destroy(std::_List_node<EffectAnimationList::AnimationInstance,void *> *);
    _inline std::_List_node<EffectAnimationList::AnimationInstance,void *> *allocate(unsigned __int32, void const *);
    _inline void deallocate(std::_List_node<EffectAnimationList::AnimationInstance,void *> *, unsigned __int32);
};
static_assert(sizeof(mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >) == 4, "Invalid mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline mempool_alloc<EffectAnimationList::AnimationInstance>::mempool_alloc<EffectAnimationList::AnimationInstance>(_HMEMPOOL *) // 0x515C42
{
    mangled_assert("??0?$mempool_alloc@UAnimationInstance@EffectAnimationList@@@@QAE@PAU_HMEMPOOL@@@Z");
    todo("implement");
}

_inline mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >::mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> ><EffectAnimationList::AnimationInstance>(mempool_alloc<EffectAnimationList::AnimationInstance> const &) // 0x515780
{
    mangled_assert("??$?0UAnimationInstance@EffectAnimationList@@@?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@QAE@ABV?$mempool_alloc@UAnimationInstance@EffectAnimationList@@@@@Z");
    todo("implement");
}

_inline mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >::~mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >() // 0x515DB3
{
    mangled_assert("??1?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@QAE@XZ");
    todo("implement");
}

_inline mempool_alloc<EffectAnimationList::AnimationInstance>::~mempool_alloc<EffectAnimationList::AnimationInstance>() // 0x515DB4
{
    mangled_assert("??1?$mempool_alloc@UAnimationInstance@EffectAnimationList@@@@QAE@XZ");
    todo("implement");
}

_inline std::_List_node<EffectAnimationList::AnimationInstance,void *> *mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >::allocate(unsigned __int32, void const *) // 0x5161DE
{
    mangled_assert("?allocate@?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@QAEPAU?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@IPBX@Z");
    todo("implement");
}

_inline void mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> >::deallocate(std::_List_node<EffectAnimationList::AnimationInstance,void *> *, unsigned __int32) // 0x51629B
{
    mangled_assert("?deallocate@?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@QAEXPAU?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYALLOC_H__
/* combined */
#ifndef __MEMORYALLOC_H__
#define __MEMORYALLOC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >
{
public:
    _HMEMPOOL *m_pool; // 0x0
    typedef std::pair<int,LocalizerResourceTxt::Line> value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::pair<int,LocalizerResourceTxt::Line> *pointer;
    typedef std::pair<int,LocalizerResourceTxt::Line> const *const_pointer;
    typedef std::pair<int,LocalizerResourceTxt::Line> &reference;
    typedef std::pair<int,LocalizerResourceTxt::Line> const &const_reference;
    std::pair<int,LocalizerResourceTxt::Line> const *address(std::pair<int,LocalizerResourceTxt::Line> const &) const;
    std::pair<int,LocalizerResourceTxt::Line> *address(std::pair<int,LocalizerResourceTxt::Line> &) const;
    _inline mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >(_HMEMPOOL *);
    _inline ~mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >();
    mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > &operator=(mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > const &);
    _inline void construct(std::pair<int,LocalizerResourceTxt::Line> *, std::pair<int,LocalizerResourceTxt::Line> const &);
    _inline void destroy(std::pair<int,LocalizerResourceTxt::Line> *);
    _inline std::pair<int,LocalizerResourceTxt::Line> *allocate(unsigned __int32, void const *);
    _inline void deallocate(std::pair<int,LocalizerResourceTxt::Line> *, unsigned __int32);
    struct ?$rebind@U?$pair@HULine@LocalizerResourceTxt@@@std@@;
    struct ?$rebind@PAU?$pair@HULine@LocalizerResourceTxt@@@std@@;
};
static_assert(sizeof(mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >) == 4, "Invalid mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > size");

class mempool_alloc<LocalizerResourceTxt::Range>
{
public:
    _HMEMPOOL *m_pool; // 0x0
    struct value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef LocalizerResourceTxt::Range *pointer;
    typedef LocalizerResourceTxt::Range const *const_pointer;
    typedef LocalizerResourceTxt::Range &reference;
    typedef LocalizerResourceTxt::Range const &const_reference;
    LocalizerResourceTxt::Range const *address(LocalizerResourceTxt::Range const &) const;
    LocalizerResourceTxt::Range *address(LocalizerResourceTxt::Range &) const;
    _inline mempool_alloc<LocalizerResourceTxt::Range>(_HMEMPOOL *);
    _inline ~mempool_alloc<LocalizerResourceTxt::Range>();
    mempool_alloc<LocalizerResourceTxt::Range> &operator=(mempool_alloc<LocalizerResourceTxt::Range> const &);
    _inline void construct(LocalizerResourceTxt::Range *, LocalizerResourceTxt::Range const &);
    _inline void destroy(LocalizerResourceTxt::Range *);
    _inline LocalizerResourceTxt::Range *allocate(unsigned __int32, void const *);
    _inline void deallocate(LocalizerResourceTxt::Range *, unsigned __int32);
    struct ?$rebind@URange@LocalizerResourceTxt@@;
    struct ?$rebind@PAURange@LocalizerResourceTxt@@;
};
static_assert(sizeof(mempool_alloc<LocalizerResourceTxt::Range>) == 4, "Invalid mempool_alloc<LocalizerResourceTxt::Range> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >(_HMEMPOOL *) // 0x10005D5D
{
    mangled_assert("??0?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAE@PAU_HMEMPOOL@@@Z");
    todo("implement");
}

_inline mempool_alloc<LocalizerResourceTxt::Range>::mempool_alloc<LocalizerResourceTxt::Range>(_HMEMPOOL *) // 0x10005D68
{
    mangled_assert("??0?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAE@PAU_HMEMPOOL@@@Z");
    todo("implement");
}

_inline mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::~mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >() // 0x10005E40
{
    mangled_assert("??1?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAE@XZ");
    todo("implement");
}

_inline mempool_alloc<LocalizerResourceTxt::Range>::~mempool_alloc<LocalizerResourceTxt::Range>() // 0x10005E41
{
    mangled_assert("??1?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAE@XZ");
    todo("implement");
}

_inline void mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::construct(std::pair<int,LocalizerResourceTxt::Line> *, std::pair<int,LocalizerResourceTxt::Line> const &) // 0x1000745F
{
    mangled_assert("?construct@?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAEXPAU?$pair@HULine@LocalizerResourceTxt@@@std@@ABU23@@Z");
    todo("implement");
}

_inline void mempool_alloc<LocalizerResourceTxt::Range>::construct(LocalizerResourceTxt::Range *, LocalizerResourceTxt::Range const &) // 0x10007476
{
    mangled_assert("?construct@?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAEXPAURange@LocalizerResourceTxt@@ABU23@@Z");
    todo("implement");
}

_inline void mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::destroy(std::pair<int,LocalizerResourceTxt::Line> *) // 0x100074E4
{
    mangled_assert("?destroy@?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAEXPAU?$pair@HULine@LocalizerResourceTxt@@@std@@@Z");
    todo("implement");
}

_inline void mempool_alloc<LocalizerResourceTxt::Range>::destroy(LocalizerResourceTxt::Range *) // 0x100074E7
{
    mangled_assert("?destroy@?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAEXPAURange@LocalizerResourceTxt@@@Z");
    todo("implement");
}

_inline std::pair<int,LocalizerResourceTxt::Line> *mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::allocate(unsigned __int32, void const *) // 0x100073B1
{
    mangled_assert("?allocate@?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAEPAU?$pair@HULine@LocalizerResourceTxt@@@std@@IPBX@Z");
    todo("implement");
}

_inline LocalizerResourceTxt::Range *mempool_alloc<LocalizerResourceTxt::Range>::allocate(unsigned __int32, void const *) // 0x100073CC
{
    mangled_assert("?allocate@?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAEPAURange@LocalizerResourceTxt@@IPBX@Z");
    todo("implement");
}

_inline void mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> >::deallocate(std::pair<int,LocalizerResourceTxt::Line> *, unsigned __int32) // 0x100074B8
{
    mangled_assert("?deallocate@?$mempool_alloc@U?$pair@HULine@LocalizerResourceTxt@@@std@@@@QAEXPAU?$pair@HULine@LocalizerResourceTxt@@@std@@I@Z");
    todo("implement");
}

_inline void mempool_alloc<LocalizerResourceTxt::Range>::deallocate(LocalizerResourceTxt::Range *, unsigned __int32) // 0x100074CE
{
    mangled_assert("?deallocate@?$mempool_alloc@URange@LocalizerResourceTxt@@@@QAEXPAURange@LocalizerResourceTxt@@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYALLOC_H__
/* combined */
#ifndef __MEMORYALLOC_H__
#define __MEMORYALLOC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYALLOC_H__
#endif
