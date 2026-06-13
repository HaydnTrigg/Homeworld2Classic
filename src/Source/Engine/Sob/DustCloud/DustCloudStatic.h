#if 0
#ifndef __DUSTCLOUDSTATIC_H__
#define __DUSTCLOUDSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DustCloudStatic :
    public SobStatic
{
public:
    typedef SobStatic SuperClass;
    DustCloudStatic(DustCloudStatic const &); /* compiler_generated() */
protected:
    DustCloudStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    bool m_isChargeable; // 0x1BC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_lightningEffectName; // 0x1C0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_chargedLightningEffectName; // 0x1D8
    float m_damageMultiplier; // 0x1F0
    virtual _inline ~DustCloudStatic() override; /* compiler_generated() */
    DustCloudStatic &operator=(DustCloudStatic const &); /* compiler_generated() */
};
static_assert(sizeof(DustCloudStatic) == 500, "Invalid DustCloudStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DUSTCLOUDSTATIC_H__
#endif
