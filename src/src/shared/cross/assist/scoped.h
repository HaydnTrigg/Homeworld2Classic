#if 0
#ifndef __SCOPED_H__
#define __SCOPED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ScopedTrait<void *>
{
public:
    typedef void *Type;
    void Release(void *);
    bool IsNull(void *) const;
};
static_assert(sizeof(ScopedTrait<void *>) == 1, "Invalid ScopedTrait<void *> size");

class Scoped<`anonymous namespace'::STH> :
    private `anonymous-namespace'::STH
{
public:
    typedef void *Type;
    typedef `anonymous-namespace'::STH Trait;
    typedef void (*bool_type)();
private:
    void *m_p; // 0x0
    Scoped<`anonymous namespace'::STH>(Scoped<`anonymous namespace'::STH> const &);
public:
    Scoped<`anonymous namespace'::STH>(void *, `anonymous-namespace'::STH const &);
    ~Scoped<`anonymous namespace'::STH>();
    void *get();
    void (*const operator void (__stdcall *const )(void)() const)();
private:
    Scoped<`anonymous namespace'::STH> &operator=(Scoped<`anonymous namespace'::STH> const &);
    static void *operator new(unsigned __int32);
    static void operator delete(void *);
};
static_assert(sizeof(Scoped<`anonymous namespace'::STH>) == 4, "Invalid Scoped<`anonymous namespace'::STH> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_H__
#endif
