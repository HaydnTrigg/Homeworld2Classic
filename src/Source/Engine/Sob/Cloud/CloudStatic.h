#if 0
#ifndef __CLOUDSTATIC_H__
#define __CLOUDSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CloudStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    CloudStatic(CloudStatic const &); /* compiler_generated() */
protected:
    CloudStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    virtual _inline ~CloudStatic() override; /* compiler_generated() */
    CloudStatic &operator=(CloudStatic const &); /* compiler_generated() */
};
static_assert(sizeof(CloudStatic) == 444, "Invalid CloudStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CLOUDSTATIC_H__
#endif
