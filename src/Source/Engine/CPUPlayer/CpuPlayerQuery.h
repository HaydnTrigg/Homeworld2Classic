#if 0
#ifndef __CPUPLAYERQUERY_H__
#define __CPUPLAYERQUERY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuPlayerQuery
{
public:
    enum PlayerWC
    {
        PWC_wildcards = 8, // 0x0008
        PWC_ally = 8, // 0x0008
        PWC_enemy = 16, // 0x0010
        PWC_all = 24, // 0x0018
    };
    enum MinMax
    {
        MM_min = 0,
        MM_max,
        MM_total,
    };
    CpuPlayerQuery(CpuPlayerQuery const &); /* compiler_generated() */
    CpuPlayerQuery(CpuCommon &);
    ~CpuPlayerQuery();
    void Debug();
    __int32 PlayersTotal();
    __int32 PlayersAlive(__int32);
    __int32 PlayersPopulation(__int32, __int32);
    __int32 PlayersMilitaryPopulation(__int32, __int32);
    __int32 PlayersUnitTypeCount(__int32, __int32, __int32);
    __int32 PlayersMilitary_Fighter(__int32, __int32);
    __int32 PlayersMilitary_Corvette(__int32, __int32);
    __int32 PlayersMilitary_Frigate(__int32, __int32);
    __int32 PlayersMilitary_Total(__int32, __int32);
    __int32 PlayersMilitary_Threat(__int32, __int32);
    __int32 PlayersMilitary_AntiFighter(__int32, __int32);
    __int32 PlayersMilitary_AntiCorvette(__int32, __int32);
    __int32 PlayersMilitary_AntiFrigate(__int32, __int32);
    bool Player_IsEnemy(unsigned __int32);
    __int32 Player_Self();
private:
    CpuCommon &m_common; // 0x0
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x4
    void BindToLua();
    unsigned __int32 CalcPlayerList(__int32, Player const **);
    unsigned __int32 CalcPlayerListIndicies(__int32, __int32 *);
};
static_assert(sizeof(CpuPlayerQuery) == 16, "Invalid CpuPlayerQuery size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CPUPLAYERQUERY_H__
#endif
