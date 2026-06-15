#if 0
#ifndef __RESOURCECOMMAND_H__
#define __RESOURCECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResourceCommand :
    public Command
{
public:
    enum ResourcingState
    {
        INITIAL = 0,
        FLYING_TO_RESOURCE,
        FLYING_TO_LATCH_POINT,
        FLYING_TO_RESOURCE_POINT,
        WAITING_FOR_FREE_SLOT,
        RESOURCING,
        FLYING_UP_FROM_RESOURCE_POINT,
        DONE_RESOURCING,
        DOCKING,
        NUMBER_OF_STATES,
    };
    ResourceCommand(ResourceCommand const &); /* compiler_generated() */
    ResourceCommand(SaveGameData *);
    ResourceCommand(Squadron *, Selection const &, Command::CommandOrigin);
    virtual ~ResourceCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    _inline Resource *getTarget() const;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
private:
    static Resource *getBestTarget(bool useMaxDistance, Ship *ship, Ship *closestDockShip);
public:
    static Resource *getBestTarget(Squadron const *forSquad);
    _inline bool isResourcingSalvage() const;
    _inline bool hasScannedForResources() const;
    static void getExtraResources(Selection &currentResources, Ship *resourcer);
    void resourcingDone();
    bool dock();
    virtual char const *getName() const override;
private:
    static void findInterestingResources(Selection &resources, SobType type, bool useMaxDistance, Ship *ship, vector3 const &centrePosForScan, float maxDistance);
    void getAndSetClosestResource(bool);
    Resource *getClosestResource(bool);
    void setState(ResourceCommand::ResourcingState const);
    _inline ResourceCommand::ResourcingState const getState() const;
    void resetTarget();
    bool earlyDock();
    void moveToResource(Resource *);
    void moveToResourcePoint(Resource *);
    void moveToLatchPoint(Resource *);
    bool latchWithResource(Resource *);
    void moveUpFromResourcePoint(Resource *);
    void parade();
    void updateEngineTrail(ResourceCommand::ResourcingState const);
    SobID m_resourceTarget; // 0x14
    Selection m_resourceTargetList; // 0x20
    ResourceCommand::ResourcingState m_resourcingState; // 0x54
    bool m_resourcingSalvage; // 0x58
    bool m_firstTime; // 0x59
    float m_waitTime; // 0x5C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResourceCommand &operator=(ResourceCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceCommand) == 96, "Invalid ResourceCommand size");

class ResourceCommand :
    public Command
{
public:
    enum ResourcingState
    {
        INITIAL = 0,
        FLYING_TO_RESOURCE,
        FLYING_TO_LATCH_POINT,
        FLYING_TO_RESOURCE_POINT,
        WAITING_FOR_FREE_SLOT,
        RESOURCING,
        FLYING_UP_FROM_RESOURCE_POINT,
        DONE_RESOURCING,
        DOCKING,
        NUMBER_OF_STATES,
    };
    ResourceCommand(ResourceCommand const &); /* compiler_generated() */
    ResourceCommand(SaveGameData *);
    ResourceCommand(Squadron *, Selection const &, Command::CommandOrigin);
    virtual ~ResourceCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    _inline Resource *getTarget() const;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
private:
    static Resource *getBestTarget(bool useMaxDistance, Ship *ship, Ship *closestDockShip);
public:
    static Resource *getBestTarget(Squadron const *forSquad);
    _inline bool isResourcingSalvage() const;
    _inline bool hasScannedForResources() const;
    static void getExtraResources(Selection &currentResources, Ship *resourcer);
    void resourcingDone();
    bool dock();
    virtual char const *getName() const override;
private:
    static void findInterestingResources(Selection &resources, SobType type, bool useMaxDistance, Ship *ship, vector3 const &centrePosForScan, float maxDistance);
    void getAndSetClosestResource(bool);
    Resource *getClosestResource(bool);
    void setState(ResourceCommand::ResourcingState const);
    _inline ResourceCommand::ResourcingState const getState() const;
    void resetTarget();
    bool earlyDock();
    void moveToResource(Resource *);
    void moveToResourcePoint(Resource *);
    void moveToLatchPoint(Resource *);
    bool latchWithResource(Resource *);
    void moveUpFromResourcePoint(Resource *);
    void parade();
    void updateEngineTrail(ResourceCommand::ResourcingState const);
    SobID m_resourceTarget; // 0x14
    Selection m_resourceTargetList; // 0x20
    ResourceCommand::ResourcingState m_resourcingState; // 0x54
    bool m_resourcingSalvage; // 0x58
    bool m_firstTime; // 0x59
    float m_waitTime; // 0x5C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResourceCommand &operator=(ResourceCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceCommand) == 96, "Invalid ResourceCommand size");

class ResourceCommand :
    public Command
{
public:
    enum ResourcingState
    {
        INITIAL = 0,
        FLYING_TO_RESOURCE,
        FLYING_TO_LATCH_POINT,
        FLYING_TO_RESOURCE_POINT,
        WAITING_FOR_FREE_SLOT,
        RESOURCING,
        FLYING_UP_FROM_RESOURCE_POINT,
        DONE_RESOURCING,
        DOCKING,
        NUMBER_OF_STATES,
    };
    ResourceCommand(ResourceCommand const &); /* compiler_generated() */
    ResourceCommand(SaveGameData *);
    ResourceCommand(Squadron *, Selection const &, Command::CommandOrigin);
    virtual ~ResourceCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    _inline Resource *getTarget() const;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
private:
    static Resource *getBestTarget(bool useMaxDistance, Ship *ship, Ship *closestDockShip);
public:
    static Resource *getBestTarget(Squadron const *forSquad);
    _inline bool isResourcingSalvage() const;
    _inline bool hasScannedForResources() const;
    static void getExtraResources(Selection &currentResources, Ship *resourcer);
    void resourcingDone();
    bool dock();
    virtual char const *getName() const override;
private:
    static void findInterestingResources(Selection &resources, SobType type, bool useMaxDistance, Ship *ship, vector3 const &centrePosForScan, float maxDistance);
    void getAndSetClosestResource(bool);
    Resource *getClosestResource(bool);
    void setState(ResourceCommand::ResourcingState const);
    _inline ResourceCommand::ResourcingState const getState() const;
    void resetTarget();
    bool earlyDock();
    void moveToResource(Resource *);
    void moveToResourcePoint(Resource *);
    void moveToLatchPoint(Resource *);
    bool latchWithResource(Resource *);
    void moveUpFromResourcePoint(Resource *);
    void parade();
    void updateEngineTrail(ResourceCommand::ResourcingState const);
    SobID m_resourceTarget; // 0x14
    Selection m_resourceTargetList; // 0x20
    ResourceCommand::ResourcingState m_resourcingState; // 0x54
    bool m_resourcingSalvage; // 0x58
    bool m_firstTime; // 0x59
    float m_waitTime; // 0x5C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResourceCommand &operator=(ResourceCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceCommand) == 96, "Invalid ResourceCommand size");

class ResourceCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    ResourceCommandStaticInfo(ResourceCommandStaticInfo const &); /* compiler_generated() */
    ResourceCommandStaticInfo(__int32, float, float);
    virtual ~ResourceCommandStaticInfo() override;
    float getResourceHarvestDistance() const;
    _inline __int32 getCapacity() const;
    _inline float const &getResourceRate() const;
private:
    __int32 m_resourceCapacity; // 0x8
    float m_resourceRate; // 0xC
    float m_resourceHarvestDistance; // 0x10
public:
    ResourceCommandStaticInfo &operator=(ResourceCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceCommandStaticInfo) == 20, "Invalid ResourceCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Resource *ResourceCommand::getTarget() const // 0x4B1440
{
    mangled_assert("?getTarget@ResourceCommand@@QBEPAVResource@@XZ");
    todo("implement");
}

_inline bool ResourceCommand::isResourcingSalvage() const // 0x69C075
{
    mangled_assert("?isResourcingSalvage@ResourceCommand@@QBE_NXZ");
    todo("implement");
}

_inline bool ResourceCommand::hasScannedForResources() const // 0x69C069
{
    mangled_assert("?hasScannedForResources@ResourceCommand@@QBE_NXZ");
    todo("implement");
}

_inline ResourceCommand::ResourcingState const ResourceCommand::getState() const // 0x69C065
{
    mangled_assert("?getState@ResourceCommand@@ABE?BW4ResourcingState@1@XZ");
    todo("implement");
}

_inline bool ResourceCommand::isDeterministic() // 0x69C072
{
    mangled_assert("?isDeterministic@ResourceCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *ResourceCommand::saveToken() // 0x69C8F5
{
    mangled_assert("?saveToken@ResourceCommand@@UAEPBDXZ");
    todo("implement");
}

_inline __int32 ResourceCommandStaticInfo::getCapacity() const // 0x48C0C2
{
    mangled_assert("?getCapacity@ResourceCommandStaticInfo@@QBEHXZ");
    todo("implement");
}

_inline float const &ResourceCommandStaticInfo::getResourceRate() const // 0x48CAF1
{
    mangled_assert("?getResourceRate@ResourceCommandStaticInfo@@QBEABMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RESOURCECOMMAND_H__
#endif
