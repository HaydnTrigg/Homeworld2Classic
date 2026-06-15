#if 0
#ifndef __BUILDQUEUE_H__
#define __BUILDQUEUE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildQueue :
    public SaveObject
{
public:
    typedef std::list<BuildJob *,std::allocator<BuildJob *> > BuildJobList;
    typedef std::list<UIBuildJob *,std::allocator<UIBuildJob *> > UIBuildJobList;
    BuildQueue(BuildQueue const &); /* compiler_generated() */
    BuildQueue(SaveGameData *);
    BuildQueue(Ship *);
    virtual ~BuildQueue() override;
    void update(float);
    _inline std::list<BuildJob *,std::allocator<BuildJob *> > const &getBuildQueue() const;
    _inline std::list<UIBuildJob *,std::allocator<UIBuildJob *> > const &getUIBuildQueue() const;
    BuildJob *getBuildJob(unsigned __int32);
    bool addJobToBuildQueue(unsigned __int32, bool, bool, UIBuildJob **, bool);
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > > cancelBuildJob(std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > >);
public:
    bool cancelBuildJob(unsigned __int32, bool);
    bool moveJobToTop(unsigned __int32, bool);
    void changePlayerOwner(Player *);
    _inline void toggleQueuePause(BuildType);
    _inline void toggleUIQueuePause(BuildType);
    bool isQueuePaused(BuildType) const;
    _inline bool isUIQueuePaused(BuildType) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    bool isBuilding(BuildType) const;
    _inline unsigned __int32 getNumberOfBuildableItems() const;
    BuildJobType *getBuildableItemByIndex(unsigned __int32) const;
    BuildJobType *getBuildableItemByBuildJobId(unsigned __int32) const;
    BuildJobType *getBuildableItemByName(unsigned __int32) const;
    BuildJobType *getBuildableItemByGenericSubSystemTypeId(unsigned __int32) const;
    bool canBuild(unsigned __int32);
    bool canBuildSubSystem(unsigned __int32);
    void restrictBuildableItem(unsigned __int32);
    void unRestrictBuildableItem(unsigned __int32);
    bool UIJobTypesChangedSinceLastView();
    bool CanBuildDisplayFamily(unsigned __int32, bool, bool);
    void ForceUpdateOfWhatJobsCanBeDone();
private:
    void UpdateWhatJobsCanBeDone();
    void addNewItemTypeToBuildQueue(BuildData *);
    void removeJobType(BuildJobType *);
    void BuildJobTypesChanged();
    bool CanBuildItemFamily(BuildData *);
    UIBuildJob *createUIBuildJobFor(unsigned __int32);
    BuildJob *initialiseUIBuildJob(UIBuildJob *);
    void actuallyAddNewJobToQueue(BuildJob *);
    void UpdateQueueForUnitCaps();
    void UpdateUnitCapsForUI();
    typedef std::list<unsigned int,std::allocator<unsigned int> > RestrictedContainer;
    std::list<unsigned int,std::allocator<unsigned int> > m_restrictedList; // 0xC
    std::vector<BuildJobType *,std::allocator<BuildJobType *> > m_jobTypes; // 0x14
    std::list<BuildJob *,std::allocator<BuildJob *> > m_jobsMasterList; // 0x20
    Ship *m_shipOwner; // 0x28
    bool m_bChangedSinceLastUIView; // 0x2C
    bool m_QueuePaused[2]; // 0x2D
    unsigned __int32 m_totalJobs; // 0x30
    bool m_couldBuildSomethingInLastFrame[2]; // 0x34
    std::list<UIBuildJob *,std::allocator<UIBuildJob *> > m_visibleList; // 0x38
    std::queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > > m_proxyIDs; // 0x40
    bool m_UIQueuePaused[2]; // 0x54
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveRestrictedList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadRestrictedList(void *objectPtr, SaveGameData *saveGameData);
    BuildQueue &operator=(BuildQueue const &); /* compiler_generated() */
};
static_assert(sizeof(BuildQueue) == 88, "Invalid BuildQueue size");

