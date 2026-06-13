#ifndef __EXCEPTIONS_H__
#define __EXCEPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::lock_error :
    public std::logic_error
{
public:
    _inline lock_error(boost::lock_error const &); /* compiler_generated() */
    lock_error();
    virtual _inline ~lock_error() override; /* compiler_generated() */
    boost::lock_error &operator=(boost::lock_error const &); /* compiler_generated() */
};
static_assert(sizeof(boost::lock_error) == 12, "Invalid boost::lock_error size");

class boost::thread_resource_error :
    public std::runtime_error
{
public:
    _inline thread_resource_error(boost::thread_resource_error const &); /* compiler_generated() */
    thread_resource_error();
    virtual _inline ~thread_resource_error() override; /* compiler_generated() */
    boost::thread_resource_error &operator=(boost::thread_resource_error const &); /* compiler_generated() */
};
static_assert(sizeof(boost::thread_resource_error) == 12, "Invalid boost::thread_resource_error size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __EXCEPTIONS_H__
