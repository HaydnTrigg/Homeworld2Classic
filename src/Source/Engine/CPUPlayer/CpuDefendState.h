#if 0
#ifndef __CPUDEFENDSTATE_H__
#define __CPUDEFENDSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DefendState :
    public CpuState
{
public:
    enum DefendSubState
    {
        DSS_Init = 0,
        DSS_MoveDefendTarget,
        DSS_Defending,
        DSS_AttackBack,
        DSS_Hyperspacing,
        DSS_Max,
    };
    DefendState(DefendState const &); /* compiler_generated() */
    _inline DefendState(CpuSquadGroup &);
    _inline ~DefendState();
    virtual _inline unsigned __int32 GetType() const override;
    virtual bool Update() override;
    virtual void ReIssue(SquadronList &) override;
    void Enter();
    virtual _inline __int32 getSubState() const override;
    _inline unsigned __int32 getDefendTargetId() const;
private:
    bool ProcessHyperspace(vector3 const &);
    DefendState::DefendSubState m_subState; // 0x8
    unsigned __int32 m_defendTargetId; // 0xC
    vector3 m_targetPos; // 0x10
    float m_lastAttackTime; // 0x1C
};
static_assert(sizeof(DefendState) == 32, "Invalid DefendState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_53FF7B(DefendState *const, CpuSquadGroup &);
_inline DefendState::DefendState(CpuSquadGroup &) // 0x53FF7B
{
    mangled_assert("??0DefendState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
    _sub_53FF7B(this, arg);
}

_extern void _sub_54007B(DefendState *const);
_inline DefendState::~DefendState() // 0x54007B
{
    mangled_assert("??1DefendState@@QAE@XZ");
    todo("implement");
    _sub_54007B(this);
}

_extern unsigned __int32 _sub_5400B8(DefendState const *const);
_inline unsigned __int32 DefendState::GetType() const // 0x5400B8
{
    mangled_assert("?GetType@DefendState@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5400B8(this);
    return __result;
}

_extern __int32 _sub_5401D0(DefendState const *const);
_inline __int32 DefendState::getSubState() const // 0x5401D0
{
    mangled_assert("?getSubState@DefendState@@UBEHXZ");
    todo("implement");
    __int32 __result = _sub_5401D0(this);
    return __result;
}

_extern unsigned __int32 _sub_5333B8(DefendState const *const);
_inline unsigned __int32 DefendState::getDefendTargetId() const // 0x5333B8
{
    mangled_assert("?getDefendTargetId@DefendState@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5333B8(this);
    return __result;
}

/* ---------- private code */

#endif // __CPUDEFENDSTATE_H__
#endif
