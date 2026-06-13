#if 0
#ifndef __STRIKEGROUPFORMATION_H__
#define __STRIKEGROUPFORMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StrikeGroupFormation
{
public:
    StrikeGroupFormation(StrikeGroupFormation const &); /* compiler_generated() */
    StrikeGroupFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    StrikeGroupFormation();
    ~StrikeGroupFormation();
    _inline void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    StrikeGroupFormationNode *getNodeByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void setRootNode(StrikeGroupFormationNode *);
    _inline StrikeGroupFormationNode *getRootNode();
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    StrikeGroupFormationNode *m_rootNode; // 0x18
public:
    StrikeGroupFormation &operator=(StrikeGroupFormation const &); /* compiler_generated() */
};
static_assert(sizeof(StrikeGroupFormation) == 28, "Invalid StrikeGroupFormation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_508832(StrikeGroupFormation *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline void StrikeGroupFormation::setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x508832
{
    mangled_assert("?setName@StrikeGroupFormation@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_508832(this, arg);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_508EFC(StrikeGroupFormation const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &StrikeGroupFormation::getName() const // 0x508EFC
{
    mangled_assert("?getName@StrikeGroupFormation@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_508EFC(this);
    return __result;
}

_extern StrikeGroupFormationNode *_sub_508107(StrikeGroupFormation *const);
_inline StrikeGroupFormationNode *StrikeGroupFormation::getRootNode() // 0x508107
{
    mangled_assert("?getRootNode@StrikeGroupFormation@@QAEPAVStrikeGroupFormationNode@@XZ");
    todo("implement");
    StrikeGroupFormationNode * __result = _sub_508107(this);
    return __result;
}

/* ---------- private code */

#endif // __STRIKEGROUPFORMATION_H__
#endif
