#ifndef __IS_VOID_H__
#define __IS_VOID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_VOID_H__
/* combined */
#ifndef __IS_VOID_H__
#define __IS_VOID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::is_void<void> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_void<void>) == 1, "Invalid boost::is_void<void> size");

struct boost::is_void<void const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_void<void const >) == 1, "Invalid boost::is_void<void const > size");

struct boost::is_void<void volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_void<void volatile >) == 1, "Invalid boost::is_void<void volatile > size");

struct boost::is_void<void const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_void<void const volatile >) == 1, "Invalid boost::is_void<void const volatile > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_VOID_H__
