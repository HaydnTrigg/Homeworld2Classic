#if 0
#ifndef __SIMSPEEDCONTROLLER_H__
#define __SIMSPEEDCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimSpeedController
{
public:
    SimSpeedController();
    ~SimSpeedController();
    void Update(__int32, __int32);
private:
    void CalculateTargetQueueSize(__int32);
    void ResetHistory();
    typedef std::deque<int,std::allocator<int> > History;
    __int32 m_targetQueueSize; // 0x0
    __int32 m_sizeHistory; // 0x4
    __int32 m_minHistory; // 0x8
    __int32 m_maxHistory; // 0xC
};
static_assert(sizeof(SimSpeedController) == 16, "Invalid SimSpeedController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SIMSPEEDCONTROLLER_H__
#endif
