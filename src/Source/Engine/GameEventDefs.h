#if 0
#ifndef __GAMEEVENTDEFS_H__
#define __GAMEEVENTDEFS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    GE_BuildUnitCommand = 0,
    GE_BuildUnitStart,
    GE_BuildUnitComplete,
    GE_BuildSubSystemComplete,
    GE_BuildUnitCancel,
    GE_BuildUnitUnitCaps,
    GE_BuildAvailable,
    GE_Research,
    GE_PlayerKilled,
    GE_ShipRemoved,
    GE_AddSquadronToPlayer,
    GE_RemoveSquadronFromPlayer,
    GE_AddShipToSquadron,
    GE_ShipCaptured,
    GE_ShipCaptureFailed,
    GE_ShipRepairs,
    GE_ResourceCollection,
    GE_PlayerAlliance,
    GE_ShipDocked,
    GE_ShipLaunched,
    GE_CloakingStatusChange,
    GE_CommandGiven,
    GE_CommandCouldNotBeIssued,
    GE_TacticsSet,
    GE_EngagementRangeSet,
    GE_EngagementRangeForceSet,
    GE_StrikeGroupFormed,
    GE_Combat,
    GE_DefenseFieldStatusChange,
    GE_CommandCancelled,
    GE_Hyperspace,
    GE_SpecialSpeech,
    GE_SubSystem,
    GE_UnitCapsReached,
    GE_CloudEvent,
    GE_CommandComplete,
    GE_SquadronSpotted,
    NDGE_HotkeyGroupSelected,
    NDGE_ShipsSelected,
    NDGE_SubsysSelected,
    NDGE_BattleStatus,
    NDGE_Objectives,
    NDGE_RenderModel,
    NDGE_BuildingUnit,
    NDGE_PlayerNameChanged,
    GE_COUNT,
};

/* ---------- definitions */

class GameEvent_BuildUnitComplete :
    public GameEventSys::Event
{
public:
    GameEvent_BuildUnitComplete(GameEvent_BuildUnitComplete const &); /* compiler_generated() */
    _inline GameEvent_BuildUnitComplete(Player const *, Ship const *, Squadron const *);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Ship const *m_buildingShip; // 0xC
    Squadron const *m_pSquadron; // 0x10
    _inline ~GameEvent_BuildUnitComplete(); /* compiler_generated() */
    GameEvent_BuildUnitComplete &operator=(GameEvent_BuildUnitComplete const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildUnitComplete) == 20, "Invalid GameEvent_BuildUnitComplete size");

class GameEvent_BuildSubSystemComplete :
    public GameEventSys::Event
{
public:
    GameEvent_BuildSubSystemComplete(GameEvent_BuildSubSystemComplete const &); /* compiler_generated() */
    _inline GameEvent_BuildSubSystemComplete(Player const *, Ship const *, SubSystem *);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Ship const *m_buildingShip; // 0xC
    SubSystem *m_subSystem; // 0x10
    _inline ~GameEvent_BuildSubSystemComplete(); /* compiler_generated() */
    GameEvent_BuildSubSystemComplete &operator=(GameEvent_BuildSubSystemComplete const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildSubSystemComplete) == 20, "Invalid GameEvent_BuildSubSystemComplete size");

class GameEvent_BuildUnitStart :
    public GameEventSys::Event
{
public:
    GameEvent_BuildUnitStart(GameEvent_BuildUnitStart const &); /* compiler_generated() */
    _inline GameEvent_BuildUnitStart(Player const *, Ship const *, BuildData *);
    BuildData *m_buildData; // 0xC
    Ship const *m_buildingShip; // 0x10
    _inline ~GameEvent_BuildUnitStart(); /* compiler_generated() */
    GameEvent_BuildUnitStart &operator=(GameEvent_BuildUnitStart const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildUnitStart) == 20, "Invalid GameEvent_BuildUnitStart size");

class GameEvent_BuildUnitCancel :
    public GameEventSys::Event
{
public:
    GameEvent_BuildUnitCancel(GameEvent_BuildUnitCancel const &); /* compiler_generated() */
    _inline GameEvent_BuildUnitCancel(Player const *, Ship const *, BuildData *);
    BuildData *m_buildData; // 0xC
    Ship const *m_buildingShip; // 0x10
    _inline ~GameEvent_BuildUnitCancel(); /* compiler_generated() */
    GameEvent_BuildUnitCancel &operator=(GameEvent_BuildUnitCancel const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildUnitCancel) == 20, "Invalid GameEvent_BuildUnitCancel size");

class GameEvent_BuildUnitUnitCaps :
    public GameEventSys::Event
{
public:
    GameEvent_BuildUnitUnitCaps(GameEvent_BuildUnitUnitCaps const &); /* compiler_generated() */
    _inline GameEvent_BuildUnitUnitCaps(Player const *, Ship const *, BuildData *);
    BuildData *m_buildData; // 0xC
    Ship const *m_buildingShip; // 0x10
    _inline ~GameEvent_BuildUnitUnitCaps(); /* compiler_generated() */
    GameEvent_BuildUnitUnitCaps &operator=(GameEvent_BuildUnitUnitCaps const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildUnitUnitCaps) == 20, "Invalid GameEvent_BuildUnitUnitCaps size");

class GameEvent_BuildAvailable :
    public GameEventSys::Event
{
public:
    enum BuildEvent
    {
        BuildShip = 0,
        BuildSubSystem,
    };
    GameEvent_BuildAvailable(GameEvent_BuildAvailable const &); /* compiler_generated() */
    _inline GameEvent_BuildAvailable(Player const *, GameEvent_BuildAvailable::BuildEvent, Ship const *, std::list<unsigned int,std::allocator<unsigned int> > const &);
    GameEvent_BuildAvailable::BuildEvent m_evtType; // 0xC
    std::list<unsigned int,std::allocator<unsigned int> > const &m_typeList; // 0x10
    Ship const *m_buildingShip; // 0x14
    _inline ~GameEvent_BuildAvailable(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_BuildAvailable) == 24, "Invalid GameEvent_BuildAvailable size");

class GameEvent_Research :
    public GameEventSys::Event
{
public:
    enum ResearchEvent
    {
        ResearchStart = 0,
        ResearchCancel,
        ResearchComplete,
        ResearchNoRU,
        ResearchAvailable,
        InstaResearchComplete,
    };
    GameEvent_Research(GameEvent_Research const &); /* compiler_generated() */
    _inline GameEvent_Research(Player const *, GameEvent_Research::ResearchEvent, ResearchData const &);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    ResearchData const &m_rdata; // 0xC
    GameEvent_Research::ResearchEvent const m_evtType; // 0x10
    _inline ~GameEvent_Research(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_Research) == 20, "Invalid GameEvent_Research size");

