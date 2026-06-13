#ifndef __LOCK_H__
#define __LOCK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::thread::lock_ops<boost::mutex> :
    private boost::noncopyable
{
public:
    lock_ops<boost::mutex>(boost::detail::thread::lock_ops<boost::mutex> const &); /* compiler_generated() */
private:
    lock_ops<boost::mutex>();
    typedef void *lock_state;
public:
    static _inline void lock(boost::mutex &m, void *&state);
    static _inline void lock(boost::mutex &m);
    static bool trylock(boost::mutex &);
    static bool timedlock(boost::mutex &, boost::xtime const &);
    static _inline void unlock(boost::mutex &m, void *&state);
    static _inline void unlock(boost::mutex &m);
    ~lock_ops<boost::mutex>(); /* compiler_generated() */
    boost::detail::thread::lock_ops<boost::mutex> &operator=(boost::detail::thread::lock_ops<boost::mutex> const &); /* compiler_generated() */
};
static_assert(sizeof(boost::detail::thread::lock_ops<boost::mutex>) == 1, "Invalid boost::detail::thread::lock_ops<boost::mutex> size");

class boost::detail::thread::scoped_lock<boost::mutex> :
    private boost::noncopyable
{
public:
    typedef boost::mutex mutex_type;
    scoped_lock<boost::mutex>(boost::detail::thread::scoped_lock<boost::mutex> const &); /* compiler_generated() */
    _inline scoped_lock<boost::mutex>(boost::mutex &, bool);
    _inline ~scoped_lock<boost::mutex>();
    _inline void lock();
    _inline void unlock();
    bool locked() const;
    void const *operator const void *() const;
private:
    boost::mutex &m_mutex; // 0x0
    bool m_locked; // 0x4
public:
    boost::detail::thread::scoped_lock<boost::mutex> &operator=(boost::detail::thread::scoped_lock<boost::mutex> const &); /* compiler_generated() */
};
static_assert(sizeof(boost::detail::thread::scoped_lock<boost::mutex>) == 8, "Invalid boost::detail::thread::scoped_lock<boost::mutex> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6D83EB(boost::mutex &);
_inline void boost::detail::thread::lock_ops<boost::mutex>::lock(boost::mutex &m) // 0x6D83EB
{
    mangled_assert("?lock@?$lock_ops@Vmutex@boost@@@thread@detail@boost@@SGXAAVmutex@4@@Z");
    todo("implement");
    _sub_6D83EB(m);
}

_extern void _sub_6D85CF(boost::mutex &);
_inline void boost::detail::thread::lock_ops<boost::mutex>::unlock(boost::mutex &m) // 0x6D85CF
{
    mangled_assert("?unlock@?$lock_ops@Vmutex@boost@@@thread@detail@boost@@SGXAAVmutex@4@@Z");
    todo("implement");
    _sub_6D85CF(m);
}

_extern void _sub_6D83FA(boost::mutex &, void *&);
_inline void boost::detail::thread::lock_ops<boost::mutex>::lock(boost::mutex &m, void *&state) // 0x6D83FA
{
    mangled_assert("?lock@?$lock_ops@Vmutex@boost@@@thread@detail@boost@@SGXAAVmutex@4@AAPAX@Z");
    todo("implement");
    _sub_6D83FA(m, state);
}

_extern void _sub_6D85DE(boost::mutex &, void *&);
_inline void boost::detail::thread::lock_ops<boost::mutex>::unlock(boost::mutex &m, void *&state) // 0x6D85DE
{
    mangled_assert("?unlock@?$lock_ops@Vmutex@boost@@@thread@detail@boost@@SGXAAVmutex@4@AAPAX@Z");
    todo("implement");
    _sub_6D85DE(m, state);
}

_extern _sub_6D7C2F(boost::detail::thread::scoped_lock<boost::mutex> *const, boost::mutex &, bool);
_inline boost::detail::thread::scoped_lock<boost::mutex>::scoped_lock<boost::mutex>(boost::mutex &, bool) // 0x6D7C2F
{
    mangled_assert("??0?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@AAVmutex@3@_N@Z");
    todo("implement");
    _sub_6D7C2F(this, arg, arg);
}

_extern void _sub_6D7E72(boost::detail::thread::scoped_lock<boost::mutex> *const);
_inline boost::detail::thread::scoped_lock<boost::mutex>::~scoped_lock<boost::mutex>() // 0x6D7E72
{
    mangled_assert("??1?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_6D7E72(this);
}

_extern void _sub_6D840C(boost::detail::thread::scoped_lock<boost::mutex> *const);
_inline void boost::detail::thread::scoped_lock<boost::mutex>::lock() // 0x6D840C
{
    mangled_assert("?lock@?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAEXXZ");
    todo("implement");
    _sub_6D840C(this);
}

_extern void _sub_6D85F0(boost::detail::thread::scoped_lock<boost::mutex> *const);
_inline void boost::detail::thread::scoped_lock<boost::mutex>::unlock() // 0x6D85F0
{
    mangled_assert("?unlock@?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAEXXZ");
    todo("implement");
    _sub_6D85F0(this);
}

_extern void const *_sub_6D7FB4(boost::detail::thread::scoped_lock<boost::mutex> const *const);
_inline void const *boost::detail::thread::scoped_lock<boost::mutex>::operator void const *() const // 0x6D7FB4
{
    mangled_assert("??B?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QBEPBXXZ");
    todo("implement");
    void const * __result = _sub_6D7FB4(this);
    return __result;
}

/* ---------- private code */

#endif // __LOCK_H__
