#if 0
#ifndef __CPUATTACKSTATE_H__
#define __CPUATTACKSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AttackState :
    public CpuState
{
public:
    enum AttackSubState
    {
        ASS_Init = 0,
        ASS_MoveToRendezVous,
        ASS_ReadyToEngage,
        ASS_AttackMove,
        ASS_Defend,
        ASS_Retreat,
        ASS_Hyperspacing,
        ASS_Max,
    };
    AttackState(AttackState const &); /* compiler_generated() */
    _inline AttackState(CpuSquadGroup &);
    _inline ~AttackState();
    virtual _inline unsigned __int32 GetType() const override;
    virtual bool Update() override;
    virtual void ReIssue(SquadronList &) override;
    void Enter();
    vector3 const &getRendezVousPos() const;
    vector3 const &getRetreatPos() const;
    virtual _inline __int32 getSubState() const override;
    _inline unsigned __int32 getDefendTargetId() const;
    _inline unsigned __int32 getAttackTargetId() const;
    bool isInAttackMode() const;
    Selection m_debugSel; // 0x8
    vector3 m_debugSaveBackPos; // 0x3C
    __int32 m_lastThreat; // 0x48
private:
    AttackState::AttackSubState m_subState; // 0x4C
    unsigned __int32 m_attackTargetId; // 0x50
    vector3 m_rendezVousPos; // 0x54
    vector3 m_retreatPos; // 0x60
    float m_groupAttackTimer; // 0x6C
    unsigned __int32 m_defendTargetId; // 0x70
    float m_idleTimeOut; // 0x74
    bool m_inBattle; // 0x78
    unsigned __int32 m_rendezVousResendCount; // 0x7C
    bool HandleTacticalCombat();
    bool HandleDefendDecision();
    Squadron *FindBestTargetInBlob(CpuBlob *);
    bool AttackAllNearby();
    void MovingToRendezVous(Squadron *);
    void Micro_HandleBattle();
    bool CheckToSeeIfGroupShouldFlee();
    void CalcRetreatPos(bool);
    void RetreatBackToSafeSpot(bool);
    bool ShouldGroupAttack(AttackTarget *);
    bool ProcessHyperspace(vector3 const &);
    bool SubState_Init();
    void SubState_MovingToRendezVous();
    void SubState_ReadyToEngage();
};
static_assert(sizeof(AttackState) == 128, "Invalid AttackState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AttackState::AttackState(CpuSquadGroup &) // 0x53FD20
{
    mangled_assert("??0AttackState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

_inline AttackState::~AttackState() // 0x53FFD7
{
    mangled_assert("??1AttackState@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 AttackState::GetType() const // 0x5400B4
{
    mangled_assert("?GetType@AttackState@@UBEIXZ");
    todo("implement");
}

_inline __int32 AttackState::getSubState() const // 0x5401CC
{
    mangled_assert("?getSubState@AttackState@@UBEHXZ");
    todo("implement");
}

_inline unsigned __int32 AttackState::getDefendTargetId() const // 0x5333B4
{
    mangled_assert("?getDefendTargetId@AttackState@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 AttackState::getAttackTargetId() const // 0x5333A8
{
    mangled_assert("?getAttackTargetId@AttackState@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUATTACKSTATE_H__
#endif