class GameEvent_PlayerKilled :
    public GameEventSys::Event
{
public:
    GameEvent_PlayerKilled(GameEvent_PlayerKilled const &); /* compiler_generated() */
    _inline GameEvent_PlayerKilled(Player const *, __int32);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Player const *m_playerKilled; // 0xC
    __int32 m_reason; // 0x10
    _inline ~GameEvent_PlayerKilled(); /* compiler_generated() */
    GameEvent_PlayerKilled &operator=(GameEvent_PlayerKilled const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_PlayerKilled) == 20, "Invalid GameEvent_PlayerKilled size");

class GameEvent_AddSquadronToPlayer :
    public GameEventSys::Event
{
public:
    GameEvent_AddSquadronToPlayer(GameEvent_AddSquadronToPlayer const &); /* compiler_generated() */
    _inline GameEvent_AddSquadronToPlayer(Player const *, Squadron &, bool);
    Squadron &m_squadron; // 0xC
    bool m_isTransfer; // 0x10
    _inline ~GameEvent_AddSquadronToPlayer(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_AddSquadronToPlayer) == 20, "Invalid GameEvent_AddSquadronToPlayer size");

class GameEvent_RemoveSquadronFromPlayer :
    public GameEventSys::Event
{
public:
    GameEvent_RemoveSquadronFromPlayer(GameEvent_RemoveSquadronFromPlayer const &); /* compiler_generated() */
    _inline GameEvent_RemoveSquadronFromPlayer(Player const *, Squadron &);
    Squadron &m_squadron; // 0xC
    _inline ~GameEvent_RemoveSquadronFromPlayer(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_RemoveSquadronFromPlayer) == 16, "Invalid GameEvent_RemoveSquadronFromPlayer size");

class GameEvent_AddShipToSquadron :
    public GameEventSys::Event
{
public:
    GameEvent_AddShipToSquadron(GameEvent_AddShipToSquadron const &); /* compiler_generated() */
    _inline GameEvent_AddShipToSquadron(Player const *, Ship *);
    Ship *m_ship; // 0xC
    _inline ~GameEvent_AddShipToSquadron(); /* compiler_generated() */
    GameEvent_AddShipToSquadron &operator=(GameEvent_AddShipToSquadron const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_AddShipToSquadron) == 16, "Invalid GameEvent_AddShipToSquadron size");

class GameEvent_ShipDocked :
    public GameEventSys::Event
{
public:
    GameEvent_ShipDocked(GameEvent_ShipDocked const &); /* compiler_generated() */
    _inline GameEvent_ShipDocked(Player const *, SobID const &, SobID const &);
    SobID const &m_dockingShip; // 0xC
    SobID const &m_dockedWith; // 0x10
    _inline ~GameEvent_ShipDocked(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipDocked) == 20, "Invalid GameEvent_ShipDocked size");

class GameEvent_CloudEvent :
    public GameEventSys::Event
{
public:
    enum CloudEvent
    {
        OrderedToEnterNebula = 0,
        EnteringNebula,
        EnteringDustcloud,
        LostEnemy,
        TakingDamage,
        LostEnemyNebula,
    };
    GameEvent_CloudEvent(GameEvent_CloudEvent const &); /* compiler_generated() */
    _inline GameEvent_CloudEvent(Player const *, Ship const *, GameEvent_CloudEvent::CloudEvent const);
    Ship const *m_ship; // 0xC
    GameEvent_CloudEvent::CloudEvent const m_evType; // 0x10
    _inline ~GameEvent_CloudEvent(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CloudEvent) == 20, "Invalid GameEvent_CloudEvent size");

class GameEvent_ShipLaunched :
    public GameEventSys::Event
{
public:
    GameEvent_ShipLaunched(GameEvent_ShipLaunched const &); /* compiler_generated() */
    _inline GameEvent_ShipLaunched(Player const *, SobID const &, SobID const &);
    SobID const &m_launchingShip; // 0xC
    SobID const &m_launchedFrom; // 0x10
    _inline ~GameEvent_ShipLaunched(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipLaunched) == 20, "Invalid GameEvent_ShipLaunched size");

class GameEvent_ShipCaptured :
    public GameEventSys::Event
{
public:
    GameEvent_ShipCaptured(GameEvent_ShipCaptured const &); /* compiler_generated() */
    _inline GameEvent_ShipCaptured(Player const *, Ship const *, Ship const *);
    Ship const *m_capturingShip; // 0xC
    Ship const *m_beingCaptured; // 0x10
    _inline ~GameEvent_ShipCaptured(); /* compiler_generated() */
    GameEvent_ShipCaptured &operator=(GameEvent_ShipCaptured const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipCaptured) == 20, "Invalid GameEvent_ShipCaptured size");

class GameEvent_ShipCaptureFailed :
    public GameEventSys::Event
{
public:
    GameEvent_ShipCaptureFailed(GameEvent_ShipCaptureFailed const &); /* compiler_generated() */
    _inline GameEvent_ShipCaptureFailed(Player const *, Ship const *, Ship const *);
    Ship const *m_capturingShip; // 0xC
    Ship const *m_beingCaptured; // 0x10
    _inline ~GameEvent_ShipCaptureFailed(); /* compiler_generated() */
    GameEvent_ShipCaptureFailed &operator=(GameEvent_ShipCaptureFailed const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipCaptureFailed) == 20, "Invalid GameEvent_ShipCaptureFailed size");

class GameEvent_PlayerAlliance :
    public GameEventSys::Event
{
public:
    enum AllianceEventData
    {
        AllianceRequested = 0,
        AllianceFormed,
        AllianceBroken,
        RUsTransferred,
        ShipsTransferred,
    };
    GameEvent_PlayerAlliance(GameEvent_PlayerAlliance const &); /* compiler_generated() */
    _inline GameEvent_PlayerAlliance(Player const *, Player const *, GameEvent_PlayerAlliance::AllianceEventData, __int32);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Player const *m_targetPlayer; // 0xC
    GameEvent_PlayerAlliance::AllianceEventData const m_data; // 0x10
    __int32 m_rusTransfered; // 0x14
    _inline ~GameEvent_PlayerAlliance(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_PlayerAlliance) == 24, "Invalid GameEvent_PlayerAlliance size");

class GameEvent_ShipRemoved :
    public GameEventSys::Event
{
public:
    GameEvent_ShipRemoved(GameEvent_ShipRemoved const &); /* compiler_generated() */
    _inline GameEvent_ShipRemoved(Player const *, Sob const *, __int32, unsigned __int32);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Sob const *m_pSob; // 0xC
    unsigned __int32 m_killer; // 0x10
    __int32 m_reason; // 0x14
    _inline ~GameEvent_ShipRemoved(); /* compiler_generated() */
    GameEvent_ShipRemoved &operator=(GameEvent_ShipRemoved const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipRemoved) == 24, "Invalid GameEvent_ShipRemoved size");

