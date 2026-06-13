#ifndef __CONDITION_H__
#define __CONDITION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::condition_impl :
    private boost::noncopyable
{
public:
    condition_impl(boost::detail::condition_impl const &); /* compiler_generated() */
    condition_impl();
    ~condition_impl();
    void notify_one();
    void notify_all();
    void enter_wait();
    void do_wait();
    bool do_timed_wait(boost::xtime const &);
    void *m_gate; // 0x0
    void *m_queue; // 0x4
    void *m_mutex; // 0x8
    unsigned __int32 m_gone; // 0xC
    unsigned long m_blocked; // 0x10
    unsigned __int32 m_waiting; // 0x14
    boost::detail::condition_impl &operator=(boost::detail::condition_impl const &); /* compiler_generated() */
};
static_assert(sizeof(boost::detail::condition_impl) == 24, "Invalid boost::detail::condition_impl size");

class boost::condition :
    private boost::noncopyable
{
public:
    condition(boost::condition const &); /* compiler_generated() */
    _inline condition();
    _inline ~condition();
    _inline void notify_one();
    void notify_all();
private:
    boost::detail::condition_impl m_impl; // 0x0
public:
    boost::condition &operator=(boost::condition const &); /* compiler_generated() */
};
static_assert(sizeof(boost::condition) == 24, "Invalid boost::condition size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6D7C8F(boost::condition *const);
_inline boost::condition::condition() // 0x6D7C8F
{
    mangled_assert("??0condition@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7C8F(this);
}

_extern void _sub_6D7E83(boost::condition *const);
_inline boost::condition::~condition() // 0x6D7E83
{
    mangled_assert("??1condition@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7E83(this);
}

_extern void _sub_6D845A(boost::condition *const);
_inline void boost::condition::notify_one() // 0x6D845A
{
    mangled_assert("?notify_one@condition@boost@@QAEXXZ");
    todo("implement");
    _sub_6D845A(this);
}

_extern void _sub_6D7B37(boost::condition *const, boost::detail::thread::scoped_lock<boost::mutex> &);
_inline void boost::condition::wait<boost::detail::thread::scoped_lock<boost::mutex> >(boost::detail::thread::scoped_lock<boost::mutex> &) // 0x6D7B37
{
    mangled_assert("??$wait@V?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@@condition@boost@@QAEXAAV?$scoped_lock@Vmutex@boost@@@thread@detail@1@@Z");
    todo("implement");
    _sub_6D7B37(this, arg);
}

_extern void _sub_6D7AAB(boost::condition *const, boost::mutex &);
_inline void boost::condition::do_wait<boost::mutex>(boost::mutex &) // 0x6D7AAB
{
    mangled_assert("??$do_wait@Vmutex@boost@@@condition@boost@@AAEXAAVmutex@1@@Z");
    todo("implement");
    _sub_6D7AAB(this, arg);
}

/* ---------- private code */

#endif // __CONDITION_H__
