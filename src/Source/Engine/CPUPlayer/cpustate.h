#if 0
#ifndef __CPUSTATE_H__
#define __CPUSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SquadState
{
    SGS_Idle = 0,
    SGS_Attack,
    SGS_Defend,
    SGS_Scout,
    SGS_OneShot,
    SGS_Count,
};

/* ---------- definitions */

class CpuState
{
public:
    CpuState(CpuState const &); /* compiler_generated() */
    _inline CpuState(CpuSquadGroup &);
    _inline ~CpuState();
    virtual bool Update() = 0;
    virtual unsigned __int32 GetType() const = 0;
    virtual void ReIssue(SquadronList &) = 0;
    virtual __int32 getSubState() const = 0;
protected:
    CpuSquadGroup &m_squadGroup; // 0x4
};
static_assert(sizeof(CpuState) == 8, "Invalid CpuState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_53FF69(CpuState *const, CpuSquadGroup &);
_inline CpuState::CpuState(CpuSquadGroup &) // 0x53FF69
{
    mangled_assert("??0CpuState@@QAE@AAVCpuSquadGroup@@@Z");
    todo("implement");
    _sub_53FF69(this, arg);
}

_extern void _sub_540074(CpuState *const);
_inline CpuState::~CpuState() // 0x540074
{
    mangled_assert("??1CpuState@@QAE@XZ");
    todo("implement");
    _sub_540074(this);
}

/* ---------- private code */

#endif // __CPUSTATE_H__
#endif
