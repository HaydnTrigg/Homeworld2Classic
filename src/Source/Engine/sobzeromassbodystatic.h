#if 0
#ifndef __SOBZEROMASSBODYSTATIC_H__
#define __SOBZEROMASSBODYSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobZeroMassBodyStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    SobZeroMassBodyStatic(SobZeroMassBodyStatic const &); /* compiler_generated() */
protected:
    _inline SobZeroMassBodyStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual _inline ~SobZeroMassBodyStatic() override; /* compiler_generated() */
    SobZeroMassBodyStatic &operator=(SobZeroMassBodyStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobZeroMassBodyStatic) == 444, "Invalid SobZeroMassBodyStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SobZeroMassBodyStatic::SobZeroMassBodyStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4A918C
{
    mangled_assert("??0SobZeroMassBodyStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SOBZEROMASSBODYSTATIC_H__
#endif
