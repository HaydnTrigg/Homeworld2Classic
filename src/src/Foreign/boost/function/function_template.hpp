#ifndef __FUNCTION_TEMPLATE_H__
#define __FUNCTION_TEMPLATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::function::void_function_obj_invoker0<Net::DirectPlayDeleter,void>
{
    static _inline boost::detail::function::unusable invoke(boost::detail::function::any_pointer function_obj_ptr);
};
static_assert(sizeof(boost::detail::function::void_function_obj_invoker0<Net::DirectPlayDeleter,void>) == 1, "Invalid boost::detail::function::void_function_obj_invoker0<Net::DirectPlayDeleter,void> size");

class boost::function0<void,std::allocator<boost::function_base> > :
    public boost::function_base
{
public:
    typedef boost::detail::function::unusable internal_result_type;
    struct clear_type;
    static __int32 const args;
    static __int32 const arity;
    typedef void result_type;
    typedef std::allocator<boost::function_base> allocator_type;
    typedef boost::function0<void,std::allocator<boost::function_base> > self_type;
    _inline function0<void,std::allocator<boost::function_base> >(boost::function0<void,std::allocator<boost::function_base> > const &);
    function0<void,std::allocator<boost::function_base> >(boost::function0<void,std::allocator<boost::function_base> >::clear_type *);
    function0<void,std::allocator<boost::function_base> >();
    _inline ~function0<void,std::allocator<boost::function_base> >();
    void operator()() const;
    boost::function0<void,std::allocator<boost::function_base> > &operator=(boost::function0<void,std::allocator<boost::function_base> > const &);
    boost::function0<void,std::allocator<boost::function_base> > &operator=(boost::function0<void,std::allocator<boost::function_base> >::clear_type *);
    void swap(boost::function0<void,std::allocator<boost::function_base> > &);
    _inline void clear();
    struct dummy;
    typedef void *safe_bool();
    void *operator void (__thiscall boost::function0<void,class std::allocator<class boost::function_base> >::dummy::* )(void)() const();
    bool operator!() const;
private:
    _inline void assign_to_own(boost::function0<void,std::allocator<boost::function_base> > const &);
    typedef boost::detail::function::unusable (*invoker_type)(boost::detail::function::any_pointer);
    boost::detail::function::unusable (*invoker)(boost::detail::function::any_pointer); // 0x8
};
static_assert(sizeof(boost::function0<void,std::allocator<boost::function_base> >) == 12, "Invalid boost::function0<void,std::allocator<boost::function_base> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern boost::detail::function::unusable _sub_6D6BED(boost::detail::function::any_pointer);
_inline boost::detail::function::unusable boost::detail::function::void_function_obj_invoker0<Net::DirectPlayDeleter,void>::invoke(boost::detail::function::any_pointer function_obj_ptr) // 0x6D6BED
{
    mangled_assert("?invoke@?$void_function_obj_invoker0@VDirectPlayDeleter@Net@@X@function@detail@boost@@SG?AUunusable@234@Tany_pointer@234@@Z");
    todo("implement");
    boost::detail::function::unusable __result = _sub_6D6BED(function_obj_ptr);
    return __result;
}

_extern _sub_6D5EF1(boost::function0<void,std::allocator<boost::function_base> > *const, Net::DirectPlayDeleter, __int32);
_inline boost::function0<void,std::allocator<boost::function_base> >::function0<void,std::allocator<boost::function_base> ><Net::DirectPlayDeleter>(Net::DirectPlayDeleter, __int32) // 0x6D5EF1
{
    mangled_assert("??$?0VDirectPlayDeleter@Net@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@VDirectPlayDeleter@Net@@H@Z");
    todo("implement");
    _sub_6D5EF1(this, arg, arg);
}

_extern _sub_6D7BF9(boost::function0<void,std::allocator<boost::function_base> > *const, boost::function0<void,std::allocator<boost::function_base> > const &);
_inline boost::function0<void,std::allocator<boost::function_base> >::function0<void,std::allocator<boost::function_base> >(boost::function0<void,std::allocator<boost::function_base> > const &) // 0x6D7BF9
{
    mangled_assert("??0?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@ABV01@@Z");
    todo("implement");
    _sub_6D7BF9(this, arg);
}

_extern void _sub_6D64AF(boost::function0<void,std::allocator<boost::function_base> > *const);
_inline boost::function0<void,std::allocator<boost::function_base> >::~function0<void,std::allocator<boost::function_base> >() // 0x6D64AF
{
    mangled_assert("??1?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@XZ");
    todo("implement");
    _sub_6D64AF(this);
}

_extern void _sub_6D800B(boost::function0<void,std::allocator<boost::function_base> > const *const);
_inline void boost::function0<void,std::allocator<boost::function_base> >::operator()() const // 0x6D800B
{
    mangled_assert("??R?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QBEXXZ");
    todo("implement");
    _sub_6D800B(this);
}

_extern void _sub_6D6AF0(boost::function0<void,std::allocator<boost::function_base> > *const);
_inline void boost::function0<void,std::allocator<boost::function_base> >::clear() // 0x6D6AF0
{
    mangled_assert("?clear@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAEXXZ");
    todo("implement");
    _sub_6D6AF0(this);
}

_extern void _sub_6D8269(boost::function0<void,std::allocator<boost::function_base> > *const, boost::function0<void,std::allocator<boost::function_base> > const &);
_inline void boost::function0<void,std::allocator<boost::function_base> >::assign_to_own(boost::function0<void,std::allocator<boost::function_base> > const &) // 0x6D8269
{
    mangled_assert("?assign_to_own@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@AAEXABV12@@Z");
    todo("implement");
    _sub_6D8269(this, arg);
}

_extern void _sub_6D615F(boost::function0<void,std::allocator<boost::function_base> > *const, Net::DirectPlayDeleter);
_inline void boost::function0<void,std::allocator<boost::function_base> >::assign_to<Net::DirectPlayDeleter>(Net::DirectPlayDeleter) // 0x6D615F
{
    mangled_assert("??$assign_to@VDirectPlayDeleter@Net@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@AAEXVDirectPlayDeleter@Net@@@Z");
    todo("implement");
    _sub_6D615F(this, arg);
}

_extern void _sub_6D6179(boost::function0<void,std::allocator<boost::function_base> > *const, Net::DirectPlayDeleter, boost::detail::function::function_obj_tag);
_inline void boost::function0<void,std::allocator<boost::function_base> >::assign_to<Net::DirectPlayDeleter>(Net::DirectPlayDeleter, boost::detail::function::function_obj_tag) // 0x6D6179
{
    mangled_assert("??$assign_to@VDirectPlayDeleter@Net@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@AAEXVDirectPlayDeleter@Net@@Ufunction_obj_tag@function@detail@1@@Z");
    todo("implement");
    _sub_6D6179(this, arg, arg);
}

/* ---------- private code */

#endif // __FUNCTION_TEMPLATE_H__
