#ifndef __IS_FLOAT_H__
#define __IS_FLOAT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_FLOAT_H__
/* combined */
#ifndef __IS_FLOAT_H__
#define __IS_FLOAT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::is_float<float> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<float>) == 1, "Invalid boost::is_float<float> size");

struct boost::is_float<float const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<float const >) == 1, "Invalid boost::is_float<float const > size");

struct boost::is_float<float const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<float const volatile >) == 1, "Invalid boost::is_float<float const volatile > size");

struct boost::is_float<float volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<float volatile >) == 1, "Invalid boost::is_float<float volatile > size");

struct boost::is_float<double> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<double>) == 1, "Invalid boost::is_float<double> size");

struct boost::is_float<double const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<double const volatile >) == 1, "Invalid boost::is_float<double const volatile > size");

struct boost::is_float<double volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<double volatile >) == 1, "Invalid boost::is_float<double volatile > size");

struct boost::is_float<double const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<double const >) == 1, "Invalid boost::is_float<double const > size");

struct boost::is_float<long double const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<long double const volatile >) == 1, "Invalid boost::is_float<long double const volatile > size");

struct boost::is_float<long double volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<long double volatile >) == 1, "Invalid boost::is_float<long double volatile > size");

struct boost::is_float<long double> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<long double>) == 1, "Invalid boost::is_float<long double> size");

struct boost::is_float<long double const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_float<long double const >) == 1, "Invalid boost::is_float<long double const > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_FLOAT_H__
