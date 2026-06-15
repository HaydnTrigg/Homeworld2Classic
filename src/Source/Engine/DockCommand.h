#if 0
#ifndef __DOCKCOMMAND_H__
#define __DOCKCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DockCommand :
    public Command
{
public:
    enum DockMoveState
    {
        DOCK_MOVE_STATE_Initial = 0,
        DOCK_MOVE_STATE_Moving,
        DOCK_MOVE_STATE_NUM_STATES,
    };
    enum DockState
    {
        DOCKSTATE_OrderGiven = 0,
        DOCKSTATE_FindBestDockShip,
        DOCKSTATE_FlyToDockShip,
        DOCKSTATE_FindBestPathOnShip,
        DOCKSTATE_RegisterForQueue,
        DOCKSTATE_FlyToBehindQueue,
        DOCKSTATE_Queue,
        DOCKSTATE_BookPath,
        DOCKSTATE_FlyToDockPathStartPoint,
        DOCKSTATE_OpenDoor,
        DOCKSTATE_SplitSquadronIntoFormations,
        DOCKSTATE_DockFormations,
        DOCKSTATE_PutSquadronInShip,
        DOCKSTATE_Docked,
        DOCKSTATE_UnInitialized,
        DOCKSTATE_NumDockStates,
    };
    DockCommand(DockCommand const &); /* compiler_generated() */
    DockCommand(SaveGameData *);
    DockCommand(Squadron *, SobID const &, bool, Command::CommandOrigin);
    virtual ~DockCommand() override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual void resetCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual char const *getName() const override;
    bool shipsInAvoidState() const;
    bool shipsInCollideState() const;
    _inline Ship *getDockWith() const;
    _inline bool isDocked();
    void setAsDocked();
    enum DockQueryOption
    {
        DockingOrLatching = 0,
        Docking,
        DockingAndNotLatching,
        LatchingAndNotDocking,
        Latching,
    };
    static Ship *getClosestShipToDockWith(Ship *ship, DockCommand::DockQueryOption option);
    static bool canReceiveShip(Ship const *dockee, Sob const *docker, DockCommand::DockQueryOption option);
    _inline void setLaunchTime(float);
    _inline float getLaunchTime() const;
    _inline unsigned __int32 getDockPathID() const;
    _inline bool getStayDocked() const;
    _inline void setStayDocked(bool);
    enum DockPreferenceOverride
    {
        NoOverride = 0,
        DockOnly,
        LatchOnly,
    };
    _inline void setDockPathPreference(DockCommand::DockPreferenceOverride);
    DockPath *getDockPath() const;
private:
    void defaultSettings();
    bool OrderGiven();
    bool FindBestDockShip();
    bool FlyToDockShip();
    bool FindBestPathOnShip();
    bool RegisterForQueue();
    bool FlyToBehindQueue();
    bool Queue();
    bool BookPath();
    bool FlyToDockPathStartPoint();
    bool OpenDoor();
    bool SplitSquadronIntoFormations();
    bool DockFormations();
    bool PutSquadronInShip();
    bool Docked();
    void setDockWithShip(SobID const &);
    void setDockState(DockCommand::DockState);
public:
    _inline DockCommand::DockState getDockState() const;
private:
    void getQueuePosition(vector3 &, vector3 &, vector3 &);
    void getQueuePosition(vector3 &);
    bool GetAndReserveBestDockingPath();
    void GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    void flyFormationToStartOfPath(Formation *);
    bool preferPath(DockPathStatic const *, ShipHoldStatic const *);
    bool m_dockingMainFormation; // 0x14
    float m_dockTime; // 0x18
    SobID m_dockWith; // 0x1C
    unsigned __int32 m_dockWithLastID; // 0x28
    DockCommand::DockState m_dockState; // 0x2C
    __int32 m_dockPathID; // 0x30
    bool m_IReservedPath; // 0x34
    DockCommand::DockMoveState m_movementState; // 0x38
    bool m_orderedToDockWithSpecificShip; // 0x3C
    vector3 m_queuePosition; // 0x40
    float m_approachDistance; // 0x4C
    float m_launchTime; // 0x50
    bool m_stayDocked; // 0x54
    DockCommand::DockPreferenceOverride m_dockLatchOverride; // 0x58
    float calculateApproachDistance();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static float flyBehindQueueDistance;
    static bool initTweaks();
    static bool registerTweaks();
    DockCommand &operator=(DockCommand const &); /* compiler_generated() */
};
static_assert(sizeof(DockCommand) == 92, "Invalid DockCommand size");

