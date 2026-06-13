#if 0
#ifndef __STRIKEGROUPFORMATIONMANAGER_H__
#define __STRIKEGROUPFORMATIONMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StrikeGroupFormationManager
{
public:
    static StrikeGroupFormationManager *getInstance();
    static bool release();
    StrikeGroupFormation *getFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    char const *getFormationNameFromID(unsigned __int32);
    static bool startup();
    static bool shutdown();
    StrikeGroupFormationManager(StrikeGroupFormationManager const &); /* compiler_generated() */
private:
    StrikeGroupFormationManager();
    ~StrikeGroupFormationManager();
    std::vector<StrikeGroupFormation *,std::allocator<StrikeGroupFormation *> > m_formations; // 0x0
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_formationNames; // 0xC
    StrikeGroupFormation *loadFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static StrikeGroupFormationManager *create();
    static StrikeGroupFormationManager *s_instance;
public:
    StrikeGroupFormationManager &operator=(StrikeGroupFormationManager const &); /* compiler_generated() */
};
static_assert(sizeof(StrikeGroupFormationManager) == 24, "Invalid StrikeGroupFormationManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STRIKEGROUPFORMATIONMANAGER_H__
#endif
