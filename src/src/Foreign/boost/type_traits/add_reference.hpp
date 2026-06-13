#ifndef __ADD_REFERENCE_H__
#define __ADD_REFERENCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ADD_REFERENCE_H__
/* combined */
#ifndef __ADD_REFERENCE_H__
#define __ADD_REFERENCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::add_reference_impl<void>
{
    typedef void type;
};
static_assert(sizeof(boost::detail::add_reference_impl<void>) == 1, "Invalid boost::detail::add_reference_impl<void> size");

struct boost::detail::add_reference_impl<void const >
{
    typedef void const type;
};
static_assert(sizeof(boost::detail::add_reference_impl<void const >) == 1, "Invalid boost::detail::add_reference_impl<void const > size");

struct boost::detail::add_reference_impl<void volatile >
{
    typedef void volatile type;
};
static_assert(sizeof(boost::detail::add_reference_impl<void volatile >) == 1, "Invalid boost::detail::add_reference_impl<void volatile > size");

struct boost::detail::add_reference_impl<void const volatile >
{
    typedef void const volatile type;
};
static_assert(sizeof(boost::detail::add_reference_impl<void const volatile >) == 1, "Invalid boost::detail::add_reference_impl<void const volatile > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ADD_REFERENCE_H__