class GameEvent_CommandGiven :
    public GameEventSys::Event
{
public:
    GameEvent_CommandGiven(GameEvent_CommandGiven const &); /* compiler_generated() */
    _inline GameEvent_CommandGiven(CommandType const, Player const *, Squadron const *, Selection const &);
    CommandType const m_commandGiven; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    Selection const &m_targets; // 0x14
    _inline ~GameEvent_CommandGiven(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandGiven) == 24, "Invalid GameEvent_CommandGiven size");

class GameEvent_CommandGiven :
    public GameEventSys::Event
{
public:
    GameEvent_CommandGiven(GameEvent_CommandGiven const &); /* compiler_generated() */
    _inline GameEvent_CommandGiven(CommandType const, Player const *, Squadron const *, Selection const &);
    CommandType const m_commandGiven; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    Selection const &m_targets; // 0x14
    _inline ~GameEvent_CommandGiven(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandGiven) == 24, "Invalid GameEvent_CommandGiven size");

class GameEvent_CommandCompelete :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCompelete(GameEvent_CommandCompelete const &); /* compiler_generated() */
    _inline GameEvent_CommandCompelete(CommandType const, Player const *, Squadron const *);
    CommandType const m_command; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCompelete(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCompelete) == 20, "Invalid GameEvent_CommandCompelete size");

class GameEvent_CommandCompelete :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCompelete(GameEvent_CommandCompelete const &); /* compiler_generated() */
    _inline GameEvent_CommandCompelete(CommandType const, Player const *, Squadron const *);
    CommandType const m_command; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCompelete(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCompelete) == 20, "Invalid GameEvent_CommandCompelete size");

class GameEvent_CommandCancelled :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCancelled(GameEvent_CommandCancelled const &); /* compiler_generated() */
    _inline GameEvent_CommandCancelled(CommandType const, Player const *, Squadron const *);
    CommandType const m_prevCmd; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCancelled(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCancelled) == 20, "Invalid GameEvent_CommandCancelled size");

class GameEvent_CommandCancelled :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCancelled(GameEvent_CommandCancelled const &); /* compiler_generated() */
    _inline GameEvent_CommandCancelled(CommandType const, Player const *, Squadron const *);
    CommandType const m_prevCmd; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCancelled(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCancelled) == 20, "Invalid GameEvent_CommandCancelled size");

class GameEvent_CommandCouldNotBeIssued :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCouldNotBeIssued(GameEvent_CommandCouldNotBeIssued const &); /* compiler_generated() */
    _inline GameEvent_CommandCouldNotBeIssued(CommandType const, Player const *, Squadron const *);
    CommandType const m_commandGiven; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCouldNotBeIssued(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCouldNotBeIssued) == 20, "Invalid GameEvent_CommandCouldNotBeIssued size");

class GameEvent_CommandCouldNotBeIssued :
    public GameEventSys::Event
{
public:
    GameEvent_CommandCouldNotBeIssued(GameEvent_CommandCouldNotBeIssued const &); /* compiler_generated() */
    _inline GameEvent_CommandCouldNotBeIssued(CommandType const, Player const *, Squadron const *);
    CommandType const m_commandGiven; // 0xC
    Squadron const *m_orderedSquadron; // 0x10
    _inline ~GameEvent_CommandCouldNotBeIssued(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CommandCouldNotBeIssued) == 20, "Invalid GameEvent_CommandCouldNotBeIssued size");

class GameEvent_SquadronSpotted :
    public GameEventSys::Event
{
public:
    GameEvent_SquadronSpotted(GameEvent_SquadronSpotted const &); /* compiler_generated() */
    _inline GameEvent_SquadronSpotted(Player const *, Squadron const *);
    Squadron const *m_spottedSquadron; // 0xC
    _inline ~GameEvent_SquadronSpotted(); /* compiler_generated() */
    GameEvent_SquadronSpotted &operator=(GameEvent_SquadronSpotted const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_SquadronSpotted) == 16, "Invalid GameEvent_SquadronSpotted size");

class GameEvent_CloakingStatusChange :
    public GameEventSys::Event
{
public:
    enum CloakingStatus
    {
        TurnedOn = 0,
        TurnedOff,
        OutOfPower,
        LowPower,
    };
    GameEvent_CloakingStatusChange(GameEvent_CloakingStatusChange const &); /* compiler_generated() */
    _inline GameEvent_CloakingStatusChange(Player const *, Ship const *, GameEvent_CloakingStatusChange::CloakingStatus);
    GameEvent_CloakingStatusChange::CloakingStatus const m_newStatus; // 0xC
    Ship const *m_ship; // 0x10
    _inline ~GameEvent_CloakingStatusChange(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_CloakingStatusChange) == 20, "Invalid GameEvent_CloakingStatusChange size");

class GameEvent_HyperspaceStatus :
    public GameEventSys::Event
{
public:
    enum HyperspaceStatus
    {
        Entering = 0,
        EnteringGate,
        Exiting,
        Interrupted,
        GateFormed,
        EnteredInhibitorVolume,
        NotEnoughCash,
    };
    GameEvent_HyperspaceStatus(GameEvent_HyperspaceStatus const &); /* compiler_generated() */
    _inline GameEvent_HyperspaceStatus(Player const *, Squadron const *, GameEvent_HyperspaceStatus::HyperspaceStatus);
    GameEvent_HyperspaceStatus::HyperspaceStatus const m_newStatus; // 0xC
    Squadron const *m_squadron; // 0x10
    _inline ~GameEvent_HyperspaceStatus(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_HyperspaceStatus) == 20, "Invalid GameEvent_HyperspaceStatus size");

class GameEvent_DefenseFieldStatusChange :
    public GameEventSys::Event
{
public:
    enum DefenseFieldStatus
    {
        TurnedOn = 0,
        TurnedOff,
        OutOfPower,
        LowPower,
    };
    GameEvent_DefenseFieldStatusChange(GameEvent_DefenseFieldStatusChange const &); /* compiler_generated() */
    _inline GameEvent_DefenseFieldStatusChange(Player const *, Ship const *, GameEvent_DefenseFieldStatusChange::DefenseFieldStatus);
    GameEvent_DefenseFieldStatusChange::DefenseFieldStatus const m_newStatus; // 0xC
    Ship const *m_ship; // 0x10
    _inline ~GameEvent_DefenseFieldStatusChange(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_DefenseFieldStatusChange) == 20, "Invalid GameEvent_DefenseFieldStatusChange size");

class GameEvent_TacticsSet :
    public GameEventSys::Event
{
public:
    GameEvent_TacticsSet(GameEvent_TacticsSet const &); /* compiler_generated() */
    _inline GameEvent_TacticsSet(Player const *, Squadron const *, SquadronTactics const);
    SquadronTactics const m_tactics; // 0xC
    Squadron const *m_squadron; // 0x10
    _inline ~GameEvent_TacticsSet(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_TacticsSet) == 20, "Invalid GameEvent_TacticsSet size");

