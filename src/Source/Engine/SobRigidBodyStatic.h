#if 0
#ifndef __SOBRIGIDBODYSTATIC_H__
#define __SOBRIGIDBODYSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobRigidBodyStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    SobRigidBodyStatic(SobRigidBodyStatic const &); /* compiler_generated() */
protected:
    SobRigidBodyStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual ~SobRigidBodyStatic() override;
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type);
    float m_mass; // 0x1BC
    SobRigidBodyStatic &operator=(SobRigidBodyStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobRigidBodyStatic) == 448, "Invalid SobRigidBodyStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOBRIGIDBODYSTATIC_H__
#endif
