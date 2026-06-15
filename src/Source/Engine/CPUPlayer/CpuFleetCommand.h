#if 0
#ifndef __CPUFLEETCOMMAND_H__
#define __CPUFLEETCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuFleetCommand :
    public Saveable
{
public:
    CpuFleetCommand(CpuFleetCommand const &); /* compiler_generated() */
    CpuFleetCommand(CpuCommon &);
    virtual ~CpuFleetCommand() override;
    void Initialize();
    void Save(SaveGameData *);
    void Restore(SaveGameData *);
    void CleanUp();
    void CleanupAndDataCollectionPhase();
    void Update();
    void UpdatePassiveAbilities();
    void Debug();
    void DebugStats(float);
    void Debug_Targets();
    void AddSquadron(Squadron &);
    void RemoveSquadron(Squadron const &);
    void AddEnemySquadron(Squadron &);
    void HyperspaceSquadron(Squadron &, bool);
    unsigned __int32 AddDefendTarget(Squadron *, __int32, TargetType);
    unsigned __int32 AddDefendTarget(vector3 const &, __int32, TargetType);
    void RemoveDefendTarget(unsigned __int32);
    void ChangeDefendTargetPriority(TargetType, __int32);
    unsigned __int32 AddAttackTarget(Squadron *, __int32, TargetType);
    void ChangeAttackTargetPriority(TargetType, __int32);
    void RemoveAttackTarget(Squadron const &);
    void RemoveAttackTarget(unsigned __int32);
    _inline bool HaveBeenAttacked() const;
    _inline float LastTimeAttack() const;
    _inline bool UnderAttack() const;
    _inline __int32 UnderAttackValue() const;
    _inline __int32 UnderAttackThreat() const;
    DefendTarget *RetrieveDefendTarget(unsigned __int32);
    AttackTarget *RetrieveAttackTarget(unsigned __int32);
    void ClearAttackTarget();
    TargetList const &GetAttackTargetList() const;
    TargetList &GetAttackTargetList();
    TargetList const &GetDefendTargetList() const;
    TargetList &GetDefendTargetList();
    DefendTarget *FindClosestThreatenedDefendTarget(vector3 const &, float);
    DefendTarget *FindBestDefendTargetForAttackers(CpuSquadGroup &);
    bool GetBestDefendPosition(vector3 const &, vector3 &, float);
    bool GetSafeRetreatPos(vector3 const &, vector3 &);
    DefendTarget *GetMarineDefendTarget() const;
    void SetMarineDefendTarget(unsigned __int32);
    void SetDefendTargetRadius(unsigned __int32, float);
    unsigned __int32 NumAssignedToDefendTarget(unsigned __int32);
    void ValueAssignedToDefendTarget(unsigned __int32, CounterValue &);
    AttackTarget *GetCurrentAttackTarget(CpuSquadGroup &);
    void FriendlyValueToAttackTarget(unsigned __int32, CounterValue &);
    void FriendlyValueToDefendTarget(unsigned __int32, CounterValue &, CpuSquadGroup &);
    void FriendlyValueReadyToEngageAttackTarget(unsigned __int32, CounterValue &);
    CpuSquadGroup *ClosestGroupToTarget(AttackTarget *);
    float MinETAToTarget(unsigned __int32, CpuSquadGroup &);
    __int32 AttackTargetScore(AttackTarget *, vector3 const &);
    CounterValue const &GetPlayerCounterValue(unsigned __int32) const;
    void CalcThreatToTarget(vector3 const &, vector3 const &, CounterValue &);
    __int32 GetChosenEnemy() const;
    AttackTarget *GetNextScoutTarget(CpuSquadGroup &);
    bool FindGoodIdleScoutPosition(vector3 const &, vector3 &);
    bool IsAttackTargetHaveScout(unsigned __int32);
    Squadron *FindHyperspaceGateForPath(vector3 const &, vector3 const &, float);
    _inline unsigned __int32 getForceAttackGroupSize() const;
    _inline float getInitThreatModifier() const;
private:
    void BindToLua(LuaConfig &);
    void AttackNow();
    Player &m_player; // 0x4
    SimProxy &m_proxy; // 0x8
    LuaConfig &m_state; // 0xC
    CpuCommon &m_common; // 0x10
    CpuClassifier &m_classifier; // 0x14
    std::vector<CpuSquadGroup *,std::allocator<CpuSquadGroup *> > m_squadGroups; // 0x18
    bool m_attackNowFlag; // 0x24
    bool m_haveBeenAttacked; // 0x25
    bool m_underAttack; // 0x26
    float m_underAttackTime; // 0x28
    CounterValue m_underAttackValue; // 0x2C
    __int32 m_underAttackTotalValue; // 0x48
    __int32 m_underAttackThreat; // 0x4C
    Player *m_underAttackByPlayer; // 0x50
    float cp_groupMergeDistSq; // 0x54
    float cp_dynamicMergeDistSq; // 0x58
    __int32 cp_motherShipDefPriority; // 0x5C
    __int32 cp_refineryDefPriority; // 0x60
    __int32 cp_builderDefPriority; // 0x64
    unsigned __int32 cp_minSquadGroupSize; // 0x68
    unsigned __int32 cp_minSquadGroupValue; // 0x6C
    float cp_attackPercent; // 0x70
    unsigned __int32 cp_forceAttackGroupSize; // 0x74
    float cp_initThreatModifier; // 0x78
    unsigned __int32 cp_maxGroupSize; // 0x7C
    unsigned __int32 cp_maxGroupValue; // 0x80
    __int32 cp_overrideChooseEnemy; // 0x84
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x88
    boost::scoped_ptr<CpuFleetCommand::Data> m_pimpl; // 0x94
    class Data;
    void RemoveDeadSquadGroups();
    void RemoveDeadTargets();
    CpuSquadGroup *FindBestGroup(CpuSquadGroup &, float, unsigned __int32);
    void RecalcGoalTarget(CpuSquadGroup const &);
    void IfAttackTargetThenAdd(Squadron &);
    void IfDefendTargetThenAdd(Squadron &);
    void AddSquadronToCpuGroupList(Squadron &, bool);
    void CreateCpuSquadGroup(Squadron &, unsigned __int32);
    void AnalyzeDefendTargets();
    void AnalyzeAttackTargets();
    void UpdateHyperspaceGateInfo();
    void MergeNearbySquadGroups();
    void CalcAllPlayersFleetValues();
    void CalcCounterValuesForEachSquadGroup();
    void ProcessAttackGroups();
    void ConvertSquadGroupsToAttackGroups(__int32);
    bool MergeSingleSquadGroup(CpuSquadGroup *);
    void EnemySquadronCaptured(Squadron const *);
    bool ShouldActivateSquadGroup(CpuSquadGroup *);
    void BreakGroupByDistance(CpuSquadGroup &);
    void Debug_RenderSquadGroups();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveStateMachines(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadStateMachines(void *objectPtr, SaveGameData *saveGameData);
    CpuFleetCommand &operator=(CpuFleetCommand const &); /* compiler_generated() */
};
static_assert(sizeof(CpuFleetCommand) == 152, "Invalid CpuFleetCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool CpuFleetCommand::HaveBeenAttacked() const // 0x531CD7
{
    mangled_assert("?HaveBeenAttacked@CpuFleetCommand@@QBE_NXZ");
    todo("implement");
}

_inline float CpuFleetCommand::LastTimeAttack() const // 0x531E31
{
    mangled_assert("?LastTimeAttack@CpuFleetCommand@@QBEMXZ");
    todo("implement");
}

_inline bool CpuFleetCommand::UnderAttack() const // 0x5258FE
{
    mangled_assert("?UnderAttack@CpuFleetCommand@@QBE_NXZ");
    todo("implement");
}

_inline __int32 CpuFleetCommand::UnderAttackValue() const // 0x5327E5
{
    mangled_assert("?UnderAttackValue@CpuFleetCommand@@QBEHXZ");
    todo("implement");
}

_inline __int32 CpuFleetCommand::UnderAttackThreat() const // 0x5327E1
{
    mangled_assert("?UnderAttackThreat@CpuFleetCommand@@QBEHXZ");
    todo("implement");
}

_inline unsigned __int32 CpuFleetCommand::getForceAttackGroupSize() const // 0x525A50
{
    mangled_assert("?getForceAttackGroupSize@CpuFleetCommand@@QBEIXZ");
    todo("implement");
}

_inline float CpuFleetCommand::getInitThreatModifier() const // 0x525A5B
{
    mangled_assert("?getInitThreatModifier@CpuFleetCommand@@QBEMXZ");
    todo("implement");
}

_inline bool CpuFleetCommand::isDeterministic() // 0x533448
{
    mangled_assert("?isDeterministic@CpuFleetCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *CpuFleetCommand::saveToken() // 0x5336E3
{
    mangled_assert("?saveToken@CpuFleetCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUFLEETCOMMAND_H__
#endif
