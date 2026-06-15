#if 0
#ifndef __SALVAGESTATIC_H__
#define __SALVAGESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SalvageStatic :
    public ResourceStatic
{
public:
    SalvageStatic(SalvageStatic const &); /* compiler_generated() */
protected:
    _inline SalvageStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
    typedef ResourceStatic SuperClass;
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    float m_salvageSpeedFraction; // 0x2D0
    virtual _inline ~SalvageStatic() override; /* compiler_generated() */
    SalvageStatic &operator=(SalvageStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageStatic) == 724, "Invalid SalvageStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SalvageStatic::SalvageStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4B1BBA
{
    mangled_assert("??0SalvageStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SALVAGESTATIC_H__
#endif
