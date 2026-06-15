#ifndef __FUNCTION_BASE_H__
#define __FUNCTION_BASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum boost::detail::function::functor_manager_operation_type
{
    clone_functor_tag = 0,
    destroy_functor_tag,
};

/* ---------- definitions */

union boost::detail::function::any_pointer
{
    void *obj_ptr; // 0x0
    void const *const_obj_ptr; // 0x0
    void (*func_ptr)(); // 0x0
    char data[1]; // 0x0
};
static_assert(sizeof(boost::detail::function::any_pointer) == 4, "Invalid boost::detail::function::any_pointer size");

struct boost::detail::function::unusable
{
    _inline unusable();
};
static_assert(sizeof(boost::detail::function::unusable) == 1, "Invalid boost::detail::function::unusable size");

struct boost::detail::function::function_ptr_tag
{
};
static_assert(sizeof(boost::detail::function::function_ptr_tag) == 1, "Invalid boost::detail::function::function_ptr_tag size");

struct boost::detail::function::function_obj_tag
{
};
static_assert(sizeof(boost::detail::function::function_obj_tag) == 1, "Invalid boost::detail::function::function_obj_tag size");

struct boost::detail::function::functor_manager<Net::DirectPlayDeleter,std::allocator<boost::function_base> >
{
    typedef Net::DirectPlayDeleter functor_type;
private:
    static _inline boost::detail::function::any_pointer manager(boost::detail::function::any_pointer function_obj_ptr, boost::detail::function::functor_manager_operation_type op, boost::detail::function::function_obj_tag);
    static boost::detail::function::any_pointer manager(boost::detail::function::any_pointer, boost::detail::function::functor_manager_operation_type, boost::detail::function::function_ptr_tag);
public:
    static _inline boost::detail::function::any_pointer manage(boost::detail::function::any_pointer functor_ptr, boost::detail::function::functor_manager_operation_type op);
};
static_assert(sizeof(boost::detail::function::functor_manager<Net::DirectPlayDeleter,std::allocator<boost::function_base> >) == 1, "Invalid boost::detail::function::functor_manager<Net::DirectPlayDeleter,std::allocator<boost::function_base> > size");

class boost::function_base
{
public:
    _inline function_base();
    _inline bool empty() const;
    boost::detail::function::any_pointer (*manager)(boost::detail::function::any_pointer, boost::detail::function::functor_manager_operation_type); // 0x0
    boost::detail::function::any_pointer functor; // 0x4
};
static_assert(sizeof(boost::function_base) == 8, "Invalid boost::function_base size");

class boost::bad_function_call :
    public std::runtime_error
{
public:
    _inline bad_function_call(boost::bad_function_call const &); /* compiler_generated() */
    _inline bad_function_call();
    virtual _inline ~bad_function_call() override; /* compiler_generated() */
    boost::bad_function_call &operator=(boost::bad_function_call const &); /* compiler_generated() */
};
static_assert(sizeof(boost::bad_function_call) == 12, "Invalid boost::bad_function_call size");

/* ---------- prototypes */

extern _inline boost::detail::function::any_pointer boost::detail::function::make_any_pointer(void *o);
extern _inline bool boost::detail::function::has_empty_target(...);

/* ---------- globals */

/* ---------- public code */

_inline boost::detail::function::any_pointer boost::detail::function::make_any_pointer(void *o) // 0x6D6BFF
{
    mangled_assert("?make_any_pointer@function@detail@boost@@YG?ATany_pointer@123@PAX@Z");
    todo("implement");
}

_inline boost::detail::function::unusable::unusable() // 0x6D6489
{
    mangled_assert("??0unusable@function@detail@boost@@QAE@XZ");
    todo("implement");
}

_inline boost::detail::function::any_pointer boost::detail::function::functor_manager<Net::DirectPlayDeleter,std::allocator<boost::function_base> >::manager(boost::detail::function::any_pointer function_obj_ptr, boost::detail::function::functor_manager_operation_type op, boost::detail::function::function_obj_tag) // 0x6D6C23
{
    mangled_assert("?manager@?$functor_manager@VDirectPlayDeleter@Net@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@CG?ATany_pointer@234@T5234@W4functor_manager_operation_type@234@Ufunction_obj_tag@234@@Z");
    todo("implement");
}

_inline boost::detail::function::any_pointer boost::detail::function::functor_manager<Net::DirectPlayDeleter,std::allocator<boost::function_base> >::manage(boost::detail::function::any_pointer functor_ptr, boost::detail::function::functor_manager_operation_type op) // 0x6D6C09
{
    mangled_assert("?manage@?$functor_manager@VDirectPlayDeleter@Net@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SG?ATany_pointer@234@T5234@W4functor_manager_operation_type@234@@Z");
    todo("implement");
}

_inline boost::function_base::function_base() // 0x6D647F
{
    mangled_assert("??0function_base@boost@@QAE@XZ");
    todo("implement");
}

_inline bool boost::function_base::empty() const // 0x6D833C
{
    mangled_assert("?empty@function_base@boost@@QBE_NXZ");
    todo("implement");
}

_inline boost::bad_function_call::bad_function_call() // 0x6D7C6C
{
    mangled_assert("??0bad_function_call@boost@@QAE@XZ");
    todo("implement");
}

_inline bool boost::detail::function::has_empty_target(...) // 0x6D6BEA
{
    mangled_assert("?has_empty_target@function@detail@boost@@YA_NZZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FUNCTION_BASE_H__
