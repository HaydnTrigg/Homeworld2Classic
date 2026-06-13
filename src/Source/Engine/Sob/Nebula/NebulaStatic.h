#if 0
#ifndef __NEBULASTATIC_H__
#define __NEBULASTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NebulaStatic :
    public SobWithMeshStatic
{
public:
    typedef SobWithMeshStatic SuperClass;
    NebulaStatic(NebulaStatic const &); /* compiler_generated() */
protected:
    NebulaStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    ModifierApplier m_modifierApplier; // 0x2AC
    float m_damageMultiplier; // 0x2B8
    virtual _inline ~NebulaStatic() override; /* compiler_generated() */
    NebulaStatic &operator=(NebulaStatic const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaStatic) == 700, "Invalid NebulaStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NEBULASTATIC_H__
#endif
