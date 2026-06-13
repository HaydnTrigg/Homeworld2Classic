#ifndef __MUTEX_H__
#define __MUTEX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::mutex :
    private boost::noncopyable
{
public:
    typedef boost::detail::thread::scoped_lock<boost::mutex> scoped_lock;
    mutex(boost::mutex const &); /* compiler_generated() */
    mutex();
    ~mutex();
    typedef void *cv_state;
private:
    void do_lock(void *&);
    void do_lock();
    void do_unlock(void *&);
    void do_unlock();
    void *m_mutex; // 0x0
public:
    boost::mutex &operator=(boost::mutex const &); /* compiler_generated() */
};
static_assert(sizeof(boost::mutex) == 4, "Invalid boost::mutex size");

class boost::try_mutex :
    private boost::noncopyable
{
public:
    typedef boost::detail::thread::scoped_lock<boost::try_mutex> scoped_lock;
    typedef boost::detail::thread::scoped_try_lock<boost::try_mutex> scoped_try_lock;
    try_mutex(boost::try_mutex const &); /* compiler_generated() */
    try_mutex();
    ~try_mutex();
    typedef void *cv_state;
private:
    void do_lock(void *&);
    void do_lock();
    bool do_trylock();
    void do_unlock(void *&);
    void do_unlock();
    void *m_mutex; // 0x0
public:
    boost::try_mutex &operator=(boost::try_mutex const &); /* compiler_generated() */
};
static_assert(sizeof(boost::try_mutex) == 4, "Invalid boost::try_mutex size");

class boost::timed_mutex :
    private boost::noncopyable
{
public:
    typedef boost::detail::thread::scoped_lock<boost::timed_mutex> scoped_lock;
    typedef boost::detail::thread::scoped_try_lock<boost::timed_mutex> scoped_try_lock;
    typedef boost::detail::thread::scoped_timed_lock<boost::timed_mutex> scoped_timed_lock;
    timed_mutex(boost::timed_mutex const &); /* compiler_generated() */
    timed_mutex();
    ~timed_mutex();
    typedef void *cv_state;
private:
    void do_lock(void *&);
    void do_lock();
    bool do_trylock();
    bool do_timedlock(boost::xtime const &);
    void do_unlock(void *&);
    void do_unlock();
    void *m_mutex; // 0x0
public:
    boost::timed_mutex &operator=(boost::timed_mutex const &); /* compiler_generated() */
};
static_assert(sizeof(boost::timed_mutex) == 4, "Invalid boost::timed_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MUTEX_H__
