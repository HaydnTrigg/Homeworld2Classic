#if 0
#ifndef __FORMATIONPATTERNMANAGER_H__
#define __FORMATIONPATTERNMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationPatternManager
{
public:
    static FormationPatternManager *getInstance();
    static bool release();
    void resetPatterns();
    FormationPattern *getPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    FormationPatternManager(FormationPatternManager const &); /* compiler_generated() */
private:
    FormationPatternManager();
    ~FormationPatternManager();
    std::vector<FormationPattern *,std::allocator<FormationPattern *> > m_patterns; // 0x0
    FormationPattern *loadPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static FormationPatternManager *create();
    static FormationPatternManager *s_instance;
public:
    FormationPatternManager &operator=(FormationPatternManager const &); /* compiler_generated() */
};
static_assert(sizeof(FormationPatternManager) == 12, "Invalid FormationPatternManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FORMATIONPATTERNMANAGER_H__
#endif
