#if 0
#ifndef __STLEXBIND_H__
#define __STLEXBIND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class stdex::binder2nd<boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> > :
    public std::unary_function<`anonymous namespace'::FPSource const &,bool>
{
private:
    boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> op; // 0x0
    char const *second; // 0x4
public:
    binder2nd<boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> >(boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool>, char const *);
    bool operator()(`anonymous-namespace'::FPSource const &) const;
};
static_assert(sizeof(stdex::binder2nd<boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> >) == 8, "Invalid stdex::binder2nd<boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXBIND_H__
#endif
