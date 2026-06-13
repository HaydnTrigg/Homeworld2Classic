#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    _inline lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        _inline scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        _inline ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10004F43(boost::detail::lightweight_mutex *const);
_inline boost::detail::lightweight_mutex::lightweight_mutex() // 0x10004F43
{
    mangled_assert("??0lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_10004F43(this);
}

_extern _sub_10004F49(boost::detail::lightweight_mutex::scoped_lock *const, boost::detail::lightweight_mutex &);
_inline boost::detail::lightweight_mutex::scoped_lock::scoped_lock(boost::detail::lightweight_mutex &) // 0x10004F49
{
    mangled_assert("??0scoped_lock@lightweight_mutex@detail@boost@@QAE@AAV123@@Z");
    todo("implement");
    _sub_10004F49(this, arg);
}

_extern void _sub_10005045(boost::detail::lightweight_mutex::scoped_lock *const);
_inline boost::detail::lightweight_mutex::scoped_lock::~scoped_lock() // 0x10005045
{
    mangled_assert("??1scoped_lock@lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_10005045(this);
}

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    _inline lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        _inline scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        _inline ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4609CD(boost::detail::lightweight_mutex *const);
_inline boost::detail::lightweight_mutex::lightweight_mutex() // 0x4609CD
{
    mangled_assert("??0lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_4609CD(this);
}

_extern _sub_451BB4(boost::detail::lightweight_mutex::scoped_lock *const, boost::detail::lightweight_mutex &);
_inline boost::detail::lightweight_mutex::scoped_lock::scoped_lock(boost::detail::lightweight_mutex &) // 0x451BB4
{
    mangled_assert("??0scoped_lock@lightweight_mutex@detail@boost@@QAE@AAV123@@Z");
    todo("implement");
    _sub_451BB4(this, arg);
}

_extern void _sub_451C04(boost::detail::lightweight_mutex::scoped_lock *const);
_inline boost::detail::lightweight_mutex::scoped_lock::~scoped_lock() // 0x451C04
{
    mangled_assert("??1scoped_lock@lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_451C04(this);
}

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    _inline lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        _inline scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        _inline ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1000344F(boost::detail::lightweight_mutex *const);
_inline boost::detail::lightweight_mutex::lightweight_mutex() // 0x1000344F
{
    mangled_assert("??0lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_1000344F(this);
}

_extern _sub_10003455(boost::detail::lightweight_mutex::scoped_lock *const, boost::detail::lightweight_mutex &);
_inline boost::detail::lightweight_mutex::scoped_lock::scoped_lock(boost::detail::lightweight_mutex &) // 0x10003455
{
    mangled_assert("??0scoped_lock@lightweight_mutex@detail@boost@@QAE@AAV123@@Z");
    todo("implement");
    _sub_10003455(this, arg);
}

_extern void _sub_10003528(boost::detail::lightweight_mutex::scoped_lock *const);
_inline boost::detail::lightweight_mutex::scoped_lock::~scoped_lock() // 0x10003528
{
    mangled_assert("??1scoped_lock@lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_10003528(this);
}

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    _inline lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        _inline scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        _inline ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_100B58F0(boost::detail::lightweight_mutex *const);
_inline boost::detail::lightweight_mutex::lightweight_mutex() // 0x100B58F0
{
    mangled_assert("??0lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_100B58F0(this);
}

_extern _sub_1000D830(boost::detail::lightweight_mutex::scoped_lock *const, boost::detail::lightweight_mutex &);
_inline boost::detail::lightweight_mutex::scoped_lock::scoped_lock(boost::detail::lightweight_mutex &) // 0x1000D830
{
    mangled_assert("??0scoped_lock@lightweight_mutex@detail@boost@@QAE@AAV123@@Z");
    todo("implement");
    _sub_1000D830(this, arg);
}

_extern void _sub_1000E590(boost::detail::lightweight_mutex::scoped_lock *const);
_inline boost::detail::lightweight_mutex::scoped_lock::~scoped_lock() // 0x1000E590
{
    mangled_assert("??1scoped_lock@lightweight_mutex@detail@boost@@QAE@XZ");
    todo("implement");
    _sub_1000E590(this);
}

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
/* combined */
#ifndef __LWM_WIN32_H__
#define __LWM_WIN32_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::detail::lightweight_mutex
{
private:
    long l_; // 0x0
public:
    lightweight_mutex();
private:
    lightweight_mutex(boost::detail::lightweight_mutex const &);
    boost::detail::lightweight_mutex &operator=(boost::detail::lightweight_mutex const &);
    class scoped_lock
    {
    private:
        boost::detail::lightweight_mutex &m_; // 0x0
    public:
        scoped_lock(boost::detail::lightweight_mutex &);
    private:
        scoped_lock(boost::detail::lightweight_mutex::scoped_lock const &);
        boost::detail::lightweight_mutex::scoped_lock &operator=(boost::detail::lightweight_mutex::scoped_lock const &);
    public:
        ~scoped_lock();
    };
    static_assert(sizeof(scoped_lock) == 4, "Invalid scoped_lock size");
};
static_assert(sizeof(boost::detail::lightweight_mutex) == 4, "Invalid boost::detail::lightweight_mutex size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LWM_WIN32_H__