class GameEvent_TacticsSet :
    public GameEventSys::Event
{
public:
    GameEvent_TacticsSet(GameEvent_TacticsSet const &); /* compiler_generated() */
    _inline GameEvent_TacticsSet(Player const *, Squadron const *, SquadronTactics const);
    SquadronTactics const m_tactics; // 0xC
    Squadron const *m_squadron; // 0x10
    _inline ~GameEvent_TacticsSet(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_TacticsSet) == 20, "Invalid GameEvent_TacticsSet size");

class GameEvent_EngagementRangeSet :
    public GameEventSys::Event
{
public:
    GameEvent_EngagementRangeSet(GameEvent_EngagementRangeSet const &); /* compiler_generated() */
    GameEvent_EngagementRangeSet(Player const *, Squadron const *, SquadronEngangementRanges const);
    SquadronEngangementRanges const m_rangeSetting; // 0xC
    Squadron const *m_squadron; // 0x10
    ~GameEvent_EngagementRangeSet(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_EngagementRangeSet) == 20, "Invalid GameEvent_EngagementRangeSet size");

class GameEvent_EngagementRangeForceSet :
    public GameEventSys::Event
{
public:
    GameEvent_EngagementRangeForceSet(GameEvent_EngagementRangeForceSet const &); /* compiler_generated() */
    GameEvent_EngagementRangeForceSet(Player const *, Squadron const *, bool const);
    bool const m_force; // 0xC
    Squadron const *m_squadron; // 0x10
    ~GameEvent_EngagementRangeForceSet(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_EngagementRangeForceSet) == 20, "Invalid GameEvent_EngagementRangeForceSet size");

class NDGameEvent_HotkeyGroupSelected :
    public GameEventSys::Event
{
public:
    enum KeyAction
    {
        Selected = 1, // 0x0001
        Created = 2, // 0x0002
        Reinforced = 3, // 0x0003
    };
    NDGameEvent_HotkeyGroupSelected(NDGameEvent_HotkeyGroupSelected const &); /* compiler_generated() */
    _inline NDGameEvent_HotkeyGroupSelected(Player const *, Selection const &, unsigned __int32 const, NDGameEvent_HotkeyGroupSelected::KeyAction const);
    _inline NDGameEvent_HotkeyGroupSelected(Player const *, Selection const &, unsigned __int32 const);
    Selection const &m_selected; // 0xC
    unsigned __int32 const m_groupNumber; // 0x10
    NDGameEvent_HotkeyGroupSelected::KeyAction const m_action; // 0x14
    _inline ~NDGameEvent_HotkeyGroupSelected(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_HotkeyGroupSelected) == 24, "Invalid NDGameEvent_HotkeyGroupSelected size");

class NDGameEvent_ShipsSelected :
    public GameEventSys::Event
{
public:
    NDGameEvent_ShipsSelected(NDGameEvent_ShipsSelected const &); /* compiler_generated() */
    _inline NDGameEvent_ShipsSelected(Player const *, Selection const &);
    Selection const &m_selected; // 0xC
    _inline ~NDGameEvent_ShipsSelected(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_ShipsSelected) == 16, "Invalid NDGameEvent_ShipsSelected size");

class NDGameEvent_SubSystemSelected :
    public GameEventSys::Event
{
public:
    NDGameEvent_SubSystemSelected(NDGameEvent_SubSystemSelected const &); /* compiler_generated() */
    _inline NDGameEvent_SubSystemSelected(Player const *, Selection const &);
    Selection const &m_selected; // 0xC
    _inline ~NDGameEvent_SubSystemSelected(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_SubSystemSelected) == 16, "Invalid NDGameEvent_SubSystemSelected size");

class GameEvent_StrikeGroupFormed :
    public GameEventSys::Event
{
public:
    GameEvent_StrikeGroupFormed(GameEvent_StrikeGroupFormed const &); /* compiler_generated() */
    _inline GameEvent_StrikeGroupFormed(Player const *, StrikeGroup const *);
    StrikeGroup const *m_strikeGroup; // 0xC
    _inline ~GameEvent_StrikeGroupFormed(); /* compiler_generated() */
    GameEvent_StrikeGroupFormed &operator=(GameEvent_StrikeGroupFormed const &); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_StrikeGroupFormed) == 16, "Invalid GameEvent_StrikeGroupFormed size");

class GameEvent_Combat :
    public GameEventSys::Event
{
public:
    enum CombatEvent
    {
        Retaliating = 0,
        UnderFireNeedOrders,
        AttackComplete,
        TakingLightDamage,
        UnderAttack,
        TakingHeavyDamage,
        Damaged,
        HitByMine,
        CriticallyDamaged,
        CombatManeuver,
        BeingAttackedFromSide,
        BeingAttackedFromRear,
        SquadronDownToOneShip,
    };
    GameEvent_Combat(GameEvent_Combat const &); /* compiler_generated() */
    _inline GameEvent_Combat(GameEvent_Combat::CombatEvent const, Player const *, Squadron const *, Selection const &);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Squadron const *m_squadron; // 0xC
    Selection const &m_enemies; // 0x10
    GameEvent_Combat::CombatEvent const m_eventType; // 0x14
    _inline ~GameEvent_Combat(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_Combat) == 24, "Invalid GameEvent_Combat size");

class GameEvent_ShipRepairs :
    public GameEventSys::Event
{
public:
    enum RepairStatus
    {
        Starting = 0,
        Working,
        Finished,
    };
    GameEvent_ShipRepairs(GameEvent_ShipRepairs const &); /* compiler_generated() */
    _inline GameEvent_ShipRepairs(Player const *, Ship const *, Ship const *, GameEvent_ShipRepairs::RepairStatus);
    Ship const *m_healer; // 0xC
    Ship const *m_target; // 0x10
    GameEvent_ShipRepairs::RepairStatus const m_status; // 0x14
    _inline ~GameEvent_ShipRepairs(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ShipRepairs) == 24, "Invalid GameEvent_ShipRepairs size");

class GameEvent_ResourceCollection :
    public GameEventSys::Event
{
public:
    enum CollectionStatus
    {
        CollectorFull = 0,
        ResourcesTransferred,
        ResourcesDepleted,
        LocalDepletedMovingOn,
        LocalDepletedIdling,
        TooBusy,
        IdleForLongtime,
        EnemyDetected,
    };
    GameEvent_ResourceCollection(GameEvent_ResourceCollection const &); /* compiler_generated() */
    _inline GameEvent_ResourceCollection(Player const *, Ship const *, GameEvent_ResourceCollection::CollectionStatus);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    Ship const *m_collector; // 0xC
    GameEvent_ResourceCollection::CollectionStatus const m_status; // 0x10
    _inline ~GameEvent_ResourceCollection(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_ResourceCollection) == 20, "Invalid GameEvent_ResourceCollection size");

