#if 0
#ifndef __FORMATIONPATTERN_H__
#define __FORMATIONPATTERN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationPattern
{
public:
    FormationPattern(FormationPattern const &); /* compiler_generated() */
    _inline FormationPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    FormationPattern();
    _inline void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    struct FormationSlot
    {
        vector3 m_position; // 0x0
        vector3 m_heading; // 0xC
        vector3 m_up; // 0x18
        _inline FormationSlot(); /* compiler_generated() */
    };
    static_assert(sizeof(FormationSlot) == 36, "Invalid FormationSlot size");
    void resetSlots();
    _inline void addSlot(FormationPattern::FormationSlot const &);
    _inline unsigned __int32 getNumberOfSlots() const;
    _inline FormationPattern::FormationSlot const &getSlot(unsigned __int32) const;
protected:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<FormationPattern::FormationSlot,std::allocator<FormationPattern::FormationSlot> > m_formationSlots; // 0x18
public:
    _inline ~FormationPattern(); /* compiler_generated() */
    FormationPattern &operator=(FormationPattern const &); /* compiler_generated() */
};
static_assert(sizeof(FormationPattern) == 36, "Invalid FormationPattern size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FormationPattern::FormationPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4B5AF7
{
    mangled_assert("??0FormationPattern@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline void FormationPattern::setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4B6403
{
    mangled_assert("?setName@FormationPattern@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &FormationPattern::getName() const // 0x4B60BF
{
    mangled_assert("?getName@FormationPattern@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline void FormationPattern::addSlot(FormationPattern::FormationSlot const &) // 0x4B5F72
{
    mangled_assert("?addSlot@FormationPattern@@QAEXABUFormationSlot@1@@Z");
    todo("implement");
}

_inline unsigned __int32 FormationPattern::getNumberOfSlots() const // 0x4B60C2
{
    mangled_assert("?getNumberOfSlots@FormationPattern@@QBEIXZ");
    todo("implement");
}

_inline FormationPattern::FormationSlot const &FormationPattern::getSlot(unsigned __int32) const // 0x657A6D
{
    mangled_assert("?getSlot@FormationPattern@@QBEABUFormationSlot@1@I@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONPATTERN_H__
#endif
