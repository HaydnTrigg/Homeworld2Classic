#ifndef __OBJECT_POOL_H__
#define __OBJECT_POOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> :
    protected boost::pool<boost::default_user_allocator_new_delete>
{
public:
    typedef EffectLod element_type;
    typedef boost::default_user_allocator_new_delete user_allocator;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
protected:
    boost::pool<boost::default_user_allocator_new_delete> const &store() const;
    _inline boost::pool<boost::default_user_allocator_new_delete> &store();
    static _inline void *&nextof(void *const ptr);
public:
    object_pool<EffectLod,boost::default_user_allocator_new_delete>(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> const &); /* compiler_generated() */
    _inline object_pool<EffectLod,boost::default_user_allocator_new_delete>(unsigned __int32 const);
    ~object_pool<EffectLod,boost::default_user_allocator_new_delete>();
    _inline EffectLod *Malloc();
    _inline void Free(EffectLod *const);
    bool is_from(EffectLod *const) const;
    _inline EffectLod *construct();
    _inline void destroy(EffectLod *const);
    unsigned __int32 get_next_size() const;
    void set_next_size(unsigned __int32 const);
    boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> &operator=(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>) == 20, "Invalid boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern boost::pool<boost::default_user_allocator_new_delete> &_sub_51E16A(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const);
_inline boost::pool<boost::default_user_allocator_new_delete> &boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::store() // 0x51E16A
{
    mangled_assert("?store@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@IAEAAV?$pool@Udefault_user_allocator_new_delete@boost@@@2@XZ");
    todo("implement");
    boost::pool<boost::default_user_allocator_new_delete> & __result = _sub_51E16A(this);
    return __result;
}

_extern void *&_sub_51DFE8(void *const);
_inline void *&boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::nextof(void *const ptr) // 0x51DFE8
{
    mangled_assert("?nextof@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@KGAAPAXQAX@Z");
    todo("implement");
    void *& __result = _sub_51DFE8(ptr);
    return __result;
}

_extern _sub_51D06A(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const, unsigned __int32 const);
_inline boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::object_pool<EffectLod,boost::default_user_allocator_new_delete>(unsigned __int32 const) // 0x51D06A
{
    mangled_assert("??0?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAE@I@Z");
    todo("implement");
    _sub_51D06A(this, arg);
}

_extern EffectLod *_sub_51D83E(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const);
_inline EffectLod *boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::Malloc() // 0x51D83E
{
    mangled_assert("?Malloc@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAEPAVEffectLod@@XZ");
    todo("implement");
    EffectLod * __result = _sub_51D83E(this);
    return __result;
}

_extern void _sub_51D54C(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const, EffectLod *const);
_inline void boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::Free(EffectLod *const) // 0x51D54C
{
    mangled_assert("?Free@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAEXQAVEffectLod@@@Z");
    todo("implement");
    _sub_51D54C(this, arg);
}

_extern EffectLod *_sub_51DBD3(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const);
_inline EffectLod *boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::construct() // 0x51DBD3
{
    mangled_assert("?construct@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAEPAVEffectLod@@XZ");
    todo("implement");
    EffectLod * __result = _sub_51DBD3(this);
    return __result;
}

_extern void _sub_51DC4B(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const, EffectLod *const);
_inline void boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::destroy(EffectLod *const) // 0x51DC4B
{
    mangled_assert("?destroy@?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAEXQAVEffectLod@@@Z");
    todo("implement");
    _sub_51DC4B(this, arg);
}

_extern void _sub_51D18E(boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> *const);
boost::object_pool<EffectLod,boost::default_user_allocator_new_delete>::~object_pool<EffectLod,boost::default_user_allocator_new_delete>() // 0x51D18E
{
    mangled_assert("??1?$object_pool@VEffectLod@@Udefault_user_allocator_new_delete@boost@@@boost@@QAE@XZ");
    todo("implement");
    _sub_51D18E(this);
}

/* ---------- private code */

#endif // __OBJECT_POOL_H__
