#ifndef __THREAD_H__
#define __THREAD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::thread :
    private boost::noncopyable
{
public:
    thread(boost::thread const &); /* compiler_generated() */
    thread(boost::function0<void,std::allocator<boost::function_base> > const &);
    thread();
    ~thread();
    bool operator==(boost::thread const &) const;
    bool operator!=(boost::thread const &) const;
    void join();
    static void sleep(boost::xtime const &xt);
    static void yield();
private:
    void *m_thread; // 0x0
    unsigned __int32 m_id; // 0x4
    bool m_joinable; // 0x8
public:
    boost::thread &operator=(boost::thread const &); /* compiler_generated() */
};
static_assert(sizeof(boost::thread) == 12, "Invalid boost::thread size");

class boost::thread_group :
    private boost::noncopyable
{
public:
    thread_group(boost::thread_group const &); /* compiler_generated() */
    thread_group();
    ~thread_group();
    boost::thread *create_thread(boost::function0<void,std::allocator<boost::function_base> > const &);
    void add_thread(boost::thread *);
    void remove_thread(boost::thread *);
    void join_all();
private:
    std::list<boost::thread *,std::allocator<boost::thread *> > m_threads; // 0x0
    boost::mutex m_mutex; // 0x8
public:
    boost::thread_group &operator=(boost::thread_group const &); /* compiler_generated() */
};
static_assert(sizeof(boost::thread_group) == 12, "Invalid boost::thread_group size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __THREAD_H__