class GameEvent_SpecialSpeech :
    public GameEventSys::Event
{
public:
    enum SpecialEvent
    {
        MissileIncoming = 0,
        DefenseFieldEncountered,
        CaptureStarted,
        EnemyCaptureStarted,
        CaptureHalfway,
        CaptureUnitcap,
        StrikeGroupDisband,
        StrikeGroupNewFormation,
    };
    GameEvent_SpecialSpeech(GameEvent_SpecialSpeech const &); /* compiler_generated() */
    _inline GameEvent_SpecialSpeech(GameEvent_SpecialSpeech::SpecialEvent, Player const *, Ship const *, Ship const *);
    Ship const *m_shipA; // 0xC
    Ship const *m_shipB; // 0x10
    GameEvent_SpecialSpeech::SpecialEvent const m_evt; // 0x14
    _inline ~GameEvent_SpecialSpeech(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_SpecialSpeech) == 24, "Invalid GameEvent_SpecialSpeech size");

class GameEvent_SubSystemEvent :
    public GameEventSys::Event
{
public:
    enum SubsysEvent
    {
        SubsystemUnderAttack = 0,
        SubsystemDamaged,
        SubsystemDestroyed,
        SubsystemOperational,
    };
    GameEvent_SubSystemEvent(GameEvent_SubSystemEvent const &); /* compiler_generated() */
    _inline GameEvent_SubSystemEvent(GameEvent_SubSystemEvent::SubsysEvent, Player const *, SubSystem const *, Ship const *);
    SubSystem const *m_pSubsystem; // 0xC
    Ship const *m_ship; // 0x10
    GameEvent_SubSystemEvent::SubsysEvent const m_evtType; // 0x14
    _inline ~GameEvent_SubSystemEvent(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_SubSystemEvent) == 24, "Invalid GameEvent_SubSystemEvent size");

class GameEvent_UnitCapsReached :
    public GameEventSys::Event
{
public:
    GameEvent_UnitCapsReached(GameEvent_UnitCapsReached const &); /* compiler_generated() */
    GameEvent_UnitCapsReached(Player const *, __int32, __int32);
    __int32 const m_ucShipTypeId; // 0xC
    __int32 const m_ucFamilyId; // 0x10
    ~GameEvent_UnitCapsReached(); /* compiler_generated() */
};
static_assert(sizeof(GameEvent_UnitCapsReached) == 20, "Invalid GameEvent_UnitCapsReached size");

class NDGameEvent_BattleStatus :
    public GameEventSys::Event
{
public:
    NDGameEvent_BattleStatus(NDGameEvent_BattleStatus const &); /* compiler_generated() */
    _inline NDGameEvent_BattleStatus(Player const *, float const, vector3 const &, bool);
    float const m_battleValue; // 0xC
    vector3 const &m_battleOrigin; // 0x10
    bool const m_startOfCombat; // 0x14
    _inline ~NDGameEvent_BattleStatus(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_BattleStatus) == 24, "Invalid NDGameEvent_BattleStatus size");

class NDGameEvent_Objectives :
    public GameEventSys::Event
{
public:
    enum EventType
    {
        NewObjective = 0,
        CompletedObjective,
        FailedObjective,
    };
    NDGameEvent_Objectives(NDGameEvent_Objectives const &); /* compiler_generated() */
    _inline NDGameEvent_Objectives(Player const *, NDGameEvent_Objectives::EventType, Objective *);
    virtual bool GetString(wchar_t *, unsigned __int32) const override;
    NDGameEvent_Objectives::EventType const m_type; // 0xC
    Objective const *m_objective; // 0x10
    _inline ~NDGameEvent_Objectives(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_Objectives) == 20, "Invalid NDGameEvent_Objectives size");

class NDGameEvent_RenderModel :
    public GameEventSys::Event
{
public:
    NDGameEvent_RenderModel(NDGameEvent_RenderModel const &); /* compiler_generated() */
    _inline NDGameEvent_RenderModel(char const *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const m_eventStr; // 0xC
    _inline ~NDGameEvent_RenderModel(); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_RenderModel) == 36, "Invalid NDGameEvent_RenderModel size");

class NDGameEvent_BuildingUnit :
    public GameEventSys::Event
{
public:
    NDGameEvent_BuildingUnit(NDGameEvent_BuildingUnit const &); /* compiler_generated() */
    _inline NDGameEvent_BuildingUnit(Player const *, Ship const *);
    Ship const *m_ship; // 0xC
    _inline ~NDGameEvent_BuildingUnit(); /* compiler_generated() */
    NDGameEvent_BuildingUnit &operator=(NDGameEvent_BuildingUnit const &); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_BuildingUnit) == 16, "Invalid NDGameEvent_BuildingUnit size");