class BuildQueue :
    public SaveObject
{
public:
    typedef std::list<BuildJob *,std::allocator<BuildJob *> > BuildJobList;
    typedef std::list<UIBuildJob *,std::allocator<UIBuildJob *> > UIBuildJobList;
    BuildQueue(BuildQueue const &); /* compiler_generated() */
    BuildQueue(SaveGameData *);
    BuildQueue(Ship *);
    virtual ~BuildQueue() override;
    void update(float);
    _inline std::list<BuildJob *,std::allocator<BuildJob *> > const &getBuildQueue() const;
    _inline std::list<UIBuildJob *,std::allocator<UIBuildJob *> > const &getUIBuildQueue() const;
    BuildJob *getBuildJob(unsigned __int32);
    bool addJobToBuildQueue(unsigned __int32, bool, bool, UIBuildJob **, bool);
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > > cancelBuildJob(std::_List_iterator<std::_List_val<std::_List_simple_types<BuildJob *> > >);
public:
    bool cancelBuildJob(unsigned __int32, bool);
    bool moveJobToTop(unsigned __int32, bool);
    void changePlayerOwner(Player *);
    _inline void toggleQueuePause(BuildType);
    _inline void toggleUIQueuePause(BuildType);
    bool isQueuePaused(BuildType) const;
    _inline bool isUIQueuePaused(BuildType) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    bool isBuilding(BuildType) const;
    _inline unsigned __int32 getNumberOfBuildableItems() const;
    BuildJobType *getBuildableItemByIndex(unsigned __int32) const;
    BuildJobType *getBuildableItemByBuildJobId(unsigned __int32) const;
    BuildJobType *getBuildableItemByName(unsigned __int32) const;
    BuildJobType *getBuildableItemByGenericSubSystemTypeId(unsigned __int32) const;
    bool canBuild(unsigned __int32);
    bool canBuildSubSystem(unsigned __int32);
    void restrictBuildableItem(unsigned __int32);
    void unRestrictBuildableItem(unsigned __int32);
    bool UIJobTypesChangedSinceLastView();
    bool CanBuildDisplayFamily(unsigned __int32, bool, bool);
    void ForceUpdateOfWhatJobsCanBeDone();
private:
    void UpdateWhatJobsCanBeDone();
    void addNewItemTypeToBuildQueue(BuildData *);
    void removeJobType(BuildJobType *);
    void BuildJobTypesChanged();
    bool CanBuildItemFamily(BuildData *);
    UIBuildJob *createUIBuildJobFor(unsigned __int32);
    BuildJob *initialiseUIBuildJob(UIBuildJob *);
    void actuallyAddNewJobToQueue(BuildJob *);
    void UpdateQueueForUnitCaps();
    void UpdateUnitCapsForUI();
    typedef std::list<unsigned int,std::allocator<unsigned int> > RestrictedContainer;
    std::list<unsigned int,std::allocator<unsigned int> > m_restrictedList; // 0xC
    std::vector<BuildJobType *,std::allocator<BuildJobType *> > m_jobTypes; // 0x14
    std::list<BuildJob *,std::allocator<BuildJob *> > m_jobsMasterList; // 0x20
    Ship *m_shipOwner; // 0x28
    bool m_bChangedSinceLastUIView; // 0x2C
    bool m_QueuePaused[2]; // 0x2D
    unsigned __int32 m_totalJobs; // 0x30
    bool m_couldBuildSomethingInLastFrame[2]; // 0x34
    std::list<UIBuildJob *,std::allocator<UIBuildJob *> > m_visibleList; // 0x38
    std::queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > > m_proxyIDs; // 0x40
    bool m_UIQueuePaused[2]; // 0x54
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveRestrictedList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadRestrictedList(void *objectPtr, SaveGameData *saveGameData);
    BuildQueue &operator=(BuildQueue const &); /* compiler_generated() */
};
static_assert(sizeof(BuildQueue) == 88, "Invalid BuildQueue size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::list<BuildJob *,std::allocator<BuildJob *> > const &BuildQueue::getBuildQueue() const // 0x52C137
{
    mangled_assert("?getBuildQueue@BuildQueue@@QBEABV?$list@PAVBuildJob@@V?$allocator@PAVBuildJob@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::list<UIBuildJob *,std::allocator<UIBuildJob *> > const &BuildQueue::getUIBuildQueue() const // 0x570A52
{
    mangled_assert("?getUIBuildQueue@BuildQueue@@QBEABV?$list@PAVUIBuildJob@@V?$allocator@PAVUIBuildJob@@@std@@@std@@XZ");
    todo("implement");
}

_inline void BuildQueue::toggleQueuePause(BuildType) // 0x69789C
{
    mangled_assert("?toggleQueuePause@BuildQueue@@QAEXW4BuildType@@@Z");
    todo("implement");
}

_inline void BuildQueue::toggleUIQueuePause(BuildType) // 0x6978AF
{
    mangled_assert("?toggleUIQueuePause@BuildQueue@@QAEXW4BuildType@@@Z");
    todo("implement");
}

_inline bool BuildQueue::isUIQueuePaused(BuildType) const // 0x570A74
{
    mangled_assert("?isUIQueuePaused@BuildQueue@@QBE_NW4BuildType@@@Z");
    todo("implement");
}

_inline unsigned __int32 BuildQueue::getNumberOfBuildableItems() const // 0x5D00DD
{
    mangled_assert("?getNumberOfBuildableItems@BuildQueue@@QBEIXZ");
    todo("implement");
}

_inline bool BuildQueue::isDeterministic() // 0x5D0223
{
    mangled_assert("?isDeterministic@BuildQueue@@UAE_NXZ");
    todo("implement");
}

_inline char const *BuildQueue::saveToken() // 0x5D075F
{
    mangled_assert("?saveToken@BuildQueue@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BUILDQUEUE_H__
#endif
