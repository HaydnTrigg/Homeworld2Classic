#ifndef __IS_INTEGRAL_H__
#define __IS_INTEGRAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_INTEGRAL_H__
/* combined */
#ifndef __IS_INTEGRAL_H__
#define __IS_INTEGRAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct boost::is_integral<unsigned char const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned char const volatile >) == 1, "Invalid boost::is_integral<unsigned char const volatile > size");

struct boost::is_integral<unsigned char volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned char volatile >) == 1, "Invalid boost::is_integral<unsigned char volatile > size");

struct boost::is_integral<unsigned char const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned char const >) == 1, "Invalid boost::is_integral<unsigned char const > size");

struct boost::is_integral<unsigned char> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned char>) == 1, "Invalid boost::is_integral<unsigned char> size");

struct boost::is_integral<unsigned short const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned short const volatile >) == 1, "Invalid boost::is_integral<unsigned short const volatile > size");

struct boost::is_integral<unsigned short volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned short volatile >) == 1, "Invalid boost::is_integral<unsigned short volatile > size");

struct boost::is_integral<unsigned short const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned short const >) == 1, "Invalid boost::is_integral<unsigned short const > size");

struct boost::is_integral<unsigned short> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned short>) == 1, "Invalid boost::is_integral<unsigned short> size");

struct boost::is_integral<unsigned int volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned int volatile >) == 1, "Invalid boost::is_integral<unsigned int volatile > size");

struct boost::is_integral<unsigned int> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned int>) == 1, "Invalid boost::is_integral<unsigned int> size");

struct boost::is_integral<unsigned int const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned int const >) == 1, "Invalid boost::is_integral<unsigned int const > size");

struct boost::is_integral<unsigned int const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned int const volatile >) == 1, "Invalid boost::is_integral<unsigned int const volatile > size");

struct boost::is_integral<unsigned long const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned long const volatile >) == 1, "Invalid boost::is_integral<unsigned long const volatile > size");

struct boost::is_integral<unsigned long volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned long volatile >) == 1, "Invalid boost::is_integral<unsigned long volatile > size");

struct boost::is_integral<unsigned long const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned long const >) == 1, "Invalid boost::is_integral<unsigned long const > size");

struct boost::is_integral<unsigned long> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned long>) == 1, "Invalid boost::is_integral<unsigned long> size");

struct boost::is_integral<signed char const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<signed char const >) == 1, "Invalid boost::is_integral<signed char const > size");

struct boost::is_integral<signed char const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<signed char const volatile >) == 1, "Invalid boost::is_integral<signed char const volatile > size");

struct boost::is_integral<signed char> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<signed char>) == 1, "Invalid boost::is_integral<signed char> size");

struct boost::is_integral<signed char volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<signed char volatile >) == 1, "Invalid boost::is_integral<signed char volatile > size");

struct boost::is_integral<short const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<short const >) == 1, "Invalid boost::is_integral<short const > size");

struct boost::is_integral<short const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<short const volatile >) == 1, "Invalid boost::is_integral<short const volatile > size");

struct boost::is_integral<short volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<short volatile >) == 1, "Invalid boost::is_integral<short volatile > size");

struct boost::is_integral<short> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<short>) == 1, "Invalid boost::is_integral<short> size");

struct boost::is_integral<int const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<int const >) == 1, "Invalid boost::is_integral<int const > size");

struct boost::is_integral<int const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<int const volatile >) == 1, "Invalid boost::is_integral<int const volatile > size");

struct boost::is_integral<int> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<int>) == 1, "Invalid boost::is_integral<int> size");

struct boost::is_integral<int volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<int volatile >) == 1, "Invalid boost::is_integral<int volatile > size");

struct boost::is_integral<long volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<long volatile >) == 1, "Invalid boost::is_integral<long volatile > size");

struct boost::is_integral<long> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<long>) == 1, "Invalid boost::is_integral<long> size");

struct boost::is_integral<long const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<long const >) == 1, "Invalid boost::is_integral<long const > size");

struct boost::is_integral<long const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<long const volatile >) == 1, "Invalid boost::is_integral<long const volatile > size");

struct boost::is_integral<bool const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<bool const volatile >) == 1, "Invalid boost::is_integral<bool const volatile > size");

struct boost::is_integral<bool> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<bool>) == 1, "Invalid boost::is_integral<bool> size");

struct boost::is_integral<bool const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<bool const >) == 1, "Invalid boost::is_integral<bool const > size");

struct boost::is_integral<bool volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<bool volatile >) == 1, "Invalid boost::is_integral<bool volatile > size");

struct boost::is_integral<char const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<char const >) == 1, "Invalid boost::is_integral<char const > size");

struct boost::is_integral<char> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<char>) == 1, "Invalid boost::is_integral<char> size");

struct boost::is_integral<char volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<char volatile >) == 1, "Invalid boost::is_integral<char volatile > size");

struct boost::is_integral<char const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<char const volatile >) == 1, "Invalid boost::is_integral<char const volatile > size");

struct boost::is_integral<wchar_t const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<wchar_t const >) == 1, "Invalid boost::is_integral<wchar_t const > size");

struct boost::is_integral<wchar_t const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<wchar_t const volatile >) == 1, "Invalid boost::is_integral<wchar_t const volatile > size");

struct boost::is_integral<wchar_t volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<wchar_t volatile >) == 1, "Invalid boost::is_integral<wchar_t volatile > size");

struct boost::is_integral<wchar_t> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<wchar_t>) == 1, "Invalid boost::is_integral<wchar_t> size");

struct boost::is_integral<unsigned __int64 const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned __int64 const volatile >) == 1, "Invalid boost::is_integral<unsigned __int64 const volatile > size");

struct boost::is_integral<unsigned __int64 const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned __int64 const >) == 1, "Invalid boost::is_integral<unsigned __int64 const > size");

struct boost::is_integral<unsigned __int64 volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned __int64 volatile >) == 1, "Invalid boost::is_integral<unsigned __int64 volatile > size");

struct boost::is_integral<unsigned __int64> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<unsigned __int64>) == 1, "Invalid boost::is_integral<unsigned __int64> size");

struct boost::is_integral<__int64 const > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<__int64 const >) == 1, "Invalid boost::is_integral<__int64 const > size");

struct boost::is_integral<__int64> :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<__int64>) == 1, "Invalid boost::is_integral<__int64> size");

struct boost::is_integral<__int64 volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<__int64 volatile >) == 1, "Invalid boost::is_integral<__int64 volatile > size");

struct boost::is_integral<__int64 const volatile > :
    public boost::mpl::bool_<1>
{
};
static_assert(sizeof(boost::is_integral<__int64 const volatile >) == 1, "Invalid boost::is_integral<__int64 const volatile > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IS_INTEGRAL_H__
