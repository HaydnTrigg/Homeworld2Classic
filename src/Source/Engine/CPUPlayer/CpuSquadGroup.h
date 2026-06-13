#if 0
#ifndef __CPUSQUADGROUP_H__
#define __CPUSQUADGROUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuSquadGroup
{
public:
    enum GroupType
    {
        GT_Military = 0,
        GT_Scout,
        GT_Builder,
        GT_HyperSpaceGate,
        GT_Platform,
        GT_Count,
    };
    CpuSquadGroup(CpuSquadGroup const &); /* compiler_generated() */
    CpuSquadGroup(CpuCommon &, SaveStream *);
    CpuSquadGroup(CpuCommon &, CpuSquadGroup::GroupType);
    ~CpuSquadGroup();
    void save(SaveStream *) const;
    void push_back(Squadron *);
    void merge(CpuSquadGroup &);
    void remove(Squadron const *);
    _inline bool empty() const;
    unsigned __int32 size() const;
    bool alive() const;
    Squadron *getLeadSquadron();
    Squadron const *getLeadSquadron() const;
    _inline SquadronList &getSquadronList();
    _inline CpuCommon &getCommon();
    _inline bool isActive() const;
    _inline void setActive(bool);
    void SendOrderRequest(SquadState);
    bool AreAllAwake() const;
    bool IsAnySquadronInState(CommandType);
    bool Update();
    _inline SquadState getStateId() const;
    _inline CpuSquadGroup::GroupType getGroupType() const;
    _inline CpuState const *getCurrentState() const;
    _inline ScoutState const *getScoutState() const;
    CounterValue m_counterValue; // 0x0
    vector3 m_avgPos; // 0x1C
private:
    CpuCommon &m_common; // 0x28
    SquadronList m_squadList; // 0x2C
    CpuState *m_currentState; // 0x4C
    bool m_active; // 0x50
    IdleState m_idleState; // 0x54
    AttackState m_attackState; // 0x70
    DefendState m_defendState; // 0xF0
    ScoutState m_scoutState; // 0x110
    OneShotState m_oneShotState; // 0x138
    CpuSquadGroup::GroupType m_groupType; // 0x154
};
static_assert(sizeof(CpuSquadGroup) == 344, "Invalid CpuSquadGroup size");

class CpuSquadGroup
{
public:
    enum GroupType
    {
        GT_Military = 0,
        GT_Scout,
        GT_Builder,
        GT_HyperSpaceGate,
        GT_Platform,
        GT_Count,
    };
    CpuSquadGroup(CpuSquadGroup const &); /* compiler_generated() */
    CpuSquadGroup(CpuCommon &, SaveStream *);
    CpuSquadGroup(CpuCommon &, CpuSquadGroup::GroupType);
    ~CpuSquadGroup();
    void save(SaveStream *) const;
    void push_back(Squadron *);
    void merge(CpuSquadGroup &);
    void remove(Squadron const *);
    _inline bool empty() const;
    unsigned __int32 size() const;
    bool alive() const;
    Squadron *getLeadSquadron();
    Squadron const *getLeadSquadron() const;
    _inline SquadronList &getSquadronList();
    _inline CpuCommon &getCommon();
    _inline bool isActive() const;
    _inline void setActive(bool);
    void SendOrderRequest(SquadState);
    bool AreAllAwake() const;
    bool IsAnySquadronInState(CommandType);
    bool Update();
    _inline SquadState getStateId() const;
    _inline CpuSquadGroup::GroupType getGroupType() const;
    _inline CpuState const *getCurrentState() const;
    _inline ScoutState const *getScoutState() const;
    CounterValue m_counterValue; // 0x0
    vector3 m_avgPos; // 0x1C
private:
    CpuCommon &m_common; // 0x28
    SquadronList m_squadList; // 0x2C
    CpuState *m_currentState; // 0x4C
    bool m_active; // 0x50
    IdleState m_idleState; // 0x54
    AttackState m_attackState; // 0x70
    DefendState m_defendState; // 0xF0
    ScoutState m_scoutState; // 0x110
    OneShotState m_oneShotState; // 0x138
    CpuSquadGroup::GroupType m_groupType; // 0x154
};
static_assert(sizeof(CpuSquadGroup) == 344, "Invalid CpuSquadGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_5330F8(CpuSquadGroup const *const);
_inline bool CpuSquadGroup::empty() const // 0x5330F8
{
    mangled_assert("?empty@CpuSquadGroup@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5330F8(this);
    return __result;
}

_extern SquadronList &_sub_525A63(CpuSquadGroup *const);
_inline SquadronList &CpuSquadGroup::getSquadronList() // 0x525A63
{
    mangled_assert("?getSquadronList@CpuSquadGroup@@QAEAAVSquadronList@@XZ");
    todo("implement");
    SquadronList & __result = _sub_525A63(this);
    return __result;
}

_extern CpuCommon &_sub_525A4C(CpuSquadGroup *const);
_inline CpuCommon &CpuSquadGroup::getCommon() // 0x525A4C
{
    mangled_assert("?getCommon@CpuSquadGroup@@QAEAAVCpuCommon@@XZ");
    todo("implement");
    CpuCommon & __result = _sub_525A4C(this);
    return __result;
}

_extern bool _sub_533444(CpuSquadGroup const *const);
_inline bool CpuSquadGroup::isActive() const // 0x533444
{
    mangled_assert("?isActive@CpuSquadGroup@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_533444(this);
    return __result;
}

_extern void _sub_5336E9(CpuSquadGroup *const, bool);
_inline void CpuSquadGroup::setActive(bool) // 0x5336E9
{
    mangled_assert("?setActive@CpuSquadGroup@@QAEX_N@Z");
    todo("implement");
    _sub_5336E9(this, arg);
}

_extern SquadState _sub_5333EA(CpuSquadGroup const *const);
_inline SquadState CpuSquadGroup::getStateId() const // 0x5333EA
{
    mangled_assert("?getStateId@CpuSquadGroup@@QBE?AW4SquadState@@XZ");
    todo("implement");
    SquadState __result = _sub_5333EA(this);
    return __result;
}

_extern CpuSquadGroup::GroupType _sub_5333BC(CpuSquadGroup const *const);
_inline CpuSquadGroup::GroupType CpuSquadGroup::getGroupType() const // 0x5333BC
{
    mangled_assert("?getGroupType@CpuSquadGroup@@QBE?AW4GroupType@1@XZ");
    todo("implement");
    CpuSquadGroup::GroupType __result = _sub_5333BC(this);
    return __result;
}

_extern CpuState const *_sub_5333B0(CpuSquadGroup const *const);
_inline CpuState const *CpuSquadGroup::getCurrentState() const // 0x5333B0
{
    mangled_assert("?getCurrentState@CpuSquadGroup@@QBEPBVCpuState@@XZ");
    todo("implement");
    CpuState const * __result = _sub_5333B0(this);
    return __result;
}

_extern ScoutState const *_sub_5333C3(CpuSquadGroup const *const);
_inline ScoutState const *CpuSquadGroup::getScoutState() const // 0x5333C3
{
    mangled_assert("?getScoutState@CpuSquadGroup@@QBEPBVScoutState@@XZ");
    todo("implement");
    ScoutState const * __result = _sub_5333C3(this);
    return __result;
}

/* ---------- private code */

#endif // __CPUSQUADGROUP_H__
#endif
