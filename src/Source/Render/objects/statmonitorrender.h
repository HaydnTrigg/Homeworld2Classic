#if 0
#ifndef __STATMONITORRENDER_H__
#define __STATMONITORRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StatMonitorRender
{
public:
    StatMonitorRender(rndTable &);
    void display(float const, float const, StatMonitor const &);
private:
    void displayChannelTimes(StatMonitor const &, unsigned __int32);
    void displayGraphs(StatMonitor const &, float, float);
    void renderChildrenChannels(StatMonitor const &, unsigned __int32, unsigned __int32, float, float, unsigned __int32 *, StatMonitorChannel const *, FontSystem *);
    rndTable &m_gl; // 0x0
};
static_assert(sizeof(StatMonitorRender) == 4, "Invalid StatMonitorRender size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATMONITORRENDER_H__
#endif
