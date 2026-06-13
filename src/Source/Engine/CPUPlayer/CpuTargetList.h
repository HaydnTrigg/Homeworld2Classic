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

_extern _sub_52F958(TargetList *const);
_inline TargetList::TargetList() // 0x52F958
{
    mangled_assert("??0TargetList@@QAE@XZ");
    todo("implement");
    _sub_52F958(this);
}

_extern unsigned __int32 _sub_52F31B(TargetList *const, vector3 const &, __int32, float, TargetType, float);
_inline unsigned __int32 TargetList::push_back<DefendTarget>(vector3 const &, __int32, float, TargetType, float) // 0x52F31B
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEIABVvector3@@HMW4TargetType@@M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52F31B(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_52F26D(TargetList *const, Squadron *, __int32, float, TargetType, float);
_inline unsigned __int32 TargetList::push_back<AttackTarget>(Squadron *, __int32, float, TargetType, float) // 0x52F26D
{
    mangled_assert("??$push_back@VAttackTarget@@@TargetList@@QAEIPAVSquadron@@HMW4TargetType@@M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52F26D(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_52F39B(TargetList *const, Squadron *, __int32, float, TargetType, float);
_inline unsigned __int32 TargetList::push_back<DefendTarget>(Squadron *, __int32, float, TargetType, float) // 0x52F39B
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEIPAVSquadron@@HMW4TargetType@@M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52F39B(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_5408C1(TargetList *const, AttackTarget *);
_inline void TargetList::push_back<AttackTarget>(AttackTarget *) // 0x5408C1
{
    mangled_assert("??$push_back@VAttackTarget@@@TargetList@@QAEXPAVAttackTarget@@@Z");
    todo("implement");
    _sub_5408C1(this, arg);
}

_extern void _sub_5408DA(TargetList *const, DefendTarget *);
_inline void TargetList::push_back<DefendTarget>(DefendTarget *) // 0x5408DA
{
    mangled_assert("??$push_back@VDefendTarget@@@TargetList@@QAEXPAVDefendTarget@@@Z");
    todo("implement");
    _sub_5408DA(this, arg);
}

_extern unsigned __int32 _sub_533713(TargetList const *const);
_inline unsigned __int32 TargetList::size() const // 0x533713
{
    mangled_assert("?size@TargetList@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_533713(this);
    return __result;
}

_extern BaseTarget *_sub_533001(TargetList const *const, unsigned __int32);
_inline BaseTarget *TargetList::at(unsigned __int32) const // 0x533001
{
    mangled_assert("?at@TargetList@@QBEPAVBaseTarget@@I@Z");
    todo("implement");
    BaseTarget * __result = _sub_533001(this, arg);
    return __result;
}

_extern BaseTarget *_sub_52EBDB(TargetList *const, HighThreatAndPriorityScore &);
_inline BaseTarget *TargetList::FindBest<HighThreatAndPriorityScore>(HighThreatAndPriorityScore &) // 0x52EBDB
{
    mangled_assert("??$FindBest@UHighThreatAndPriorityScore@@@TargetList@@QAEPAVBaseTarget@@AAUHighThreatAndPriorityScore@@@Z");
    todo("implement");
    BaseTarget * __result = _sub_52EBDB(this, arg);
    return __result;
}

_extern BaseTarget *_sub_52EC29(TargetList *const, SafeDefendTargetScore &);
_inline BaseTarget *TargetList::FindBest<SafeDefendTargetScore>(SafeDefendTargetScore &) // 0x52EC29
{
    mangled_assert("??$FindBest@USafeDefendTargetScore@@@TargetList@@QAEPAVBaseTarget@@AAUSafeDefendTargetScore@@@Z");
    todo("implement");
    BaseTarget * __result = _sub_52EC29(this, arg);
    return __result;
}

_extern BaseTarget *_sub_52DF80(TargetList *const, BestDefendScore &);
_inline BaseTarget *TargetList::FindBest<BestDefendScore>(BestDefendScore &) // 0x52DF80
{
    mangled_assert("??$FindBest@UBestDefendScore@@@TargetList@@QAEPAVBaseTarget@@AAUBestDefendScore@@@Z");
    todo("implement");
    BaseTarget * __result = _sub_52DF80(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __CPUTARGETLIST_H__
#endif
