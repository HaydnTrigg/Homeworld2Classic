#if 0
#ifndef __PARADEMANAGER_H__
#define __PARADEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ParadeManager
{
public:
    static ParadeManager *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    StaticParadeData *getStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    ParadeManager(ParadeManager const &); /* compiler_generated() */
private:
    ParadeManager();
    ~ParadeManager();
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > > NameToStaticParadeDataMap;
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > > m_registeredStaticParades; // 0x0
    StaticParadeData *loadStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static void paradeSlot(char const *slotname, vector3 offset, vector3 heading, vector3 dirGrowth, float sizeGrowth);
    static StaticParadeData *currentParadeData;
    static ParadeManager *create();
    static ParadeManager *s_instance;
public:
    ParadeManager &operator=(ParadeManager const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeManager) == 32, "Invalid ParadeManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PARADEMANAGER_H__
#endif
