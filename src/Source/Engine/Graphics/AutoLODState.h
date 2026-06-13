#if 0
#ifndef __AUTOLODSTATE_H__
#define __AUTOLODSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AutoLODState
{
public:
    enum Action
    {
        A_Nothing = 0,
        A_DecreaseGeometry,
        A_IncreaseGeometry,
    };
    AutoLODState();
    ~AutoLODState();
    void SetDesiredFPS(float);
    AutoLODState::Action Update(float);
    void GetDebugString(char *, unsigned __int32);
    enum Zone
    {
        Z_Min = 0,
        Z_NeedSpeed,
        Z_Sufficient,
        Z_Max,
        Z_Number,
    };
    enum State
    {
        S_Stable = 0,
        S_ReducingGeometry,
        S_IncreasingGeometry,
    };
private:
    void ClearAccum();
    AutoLODState::Zone CalcZone(float);
    AutoLODState::State HandleStable(AutoLODState::Zone);
    AutoLODState::State HandleReducingGeometry(AutoLODState::Zone);
    AutoLODState::State HandleIncreasingGeometry(AutoLODState::Zone);
    AutoLODState::State m_state; // 0x0
    AutoLODState::Zone m_lastZone; // 0x4
    float m_startReducingRenderTime; // 0x8
    float m_desiredRenderTime; // 0xC
    float m_startIncreasingRenderTime; // 0x10
    float m_accumThreshold[4]; // 0x14
    float m_accum[4]; // 0x24
};
static_assert(sizeof(AutoLODState) == 52, "Invalid AutoLODState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __AUTOLODSTATE_H__
#endif
