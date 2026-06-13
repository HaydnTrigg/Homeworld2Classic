#if 0
#ifndef __CPUBUILDMANAGER_H__
#define __CPUBUILDMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuBuildManager
{
public:
    CpuBuildManager(CpuBuildManager const &); /* compiler_generated() */
    CpuBuildManager(CpuCommon &);
    ~CpuBuildManager();
    void DebugStats(float);
    float DebugOverview(float);
    void DebugStats_DemandSubSys(float, float);
    bool IsBuildShipAvailable() const;
    unsigned __int32 NumShipsBuilding() const;
    unsigned __int32 NumShipsBuildingShips() const;
    unsigned __int32 NumShipsBuildingSubSystems() const;
    bool Build(unsigned __int32);
    bool BuildSubSystem(unsigned __int32);
    bool CanBuild(unsigned __int32);
    bool CanBuildEver(unsigned __int32);
    bool CanBuildSubSystem(unsigned __int32);
    bool CanBuildSubSystemEver(unsigned __int32);
    bool CancelBuild(unsigned __int32);
    bool SubSystemActive(unsigned __int32);
    unsigned __int32 BuildShipCount() const;
    unsigned __int32 BuildShipAt(unsigned __int32) const;
    unsigned __int32 BuildShipType(unsigned __int32) const;
    bool BuildShipHasSubSystem(unsigned __int32, unsigned __int32) const;
    bool BuildShipCanBuild(unsigned __int32, unsigned __int32) const;
    bool BuildSubSystemOnShip(unsigned __int32, unsigned __int32);
    unsigned __int32 CarrierCount() const;
    unsigned __int32 CarrierAt(unsigned __int32) const;
    unsigned __int32 CarrierProductionSubSystem(unsigned __int32) const;
    void RetireSubSystem(unsigned __int32, unsigned __int32);
    void RemoveStalledBuildItems();
    _inline void ShipDemandClear();
    _inline void ShipDemandSet(unsigned __int32, float);
    _inline void ShipDemandAdd(unsigned __int32, float);
    void ShipDemandSetByClass(unsigned __int32, float);
    void ShipDemandAddByClass(unsigned __int32, float);
    float ShipDemandMaxByClass(unsigned __int32);
    _inline float ShipDemandGet(unsigned __int32);
    double FindHighDemandShip();
    float HighestPriorityShip();
    _inline void SubSystemDemandClear();
    _inline void SubSystemDemandSet(unsigned __int32, float);
    _inline void SubSystemDemandAdd(unsigned __int32, float);
    _inline float SubSystemDemandGet(unsigned __int32);
    double FindHighDemandSubSystem();
    float HighestPrioritySubSystem();
    __int32 GetUnitCapFamilyId(char const *) const;
    __int32 GetUnitCapForFamily(__int32) const;
    __int32 GetUnitCapMaxForFamily(__int32) const;
private:
    void BindToLua(LuaConfig &lc);
    Squadron *FindBestSquadronForBuild(unsigned __int32);
    Squadron *FindAnySquadronForBuild(unsigned __int32);
    Squadron *FindBestSquadronForBuildingSubSystem(unsigned __int32);
    Squadron *FindAnySquadronForBuildingSubSystem(unsigned __int32);
    unsigned __int32 NumShipsBuildingByType(unsigned __int32) const;
    Player &m_player; // 0x0
    SimProxy &m_proxy; // 0x4
    LuaConfig &m_state; // 0x8
    CpuCommon &m_common; // 0xC
    DemandSys m_shipDemand; // 0x10
    DemandSys m_subSysDemand; // 0x1C
    float m_highestpriorityShip; // 0x28
    float m_highestprioritySubSystem; // 0x2C
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x30
};
static_assert(sizeof(CpuBuildManager) == 60, "Invalid CpuBuildManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_52BD88(CpuBuildManager *const);
_inline void CpuBuildManager::ShipDemandClear() // 0x52BD88
{
    mangled_assert("?ShipDemandClear@CpuBuildManager@@QAEXXZ");
    todo("implement");
    _sub_52BD88(this);
}

_extern void _sub_52BE07(CpuBuildManager *const, unsigned __int32, float);
_inline void CpuBuildManager::ShipDemandSet(unsigned __int32, float) // 0x52BE07
{
    mangled_assert("?ShipDemandSet@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
    _sub_52BE07(this, arg, arg);
}

_extern void _sub_52BD1F(CpuBuildManager *const, unsigned __int32, float);
_inline void CpuBuildManager::ShipDemandAdd(unsigned __int32, float) // 0x52BD1F
{
    mangled_assert("?ShipDemandAdd@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
    _sub_52BD1F(this, arg, arg);
}

_extern float _sub_52BD90(CpuBuildManager *const, unsigned __int32);
_inline float CpuBuildManager::ShipDemandGet(unsigned __int32) // 0x52BD90
{
    mangled_assert("?ShipDemandGet@CpuBuildManager@@QAEMI@Z");
    todo("implement");
    float __result = _sub_52BD90(this, arg);
    return __result;
}

_extern void _sub_52BEA1(CpuBuildManager *const);
_inline void CpuBuildManager::SubSystemDemandClear() // 0x52BEA1
{
    mangled_assert("?SubSystemDemandClear@CpuBuildManager@@QAEXXZ");
    todo("implement");
    _sub_52BEA1(this);
}

_extern void _sub_52BEB1(CpuBuildManager *const, unsigned __int32, float);
_inline void CpuBuildManager::SubSystemDemandSet(unsigned __int32, float) // 0x52BEB1
{
    mangled_assert("?SubSystemDemandSet@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
    _sub_52BEB1(this, arg, arg);
}

_extern void _sub_52BE86(CpuBuildManager *const, unsigned __int32, float);
_inline void CpuBuildManager::SubSystemDemandAdd(unsigned __int32, float) // 0x52BE86
{
    mangled_assert("?SubSystemDemandAdd@CpuBuildManager@@QAEXIM@Z");
    todo("implement");
    _sub_52BE86(this, arg, arg);
}

_extern float _sub_52BEA9(CpuBuildManager *const, unsigned __int32);
_inline float CpuBuildManager::SubSystemDemandGet(unsigned __int32) // 0x52BEA9
{
    mangled_assert("?SubSystemDemandGet@CpuBuildManager@@QAEMI@Z");
    todo("implement");
    float __result = _sub_52BEA9(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __CPUBUILDMANAGER_H__
#endif
