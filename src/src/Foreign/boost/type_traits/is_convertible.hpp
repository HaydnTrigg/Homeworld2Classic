#ifndef __IS_CONVERTIBLE_H__
#define __IS_CONVERTIBLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_CONVERTIBLE_H__
/* combined */
#ifndef __IS_CONVERTIBLE_H__
#define __IS_CONVERTIBLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::detail::any_conversion
{
};
static_assert(sizeof(boost::detail::any_conversion) == 1, "Invalid boost::detail::any_conversion size");

struct boost::detail::is_convertible_impl<void,void volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void,void volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void,void volatile > size");

struct boost::detail::is_convertible_impl<void const ,void>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const ,void>) == 1, "Invalid boost::detail::is_convertible_impl<void const ,void> size");

struct boost::detail::is_convertible_impl<void,void const volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void,void const volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void,void const volatile > size");

struct boost::detail::is_convertible_impl<void const ,void const volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const ,void const volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void const ,void const volatile > size");

struct boost::detail::is_convertible_impl<void const ,void volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const ,void volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void const ,void volatile > size");

struct boost::detail::is_convertible_impl<void volatile ,void const >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void volatile ,void const >) == 1, "Invalid boost::detail::is_convertible_impl<void volatile ,void const > size");

struct boost::detail::is_convertible_impl<void,void>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void,void>) == 1, "Invalid boost::detail::is_convertible_impl<void,void> size");

struct boost::detail::is_convertible_impl<void const volatile ,void const volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const volatile ,void const volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void const volatile ,void const volatile > size");

struct boost::detail::is_convertible_impl<void const volatile ,void>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const volatile ,void>) == 1, "Invalid boost::detail::is_convertible_impl<void const volatile ,void> size");

struct boost::detail::is_convertible_impl<void const volatile ,void volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const volatile ,void volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void const volatile ,void volatile > size");

struct boost::detail::is_convertible_impl<void volatile ,void const volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void volatile ,void const volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void volatile ,void const volatile > size");

struct boost::detail::is_convertible_impl<void const volatile ,void const >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const volatile ,void const >) == 1, "Invalid boost::detail::is_convertible_impl<void const volatile ,void const > size");

struct boost::detail::is_convertible_impl<void,void const >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void,void const >) == 1, "Invalid boost::detail::is_convertible_impl<void,void const > size");

struct boost::detail::is_convertible_impl<void const ,void const >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void const ,void const >) == 1, "Invalid boost::detail::is_convertible_impl<void const ,void const > size");

struct boost::detail::is_convertible_impl<void volatile ,void volatile >
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void volatile ,void volatile >) == 1, "Invalid boost::detail::is_convertible_impl<void volatile ,void volatile > size");

struct boost::detail::is_convertible_impl<void volatile ,void>
{
    static bool const value;
};
static_assert(sizeof(boost::detail::is_convertible_impl<void volatile ,void>) == 1, "Invalid boost::detail::is_convertible_impl<void volatile ,void> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_CONVERTIBLE_H__
