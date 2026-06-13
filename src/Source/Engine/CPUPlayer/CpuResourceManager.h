#if 0
#ifndef __CPURESOURCEMANAGER_H__
#define __CPURESOURCEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuResourceManager :
    public Saveable
{
public:
    CpuResourceManager(CpuResourceManager const &); /* compiler_generated() */
    CpuResourceManager(CpuCommon &);
    virtual ~CpuResourceManager() override;
    void PostInit();
    void Update();
    void HouseKeeping();
    void newSquadron(Squadron *);
    void removeSquadron(Squadron *);
    void removeBlobsInSphere(vector3 const &, float const);
    void DebugStats(float);
    float DebugOverview(float);
    void Debug();
    unsigned __int32 RUsAtBlob(unsigned __int32) const;
    unsigned __int32 CollectorsAtBlob(unsigned __int32) const;
    unsigned __int32 CollectorCapacityOfRefineriesAtBlob(unsigned __int32) const;
    bool IsSalvage(unsigned __int32) const;
    float RefinerySqDistToBlob(Squadron const &, unsigned __int32);
    unsigned __int32 ResourceLatchPointAtBlob(unsigned __int32);
    unsigned __int32 GetNumberOfIdleRefineries() const;
    void CreateActiveBlobList();
    unsigned __int32 GetNumCollecting() const;
    unsigned __int32 GetActiveCollectorSlots() const;
    unsigned __int32 GetActiveCollectorBlobs() const;
    unsigned __int32 GetResourceBlobCount() const;
    ResourceBlob *GetResourceBlobAt(unsigned __int32);
    unsigned __int32 GetActiveBlobCount() const;
    unsigned __int32 GetActiveBlobAt(unsigned __int32);
    float GetResourcersPerPath() const;
    void SetResourceDockFamily(char const *);
    unsigned __int32 GetResourceDockFamily() const;
    unsigned __int32 FindBestBlobToResourceFrom(vector3 const &);
    unsigned __int32 FindBestBlobForRefinery(unsigned __int32, Squadron const &);
    Squadron *FindBestPlaceToBuildCollector(unsigned __int32);
    Squadron *FindBestPlaceToBuildRefinery(unsigned __int32);
private:
    void BindToLua(LuaConfig &);
    CpuCommon &m_common; // 0x4
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x8
    SquadronList m_resourcerSquadrons; // 0x14
    std::vector<RefinerySM *,std::allocator<RefinerySM *> > m_refinerySM; // 0x34
    std::vector<CollectorSM *,std::allocator<CollectorSM *> > m_collectorSM; // 0x40
    std::vector<ResourceBlob *,std::allocator<ResourceBlob *> > m_resourceBlobList; // 0x4C
    std::vector<unsigned int,std::allocator<unsigned int> > m_activeBlobList; // 0x58
    unsigned __int32 m_lastKnownAvailableSlots; // 0x64
    unsigned __int32 m_lastKnownActiveBlobCount; // 0x68
    bool m_canCollectSalvage; // 0x6C
    float cpNumCollectorsPerLatchPoint; // 0x70
    float cpResourcersPerPath; // 0x74
    float cpMinThreatAddedDistance; // 0x78
    float cpMaxThreatAddedDistance; // 0x7C
    unsigned __int32 m_resourceFamilyIndex; // 0x80
    void UpdateBlobs();
    void UpdateRefineries();
    void CalculateBlobFreeSpaces();
    void CalculateBlobThreatLevels();
    float GetModifierForBlob(CpuBlob const *, ResourceBlob *);
    void UpdateBlobDefenses();
    void UpdateBlobAttacks();
    Resource *ClosestResourceBeingCollected(Ship *, float &);
    void CreateListOfResourceBlobs();
    bool FirstResBlobBetterThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &);
    bool FirstResBlobSaferThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &);
    bool FirstResBlobCloserThanSecond(ResourceBlob *, ResourceBlob *, vector3 const &);
    unsigned __int32 FindBlobFromResource(Resource *);
    unsigned __int32 FindBlobFromResourceID(unsigned __int32);
    ResourceBlob *FindNextOpenResourceBlob();
    void SortRefineriesBySpeed();
    void RemoveDeadRefineries();
    void RemoveDeadCollectors();
    void RemoveAllDistantRefineries();
    float Debug_ActiveBlobs(float);
    bool insertRefinery(RefinerySM *);
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
};
static_assert(sizeof(CpuResourceManager) == 132, "Invalid CpuResourceManager size");

