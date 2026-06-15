#if 0
#ifndef __CPUSCOUTSTATE_H__
#define __CPUSCOUTSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ScoutState :
    public CpuState
{
public:
    enum ScoutSubState
    {
        SSS_Init = 0,
        SSS_Move,
        SSS_AtTarget,
        SSS_Retreat,
        SSS_Max,
    };
    ScoutState(ScoutState const &); /* compiler_generated() */
    _inline ScoutState(CpuSquadGroup &);
    _inline ~ScoutState();
    virtual _inline unsigned __int32 GetType() const override;
    virtual bool Update() override;
    virtual _inline void ReIssue(SquadronList &) override;
    void Enter();
    _inline unsigned __int32 getAttackTargetId() const;
    virtual _inline __int32 getSubState() const override;
private:
    bool HandleUnderAttack(Ship *, CpuBlob *);
    ScoutState::ScoutSubState m_subState; // 0x8
    unsigned __int32 m_attackTargetId; // 0xC
    vector3 m_targetPos; // 0x10
    vector3 m_retreatPos; // 0x1C
};
static_assert(sizeof(ScoutState) == 40, "Invalid ScoutState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ScoutState::ScoutState(CpuSquadGroup &) // 0x53FFC1
{
    mangled_assert("??0ScoutState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

_inline ScoutState::~ScoutState() // 0x540090
{
    mangled_assert("??1ScoutState@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 ScoutState::GetType() const // 0x5400C3
{
    mangled_assert("?GetType@ScoutState@@UBEIXZ");
    todo("implement");
}

_inline void ScoutState::ReIssue(SquadronList &) // 0x5400F8
{
    mangled_assert("?ReIssue@ScoutState@@UAEXAAVSquadronList@@@Z");
    todo("implement");
}

_inline unsigned __int32 ScoutState::getAttackTargetId() const // 0x5333AC
{
    mangled_assert("?getAttackTargetId@ScoutState@@QBEIXZ");
    todo("implement");
}

_inline __int32 ScoutState::getSubState() const // 0x5401DC
{
    mangled_assert("?getSubState@ScoutState@@UBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUSCOUTSTATE_H__
#endif
