#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::noncopyable
{
private:
    noncopyable(boost::noncopyable const &);
protected:
    _inline noncopyable();
    _inline ~noncopyable();
private:
    boost::noncopyable const &operator=(boost::noncopyable const &);
};
static_assert(sizeof(boost::noncopyable) == 1, "Invalid boost::noncopyable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline boost::noncopyable::noncopyable() // 0x4B2266
{
    mangled_assert("??0noncopyable@boost@@IAE@XZ");
    todo("implement");
}

_inline boost::noncopyable::~noncopyable() // 0x4B1D55
{
    mangled_assert("??1noncopyable@boost@@IAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NONCOPYABLE_H__
/* combined */
#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::noncopyable
{
private:
    noncopyable(boost::noncopyable const &);
protected:
    noncopyable();
    ~noncopyable();
private:
    boost::noncopyable const &operator=(boost::noncopyable const &);
};
static_assert(sizeof(boost::noncopyable) == 1, "Invalid boost::noncopyable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NONCOPYABLE_H__
/* combined */
#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::noncopyable
{
private:
    noncopyable(boost::noncopyable const &);
protected:
    noncopyable();
    ~noncopyable();
private:
    boost::noncopyable const &operator=(boost::noncopyable const &);
};
static_assert(sizeof(boost::noncopyable) == 1, "Invalid boost::noncopyable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NONCOPYABLE_H__
/* combined */
#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::noncopyable
{
private:
    noncopyable(boost::noncopyable const &);
protected:
    noncopyable();
    ~noncopyable();
private:
    boost::noncopyable const &operator=(boost::noncopyable const &);
};
static_assert(sizeof(boost::noncopyable) == 1, "Invalid boost::noncopyable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NONCOPYABLE_H__