class CpuController
{
public:
    CpuController(CpuController const &); /* compiler_generated() */
    CpuController(Squadron &, CpuCommon *);
    CpuController(CpuCommon *, SaveGameData *);
    virtual bool Update() = 0;
    Squadron *GetSquadronPtr() const;
    _inline unsigned __int32 GetSquadronId() const;
    virtual void save(SaveGameData *, SaveType);
protected:
    CpuCommon *m_cpuCommon; // 0x4
    unsigned __int32 m_squadronId; // 0x8
public:
    CpuController &operator=(CpuController const &); /* compiler_generated() */
};
static_assert(sizeof(CpuController) == 12, "Invalid CpuController size");

class CollectorSM :
    public CpuController
{
public:
    enum CSM_State
    {
        CSM_Idle = 0,
        CSM_MoveToBlob,
        CSM_Resourcing,
        CSM_Retreating,
        CSM_Count,
    };
    CollectorSM(CollectorSM const &); /* compiler_generated() */
    CollectorSM(Squadron &, CpuCommon *);
    CollectorSM(CpuCommon *, SaveGameData *);
    virtual bool Update() override;
    virtual void save(SaveGameData *, SaveType) override;
    unsigned __int32 getBlobIndex() const;
    void SetIdle();
private:
    CollectorSM::CSM_State m_state; // 0xC
    unsigned __int32 m_targetBlobIndex; // 0x10
    vector3 m_targetPos; // 0x14
public:
    CollectorSM &operator=(CollectorSM const &); /* compiler_generated() */
};
static_assert(sizeof(CollectorSM) == 32, "Invalid CollectorSM size");

class RefinerySM :
    public CpuController
{
public:
    enum RSM_State
    {
        RSM_Idle = 0,
        RSM_Move,
        RSM_AtBlob,
        RSM_Fleeing,
        RSM_Invalid,
        RSM_Count,
    };
    RefinerySM(RefinerySM const &); /* compiler_generated() */
    RefinerySM(Squadron &, CpuCommon *, bool);
    RefinerySM(CpuCommon *, SaveGameData *);
    virtual bool Update() override;
    virtual void save(SaveGameData *, SaveType) override;
    _inline unsigned __int32 GetTargetBlobIndex() const;
    _inline bool IsActive() const;
    bool IsIdle() const;
    bool IsFarFromBlob() const;
    vector3 const &getTargetPos() const;
    _inline unsigned __int32 NumberOfCollectorsWeCanHandle() const;
    void FindBestDropOffPosition(vector3 const &, ResourceBlob *, vector3 &);
    void SetIdle();
private:
    void SendRefineryToBlob(ResourceBlob *);
    bool InDanger();
    bool SquadIdle();
    bool CanHyperspace(vector3 const &);
    RefinerySM::RSM_State m_state; // 0xC
    unsigned __int32 m_targetBlobIndex; // 0x10
    vector3 m_targetPos; // 0x14
    unsigned __int32 m_numberOfCollectorsWeCanHandle; // 0x20
    bool m_isActive; // 0x24
public:
    RefinerySM &operator=(RefinerySM const &); /* compiler_generated() */
};
static_assert(sizeof(RefinerySM) == 40, "Invalid RefinerySM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_53EDD1(CpuResourceManager *const);
_inline bool CpuResourceManager::isDeterministic() // 0x53EDD1
{
    mangled_assert("?isDeterministic@CpuResourceManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_53EDD1(this);
    return __result;
}

_extern char const *_sub_53F2D2(CpuResourceManager *const);
_inline char const *CpuResourceManager::saveToken() // 0x53F2D2
{
    mangled_assert("?saveToken@CpuResourceManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_53F2D2(this);
    return __result;
}

_extern unsigned __int32 _sub_53D9E8(CpuController const *const);
_inline unsigned __int32 CpuController::GetSquadronId() const // 0x53D9E8
{
    mangled_assert("?GetSquadronId@CpuController@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53D9E8(this);
    return __result;
}

_extern unsigned __int32 _sub_53DA30(RefinerySM const *const);
_inline unsigned __int32 RefinerySM::GetTargetBlobIndex() const // 0x53DA30
{
    mangled_assert("?GetTargetBlobIndex@RefinerySM@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53DA30(this);
    return __result;
}

_extern bool _sub_53DB1D(RefinerySM const *const);
_inline bool RefinerySM::IsActive() const // 0x53DB1D
{
    mangled_assert("?IsActive@RefinerySM@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_53DB1D(this);
    return __result;
}

_extern unsigned __int32 _sub_53DBAA(RefinerySM const *const);
_inline unsigned __int32 RefinerySM::NumberOfCollectorsWeCanHandle() const // 0x53DBAA
{
    mangled_assert("?NumberOfCollectorsWeCanHandle@RefinerySM@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_53DBAA(this);
    return __result;
}

/* ---------- private code */

#endif // __CPURESOURCEMANAGER_H__
#endif