class DockCommand :
    public Command
{
public:
    enum DockMoveState
    {
        DOCK_MOVE_STATE_Initial = 0,
        DOCK_MOVE_STATE_Moving,
        DOCK_MOVE_STATE_NUM_STATES,
    };
    enum DockState
    {
        DOCKSTATE_OrderGiven = 0,
        DOCKSTATE_FindBestDockShip,
        DOCKSTATE_FlyToDockShip,
        DOCKSTATE_FindBestPathOnShip,
        DOCKSTATE_RegisterForQueue,
        DOCKSTATE_FlyToBehindQueue,
        DOCKSTATE_Queue,
        DOCKSTATE_BookPath,
        DOCKSTATE_FlyToDockPathStartPoint,
        DOCKSTATE_OpenDoor,
        DOCKSTATE_SplitSquadronIntoFormations,
        DOCKSTATE_DockFormations,
        DOCKSTATE_PutSquadronInShip,
        DOCKSTATE_Docked,
        DOCKSTATE_UnInitialized,
        DOCKSTATE_NumDockStates,
    };
    DockCommand(DockCommand const &); /* compiler_generated() */
    DockCommand(SaveGameData *);
    DockCommand(Squadron *, SobID const &, bool, Command::CommandOrigin);
    virtual ~DockCommand() override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual void resetCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual char const *getName() const override;
    bool shipsInAvoidState() const;
    bool shipsInCollideState() const;
    _inline Ship *getDockWith() const;
    _inline bool isDocked();
    void setAsDocked();
    enum DockQueryOption
    {
        DockingOrLatching = 0,
        Docking,
        DockingAndNotLatching,
        LatchingAndNotDocking,
        Latching,
    };
    static Ship *getClosestShipToDockWith(Ship *ship, DockCommand::DockQueryOption option);
    static bool canReceiveShip(Ship const *dockee, Sob const *docker, DockCommand::DockQueryOption option);
    _inline void setLaunchTime(float);
    _inline float getLaunchTime() const;
    _inline unsigned __int32 getDockPathID() const;
    _inline bool getStayDocked() const;
    _inline void setStayDocked(bool);
    enum DockPreferenceOverride
    {
        NoOverride = 0,
        DockOnly,
        LatchOnly,
    };
    _inline void setDockPathPreference(DockCommand::DockPreferenceOverride);
    DockPath *getDockPath() const;
private:
    void defaultSettings();
    bool OrderGiven();
    bool FindBestDockShip();
    bool FlyToDockShip();
    bool FindBestPathOnShip();
    bool RegisterForQueue();
    bool FlyToBehindQueue();
    bool Queue();
    bool BookPath();
    bool FlyToDockPathStartPoint();
    bool OpenDoor();
    bool SplitSquadronIntoFormations();
    bool DockFormations();
    bool PutSquadronInShip();
    bool Docked();
    void setDockWithShip(SobID const &);
    void setDockState(DockCommand::DockState);
public:
    _inline DockCommand::DockState getDockState() const;
private:
    void getQueuePosition(vector3 &, vector3 &, vector3 &);
    void getQueuePosition(vector3 &);
    bool GetAndReserveBestDockingPath();
    void GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    void flyFormationToStartOfPath(Formation *);
    bool preferPath(DockPathStatic const *, ShipHoldStatic const *);
    bool m_dockingMainFormation; // 0x14
    float m_dockTime; // 0x18
    SobID m_dockWith; // 0x1C
    unsigned __int32 m_dockWithLastID; // 0x28
    DockCommand::DockState m_dockState; // 0x2C
    __int32 m_dockPathID; // 0x30
    bool m_IReservedPath; // 0x34
    DockCommand::DockMoveState m_movementState; // 0x38
    bool m_orderedToDockWithSpecificShip; // 0x3C
    vector3 m_queuePosition; // 0x40
    float m_approachDistance; // 0x4C
    float m_launchTime; // 0x50
    bool m_stayDocked; // 0x54
    DockCommand::DockPreferenceOverride m_dockLatchOverride; // 0x58
    float calculateApproachDistance();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static float flyBehindQueueDistance;
    static bool initTweaks();
    static bool registerTweaks();
    DockCommand &operator=(DockCommand const &); /* compiler_generated() */
};
static_assert(sizeof(DockCommand) == 92, "Invalid DockCommand size");

