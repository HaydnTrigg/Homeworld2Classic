#if 0
#ifndef __LAUNCHCOMMAND_H__
#define __LAUNCHCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LaunchCommand :
    public Command
{
public:
    enum LaunchState
    {
        LAUNCHSTATE_OrderGiven = 0,
        LAUNCHSTATE_FindBestLaunchPath,
        LAUNCHSTATE_RegisterForQueue,
        LAUNCHSTATE_Queue,
        LAUNCHSTATE_SetupSquadronForLaunch,
        LAUNCHSTATE_LaunchFormations,
        LAUNCHSTATE_ReformFormation,
        LAUNCHSTATE_FlyToMilitaryParadeLocation,
        LAUNCHSTATE_UnInitialized,
        LAUNCHSTATE_NumDockStates,
    };
    enum LaunchMoveState
    {
        LAUNCH_MOVE_STATE_Initial = 0,
        LAUNCH_MOVE_STATE_Moving,
        LAUNCH_MOVE_STATE_NUM_STATES,
    };
    LaunchCommand(LaunchCommand const &); /* compiler_generated() */
    LaunchCommand(SaveGameData *);
    LaunchCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~LaunchCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual ComResult update(float) override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual char const *getName() const override;
    virtual CommandType getCommandType() const override;
    bool shipsInCollideState() const;
    bool shipsInAvoidState() const;
    _inline Ship *getLaunchFrom() const;
    DockPath *getDockPath() const;
private:
    bool OrderGiven();
    bool FindBestLaunchPath();
    bool RegisterForQueue();
    bool Queue();
    bool SetupSquadronForLaunch();
    bool LaunchFormations();
    bool ReformFormation();
    bool FlyToMilitaryParadeLocation();
    void DoLaunchAnimation();
    void setLaunchState(LaunchCommand::LaunchState);
    bool getBestLaunchPath();
    void launchFormation(Formation *);
    void GetPathPoint(unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    SobID m_launchFrom; // 0x14
    LaunchCommand::LaunchState m_launchState; // 0x20
    __int32 m_launchPathID; // 0x24
    unsigned __int32 m_currentLaunchPointID; // 0x28
    LaunchCommand::LaunchMoveState m_movementState; // 0x2C
    bool m_launchingMainFormation; // 0x30
    float m_launchTime; // 0x34
    float m_mainFormationLaunchTime; // 0x38
    bool m_IReservedPath; // 0x3C
    bool isPlayerInControl() const;
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LaunchCommand &operator=(LaunchCommand const &); /* compiler_generated() */
};
static_assert(sizeof(LaunchCommand) == 64, "Invalid LaunchCommand size");

class LaunchCommand :
    public Command
{
public:
    enum LaunchState
    {
        LAUNCHSTATE_OrderGiven = 0,
        LAUNCHSTATE_FindBestLaunchPath,
        LAUNCHSTATE_RegisterForQueue,
        LAUNCHSTATE_Queue,
        LAUNCHSTATE_SetupSquadronForLaunch,
        LAUNCHSTATE_LaunchFormations,
        LAUNCHSTATE_ReformFormation,
        LAUNCHSTATE_FlyToMilitaryParadeLocation,
        LAUNCHSTATE_UnInitialized,
        LAUNCHSTATE_NumDockStates,
    };
    enum LaunchMoveState
    {
        LAUNCH_MOVE_STATE_Initial = 0,
        LAUNCH_MOVE_STATE_Moving,
        LAUNCH_MOVE_STATE_NUM_STATES,
    };
    LaunchCommand(LaunchCommand const &); /* compiler_generated() */
    LaunchCommand(SaveGameData *);
    LaunchCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~LaunchCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual ComResult update(float) override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual char const *getName() const override;
    virtual CommandType getCommandType() const override;
    bool shipsInCollideState() const;
    bool shipsInAvoidState() const;
    _inline Ship *getLaunchFrom() const;
    DockPath *getDockPath() const;
private:
    bool OrderGiven();
    bool FindBestLaunchPath();
    bool RegisterForQueue();
    bool Queue();
    bool SetupSquadronForLaunch();
    bool LaunchFormations();
    bool ReformFormation();
    bool FlyToMilitaryParadeLocation();
    void DoLaunchAnimation();
    void setLaunchState(LaunchCommand::LaunchState);
    bool getBestLaunchPath();
    void launchFormation(Formation *);
    void GetPathPoint(unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    SobID m_launchFrom; // 0x14
    LaunchCommand::LaunchState m_launchState; // 0x20
    __int32 m_launchPathID; // 0x24
    unsigned __int32 m_currentLaunchPointID; // 0x28
    LaunchCommand::LaunchMoveState m_movementState; // 0x2C
    bool m_launchingMainFormation; // 0x30
    float m_launchTime; // 0x34
    float m_mainFormationLaunchTime; // 0x38
    bool m_IReservedPath; // 0x3C
    bool isPlayerInControl() const;
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LaunchCommand &operator=(LaunchCommand const &); /* compiler_generated() */
};
static_assert(sizeof(LaunchCommand) == 64, "Invalid LaunchCommand size");

class LaunchCommand :
    public Command
{
public:
    enum LaunchState
    {
        LAUNCHSTATE_OrderGiven = 0,
        LAUNCHSTATE_FindBestLaunchPath,
        LAUNCHSTATE_RegisterForQueue,
        LAUNCHSTATE_Queue,
        LAUNCHSTATE_SetupSquadronForLaunch,
        LAUNCHSTATE_LaunchFormations,
        LAUNCHSTATE_ReformFormation,
        LAUNCHSTATE_FlyToMilitaryParadeLocation,
        LAUNCHSTATE_UnInitialized,
        LAUNCHSTATE_NumDockStates,
    };
    enum LaunchMoveState
    {
        LAUNCH_MOVE_STATE_Initial = 0,
        LAUNCH_MOVE_STATE_Moving,
        LAUNCH_MOVE_STATE_NUM_STATES,
    };
    LaunchCommand(LaunchCommand const &); /* compiler_generated() */
    LaunchCommand(SaveGameData *);
    LaunchCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~LaunchCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual ComResult update(float) override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual char const *getName() const override;
    virtual CommandType getCommandType() const override;
    bool shipsInCollideState() const;
    bool shipsInAvoidState() const;
    _inline Ship *getLaunchFrom() const;
    DockPath *getDockPath() const;
private:
    bool OrderGiven();
    bool FindBestLaunchPath();
    bool RegisterForQueue();
    bool Queue();
    bool SetupSquadronForLaunch();
    bool LaunchFormations();
    bool ReformFormation();
    bool FlyToMilitaryParadeLocation();
    void DoLaunchAnimation();
    void setLaunchState(LaunchCommand::LaunchState);
    bool getBestLaunchPath();
    void launchFormation(Formation *);
    void GetPathPoint(unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    SobID m_launchFrom; // 0x14
    LaunchCommand::LaunchState m_launchState; // 0x20
    __int32 m_launchPathID; // 0x24
    unsigned __int32 m_currentLaunchPointID; // 0x28
    LaunchCommand::LaunchMoveState m_movementState; // 0x2C
    bool m_launchingMainFormation; // 0x30
    float m_launchTime; // 0x34
    float m_mainFormationLaunchTime; // 0x38
    bool m_IReservedPath; // 0x3C
    bool isPlayerInControl() const;
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LaunchCommand &operator=(LaunchCommand const &); /* compiler_generated() */
};
static_assert(sizeof(LaunchCommand) == 64, "Invalid LaunchCommand size");

class LaunchCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    LaunchCommandStaticInfo(LaunchCommandStaticInfo const &); /* compiler_generated() */
    LaunchCommandStaticInfo(ShipStatic *);
    virtual ~LaunchCommandStaticInfo() override;
    LaunchCommandStaticInfo &operator=(LaunchCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(LaunchCommandStaticInfo) == 8, "Invalid LaunchCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Ship *LaunchCommand::getLaunchFrom() const // 0x6A2931
{
    mangled_assert("?getLaunchFrom@LaunchCommand@@QBEPAVShip@@XZ");
    todo("implement");
}

_inline bool LaunchCommand::isDeterministic() // 0x6A2971
{
    mangled_assert("?isDeterministic@LaunchCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *LaunchCommand::saveToken() // 0x6A2DEC
{
    mangled_assert("?saveToken@LaunchCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LAUNCHCOMMAND_H__
#endif
