#if 0
#ifndef __PARADESTATICDATA_H__
#define __PARADESTATICDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct StaticParadeSlotData
{
    vector3 m_offset; // 0x0
    vector3 m_heading; // 0xC
    vector3 m_directionOfGrowth; // 0x18
    float m_sizeOfGrowth; // 0x24
    _inline StaticParadeSlotData(); /* compiler_generated() */
};
static_assert(sizeof(StaticParadeSlotData) == 40, "Invalid StaticParadeSlotData size");

class StaticParadeData
{
public:
    bool getSlotData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &, vector3 &, float &);
    void addSlotData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, StaticParadeSlotData const &);
    bool isInParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > > SlotDataMap;
private:
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > > m_paradeSlotDataMap; // 0x0
public:
    StaticParadeData(StaticParadeData const &); /* compiler_generated() */
    _inline StaticParadeData(); /* compiler_generated() */
    _inline ~StaticParadeData(); /* compiler_generated() */
    StaticParadeData &operator=(StaticParadeData const &); /* compiler_generated() */
};
static_assert(sizeof(StaticParadeData) == 32, "Invalid StaticParadeData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PARADESTATICDATA_H__
#endif
