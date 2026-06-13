#if 0
#ifndef __PEBBLESTATIC_H__
#define __PEBBLESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PebbleStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    PebbleStatic(PebbleStatic const &); /* compiler_generated() */
protected:
    PebbleStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    float m_pixelSize; // 0x1BC
    vector4 m_pixelColour; // 0x1C0
    float m_smFadeDistance; // 0x1D0
    float m_smFadeMinAlpha; // 0x1D4
    float m_smPixelSize; // 0x1D8
    virtual _inline ~PebbleStatic() override; /* compiler_generated() */
    PebbleStatic &operator=(PebbleStatic const &); /* compiler_generated() */
};
static_assert(sizeof(PebbleStatic) == 476, "Invalid PebbleStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PEBBLESTATIC_H__
#endif
