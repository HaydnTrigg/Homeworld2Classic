#if 0
#ifndef __CPURESOURCEBLOBS_H__
#define __CPURESOURCEBLOBS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResourceBlob
{
public:
    ResourceBlob(ResourceBlob const &); /* compiler_generated() */
    ResourceBlob(Selection const &);
    ResourceBlob(Sob *);
    ResourceBlob();
    ResourceBlob(SaveGameData *);
    void save(SaveGameData *, SaveType);
    _inline vector3 const &getCentreOfBlob() const;
    bool getCentreAndRadiusOfCollectors(vector3 &, float &) const;
    Resource *getClosestBusyResourceTo(vector3 const) const;
    Ship *getLargestCollector() const;
    void RemoveRefinery(Squadron const *);
    void RemoveGatherer(Squadron const *);
    _inline bool IsSalvage() const;
    _inline Selection const &getResources() const;
    bool blobInUseByAlly(unsigned __int32) const;
    std::vector<Squadron *,std::allocator<Squadron *> > m_gatherers; // 0x0
    std::vector<Squadron *,std::allocator<Squadron *> > m_refineries; // 0xC
    CounterValue m_totalEnemy; // 0x18
    CounterValue m_totalFriendly; // 0x34
    __int32 m_freeSpaces; // 0x50
    unsigned __int32 m_defendID; // 0x54
    unsigned __int32 m_attackID; // 0x58
private:
    Selection m_group; // 0x5C
    vector3 m_centre; // 0x90
    bool m_salvage; // 0x9C
public:
    unsigned __int32 ResourceLatchPoints();
    unsigned __int32 TotalCollectors();
    unsigned __int32 TotalFriendlyCollectors(Player *);
    void GetEnemyUsingBlob(Player *, std::vector<Squadron *,std::allocator<Squadron *> > &);
private:
    void DefaultSettings();
public:
    _inline ~ResourceBlob(); /* compiler_generated() */
    ResourceBlob &operator=(ResourceBlob const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceBlob) == 160, "Invalid ResourceBlob size");

class ResourceBlobManager
{
public:
    ResourceBlobManager(ResourceBlobManager const &); /* compiler_generated() */
    ResourceBlobManager(CpuCommon &);
    ~ResourceBlobManager();
    void Debug();
    Selection const *GetResourceBlobList(Sob const *);
    unsigned __int32 GetResourceBlobCount();
    ResourceBlob *GetResourceBlobAt(unsigned __int32);
private:
    std::vector<ResourceBlob *,std::allocator<ResourceBlob *> > m_resourceGatherSites; // 0x0
    CpuCommon &m_common; // 0xC
};
static_assert(sizeof(ResourceBlobManager) == 16, "Invalid ResourceBlobManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &ResourceBlob::getCentreOfBlob() const // 0x53ECFE
{
    mangled_assert("?getCentreOfBlob@ResourceBlob@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline bool ResourceBlob::IsSalvage() const // 0x53DBA3
{
    mangled_assert("?IsSalvage@ResourceBlob@@QBE_NXZ");
    todo("implement");
}

_inline Selection const &ResourceBlob::getResources() const // 0x539FEB
{
    mangled_assert("?getResources@ResourceBlob@@QBEABVSelection@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPURESOURCEBLOBS_H__
#endif
