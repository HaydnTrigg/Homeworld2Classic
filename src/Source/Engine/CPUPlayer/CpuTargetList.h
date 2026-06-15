#if 0
#ifndef __CPUTARGETLIST_H__
#define __CPUTARGETLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum TargetBaseType
{
    TBT_Attack = 0,
    TBT_Defend,
};

/* ---------- definitions */

class TargetList
{
public:
    typedef std::vector<BaseTarget *,std::allocator<BaseTarget *> > BTVector;
    TargetList(TargetList const &); /* compiler_generated() */
    _inline TargetList();
    ~TargetList();
    _inline unsigned __int32 size() const;
    _inline BaseTarget *at(unsigned __int32) const;
    void clear();
    void remove(Squadron const *);
    void remove(unsigned __int32);
    void removedead();
    void change_priority(TargetType, __int32);
    bool exist(BaseTarget *) const;
    BaseTarget *find(Squadron const *) const;
    BaseTarget *find(unsigned __int32) const;
    BaseTarget *findclosest(vector3 const &) const;
    void save(SaveStream *);
    void restore(SaveStream *, TargetBaseType);
private:
    unsigned __int32 m_TargetIdCounter; // 0x0
    std::vector<BaseTarget *,std::allocator<BaseTarget *> > m_Targets; // 0x4
public:
    TargetList &operator=(TargetList const &); /* compiler_generated() */
};
static_assert(sizeof(TargetList) == 16, "Invalid TargetList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline TargetList::TargetList() // 0x52F958
{
    mangled_assert("??0TargetList@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 TargetList::push_back<DefendTarget>(vector3 const &, __int32, float, TargetType, float) // 0x52F31B
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEIABVvector3@@HMW4TargetType@@M@Z");
    todo("implement");
}

_inline unsigned __int32 TargetList::push_back<AttackTarget>(Squadron *, __int32, float, TargetType, float) // 0x52F26D
{
    mangled_assert("??$push_back@VAttackTarget@@@TargetList@@QAEIPAVSquadron@@HMW4TargetType@@M@Z");
    todo("implement");
}

_inline unsigned __int32 TargetList::push_back<DefendTarget>(Squadron *, __int32, float, TargetType, float) // 0x52F39B
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEIPAVSquadron@@HMW4TargetType@@M@Z");
    todo("implement");
}

_inline void TargetList::push_back<AttackTarget>(AttackTarget *) // 0x5408C1
{
    mangled_assert("??$push_back@VAttackTarget@@@TargetList@@QAEXPAVAttackTarget@@@Z");
    todo("implement");
}

_inline void TargetList::push_back<DefendTarget>(DefendTarget *) // 0x5408DA
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEXPAVDefendTarget@@@Z");
    todo("implement");
}

_inline unsigned __int32 TargetList::size() const // 0x533713
{
    mangled_assert("?size@TargetList@@QBEIXZ");
    todo("implement");
}

_inline BaseTarget *TargetList::at(unsigned __int32) const // 0x533001
{
    mangled_assert("?at@TargetList@@QBEPAVBaseTarget@@I@Z");
    todo("implement");
}

_inline BaseTarget *TargetList::FindBest<HighThreatAndPriorityScore>(HighThreatAndPriorityScore &) // 0x52EBDB
{
    mangled_assert("??$FindBest@UHighThreatAndPriorityScore@@@TargetList@@QAEPAVBaseTarget@@AAUHighThreatAndPriorityScore@@@Z");
    todo("implement");
}

_inline BaseTarget *TargetList::FindBest<SafeDefendTargetScore>(SafeDefendTargetScore &) // 0x52EC29
{
    mangled_assert("??$FindBest@USafeDefendTargetScore@@@TargetList@@QAEPAVBaseTarget@@AAUSafeDefendTargetScore@@@Z");
    todo("implement");
}

_inline BaseTarget *TargetList::FindBest<BestDefendScore>(BestDefendScore &) // 0x52DF80
{
    mangled_assert("??$FindBest@UBestDefendScore@@@TargetList@@QAEPAVBaseTarget@@AAUBestDefendScore@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUTARGETLIST_H__
#endif
