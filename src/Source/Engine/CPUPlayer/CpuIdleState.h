#if 0
#ifndef __CPUIDLESTATE_H__
#define __CPUIDLESTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class IdleState :
    public CpuState
{
public:
    enum IdleSubState
    {
        ISS_Init = 0,
        ISS_MoveToDefendPoint,
        ISS_AtDefendPoint,
        ISS_Defend,
        ISS_AttackReturn,
        ISS_Max,
    };
    IdleState(IdleState const &); /* compiler_generated() */
    _inline IdleState(CpuSquadGroup &);
    _inline ~IdleState();
    virtual _inline unsigned __int32 GetType() const override;
    virtual bool Update() override;
    virtual _inline void ReIssue(SquadronList &) override;
    virtual _inline __int32 getSubState() const override;
    void Enter();
    vector3 m_debugRetreatPos; // 0x8
private:
    IdleState::IdleSubState m_subState; // 0x14
    float m_lastAttackTimer; // 0x18
    bool HandleTacticalCombat();
};
static_assert(sizeof(IdleState) == 28, "Invalid IdleState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline IdleState::IdleState(CpuSquadGroup &) // 0x53FF91
{
    mangled_assert("??0IdleState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

_inline IdleState::~IdleState() // 0x540082
{
    mangled_assert("??1IdleState@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 IdleState::GetType() const // 0x5400BC
{
    mangled_assert("?GetType@IdleState@@UBEIXZ");
    todo("implement");
}

_inline void IdleState::ReIssue(SquadronList &) // 0x5400F2
{
    mangled_assert("?ReIssue@IdleState@@UAEXAAVSquadronList@@@Z");
    todo("implement");
}

_inline __int32 IdleState::getSubState() const // 0x5401D4
{
    mangled_assert("?getSubState@IdleState@@UBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUIDLESTATE_H__
#endif
