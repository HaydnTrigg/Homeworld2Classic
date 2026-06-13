#ifndef __MUTEX_H__
#define __MUTEX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::details::pool::win32_mutex
{
private:
    _RTL_CRITICAL_SECTION mtx; // 0x0
public:
    win32_mutex();
private:
    win32_mutex(boost::details::pool::win32_mutex const &);
    void operator=(boost::details::pool::win32_mutex const &);
public:
    ~win32_mutex();
    void lock();
    void unlock();
};
static_assert(sizeof(boost::details::pool::win32_mutex) == 24, "Invalid boost::details::pool::win32_mutex size");

class boost::details::pool::null_mutex
{
public:
    null_mutex();
private:
    null_mutex(boost::details::pool::null_mutex const &);
    void operator=(boost::details::pool::null_mutex const &);
public:
    static void lock();
    static void unlock();
};
static_assert(sizeof(boost::details::pool::null_mutex) == 1, "Invalid boost::details::pool::null_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MUTEX_H__
