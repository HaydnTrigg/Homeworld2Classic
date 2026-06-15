#if 0
#ifndef __CPUONESHOTSTATE_H__
#define __CPUONESHOTSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class OneShotState :
    public CpuState
{
public:
    enum OneShotStateSubState
    {
        OSS_Init = 0,
        OSS_Done,
    };
    OneShotState(OneShotState const &); /* compiler_generated() */
    _inline OneShotState(CpuSquadGroup &);
    _inline ~OneShotState();
    virtual _inline unsigned __int32 GetType() const override;
    virtual bool Update() override;
    virtual _inline void ReIssue(SquadronList &) override;
    void Enter();
    unsigned __int32 getDefendTargetId() const;
    virtual _inline __int32 getSubState() const override;
private:
    OneShotState::OneShotStateSubState m_subState; // 0x8
    unsigned __int32 m_defendTargetId; // 0xC
    vector3 m_targetPos; // 0x10
};
static_assert(sizeof(OneShotState) == 28, "Invalid OneShotState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline OneShotState::OneShotState(CpuSquadGroup &) // 0x53FFAB
{
    mangled_assert("??0OneShotState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

_inline OneShotState::~OneShotState() // 0x540089
{
    mangled_assert("??1OneShotState@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 OneShotState::GetType() const // 0x5400BF
{
    mangled_assert("?GetType@OneShotState@@UBEIXZ");
    todo("implement");
}

_inline void OneShotState::ReIssue(SquadronList &) // 0x5400F5
{
    mangled_assert("?ReIssue@OneShotState@@UAEXAAVSquadronList@@@Z");
    todo("implement");
}

_inline __int32 OneShotState::getSubState() const // 0x5401D8
{
    mangled_assert("?getSubState@OneShotState@@UBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUONESHOTSTATE_H__
#endif
