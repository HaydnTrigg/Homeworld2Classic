#ifndef __IS_ENUM_H__
#define __IS_ENUM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_ENUM_H__
/* combined */
#ifndef __IS_ENUM_H__
#define __IS_ENUM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::int_convertible
{
    int_convertible(__int32);
};
static_assert(sizeof(boost::detail::int_convertible) == 1, "Invalid boost::detail::int_convertible size");

struct boost::detail::is_enum_helper<0>
{
};
static_assert(sizeof(boost::detail::is_enum_helper<0>) == 1, "Invalid boost::detail::is_enum_helper<0> size");

struct boost::detail::is_enum_impl<float>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<float>) == 1, "Invalid boost::detail::is_enum_impl<float> size");

struct boost::detail::is_enum_impl<double>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<double>) == 1, "Invalid boost::detail::is_enum_impl<double> size");

struct boost::detail::is_enum_impl<long double>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<long double>) == 1, "Invalid boost::detail::is_enum_impl<long double> size");

struct boost::detail::is_enum_impl<void>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<void>) == 1, "Invalid boost::detail::is_enum_impl<void> size");

struct boost::detail::is_enum_impl<void const >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<void const >) == 1, "Invalid boost::detail::is_enum_impl<void const > size");

struct boost::detail::is_enum_impl<void volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<void volatile >) == 1, "Invalid boost::detail::is_enum_impl<void volatile > size");

struct boost::detail::is_enum_impl<void const volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_enum_impl<void const volatile >) == 1, "Invalid boost::detail::is_enum_impl<void const volatile > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_ENUM_H__
