#if 0
#ifndef __DOCKQUEUE_H__
#define __DOCKQUEUE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DockQueue :
    public SquadronQueue
{
public:
    DockQueue(DockQueue const &); /* compiler_generated() */
    DockQueue();
    virtual void addToQueue(Squadron *) override;
    virtual void removeFromQueue(Squadron *) override;
    bool isQueueEmpty();
    unsigned __int32 squadronsInQueue();
    void getQueuePosition(Squadron *, vector3 &);
    static void addQueueFamily(char const *family, float deltaHeight, float spacing);
    static void clearQueueFamilies();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
protected:
    void recalcQueuePositions();
    std::map<Squadron *,vector3,std::less<Squadron *>,std::allocator<std::pair<Squadron * const,vector3> > > m_queuePositions; // 0xC
    struct QueueFamilies
    {
        __int32 m_buildID; // 0x0
        float m_deltaHeight; // 0x4
        float m_spacing; // 0x8
    };
    static_assert(sizeof(QueueFamilies) == 12, "Invalid QueueFamilies size");
    static std::vector<DockQueue::QueueFamilies,std::allocator<DockQueue::QueueFamilies> > m_queueFamilies;
public:
    virtual _inline ~DockQueue() override; /* compiler_generated() */
    DockQueue &operator=(DockQueue const &); /* compiler_generated() */
};
static_assert(sizeof(DockQueue) == 20, "Invalid DockQueue size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool DockQueue::isDeterministic() // 0x6A597B
{
    mangled_assert("?isDeterministic@DockQueue@@UAE_NXZ");
    todo("implement");
}

_inline char const *DockQueue::saveToken() // 0x6A5EBB
{
    mangled_assert("?saveToken@DockQueue@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DOCKQUEUE_H__
#endif
