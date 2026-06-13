#ifndef __BOOL_H__
#define __BOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BOOL_H__
/* combined */
#ifndef __BOOL_H__
#define __BOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::mpl::bool_<1>
{
    static bool const value;
    typedef boost::mpl::bool_<1> type;
    typedef bool value_type;
    bool operator bool() const;
};
static_assert(sizeof(boost::mpl::bool_<1>) == 1, "Invalid boost::mpl::bool_<1> size");

struct boost::mpl::bool_<0>
{
    static bool const value;
    typedef boost::mpl::bool_<0> type;
    typedef bool value_type;
    bool operator bool() const;
};
static_assert(sizeof(boost::mpl::bool_<0>) == 1, "Invalid boost::mpl::bool_<0> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BOOL_H__
