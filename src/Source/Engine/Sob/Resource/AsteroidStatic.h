#if 0
#ifndef __ASTEROIDSTATIC_H__
#define __ASTEROIDSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AsteroidStatic :
    public ResourceStatic
{
public:
    typedef ResourceStatic SuperClass;
    AsteroidStatic(AsteroidStatic const &); /* compiler_generated() */
protected:
    _inline AsteroidStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    virtual _inline ~AsteroidStatic() override; /* compiler_generated() */
    AsteroidStatic &operator=(AsteroidStatic const &); /* compiler_generated() */
};
static_assert(sizeof(AsteroidStatic) == 720, "Invalid AsteroidStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AsteroidStatic::AsteroidStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4B174A
{
    mangled_assert("??0AsteroidStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __ASTEROIDSTATIC_H__
#endif
