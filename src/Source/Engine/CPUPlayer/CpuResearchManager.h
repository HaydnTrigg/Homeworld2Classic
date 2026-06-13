#if 0
#ifndef __CPURESEARCHMANAGER_H__
#define __CPURESEARCHMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuResearchManager
{
public:
    CpuResearchManager(CpuResearchManager const &); /* compiler_generated() */
    CpuResearchManager(CpuCommon &);
    ~CpuResearchManager();
    void DebugStats(float);
    float DebugStats_Done(float, float);
    void DebugStats_Demand(float, float);
    float DebugOverview(float);
    bool Research(unsigned __int32);
    bool CancelResearch(unsigned __int32);
    unsigned __int32 NumResearchSubSystems();
    unsigned __int32 GetResearchCount() const;
    unsigned __int32 GetResearchId(char const *);
    char const *GetResearchName(unsigned __int32);
    void ResearchDemandClear();
    void ResearchDemandSet(unsigned __int32, float);
    void ResearchDemandAdd(unsigned __int32, float);
    float ResearchDemandGet(unsigned __int32);
    double FindHighDemandResearch();
private:
    void BindToLua(LuaConfig &lc);
    Player &m_player; // 0x0
    SimProxy &m_proxy; // 0x4
    LuaConfig &m_state; // 0x8
    CpuCommon &m_common; // 0xC
    DemandSys m_researchDemand; // 0x10
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x1C
};
static_assert(sizeof(CpuResearchManager) == 40, "Invalid CpuResearchManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CPURESEARCHMANAGER_H__
#endif
