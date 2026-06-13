#if 0
#ifndef __ENGINETRAILMANAGER_H__
#define __ENGINETRAILMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrailManager
{
public:
    static bool startup();
    static bool shutdown();
    static EngineTrailManager *i();
    EngineTrail *startTrail(unsigned __int32, EngineTrailStatic const *);
    void endTrail(TeamColour const *, EngineTrail *, float);
    void updateTrail(unsigned __int32, float, matrix3 const &, vector3 const &, unsigned __int32, vector3 *);
    void renderTrail(unsigned __int32, Camera *, float, matrix3 const &, vector3 const &, vector3 *);
    void updateAllOrphans(float);
    void renderAllOrphans(Camera const *, float);
    void getPoolStats(unsigned __int32 &, unsigned __int32 &);
    FatVertex *getFats(unsigned __int32);
    EngineTrailManager(EngineTrailManager const &); /* compiler_generated() */
protected:
    EngineTrailManager();
    ~EngineTrailManager();
    class Orphan
    {
    public:
        _inline Orphan(TeamColour const *, EngineTrail *, float);
        TeamColour const *m_pTeamColour; // 0x0
        EngineTrail *m_pTrail; // 0x4
        float m_orphanTime; // 0x8
    };
    static_assert(sizeof(Orphan) == 12, "Invalid Orphan size");
    typedef std::list<EngineTrail *,std::allocator<EngineTrail *> > EngineTrailList;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<EngineTrail *> > > EngineTrailListI;
    typedef std::list<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> > OrphanList;
private:
    EngineTrail *getEngineTrailFromID(unsigned __int32);
    unsigned __int32 getIDFromEngineTrail(EngineTrail *);
    void updateOrphan(EngineTrail *);
    void renderOrphan(EngineTrail *);
    static EngineTrailManager *s_instance;
    std::list<EngineTrail *,std::allocator<EngineTrail *> > m_usedList; // 0x0
    std::list<EngineTrailManager::Orphan,std::allocator<EngineTrailManager::Orphan> > m_orphanedList; // 0x8
    std::vector<FatVertex,std::allocator<FatVertex> > m_fats; // 0x10
public:
    EngineTrailManager &operator=(EngineTrailManager const &); /* compiler_generated() */
};
static_assert(sizeof(EngineTrailManager) == 28, "Invalid EngineTrailManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4476EE(EngineTrailManager::Orphan *const, TeamColour const *, EngineTrail *, float);
_inline EngineTrailManager::Orphan::Orphan(TeamColour const *, EngineTrail *, float) // 0x4476EE
{
    mangled_assert("??0Orphan@EngineTrailManager@@QAE@PBVTeamColour@@PAVEngineTrail@@M@Z");
    todo("implement");
    _sub_4476EE(this, arg, arg, arg);
}

/* ---------- private code */

#endif // __ENGINETRAILMANAGER_H__
#endif