class DockCommand :
    public Command
{
public:
    enum DockMoveState
    {
        DOCK_MOVE_STATE_Initial = 0,
        DOCK_MOVE_STATE_Moving,
        DOCK_MOVE_STATE_NUM_STATES,
    };
    enum DockState
    {
        DOCKSTATE_OrderGiven = 0,
        DOCKSTATE_FindBestDockShip,
        DOCKSTATE_FlyToDockShip,
        DOCKSTATE_FindBestPathOnShip,
        DOCKSTATE_RegisterForQueue,
        DOCKSTATE_FlyToBehindQueue,
        DOCKSTATE_Queue,
        DOCKSTATE_BookPath,
        DOCKSTATE_FlyToDockPathStartPoint,
        DOCKSTATE_OpenDoor,
        DOCKSTATE_SplitSquadronIntoFormations,
        DOCKSTATE_DockFormations,
        DOCKSTATE_PutSquadronInShip,
        DOCKSTATE_Docked,
        DOCKSTATE_UnInitialized,
        DOCKSTATE_NumDockStates,
    };
    DockCommand(DockCommand const &); /* compiler_generated() */
    DockCommand(SaveGameData *);
    DockCommand(Squadron *, SobID const &, bool, Command::CommandOrigin);
    virtual ~DockCommand() override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual void resetCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual char const *getName() const override;
    bool shipsInAvoidState() const;
    bool shipsInCollideState() const;
    _inline Ship *getDockWith() const;
    _inline bool isDocked();
    void setAsDocked();
    enum DockQueryOption
    {
        DockingOrLatching = 0,
        Docking,
        DockingAndNotLatching,
        LatchingAndNotDocking,
        Latching,
    };
    static Ship *getClosestShipToDockWith(Ship *ship, DockCommand::DockQueryOption option);
    static bool canReceiveShip(Ship const *dockee, Sob const *docker, DockCommand::DockQueryOption option);
    _inline void setLaunchTime(float);
    _inline float getLaunchTime() const;
    _inline unsigned __int32 getDockPathID() const;
    _inline bool getStayDocked() const;
    _inline void setStayDocked(bool);
    enum DockPreferenceOverride
    {
        NoOverride = 0,
        DockOnly,
        LatchOnly,
    };
    _inline void setDockPathPreference(DockCommand::DockPreferenceOverride);
    DockPath *getDockPath() const;
private:
    void defaultSettings();
    bool OrderGiven();
    bool FindBestDockShip();
    bool FlyToDockShip();
    bool FindBestPathOnShip();
    bool RegisterForQueue();
    bool FlyToBehindQueue();
    bool Queue();
    bool BookPath();
    bool FlyToDockPathStartPoint();
    bool OpenDoor();
    bool SplitSquadronIntoFormations();
    bool DockFormations();
    bool PutSquadronInShip();
    bool Docked();
    void setDockWithShip(SobID const &);
    void setDockState(DockCommand::DockState);
public:
    _inline DockCommand::DockState getDockState() const;
private:
    void getQueuePosition(vector3 &, vector3 &, vector3 &);
    void getQueuePosition(vector3 &);
    bool GetAndReserveBestDockingPath();
    void GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    void flyFormationToStartOfPath(Formation *);
    bool preferPath(DockPathStatic const *, ShipHoldStatic const *);
    bool m_dockingMainFormation; // 0x14
    float m_dockTime; // 0x18
    SobID m_dockWith; // 0x1C
    unsigned __int32 m_dockWithLastID; // 0x28
    DockCommand::DockState m_dockState; // 0x2C
    __int32 m_dockPathID; // 0x30
    bool m_IReservedPath; // 0x34
    DockCommand::DockMoveState m_movementState; // 0x38
    bool m_orderedToDockWithSpecificShip; // 0x3C
    vector3 m_queuePosition; // 0x40
    float m_approachDistance; // 0x4C
    float m_launchTime; // 0x50
    bool m_stayDocked; // 0x54
    DockCommand::DockPreferenceOverride m_dockLatchOverride; // 0x58
    float calculateApproachDistance();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static float flyBehindQueueDistance;
    static bool initTweaks();
    static bool registerTweaks();
    DockCommand &operator=(DockCommand const &); /* compiler_generated() */
};
static_assert(sizeof(DockCommand) == 92, "Invalid DockCommand size");

class DockCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    DockCommandStaticInfo(DockCommandStaticInfo const &); /* compiler_generated() */
    DockCommandStaticInfo(ShipStatic *);
    virtual ~DockCommandStaticInfo() override;
    bool m_canBeIssuedByPlayer; // 0x8
    DockCommandStaticInfo &operator=(DockCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(DockCommandStaticInfo) == 12, "Invalid DockCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Ship *DockCommand::getDockWith() const // 0x4AE4A8
{
    mangled_assert("?getDockWith@DockCommand@@QBEPAVShip@@XZ");
    todo("implement");
}

_inline bool DockCommand::isDocked() // 0x4893CA
{
    mangled_assert("?isDocked@DockCommand@@QAE_NXZ");
    todo("implement");
}

_inline void DockCommand::setLaunchTime(float) // 0x4AFB2D
{
    mangled_assert("?setLaunchTime@DockCommand@@QAEXM@Z");
    todo("implement");
}

_inline float DockCommand::getLaunchTime() const // 0x4AE4CA
{
    mangled_assert("?getLaunchTime@DockCommand@@QBEMXZ");
    todo("implement");
}

_inline unsigned __int32 DockCommand::getDockPathID() const // 0x4AE487
{
    mangled_assert("?getDockPathID@DockCommand@@QBEIXZ");
    todo("implement");
}

_inline bool DockCommand::getStayDocked() const // 0x4AE70E
{
    mangled_assert("?getStayDocked@DockCommand@@QBE_NXZ");
    todo("implement");
}

_inline void DockCommand::setStayDocked(bool) // 0x723C0D
{
    mangled_assert("?setStayDocked@DockCommand@@QAEX_N@Z");
    todo("implement");
}

_inline void DockCommand::setDockPathPreference(DockCommand::DockPreferenceOverride) // 0x69C8FB
{
    mangled_assert("?setDockPathPreference@DockCommand@@QAEXW4DockPreferenceOverride@1@@Z");
    todo("implement");
}

_inline DockCommand::DockState DockCommand::getDockState() const // 0x495597
{
    mangled_assert("?getDockState@DockCommand@@QBE?AW4DockState@1@XZ");
    todo("implement");
}

_inline bool DockCommand::isDeterministic() // 0x69A3B8
{
    mangled_assert("?isDeterministic@DockCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *DockCommand::saveToken() // 0x69A77E
{
    mangled_assert("?saveToken@DockCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DOCKCOMMAND_H__
#endif