class NDGameEvent_PlayerNameChanged :
    public GameEventSys::Event
{
public:
    NDGameEvent_PlayerNameChanged(NDGameEvent_PlayerNameChanged const &); /* compiler_generated() */
    _inline NDGameEvent_PlayerNameChanged(Player const *);
    Player const *m_player; // 0xC
    _inline ~NDGameEvent_PlayerNameChanged(); /* compiler_generated() */
    NDGameEvent_PlayerNameChanged &operator=(NDGameEvent_PlayerNameChanged const &); /* compiler_generated() */
};
static_assert(sizeof(NDGameEvent_PlayerNameChanged) == 16, "Invalid NDGameEvent_PlayerNameChanged size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_5CE61A(GameEvent_BuildUnitComplete *const, Player const *, Ship const *, Squadron const *);
_inline GameEvent_BuildUnitComplete::GameEvent_BuildUnitComplete(Player const *, Ship const *, Squadron const *) // 0x5CE61A
{
    mangled_assert("??0GameEvent_BuildUnitComplete@@QAE@PBVPlayer@@PBVShip@@PBVSquadron@@@Z");
    todo("implement");
    _sub_5CE61A(this, arg, arg, arg);
}

_extern _sub_5CE5CC(GameEvent_BuildSubSystemComplete *const, Player const *, Ship const *, SubSystem *);
_inline GameEvent_BuildSubSystemComplete::GameEvent_BuildSubSystemComplete(Player const *, Ship const *, SubSystem *) // 0x5CE5CC
{
    mangled_assert("??0GameEvent_BuildSubSystemComplete@@QAE@PBVPlayer@@PBVShip@@PAVSubSystem@@@Z");
    todo("implement");
    _sub_5CE5CC(this, arg, arg, arg);
}

_extern _sub_5CE641(GameEvent_BuildUnitStart *const, Player const *, Ship const *, BuildData *);
_inline GameEvent_BuildUnitStart::GameEvent_BuildUnitStart(Player const *, Ship const *, BuildData *) // 0x5CE641
{
    mangled_assert("??0GameEvent_BuildUnitStart@@QAE@PBVPlayer@@PBVShip@@PAVBuildData@@@Z");
    todo("implement");
    _sub_5CE641(this, arg, arg, arg);
}

_extern _sub_5CE5F3(GameEvent_BuildUnitCancel *const, Player const *, Ship const *, BuildData *);
_inline GameEvent_BuildUnitCancel::GameEvent_BuildUnitCancel(Player const *, Ship const *, BuildData *) // 0x5CE5F3
{
    mangled_assert("??0GameEvent_BuildUnitCancel@@QAE@PBVPlayer@@PBVShip@@PAVBuildData@@@Z");
    todo("implement");
    _sub_5CE5F3(this, arg, arg, arg);
}

_extern _sub_5CE668(GameEvent_BuildUnitUnitCaps *const, Player const *, Ship const *, BuildData *);
_inline GameEvent_BuildUnitUnitCaps::GameEvent_BuildUnitUnitCaps(Player const *, Ship const *, BuildData *) // 0x5CE668
{
    mangled_assert("??0GameEvent_BuildUnitUnitCaps@@QAE@PBVPlayer@@PBVShip@@PAVBuildData@@@Z");
    todo("implement");
    _sub_5CE668(this, arg, arg, arg);
}

_extern _sub_5CE59E(GameEvent_BuildAvailable *const, Player const *, GameEvent_BuildAvailable::BuildEvent, Ship const *, std::list<unsigned int,std::allocator<unsigned int> > const &);
_inline GameEvent_BuildAvailable::GameEvent_BuildAvailable(Player const *, GameEvent_BuildAvailable::BuildEvent, Ship const *, std::list<unsigned int,std::allocator<unsigned int> > const &) // 0x5CE59E
{
    mangled_assert("??0GameEvent_BuildAvailable@@QAE@PBVPlayer@@W4BuildEvent@0@PBVShip@@ABV?$list@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
    _sub_5CE59E(this, arg, arg, arg, arg);
}

_extern _sub_4ED02A(GameEvent_Research *const, Player const *, GameEvent_Research::ResearchEvent, ResearchData const &);
_inline GameEvent_Research::GameEvent_Research(Player const *, GameEvent_Research::ResearchEvent, ResearchData const &) // 0x4ED02A
{
    mangled_assert("??0GameEvent_Research@@QAE@PBVPlayer@@W4ResearchEvent@0@ABVResearchData@@@Z");
    todo("implement");
    _sub_4ED02A(this, arg, arg, arg);
}

_extern _sub_61D354(GameEvent_PlayerKilled *const, Player const *, __int32);
_inline GameEvent_PlayerKilled::GameEvent_PlayerKilled(Player const *, __int32) // 0x61D354
{
    mangled_assert("??0GameEvent_PlayerKilled@@QAE@PBVPlayer@@H@Z");
    todo("implement");
    _sub_61D354(this, arg, arg);
}

_extern _sub_61D32D(GameEvent_AddSquadronToPlayer *const, Player const *, Squadron &, bool);
_inline GameEvent_AddSquadronToPlayer::GameEvent_AddSquadronToPlayer(Player const *, Squadron &, bool) // 0x61D32D
{
    mangled_assert("??0GameEvent_AddSquadronToPlayer@@QAE@PBVPlayer@@AAVSquadron@@_N@Z");
    todo("implement");
    _sub_61D32D(this, arg, arg, arg);
}

_extern _sub_61D378(GameEvent_RemoveSquadronFromPlayer *const, Player const *, Squadron &);
_inline GameEvent_RemoveSquadronFromPlayer::GameEvent_RemoveSquadronFromPlayer(Player const *, Squadron &) // 0x61D378
{
    mangled_assert("??0GameEvent_RemoveSquadronFromPlayer@@QAE@PBVPlayer@@AAVSquadron@@@Z");
    todo("implement");
    _sub_61D378(this, arg, arg);
}

_extern _sub_61D30D(GameEvent_AddShipToSquadron *const, Player const *, Ship *);
_inline GameEvent_AddShipToSquadron::GameEvent_AddShipToSquadron(Player const *, Ship *) // 0x61D30D
{
    mangled_assert("??0GameEvent_AddShipToSquadron@@QAE@PBVPlayer@@PAVShip@@@Z");
    todo("implement");
    _sub_61D30D(this, arg, arg);
}

_extern _sub_4AC0B9(GameEvent_ShipDocked *const, Player const *, SobID const &, SobID const &);
_inline GameEvent_ShipDocked::GameEvent_ShipDocked(Player const *, SobID const &, SobID const &) // 0x4AC0B9
{
    mangled_assert("??0GameEvent_ShipDocked@@QAE@PBVPlayer@@ABVSobID@@1@Z");
    todo("implement");
    _sub_4AC0B9(this, arg, arg, arg);
}

_extern _sub_4C0980(GameEvent_CloudEvent *const, Player const *, Ship const *, GameEvent_CloudEvent::CloudEvent const);
_inline GameEvent_CloudEvent::GameEvent_CloudEvent(Player const *, Ship const *, GameEvent_CloudEvent::CloudEvent const) // 0x4C0980
{
    mangled_assert("??0GameEvent_CloudEvent@@QAE@PBVPlayer@@PBVShip@@W4CloudEvent@0@@Z");
    todo("implement");
    _sub_4C0980(this, arg, arg, arg);
}

_extern _sub_6A1D7B(GameEvent_ShipLaunched *const, Player const *, SobID const &, SobID const &);
_inline GameEvent_ShipLaunched::GameEvent_ShipLaunched(Player const *, SobID const &, SobID const &) // 0x6A1D7B
{
    mangled_assert("??0GameEvent_ShipLaunched@@QAE@PBVPlayer@@ABVSobID@@1@Z");
    todo("implement");
    _sub_6A1D7B(this, arg, arg, arg);
}

_extern _sub_484509(GameEvent_ShipCaptured *const, Player const *, Ship const *, Ship const *);
_inline GameEvent_ShipCaptured::GameEvent_ShipCaptured(Player const *, Ship const *, Ship const *) // 0x484509
{
    mangled_assert("??0GameEvent_ShipCaptured@@QAE@PBVPlayer@@PBVShip@@1@Z");
    todo("implement");
    _sub_484509(this, arg, arg, arg);
}

_extern _sub_6A9CBF(GameEvent_ShipCaptureFailed *const, Player const *, Ship const *, Ship const *);
_inline GameEvent_ShipCaptureFailed::GameEvent_ShipCaptureFailed(Player const *, Ship const *, Ship const *) // 0x6A9CBF
{
    mangled_assert("??0GameEvent_ShipCaptureFailed@@QAE@PBVPlayer@@PBVShip@@1@Z");
    todo("implement");
    _sub_6A9CBF(this, arg, arg, arg);
}

_extern _sub_5DBFC4(GameEvent_PlayerAlliance *const, Player const *, Player const *, GameEvent_PlayerAlliance::AllianceEventData, __int32);
_inline GameEvent_PlayerAlliance::GameEvent_PlayerAlliance(Player const *, Player const *, GameEvent_PlayerAlliance::AllianceEventData, __int32) // 0x5DBFC4
{
    mangled_assert("??0GameEvent_PlayerAlliance@@QAE@PBVPlayer@@0W4AllianceEventData@0@H@Z");
    todo("implement");
    _sub_5DBFC4(this, arg, arg, arg, arg);
}

_extern _sub_4BDFD5(GameEvent_ShipRemoved *const, Player const *, Sob const *, __int32, unsigned __int32);
_inline GameEvent_ShipRemoved::GameEvent_ShipRemoved(Player const *, Sob const *, __int32, unsigned __int32) // 0x4BDFD5
{
    mangled_assert("??0GameEvent_ShipRemoved@@QAE@PBVPlayer@@PBVSob@@HI@Z");
    todo("implement");
    _sub_4BDFD5(this, arg, arg, arg, arg);
}

_extern _sub_4B77B0(GameEvent_CommandGiven *const, CommandType const, Player const *, Squadron const *, Selection const &);
_inline GameEvent_CommandGiven::GameEvent_CommandGiven(CommandType const, Player const *, Squadron const *, Selection const &) // 0x4B77B0
{
    mangled_assert("??0GameEvent_CommandGiven@@QAE@W4CommandType@@PBVPlayer@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
    _sub_4B77B0(this, arg, arg, arg, arg);
}

_extern _sub_4B7789(GameEvent_CommandCompelete *const, CommandType const, Player const *, Squadron const *);
_inline GameEvent_CommandCompelete::GameEvent_CommandCompelete(CommandType const, Player const *, Squadron const *) // 0x4B7789
{
    mangled_assert("??0GameEvent_CommandCompelete@@QAE@W4CommandType@@PBVPlayer@@PBVSquadron@@@Z");
    todo("implement");
    _sub_4B7789(this, arg, arg, arg);
}

_extern _sub_4B7762(GameEvent_CommandCancelled *const, CommandType const, Player const *, Squadron const *);
_inline GameEvent_CommandCancelled::GameEvent_CommandCancelled(CommandType const, Player const *, Squadron const *) // 0x4B7762
{
    mangled_assert("??0GameEvent_CommandCancelled@@QAE@W4CommandType@@PBVPlayer@@PBVSquadron@@@Z");
    todo("implement");
    _sub_4B7762(this, arg, arg, arg);
}

_extern _sub_6AC23E(GameEvent_CommandCouldNotBeIssued *const, CommandType const, Player const *, Squadron const *);
_inline GameEvent_CommandCouldNotBeIssued::GameEvent_CommandCouldNotBeIssued(CommandType const, Player const *, Squadron const *) // 0x6AC23E
{
    mangled_assert("??0GameEvent_CommandCouldNotBeIssued@@QAE@W4CommandType@@PBVPlayer@@PBVSquadron@@@Z");
    todo("implement");
    _sub_6AC23E(this, arg, arg, arg);
}

_extern _sub_4B7805(GameEvent_SquadronSpotted *const, Player const *, Squadron const *);
_inline GameEvent_SquadronSpotted::GameEvent_SquadronSpotted(Player const *, Squadron const *) // 0x4B7805
{
    mangled_assert("??0GameEvent_SquadronSpotted@@QAE@PBVPlayer@@PBVSquadron@@@Z");
    todo("implement");
    _sub_4B7805(this, arg, arg);
}

_extern _sub_484DE2(GameEvent_CloakingStatusChange *const, Player const *, Ship const *, GameEvent_CloakingStatusChange::CloakingStatus);
_inline GameEvent_CloakingStatusChange::GameEvent_CloakingStatusChange(Player const *, Ship const *, GameEvent_CloakingStatusChange::CloakingStatus) // 0x484DE2
{
    mangled_assert("??0GameEvent_CloakingStatusChange@@QAE@PBVPlayer@@PBVShip@@W4CloakingStatus@0@@Z");
    todo("implement");
    _sub_484DE2(this, arg, arg, arg);
}

_extern _sub_4B77DE(GameEvent_HyperspaceStatus *const, Player const *, Squadron const *, GameEvent_HyperspaceStatus::HyperspaceStatus);
_inline GameEvent_HyperspaceStatus::GameEvent_HyperspaceStatus(Player const *, Squadron const *, GameEvent_HyperspaceStatus::HyperspaceStatus) // 0x4B77DE
{
    mangled_assert("??0GameEvent_HyperspaceStatus@@QAE@PBVPlayer@@PBVSquadron@@W4HyperspaceStatus@0@@Z");
    todo("implement");
    _sub_4B77DE(this, arg, arg, arg);
}

_extern _sub_485566(GameEvent_DefenseFieldStatusChange *const, Player const *, Ship const *, GameEvent_DefenseFieldStatusChange::DefenseFieldStatus);
_inline GameEvent_DefenseFieldStatusChange::GameEvent_DefenseFieldStatusChange(Player const *, Ship const *, GameEvent_DefenseFieldStatusChange::DefenseFieldStatus) // 0x485566
{
    mangled_assert("??0GameEvent_DefenseFieldStatusChange@@QAE@PBVPlayer@@PBVShip@@W4DefenseFieldStatus@0@@Z");
    todo("implement");
    _sub_485566(this, arg, arg, arg);
}

_extern _sub_4B7825(GameEvent_TacticsSet *const, Player const *, Squadron const *, SquadronTactics const);
_inline GameEvent_TacticsSet::GameEvent_TacticsSet(Player const *, Squadron const *, SquadronTactics const) // 0x4B7825
{
    mangled_assert("??0GameEvent_TacticsSet@@QAE@PBVPlayer@@PBVSquadron@@W4SquadronTactics@@@Z");
    todo("implement");
    _sub_4B7825(this, arg, arg, arg);
}

_extern _sub_451B58(NDGameEvent_HotkeyGroupSelected *const, Player const *, Selection const &, unsigned __int32 const);
_inline NDGameEvent_HotkeyGroupSelected::NDGameEvent_HotkeyGroupSelected(Player const *, Selection const &, unsigned __int32 const) // 0x451B58
{
    mangled_assert("??0NDGameEvent_HotkeyGroupSelected@@QAE@PBVPlayer@@ABVSelection@@I@Z");
    todo("implement");
    _sub_451B58(this, arg, arg, arg);
}

_extern _sub_451B86(NDGameEvent_HotkeyGroupSelected *const, Player const *, Selection const &, unsigned __int32 const, NDGameEvent_HotkeyGroupSelected::KeyAction const);
_inline NDGameEvent_HotkeyGroupSelected::NDGameEvent_HotkeyGroupSelected(Player const *, Selection const &, unsigned __int32 const, NDGameEvent_HotkeyGroupSelected::KeyAction const) // 0x451B86
{
    mangled_assert("??0NDGameEvent_HotkeyGroupSelected@@QAE@PBVPlayer@@ABVSelection@@IW4KeyAction@0@@Z");
    todo("implement");
    _sub_451B86(this, arg, arg, arg, arg);
}

_extern _sub_45CDFF(NDGameEvent_ShipsSelected *const, Player const *, Selection const &);
_inline NDGameEvent_ShipsSelected::NDGameEvent_ShipsSelected(Player const *, Selection const &) // 0x45CDFF
{
    mangled_assert("??0NDGameEvent_ShipsSelected@@QAE@PBVPlayer@@ABVSelection@@@Z");
    todo("implement");
    _sub_45CDFF(this, arg, arg);
}

_extern _sub_45CE1F(NDGameEvent_SubSystemSelected *const, Player const *, Selection const &);
_inline NDGameEvent_SubSystemSelected::NDGameEvent_SubSystemSelected(Player const *, Selection const &) // 0x45CE1F
{
    mangled_assert("??0NDGameEvent_SubSystemSelected@@QAE@PBVPlayer@@ABVSelection@@@Z");
    todo("implement");
    _sub_45CE1F(this, arg, arg);
}

_extern _sub_69037B(GameEvent_StrikeGroupFormed *const, Player const *, StrikeGroup const *);
_inline GameEvent_StrikeGroupFormed::GameEvent_StrikeGroupFormed(Player const *, StrikeGroup const *) // 0x69037B
{
    mangled_assert("??0GameEvent_StrikeGroupFormed@@QAE@PBVPlayer@@PBVStrikeGroup@@@Z");
    todo("implement");
    _sub_69037B(this, arg, arg);
}

_extern _sub_4868BF(GameEvent_Combat *const, GameEvent_Combat::CombatEvent const, Player const *, Squadron const *, Selection const &);
_inline GameEvent_Combat::GameEvent_Combat(GameEvent_Combat::CombatEvent const, Player const *, Squadron const *, Selection const &) // 0x4868BF
{
    mangled_assert("??0GameEvent_Combat@@QAE@W4CombatEvent@0@PBVPlayer@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
    _sub_4868BF(this, arg, arg, arg, arg);
}

_extern _sub_6A110F(GameEvent_ShipRepairs *const, Player const *, Ship const *, Ship const *, GameEvent_ShipRepairs::RepairStatus);
_inline GameEvent_ShipRepairs::GameEvent_ShipRepairs(Player const *, Ship const *, Ship const *, GameEvent_ShipRepairs::RepairStatus) // 0x6A110F
{
    mangled_assert("??0GameEvent_ShipRepairs@@QAE@PBVPlayer@@PBVShip@@1W4RepairStatus@0@@Z");
    todo("implement");
    _sub_6A110F(this, arg, arg, arg, arg);
}

_extern _sub_489C33(GameEvent_ResourceCollection *const, Player const *, Ship const *, GameEvent_ResourceCollection::CollectionStatus);
_inline GameEvent_ResourceCollection::GameEvent_ResourceCollection(Player const *, Ship const *, GameEvent_ResourceCollection::CollectionStatus) // 0x489C33
{
    mangled_assert("??0GameEvent_ResourceCollection@@QAE@PBVPlayer@@PBVShip@@W4CollectionStatus@0@@Z");
    todo("implement");
    _sub_489C33(this, arg, arg, arg);
}

_extern _sub_484530(GameEvent_SpecialSpeech *const, GameEvent_SpecialSpeech::SpecialEvent, Player const *, Ship const *, Ship const *);
_inline GameEvent_SpecialSpeech::GameEvent_SpecialSpeech(GameEvent_SpecialSpeech::SpecialEvent, Player const *, Ship const *, Ship const *) // 0x484530
{
    mangled_assert("??0GameEvent_SpecialSpeech@@QAE@W4SpecialEvent@0@PBVPlayer@@PBVShip@@2@Z");
    todo("implement");
    _sub_484530(this, arg, arg, arg, arg);
}

_extern _sub_4F02C1(GameEvent_SubSystemEvent *const, GameEvent_SubSystemEvent::SubsysEvent, Player const *, SubSystem const *, Ship const *);
_inline GameEvent_SubSystemEvent::GameEvent_SubSystemEvent(GameEvent_SubSystemEvent::SubsysEvent, Player const *, SubSystem const *, Ship const *) // 0x4F02C1
{
    mangled_assert("??0GameEvent_SubSystemEvent@@QAE@W4SubsysEvent@0@PBVPlayer@@PBVSubSystem@@PBVShip@@@Z");
    todo("implement");
    _sub_4F02C1(this, arg, arg, arg, arg);
}

_extern _sub_634007(NDGameEvent_BattleStatus *const, Player const *, float const, vector3 const &, bool);
_inline NDGameEvent_BattleStatus::NDGameEvent_BattleStatus(Player const *, float const, vector3 const &, bool) // 0x634007
{
    mangled_assert("??0NDGameEvent_BattleStatus@@QAE@PBVPlayer@@MABVvector3@@_N@Z");
    todo("implement");
    _sub_634007(this, arg, arg, arg, arg);
}

_extern _sub_610751(NDGameEvent_Objectives *const, Player const *, NDGameEvent_Objectives::EventType, Objective *);
_inline NDGameEvent_Objectives::NDGameEvent_Objectives(Player const *, NDGameEvent_Objectives::EventType, Objective *) // 0x610751
{
    mangled_assert("??0NDGameEvent_Objectives@@QAE@PBVPlayer@@W4EventType@0@PAVObjective@@@Z");
    todo("implement");
    _sub_610751(this, arg, arg, arg);
}

_extern _sub_51E320(NDGameEvent_RenderModel *const, char const *);
_inline NDGameEvent_RenderModel::NDGameEvent_RenderModel(char const *) // 0x51E320
{
    mangled_assert("??0NDGameEvent_RenderModel@@QAE@PBD@Z");
    todo("implement");
    _sub_51E320(this, arg);
}

_extern _sub_5CE68F(NDGameEvent_BuildingUnit *const, Player const *, Ship const *);
_inline NDGameEvent_BuildingUnit::NDGameEvent_BuildingUnit(Player const *, Ship const *) // 0x5CE68F
{
    mangled_assert("??0NDGameEvent_BuildingUnit@@QAE@PBVPlayer@@PBVShip@@@Z");
    todo("implement");
    _sub_5CE68F(this, arg, arg);
}

_extern _sub_61D398(NDGameEvent_PlayerNameChanged *const, Player const *);
_inline NDGameEvent_PlayerNameChanged::NDGameEvent_PlayerNameChanged(Player const *) // 0x61D398
{
    mangled_assert("??0NDGameEvent_PlayerNameChanged@@QAE@PBVPlayer@@@Z");
    todo("implement");
    _sub_61D398(this, arg);
}

/* ---------- private code */

#endif // __GAMEEVENTDEFS_H__
#endif
