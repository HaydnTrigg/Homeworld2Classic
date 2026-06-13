#if 0
#ifndef __SOBPOINTMASSSTATIC_H__
#define __SOBPOINTMASSSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobPointMassStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    SobPointMassStatic(SobPointMassStatic const &); /* compiler_generated() */
protected:
    SobPointMassStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual ~SobPointMassStatic() override;
    float m_mass; // 0x1BC
    SobPointMassStatic &operator=(SobPointMassStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobPointMassStatic) == 448, "Invalid SobPointMassStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOBPOINTMASSSTATIC_H__
#endif
