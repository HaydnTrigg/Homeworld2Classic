#ifndef __FUNCTIONAL_H__
#define __FUNCTIONAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> :
    public std::binary_function<`anonymous namespace'::FPSource const &,char const *,bool>
{
public:
    pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool>(bool (*)(`anonymous-namespace'::FPSource const &, char const *));
    bool operator()(`anonymous-namespace'::FPSource const &, char const *const) const;
private:
    bool (*func)(`anonymous-namespace'::FPSource const &, char const *); // 0x0
};
static_assert(sizeof(boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool>) == 4, "Invalid boost::pointer_to_binary_function<`anonymous namespace'::FPSource const &,char const *,bool> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FUNCTIONAL_H__
/* combined */
#ifndef __FUNCTIONAL_H__
#define __FUNCTIONAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FUNCTIONAL_H__
