#if 0
#ifndef __ORDERS_H__
#define __ORDERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AttackOrder :
    public SquadronList2SelectionBase
{
public:
    typedef SquadronList2SelectionBase SuperClass;
    AttackOrder(AttackOrder const &); /* compiler_generated() */
    AttackOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline AttackOrder(unsigned __int32, SquadronList const &, Selection const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    bool m_specialWeaponsAttack; // 0x60
public:
    virtual _inline ~AttackOrder() override; /* compiler_generated() */
    AttackOrder &operator=(AttackOrder const &); /* compiler_generated() */
};
static_assert(sizeof(AttackOrder) == 100, "Invalid AttackOrder size");

class ResourceOrder :
    public SquadronList2SelectionBase
{
public:
    typedef SquadronList2SelectionBase SuperClass;
    ResourceOrder(ResourceOrder const &); /* compiler_generated() */
    _inline ResourceOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ResourceOrder(unsigned __int32, SquadronList const &, Selection const &);
    virtual void Execute() const override;
    virtual _inline ~ResourceOrder() override; /* compiler_generated() */
    ResourceOrder &operator=(ResourceOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceOrder) == 96, "Invalid ResourceOrder size");

class GuardOrder :
    public SquadronList2SelectionBase
{
public:
    typedef SquadronList2SelectionBase SuperClass;
    GuardOrder(GuardOrder const &); /* compiler_generated() */
    _inline GuardOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline GuardOrder(unsigned __int32, SquadronList const &, Selection const &);
    virtual void Execute() const override;
    virtual _inline ~GuardOrder() override; /* compiler_generated() */
    GuardOrder &operator=(GuardOrder const &); /* compiler_generated() */
};
static_assert(sizeof(GuardOrder) == 96, "Invalid GuardOrder size");

class RepairOrder :
    public SquadronList2SelectionBase
{
public:
    typedef SquadronList2SelectionBase SuperClass;
    RepairOrder(RepairOrder const &); /* compiler_generated() */
    _inline RepairOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline RepairOrder(unsigned __int32, SquadronList const &, Selection const &);
    virtual void Execute() const override;
    virtual _inline ~RepairOrder() override; /* compiler_generated() */
    RepairOrder &operator=(RepairOrder const &); /* compiler_generated() */
};
static_assert(sizeof(RepairOrder) == 96, "Invalid RepairOrder size");

class DockOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    DockOrder(DockOrder const &); /* compiler_generated() */
    _inline DockOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline DockOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~DockOrder() override; /* compiler_generated() */
    DockOrder &operator=(DockOrder const &); /* compiler_generated() */
};
static_assert(sizeof(DockOrder) == 56, "Invalid DockOrder size");

class ParadeOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    ParadeOrder(ParadeOrder const &); /* compiler_generated() */
    _inline ParadeOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ParadeOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~ParadeOrder() override; /* compiler_generated() */
    ParadeOrder &operator=(ParadeOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeOrder) == 56, "Invalid ParadeOrder size");

class CaptureOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    CaptureOrder(CaptureOrder const &); /* compiler_generated() */
    _inline CaptureOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline CaptureOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~CaptureOrder() override; /* compiler_generated() */
    CaptureOrder &operator=(CaptureOrder const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureOrder) == 56, "Invalid CaptureOrder size");

class SalvageOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    SalvageOrder(SalvageOrder const &); /* compiler_generated() */
    _inline SalvageOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SalvageOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~SalvageOrder() override; /* compiler_generated() */
    SalvageOrder &operator=(SalvageOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageOrder) == 56, "Invalid SalvageOrder size");

class HyperspaceViaGateOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    HyperspaceViaGateOrder(HyperspaceViaGateOrder const &); /* compiler_generated() */
    _inline HyperspaceViaGateOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline HyperspaceViaGateOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~HyperspaceViaGateOrder() override; /* compiler_generated() */
    HyperspaceViaGateOrder &operator=(HyperspaceViaGateOrder const &); /* compiler_generated() */
};
static_assert(sizeof(HyperspaceViaGateOrder) == 56, "Invalid HyperspaceViaGateOrder size");

class ToggleAutoLaunchOrder :
    public SobOrderBase
{
public:
    typedef SobOrderBase SuperClass;
    ToggleAutoLaunchOrder(ToggleAutoLaunchOrder const &); /* compiler_generated() */
    _inline ToggleAutoLaunchOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ToggleAutoLaunchOrder(unsigned __int32, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~ToggleAutoLaunchOrder() override; /* compiler_generated() */
    ToggleAutoLaunchOrder &operator=(ToggleAutoLaunchOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ToggleAutoLaunchOrder) == 20, "Invalid ToggleAutoLaunchOrder size");

class HaltOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    HaltOrder(HaltOrder const &); /* compiler_generated() */
    _inline HaltOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline HaltOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual _inline ~HaltOrder() override; /* compiler_generated() */
    HaltOrder &operator=(HaltOrder const &); /* compiler_generated() */
};
static_assert(sizeof(HaltOrder) == 44, "Invalid HaltOrder size");

class FormStrikeGroupOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    FormStrikeGroupOrder(FormStrikeGroupOrder const &); /* compiler_generated() */
    FormStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline FormStrikeGroupOrder(unsigned __int32, unsigned __int32 const, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_strikeID; // 0x2C
public:
    virtual _inline ~FormStrikeGroupOrder() override; /* compiler_generated() */
    FormStrikeGroupOrder &operator=(FormStrikeGroupOrder const &); /* compiler_generated() */
};
static_assert(sizeof(FormStrikeGroupOrder) == 48, "Invalid FormStrikeGroupOrder size");

class AddToStrikeGroupOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    AddToStrikeGroupOrder(AddToStrikeGroupOrder const &); /* compiler_generated() */
    AddToStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline AddToStrikeGroupOrder(unsigned __int32, unsigned __int32 const, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_strikeGroupID; // 0x2C
public:
    virtual _inline ~AddToStrikeGroupOrder() override; /* compiler_generated() */
    AddToStrikeGroupOrder &operator=(AddToStrikeGroupOrder const &); /* compiler_generated() */
};
static_assert(sizeof(AddToStrikeGroupOrder) == 48, "Invalid AddToStrikeGroupOrder size");

class LeaveStrikeGroupOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    LeaveStrikeGroupOrder(LeaveStrikeGroupOrder const &); /* compiler_generated() */
    _inline LeaveStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline LeaveStrikeGroupOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual _inline ~LeaveStrikeGroupOrder() override; /* compiler_generated() */
    LeaveStrikeGroupOrder &operator=(LeaveStrikeGroupOrder const &); /* compiler_generated() */
};
static_assert(sizeof(LeaveStrikeGroupOrder) == 44, "Invalid LeaveStrikeGroupOrder size");

class SensorPingOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    SensorPingOrder(SensorPingOrder const &); /* compiler_generated() */
    _inline SensorPingOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SensorPingOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual _inline ~SensorPingOrder() override; /* compiler_generated() */
    SensorPingOrder &operator=(SensorPingOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SensorPingOrder) == 44, "Invalid SensorPingOrder size");

class ScuttleOrder :
    public SelectionOrderBase
{
public:
    typedef SelectionOrderBase SuperClass;
    ScuttleOrder(ScuttleOrder const &); /* compiler_generated() */
    _inline ScuttleOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ScuttleOrder(unsigned __int32, Selection const &);
    virtual void Execute() const override;
    virtual _inline ~ScuttleOrder() override; /* compiler_generated() */
    ScuttleOrder &operator=(ScuttleOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ScuttleOrder) == 60, "Invalid ScuttleOrder size");

class ResearchOrder :
    public ResearchOrderBase
{
public:
    typedef ResearchOrderBase SuperClass;
    ResearchOrder(ResearchOrder const &); /* compiler_generated() */
    _inline ResearchOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ResearchOrder(unsigned __int32, unsigned __int32);
    virtual void Execute() const override;
    virtual _inline ~ResearchOrder() override; /* compiler_generated() */
    ResearchOrder &operator=(ResearchOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ResearchOrder) == 12, "Invalid ResearchOrder size");

class CancelResearchOrder :
    public ResearchOrderBase
{
public:
    typedef ResearchOrderBase SuperClass;
    CancelResearchOrder(CancelResearchOrder const &); /* compiler_generated() */
    _inline CancelResearchOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline CancelResearchOrder(unsigned __int32, unsigned __int32);
    virtual void Execute() const override;
    virtual _inline ~CancelResearchOrder() override; /* compiler_generated() */
    CancelResearchOrder &operator=(CancelResearchOrder const &); /* compiler_generated() */
};
static_assert(sizeof(CancelResearchOrder) == 12, "Invalid CancelResearchOrder size");

class PauseResearchOrder :
    public Order
{
public:
    typedef Order SuperClass;
    PauseResearchOrder(PauseResearchOrder const &); /* compiler_generated() */
    _inline PauseResearchOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline PauseResearchOrder(unsigned __int32);
    virtual void Execute() const override;
    virtual _inline ~PauseResearchOrder() override; /* compiler_generated() */
    PauseResearchOrder &operator=(PauseResearchOrder const &); /* compiler_generated() */
};
static_assert(sizeof(PauseResearchOrder) == 8, "Invalid PauseResearchOrder size");

struct SquadInfo
{
    Squadron *m_squad; // 0x0
    vector3 m_destination; // 0x4
    vector3 m_position; // 0x10
    bool m_bHasSubDestination; // 0x1C
    vector3 m_subDestination; // 0x20
    _inline SquadInfo(); /* compiler_generated() */
};
static_assert(sizeof(SquadInfo) == 44, "Invalid SquadInfo size");

class MoveOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    MoveOrder(MoveOrder const &); /* compiler_generated() */
    MoveOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    vector3 const &GetDestination() const;
    _inline bool const GetMoveAttack() const;
    void GenerateDestinations(vector3 &, std::vector<SquadInfo,std::allocator<SquadInfo> > &) const;
private:
    vector3 m_destination; // 0x2C
    vector3 m_origin; // 0x38
    bool m_moveAttack; // 0x44
public:
    virtual _inline ~MoveOrder() override; /* compiler_generated() */
    MoveOrder &operator=(MoveOrder const &); /* compiler_generated() */
};
static_assert(sizeof(MoveOrder) == 72, "Invalid MoveOrder size");

class MoveToSobOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    MoveToSobOrder(MoveToSobOrder const &); /* compiler_generated() */
    MoveToSobOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveToSobOrder(unsigned __int32, SquadronList const &, SobID const &, vector3 const &, vector3 const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    vector3 m_offsetInWorldSpace; // 0x38
    vector3 m_origin; // 0x44
public:
    virtual _inline ~MoveToSobOrder() override; /* compiler_generated() */
    MoveToSobOrder &operator=(MoveToSobOrder const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToSobOrder) == 80, "Invalid MoveToSobOrder size");

class BuildOrder :
    public SobOrderBase
{
public:
    typedef SobOrderBase SuperClass;
    BuildOrder(BuildOrder const &); /* compiler_generated() */
    BuildOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline BuildOrder(unsigned __int32, SobID const &, unsigned __int32, bool, SobID const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    _inline SobID const &GetBuilder() const;
    _inline unsigned __int32 GetUnitToBuild() const;
    _inline bool GetBuildFlag() const;
private:
    unsigned __int32 m_unitIdToBuild; // 0x14
    bool m_build; // 0x18
    SobID m_subsystemToRetire; // 0x1C
public:
    virtual _inline ~BuildOrder() override; /* compiler_generated() */
    BuildOrder &operator=(BuildOrder const &); /* compiler_generated() */
};
static_assert(sizeof(BuildOrder) == 40, "Invalid BuildOrder size");

class PauseQueueOrder :
    public SobOrderBase
{
public:
    typedef SobOrderBase SuperClass;
    PauseQueueOrder(PauseQueueOrder const &); /* compiler_generated() */
    PauseQueueOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline PauseQueueOrder(unsigned __int32, SobID const &, BuildType);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    BuildType m_buildQueueType; // 0x14
public:
    virtual _inline ~PauseQueueOrder() override; /* compiler_generated() */
    PauseQueueOrder &operator=(PauseQueueOrder const &); /* compiler_generated() */
};
static_assert(sizeof(PauseQueueOrder) == 24, "Invalid PauseQueueOrder size");

class PauseQueueOrder :
    public SobOrderBase
{
public:
    typedef SobOrderBase SuperClass;
    PauseQueueOrder(PauseQueueOrder const &); /* compiler_generated() */
    PauseQueueOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline PauseQueueOrder(unsigned __int32, SobID const &, BuildType);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    BuildType m_buildQueueType; // 0x14
public:
    virtual _inline ~PauseQueueOrder() override; /* compiler_generated() */
    PauseQueueOrder &operator=(PauseQueueOrder const &); /* compiler_generated() */
};
static_assert(sizeof(PauseQueueOrder) == 24, "Invalid PauseQueueOrder size");

class MoveToTopOfBuildQueue :
    public SobOrderBase
{
public:
    typedef SobOrderBase SuperClass;
    MoveToTopOfBuildQueue(MoveToTopOfBuildQueue const &); /* compiler_generated() */
    MoveToTopOfBuildQueue(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveToTopOfBuildQueue(unsigned __int32, SobID const &, unsigned __int32);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    unsigned __int32 GetBuildJobID() const;
private:
    unsigned __int32 m_buildJobID; // 0x14
public:
    virtual _inline ~MoveToTopOfBuildQueue() override; /* compiler_generated() */
    MoveToTopOfBuildQueue &operator=(MoveToTopOfBuildQueue const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToTopOfBuildQueue) == 24, "Invalid MoveToTopOfBuildQueue size");

class MoveToTopOfResearchQueue :
    public ResearchOrderBase
{
public:
    typedef ResearchOrderBase SuperClass;
    MoveToTopOfResearchQueue(MoveToTopOfResearchQueue const &); /* compiler_generated() */
    MoveToTopOfResearchQueue(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveToTopOfResearchQueue(unsigned __int32, unsigned __int32);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    virtual _inline ~MoveToTopOfResearchQueue() override; /* compiler_generated() */
    MoveToTopOfResearchQueue &operator=(MoveToTopOfResearchQueue const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToTopOfResearchQueue) == 12, "Invalid MoveToTopOfResearchQueue size");

class MoveWaypointOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    MoveWaypointOrder(MoveWaypointOrder const &); /* compiler_generated() */
    MoveWaypointOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveWaypointOrder(unsigned __int32, SquadronList const &, vector3 const &, std::vector<vector3,std::allocator<vector3> > const &, __int32, bool, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    vector3 m_joinPosition; // 0x2C
    std::vector<vector3,std::allocator<vector3> > m_path; // 0x38
    __int32 m_firstPointIndex; // 0x44
    bool m_forward; // 0x48
    bool m_loop; // 0x49
public:
    virtual _inline ~MoveWaypointOrder() override; /* compiler_generated() */
    MoveWaypointOrder &operator=(MoveWaypointOrder const &); /* compiler_generated() */
};
static_assert(sizeof(MoveWaypointOrder) == 76, "Invalid MoveWaypointOrder size");

class MoveTempWaypointOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    MoveTempWaypointOrder(MoveTempWaypointOrder const &); /* compiler_generated() */
    MoveTempWaypointOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline MoveTempWaypointOrder(unsigned __int32, SquadronList const &, std::vector<vector3,std::allocator<vector3> > const &, SobID const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    std::vector<vector3,std::allocator<vector3> > m_path; // 0x38
public:
    virtual _inline ~MoveTempWaypointOrder() override; /* compiler_generated() */
    MoveTempWaypointOrder &operator=(MoveTempWaypointOrder const &); /* compiler_generated() */
};
static_assert(sizeof(MoveTempWaypointOrder) == 68, "Invalid MoveTempWaypointOrder size");

class LaunchOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    LaunchOrder(LaunchOrder const &); /* compiler_generated() */
    LaunchOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline LaunchOrder(unsigned __int32, SquadronList const &, SobID const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    bool m_bFromShipHold; // 0x38
public:
    virtual _inline ~LaunchOrder() override; /* compiler_generated() */
    LaunchOrder &operator=(LaunchOrder const &); /* compiler_generated() */
};
static_assert(sizeof(LaunchOrder) == 60, "Invalid LaunchOrder size");

class PauseOrder :
    public Order
{
public:
    typedef Order SuperClass;
    PauseOrder(PauseOrder const &); /* compiler_generated() */
    PauseOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline PauseOrder(unsigned __int32);
    virtual void Execute() const override;
    virtual _inline ~PauseOrder() override; /* compiler_generated() */
    PauseOrder &operator=(PauseOrder const &); /* compiler_generated() */
};
static_assert(sizeof(PauseOrder) == 8, "Invalid PauseOrder size");

class UnpauseOrder :
    public Order
{
public:
    typedef Order SuperClass;
    UnpauseOrder(UnpauseOrder const &); /* compiler_generated() */
    UnpauseOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline UnpauseOrder(unsigned __int32, unsigned __int32);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_frame; // 0x8
public:
    virtual _inline ~UnpauseOrder() override; /* compiler_generated() */
    UnpauseOrder &operator=(UnpauseOrder const &); /* compiler_generated() */
};
static_assert(sizeof(UnpauseOrder) == 12, "Invalid UnpauseOrder size");

class AllianceOrder :
    public Order
{
public:
    typedef Order SuperClass;
    AllianceOrder(AllianceOrder const &); /* compiler_generated() */
    AllianceOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline AllianceOrder(unsigned __int32, unsigned __int32, AllianceOrderAction);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_ally; // 0x8
    AllianceOrderAction m_action; // 0xC
public:
    virtual _inline ~AllianceOrder() override; /* compiler_generated() */
    AllianceOrder &operator=(AllianceOrder const &); /* compiler_generated() */
};
static_assert(sizeof(AllianceOrder) == 16, "Invalid AllianceOrder size");

class AllianceOrder :
    public Order
{
public:
    typedef Order SuperClass;
    AllianceOrder(AllianceOrder const &); /* compiler_generated() */
    AllianceOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline AllianceOrder(unsigned __int32, unsigned __int32, AllianceOrderAction);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_ally; // 0x8
    AllianceOrderAction m_action; // 0xC
public:
    virtual _inline ~AllianceOrder() override; /* compiler_generated() */
    AllianceOrder &operator=(AllianceOrder const &); /* compiler_generated() */
};
static_assert(sizeof(AllianceOrder) == 16, "Invalid AllianceOrder size");

class AllianceTransferOrder :
    public Order
{
public:
    typedef Order SuperClass;
    AllianceTransferOrder(AllianceTransferOrder const &); /* compiler_generated() */
    AllianceTransferOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline AllianceTransferOrder(unsigned __int32, unsigned __int32, __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_ally; // 0x8
    __int32 m_ru; // 0xC
    SquadronList m_squadronList; // 0x10
public:
    virtual _inline ~AllianceTransferOrder() override; /* compiler_generated() */
    AllianceTransferOrder &operator=(AllianceTransferOrder const &); /* compiler_generated() */
};
static_assert(sizeof(AllianceTransferOrder) == 48, "Invalid AllianceTransferOrder size");

class SetTacticsOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    SetTacticsOrder(SetTacticsOrder const &); /* compiler_generated() */
    SetTacticsOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SetTacticsOrder(unsigned __int32, SquadronList const &, SquadronTactics);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    SquadronTactics m_tactics; // 0x2C
public:
    virtual _inline ~SetTacticsOrder() override; /* compiler_generated() */
    SetTacticsOrder &operator=(SetTacticsOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SetTacticsOrder) == 48, "Invalid SetTacticsOrder size");

class SetTacticsOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    SetTacticsOrder(SetTacticsOrder const &); /* compiler_generated() */
    SetTacticsOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SetTacticsOrder(unsigned __int32, SquadronList const &, SquadronTactics);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    SquadronTactics m_tactics; // 0x2C
public:
    virtual _inline ~SetTacticsOrder() override; /* compiler_generated() */
    SetTacticsOrder &operator=(SetTacticsOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SetTacticsOrder) == 48, "Invalid SetTacticsOrder size");

class HyperspaceOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    HyperspaceOrder(HyperspaceOrder const &); /* compiler_generated() */
    HyperspaceOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline HyperspaceOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    vector3 m_destination; // 0x2C
    vector3 m_origin; // 0x38
    bool m_offMap; // 0x44
public:
    virtual _inline ~HyperspaceOrder() override; /* compiler_generated() */
    HyperspaceOrder &operator=(HyperspaceOrder const &); /* compiler_generated() */
};
static_assert(sizeof(HyperspaceOrder) == 72, "Invalid HyperspaceOrder size");

class FormHyperspaceGateOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    FormHyperspaceGateOrder(FormHyperspaceGateOrder const &); /* compiler_generated() */
    _inline FormHyperspaceGateOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline FormHyperspaceGateOrder(unsigned __int32, SquadronList const &, SobID const &);
    virtual void Execute() const override;
    virtual _inline ~FormHyperspaceGateOrder() override; /* compiler_generated() */
    FormHyperspaceGateOrder &operator=(FormHyperspaceGateOrder const &); /* compiler_generated() */
};
static_assert(sizeof(FormHyperspaceGateOrder) == 56, "Invalid FormHyperspaceGateOrder size");

class CloakOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    CloakOrder(CloakOrder const &); /* compiler_generated() */
    CloakOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline CloakOrder(unsigned __int32, SquadronList const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    bool m_enable; // 0x2C
public:
    virtual _inline ~CloakOrder() override; /* compiler_generated() */
    CloakOrder &operator=(CloakOrder const &); /* compiler_generated() */
};
static_assert(sizeof(CloakOrder) == 48, "Invalid CloakOrder size");

class DefenseFieldOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    DefenseFieldOrder(DefenseFieldOrder const &); /* compiler_generated() */
    DefenseFieldOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline DefenseFieldOrder(unsigned __int32, SquadronList const &, bool);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    bool m_enable; // 0x2C
public:
    virtual _inline ~DefenseFieldOrder() override; /* compiler_generated() */
    DefenseFieldOrder &operator=(DefenseFieldOrder const &); /* compiler_generated() */
};
static_assert(sizeof(DefenseFieldOrder) == 48, "Invalid DefenseFieldOrder size");

class RetireOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    RetireOrder(RetireOrder const &); /* compiler_generated() */
    RetireOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline RetireOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    virtual _inline ~RetireOrder() override; /* compiler_generated() */
    RetireOrder &operator=(RetireOrder const &); /* compiler_generated() */
};
static_assert(sizeof(RetireOrder) == 44, "Invalid RetireOrder size");

class RetireSubSystemsOrder :
    public SelectionOrderBase
{
public:
    typedef SelectionOrderBase SuperClass;
    RetireSubSystemsOrder(RetireSubSystemsOrder const &); /* compiler_generated() */
    _inline RetireSubSystemsOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline RetireSubSystemsOrder(unsigned __int32, Selection const &);
    virtual void Execute() const override;
    virtual _inline ~RetireSubSystemsOrder() override; /* compiler_generated() */
    RetireSubSystemsOrder &operator=(RetireSubSystemsOrder const &); /* compiler_generated() */
};
static_assert(sizeof(RetireSubSystemsOrder) == 60, "Invalid RetireSubSystemsOrder size");

class KamikazeOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    KamikazeOrder(KamikazeOrder const &); /* compiler_generated() */
    KamikazeOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline KamikazeOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    virtual _inline ~KamikazeOrder() override; /* compiler_generated() */
    KamikazeOrder &operator=(KamikazeOrder const &); /* compiler_generated() */
};
static_assert(sizeof(KamikazeOrder) == 44, "Invalid KamikazeOrder size");

class DeSpawnOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    DeSpawnOrder(DeSpawnOrder const &); /* compiler_generated() */
    DeSpawnOrder(std::basic_istream<char,std::char_traits<char> > &);
    DeSpawnOrder(unsigned __int32, SquadronList const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    virtual _inline ~DeSpawnOrder() override; /* compiler_generated() */
    DeSpawnOrder &operator=(DeSpawnOrder const &); /* compiler_generated() */
};
static_assert(sizeof(DeSpawnOrder) == 44, "Invalid DeSpawnOrder size");

class LayMinesOrder :
    public SquadronListOrderBase
{
public:
    typedef SquadronListOrderBase SuperClass;
    LayMinesOrder(LayMinesOrder const &); /* compiler_generated() */
    LayMinesOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline LayMinesOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, vector3 const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    vector3 m_centre; // 0x2C
    vector3 m_front; // 0x38
    vector3 m_corner; // 0x44
public:
    virtual _inline ~LayMinesOrder() override; /* compiler_generated() */
    LayMinesOrder &operator=(LayMinesOrder const &); /* compiler_generated() */
};
static_assert(sizeof(LayMinesOrder) == 80, "Invalid LayMinesOrder size");

class SetRallyPointOrder :
    public SquadronList2SobBase
{
public:
    typedef SquadronList2SobBase SuperClass;
    SetRallyPointOrder(SetRallyPointOrder const &); /* compiler_generated() */
    SetRallyPointOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SetRallyPointOrder(unsigned __int32, SquadronList const &, SobID const &);
    _inline SetRallyPointOrder(unsigned __int32, SquadronList const &, vector3 const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    _inline vector3 const &GetRallyPoint() const;
private:
    vector3 m_rallyPoint; // 0x38
public:
    virtual _inline ~SetRallyPointOrder() override; /* compiler_generated() */
    SetRallyPointOrder &operator=(SetRallyPointOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SetRallyPointOrder) == 68, "Invalid SetRallyPointOrder size");

class ChatOrder :
    public Order
{
public:
    typedef Order SuperClass;
    ChatOrder(ChatOrder const &); /* compiler_generated() */
    ChatOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ChatOrder(GameMsg_Chat const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    _inline ChatMsgType GetType() const;
    _inline __int32 GetDestination() const;
    void MakePrivateCopy();
private:
    GameMsg_Chat m_message; // 0x8
public:
    virtual _inline ~ChatOrder() override; /* compiler_generated() */
    ChatOrder &operator=(ChatOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ChatOrder) == 40, "Invalid ChatOrder size");

class ChatOrder :
    public Order
{
public:
    typedef Order SuperClass;
    ChatOrder(ChatOrder const &); /* compiler_generated() */
    ChatOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline ChatOrder(GameMsg_Chat const &);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
    _inline ChatMsgType GetType() const;
    _inline __int32 GetDestination() const;
    void MakePrivateCopy();
private:
    GameMsg_Chat m_message; // 0x8
public:
    virtual _inline ~ChatOrder() override; /* compiler_generated() */
    ChatOrder &operator=(ChatOrder const &); /* compiler_generated() */
};
static_assert(sizeof(ChatOrder) == 40, "Invalid ChatOrder size");

class SurrenderOrder :
    public Order
{
public:
    typedef Order SuperClass;
    SurrenderOrder(SurrenderOrder const &); /* compiler_generated() */
    SurrenderOrder(std::basic_istream<char,std::char_traits<char> > &);
    _inline SurrenderOrder(unsigned __int32);
    virtual void Execute() const override;
    virtual _inline ~SurrenderOrder() override; /* compiler_generated() */
    SurrenderOrder &operator=(SurrenderOrder const &); /* compiler_generated() */
};
static_assert(sizeof(SurrenderOrder) == 8, "Invalid SurrenderOrder size");

class DropPlayerOrder :
    public Order
{
public:
    typedef Order SuperClass;
    DropPlayerOrder(DropPlayerOrder const &); /* compiler_generated() */
    DropPlayerOrder(std::basic_istream<char,std::char_traits<char> > &);
    DropPlayerOrder(unsigned __int32);
    virtual void Execute() const override;
    virtual void Serialize(std::basic_ostream<char,std::char_traits<char> > &) const override;
private:
    unsigned __int32 m_networkID; // 0x8
public:
    virtual _inline ~DropPlayerOrder() override; /* compiler_generated() */
    DropPlayerOrder &operator=(DropPlayerOrder const &); /* compiler_generated() */
};
static_assert(sizeof(DropPlayerOrder) == 12, "Invalid DropPlayerOrder size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_68FF45(AttackOrder *const, unsigned __int32, SquadronList const &, Selection const &, bool);
_inline AttackOrder::AttackOrder(unsigned __int32, SquadronList const &, Selection const &, bool) // 0x68FF45
{
    mangled_assert("??0AttackOrder@@QAE@IABVSquadronList@@ABVSelection@@_N@Z");
    todo("implement");
    _sub_68FF45(this, arg, arg, arg, arg);
}

_extern _sub_690D4C(ResourceOrder *const, unsigned __int32, SquadronList const &, Selection const &);
_inline ResourceOrder::ResourceOrder(unsigned __int32, SquadronList const &, Selection const &) // 0x690D4C
{
    mangled_assert("??0ResourceOrder@@QAE@IABVSquadronList@@ABVSelection@@@Z");
    todo("implement");
    _sub_690D4C(this, arg, arg, arg);
}

_extern _sub_690D34(ResourceOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline ResourceOrder::ResourceOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690D34
{
    mangled_assert("??0ResourceOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690D34(this, arg);
}

_extern _sub_6903DC(GuardOrder *const, unsigned __int32, SquadronList const &, Selection const &);
_inline GuardOrder::GuardOrder(unsigned __int32, SquadronList const &, Selection const &) // 0x6903DC
{
    mangled_assert("??0GuardOrder@@QAE@IABVSquadronList@@ABVSelection@@@Z");
    todo("implement");
    _sub_6903DC(this, arg, arg, arg);
}

_extern _sub_6903C4(GuardOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline GuardOrder::GuardOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6903C4
{
    mangled_assert("??0GuardOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6903C4(this, arg);
}

_extern _sub_690C8D(RepairOrder *const, unsigned __int32, SquadronList const &, Selection const &);
_inline RepairOrder::RepairOrder(unsigned __int32, SquadronList const &, Selection const &) // 0x690C8D
{
    mangled_assert("??0RepairOrder@@QAE@IABVSquadronList@@ABVSelection@@@Z");
    todo("implement");
    _sub_690C8D(this, arg, arg, arg);
}

_extern _sub_690C75(RepairOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline RepairOrder::RepairOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690C75
{
    mangled_assert("??0RepairOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690C75(this, arg);
}

_extern _sub_6901F3(DockOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline DockOrder::DockOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x6901F3
{
    mangled_assert("??0DockOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_6901F3(this, arg, arg, arg);
}

_extern _sub_6901DB(DockOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline DockOrder::DockOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6901DB
{
    mangled_assert("??0DockOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6901DB(this, arg);
}

_extern _sub_690B56(ParadeOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline ParadeOrder::ParadeOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x690B56
{
    mangled_assert("??0ParadeOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_690B56(this, arg, arg, arg);
}

_extern _sub_690B3E(ParadeOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline ParadeOrder::ParadeOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690B3E
{
    mangled_assert("??0ParadeOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690B3E(this, arg);
}

_extern _sub_690030(CaptureOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline CaptureOrder::CaptureOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x690030
{
    mangled_assert("??0CaptureOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_690030(this, arg, arg, arg);
}

_extern _sub_690018(CaptureOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline CaptureOrder::CaptureOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690018
{
    mangled_assert("??0CaptureOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690018(this, arg);
}

_extern _sub_690E1A(SalvageOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline SalvageOrder::SalvageOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x690E1A
{
    mangled_assert("??0SalvageOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_690E1A(this, arg, arg, arg);
}

_extern _sub_690E02(SalvageOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline SalvageOrder::SalvageOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690E02
{
    mangled_assert("??0SalvageOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690E02(this, arg);
}

_extern _sub_690511(HyperspaceViaGateOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline HyperspaceViaGateOrder::HyperspaceViaGateOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x690511
{
    mangled_assert("??0HyperspaceViaGateOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_690511(this, arg, arg, arg);
}

_extern _sub_6904F9(HyperspaceViaGateOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline HyperspaceViaGateOrder::HyperspaceViaGateOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6904F9
{
    mangled_assert("??0HyperspaceViaGateOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6904F9(this, arg);
}

_extern _sub_6913FA(ToggleAutoLaunchOrder *const, unsigned __int32, SobID const &);
_inline ToggleAutoLaunchOrder::ToggleAutoLaunchOrder(unsigned __int32, SobID const &) // 0x6913FA
{
    mangled_assert("??0ToggleAutoLaunchOrder@@QAE@IABVSobID@@@Z");
    todo("implement");
    _sub_6913FA(this, arg, arg);
}

_extern _sub_6913E2(ToggleAutoLaunchOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline ToggleAutoLaunchOrder::ToggleAutoLaunchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6913E2
{
    mangled_assert("??0ToggleAutoLaunchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6913E2(this, arg);
}

_extern _sub_69043E(HaltOrder *const, unsigned __int32, SquadronList const &);
_inline HaltOrder::HaltOrder(unsigned __int32, SquadronList const &) // 0x69043E
{
    mangled_assert("??0HaltOrder@@QAE@IABVSquadronList@@@Z");
    todo("implement");
    _sub_69043E(this, arg, arg);
}

_extern _sub_690426(HaltOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline HaltOrder::HaltOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690426
{
    mangled_assert("??0HaltOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690426(this, arg);
}

_extern _sub_690356(FormStrikeGroupOrder *const, unsigned __int32, unsigned __int32 const, SquadronList const &);
_inline FormStrikeGroupOrder::FormStrikeGroupOrder(unsigned __int32, unsigned __int32 const, SquadronList const &) // 0x690356
{
    mangled_assert("??0FormStrikeGroupOrder@@QAE@IIABVSquadronList@@@Z");
    todo("implement");
    _sub_690356(this, arg, arg, arg);
}

_extern _sub_68FD91(AddToStrikeGroupOrder *const, unsigned __int32, unsigned __int32 const, SquadronList const &);
_inline AddToStrikeGroupOrder::AddToStrikeGroupOrder(unsigned __int32, unsigned __int32 const, SquadronList const &) // 0x68FD91
{
    mangled_assert("??0AddToStrikeGroupOrder@@QAE@IIABVSquadronList@@@Z");
    todo("implement");
    _sub_68FD91(this, arg, arg, arg);
}

_extern _sub_6906C2(LeaveStrikeGroupOrder *const, unsigned __int32, SquadronList const &);
_inline LeaveStrikeGroupOrder::LeaveStrikeGroupOrder(unsigned __int32, SquadronList const &) // 0x6906C2
{
    mangled_assert("??0LeaveStrikeGroupOrder@@QAE@IABVSquadronList@@@Z");
    todo("implement");
    _sub_6906C2(this, arg, arg);
}

_extern _sub_6906AA(LeaveStrikeGroupOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline LeaveStrikeGroupOrder::LeaveStrikeGroupOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6906AA
{
    mangled_assert("??0LeaveStrikeGroupOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6906AA(this, arg);
}

_extern _sub_690FE6(SensorPingOrder *const, unsigned __int32, SquadronList const &);
_inline SensorPingOrder::SensorPingOrder(unsigned __int32, SquadronList const &) // 0x690FE6
{
    mangled_assert("??0SensorPingOrder@@QAE@IABVSquadronList@@@Z");
    todo("implement");
    _sub_690FE6(this, arg, arg);
}

_extern _sub_690FCE(SensorPingOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline SensorPingOrder::SensorPingOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690FCE
{
    mangled_assert("??0SensorPingOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690FCE(this, arg);
}

_extern _sub_690E7C(ScuttleOrder *const, unsigned __int32, Selection const &);
_inline ScuttleOrder::ScuttleOrder(unsigned __int32, Selection const &) // 0x690E7C
{
    mangled_assert("??0ScuttleOrder@@QAE@IABVSelection@@@Z");
    todo("implement");
    _sub_690E7C(this, arg, arg);
}

_extern _sub_690E64(ScuttleOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline ScuttleOrder::ScuttleOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690E64
{
    mangled_assert("??0ScuttleOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690E64(this, arg);
}

_extern _sub_537825(ResearchOrder *const, unsigned __int32, unsigned __int32);
_inline ResearchOrder::ResearchOrder(unsigned __int32, unsigned __int32) // 0x537825
{
    mangled_assert("??0ResearchOrder@@QAE@II@Z");
    todo("implement");
    _sub_537825(this, arg, arg);
}

_extern _sub_690CD7(ResearchOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline ResearchOrder::ResearchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690CD7
{
    mangled_assert("??0ResearchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690CD7(this, arg);
}

_extern _sub_53779A(CancelResearchOrder *const, unsigned __int32, unsigned __int32);
_inline CancelResearchOrder::CancelResearchOrder(unsigned __int32, unsigned __int32) // 0x53779A
{
    mangled_assert("??0CancelResearchOrder@@QAE@II@Z");
    todo("implement");
    _sub_53779A(this, arg, arg);
}

_extern _sub_690000(CancelResearchOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline CancelResearchOrder::CancelResearchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690000
{
    mangled_assert("??0CancelResearchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690000(this, arg);
}

_extern _sub_690C5B(PauseResearchOrder *const, unsigned __int32);
_inline PauseResearchOrder::PauseResearchOrder(unsigned __int32) // 0x690C5B
{
    mangled_assert("??0PauseResearchOrder@@QAE@I@Z");
    todo("implement");
    _sub_690C5B(this, arg);
}

_extern _sub_690C43(PauseResearchOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline PauseResearchOrder::PauseResearchOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690C43
{
    mangled_assert("??0PauseResearchOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690C43(this, arg);
}

_extern _sub_690741(MoveOrder *const, unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool);
_inline MoveOrder::MoveOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool) // 0x690741
{
    mangled_assert("??0MoveOrder@@QAE@IABVSquadronList@@ABVvector3@@1_N@Z");
    todo("implement");
    _sub_690741(this, arg, arg, arg, arg, arg);
}

_extern bool const _sub_5C0A45(MoveOrder const *const);
_inline bool const MoveOrder::GetMoveAttack() const // 0x5C0A45
{
    mangled_assert("?GetMoveAttack@MoveOrder@@QBE?B_NXZ");
    todo("implement");
    bool const __result = _sub_5C0A45(this);
    return __result;
}

_extern _sub_6908C5(MoveToSobOrder *const, unsigned __int32, SquadronList const &, SobID const &, vector3 const &, vector3 const &);
_inline MoveToSobOrder::MoveToSobOrder(unsigned __int32, SquadronList const &, SobID const &, vector3 const &, vector3 const &) // 0x6908C5
{
    mangled_assert("??0MoveToSobOrder@@QAE@IABVSquadronList@@ABVSobID@@ABVvector3@@2@Z");
    todo("implement");
    _sub_6908C5(this, arg, arg, arg, arg, arg);
}

_extern _sub_528E6E(BuildOrder *const, unsigned __int32, SobID const &, unsigned __int32, bool, SobID const &);
_inline BuildOrder::BuildOrder(unsigned __int32, SobID const &, unsigned __int32, bool, SobID const &) // 0x528E6E
{
    mangled_assert("??0BuildOrder@@QAE@IABVSobID@@I_N0@Z");
    todo("implement");
    _sub_528E6E(this, arg, arg, arg, arg, arg);
}

_extern SobID const &_sub_637F16(BuildOrder const *const);
_inline SobID const &BuildOrder::GetBuilder() const // 0x637F16
{
    mangled_assert("?GetBuilder@BuildOrder@@QBEABVSobID@@XZ");
    todo("implement");
    SobID const & __result = _sub_637F16(this);
    return __result;
}

_extern unsigned __int32 _sub_638075(BuildOrder const *const);
_inline unsigned __int32 BuildOrder::GetUnitToBuild() const // 0x638075
{
    mangled_assert("?GetUnitToBuild@BuildOrder@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_638075(this);
    return __result;
}

_extern bool _sub_637F12(BuildOrder const *const);
_inline bool BuildOrder::GetBuildFlag() const // 0x637F12
{
    mangled_assert("?GetBuildFlag@BuildOrder@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_637F12(this);
    return __result;
}

_extern _sub_690C1E(PauseQueueOrder *const, unsigned __int32, SobID const &, BuildType);
_inline PauseQueueOrder::PauseQueueOrder(unsigned __int32, SobID const &, BuildType) // 0x690C1E
{
    mangled_assert("??0PauseQueueOrder@@QAE@IABVSobID@@W4BuildType@@@Z");
    todo("implement");
    _sub_690C1E(this, arg, arg, arg);
}

_extern _sub_690965(MoveToTopOfBuildQueue *const, unsigned __int32, SobID const &, unsigned __int32);
_inline MoveToTopOfBuildQueue::MoveToTopOfBuildQueue(unsigned __int32, SobID const &, unsigned __int32) // 0x690965
{
    mangled_assert("??0MoveToTopOfBuildQueue@@QAE@IABVSobID@@I@Z");
    todo("implement");
    _sub_690965(this, arg, arg, arg);
}

_extern _sub_6909A2(MoveToTopOfResearchQueue *const, unsigned __int32, unsigned __int32);
_inline MoveToTopOfResearchQueue::MoveToTopOfResearchQueue(unsigned __int32, unsigned __int32) // 0x6909A2
{
    mangled_assert("??0MoveToTopOfResearchQueue@@QAE@II@Z");
    todo("implement");
    _sub_6909A2(this, arg, arg);
}

_extern _sub_690A8A(MoveWaypointOrder *const, unsigned __int32, SquadronList const &, vector3 const &, std::vector<vector3,std::allocator<vector3> > const &, __int32, bool, bool);
_inline MoveWaypointOrder::MoveWaypointOrder(unsigned __int32, SquadronList const &, vector3 const &, std::vector<vector3,std::allocator<vector3> > const &, __int32, bool, bool) // 0x690A8A
{
    mangled_assert("??0MoveWaypointOrder@@QAE@IABVSquadronList@@ABVvector3@@ABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@H_N3@Z");
    todo("implement");
    _sub_690A8A(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern _sub_690813(MoveTempWaypointOrder *const, unsigned __int32, SquadronList const &, std::vector<vector3,std::allocator<vector3> > const &, SobID const &);
_inline MoveTempWaypointOrder::MoveTempWaypointOrder(unsigned __int32, SquadronList const &, std::vector<vector3,std::allocator<vector3> > const &, SobID const &) // 0x690813
{
    mangled_assert("??0MoveTempWaypointOrder@@QAE@IABVSquadronList@@ABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABVSobID@@@Z");
    todo("implement");
    _sub_690813(this, arg, arg, arg, arg);
}

_extern _sub_6905B4(LaunchOrder *const, unsigned __int32, SquadronList const &, SobID const &, bool);
_inline LaunchOrder::LaunchOrder(unsigned __int32, SquadronList const &, SobID const &, bool) // 0x6905B4
{
    mangled_assert("??0LaunchOrder@@QAE@IABVSquadronList@@ABVSobID@@_N@Z");
    todo("implement");
    _sub_6905B4(this, arg, arg, arg, arg);
}

_extern _sub_690BB8(PauseOrder *const, unsigned __int32);
_inline PauseOrder::PauseOrder(unsigned __int32) // 0x690BB8
{
    mangled_assert("??0PauseOrder@@QAE@I@Z");
    todo("implement");
    _sub_690BB8(this, arg);
}

_extern _sub_69145D(UnpauseOrder *const, unsigned __int32, unsigned __int32);
_inline UnpauseOrder::UnpauseOrder(unsigned __int32, unsigned __int32) // 0x69145D
{
    mangled_assert("??0UnpauseOrder@@QAE@II@Z");
    todo("implement");
    _sub_69145D(this, arg, arg);
}

_extern _sub_68FE13(AllianceOrder *const, unsigned __int32, unsigned __int32, AllianceOrderAction);
_inline AllianceOrder::AllianceOrder(unsigned __int32, unsigned __int32, AllianceOrderAction) // 0x68FE13
{
    mangled_assert("??0AllianceOrder@@QAE@IIW4AllianceOrderAction@@@Z");
    todo("implement");
    _sub_68FE13(this, arg, arg, arg);
}

_extern _sub_68FEAF(AllianceTransferOrder *const, unsigned __int32, unsigned __int32, __int32, SquadronList const &);
_inline AllianceTransferOrder::AllianceTransferOrder(unsigned __int32, unsigned __int32, __int32, SquadronList const &) // 0x68FEAF
{
    mangled_assert("??0AllianceTransferOrder@@QAE@IIHABVSquadronList@@@Z");
    todo("implement");
    _sub_68FEAF(this, arg, arg, arg, arg);
}

_extern _sub_691167(SetTacticsOrder *const, unsigned __int32, SquadronList const &, SquadronTactics);
_inline SetTacticsOrder::SetTacticsOrder(unsigned __int32, SquadronList const &, SquadronTactics) // 0x691167
{
    mangled_assert("??0SetTacticsOrder@@QAE@IABVSquadronList@@W4SquadronTactics@@@Z");
    todo("implement");
    _sub_691167(this, arg, arg, arg);
}

_extern _sub_6904BD(HyperspaceOrder *const, unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool);
_inline HyperspaceOrder::HyperspaceOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, bool) // 0x6904BD
{
    mangled_assert("??0HyperspaceOrder@@QAE@IABVSquadronList@@ABVvector3@@1_N@Z");
    todo("implement");
    _sub_6904BD(this, arg, arg, arg, arg, arg);
}

_extern _sub_6902C7(FormHyperspaceGateOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline FormHyperspaceGateOrder::FormHyperspaceGateOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x6902C7
{
    mangled_assert("??0FormHyperspaceGateOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_6902C7(this, arg, arg, arg);
}

_extern _sub_6902AF(FormHyperspaceGateOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline FormHyperspaceGateOrder::FormHyperspaceGateOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x6902AF
{
    mangled_assert("??0FormHyperspaceGateOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_6902AF(this, arg);
}

_extern _sub_690156(CloakOrder *const, unsigned __int32, SquadronList const &, bool);
_inline CloakOrder::CloakOrder(unsigned __int32, SquadronList const &, bool) // 0x690156
{
    mangled_assert("??0CloakOrder@@QAE@IABVSquadronList@@_N@Z");
    todo("implement");
    _sub_690156(this, arg, arg, arg);
}

_extern _sub_6901B6(DefenseFieldOrder *const, unsigned __int32, SquadronList const &, bool);
_inline DefenseFieldOrder::DefenseFieldOrder(unsigned __int32, SquadronList const &, bool) // 0x6901B6
{
    mangled_assert("??0DefenseFieldOrder@@QAE@IABVSquadronList@@_N@Z");
    todo("implement");
    _sub_6901B6(this, arg, arg, arg);
}

_extern _sub_690DAE(RetireOrder *const, unsigned __int32, SquadronList const &);
_inline RetireOrder::RetireOrder(unsigned __int32, SquadronList const &) // 0x690DAE
{
    mangled_assert("??0RetireOrder@@QAE@IABVSquadronList@@@Z");
    todo("implement");
    _sub_690DAE(this, arg, arg);
}

_extern _sub_690DE4(RetireSubSystemsOrder *const, unsigned __int32, Selection const &);
_inline RetireSubSystemsOrder::RetireSubSystemsOrder(unsigned __int32, Selection const &) // 0x690DE4
{
    mangled_assert("??0RetireSubSystemsOrder@@QAE@IABVSelection@@@Z");
    todo("implement");
    _sub_690DE4(this, arg, arg);
}

_extern _sub_690DCC(RetireSubSystemsOrder *const, std::basic_istream<char,std::char_traits<char> > &);
_inline RetireSubSystemsOrder::RetireSubSystemsOrder(std::basic_istream<char,std::char_traits<char> > &) // 0x690DCC
{
    mangled_assert("??0RetireSubSystemsOrder@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_690DCC(this, arg);
}

_extern _sub_690573(KamikazeOrder *const, unsigned __int32, SquadronList const &);
_inline KamikazeOrder::KamikazeOrder(unsigned __int32, SquadronList const &) // 0x690573
{
    mangled_assert("??0KamikazeOrder@@QAE@IABVSquadronList@@@Z");
    todo("implement");
    _sub_690573(this, arg, arg);
}

_extern _sub_69066B(LayMinesOrder *const, unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, vector3 const &);
_inline LayMinesOrder::LayMinesOrder(unsigned __int32, SquadronList const &, vector3 const &, vector3 const &, vector3 const &) // 0x69066B
{
    mangled_assert("??0LayMinesOrder@@QAE@IABVSquadronList@@ABVvector3@@11@Z");
    todo("implement");
    _sub_69066B(this, arg, arg, arg, arg, arg);
}

_extern _sub_6910A2(SetRallyPointOrder *const, unsigned __int32, SquadronList const &, vector3 const &);
_inline SetRallyPointOrder::SetRallyPointOrder(unsigned __int32, SquadronList const &, vector3 const &) // 0x6910A2
{
    mangled_assert("??0SetRallyPointOrder@@QAE@IABVSquadronList@@ABVvector3@@@Z");
    todo("implement");
    _sub_6910A2(this, arg, arg, arg);
}

_extern _sub_691049(SetRallyPointOrder *const, unsigned __int32, SquadronList const &, SobID const &);
_inline SetRallyPointOrder::SetRallyPointOrder(unsigned __int32, SquadronList const &, SobID const &) // 0x691049
{
    mangled_assert("??0SetRallyPointOrder@@QAE@IABVSquadronList@@ABVSobID@@@Z");
    todo("implement");
    _sub_691049(this, arg, arg, arg);
}

_extern vector3 const &_sub_5C0A49(SetRallyPointOrder const *const);
_inline vector3 const &SetRallyPointOrder::GetRallyPoint() const // 0x5C0A49
{
    mangled_assert("?GetRallyPoint@SetRallyPointOrder@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_5C0A49(this);
    return __result;
}

_extern _sub_6900ED(ChatOrder *const, GameMsg_Chat const &);
_inline ChatOrder::ChatOrder(GameMsg_Chat const &) // 0x6900ED
{
    mangled_assert("??0ChatOrder@@QAE@ABUGameMsg_Chat@@@Z");
    todo("implement");
    _sub_6900ED(this, arg);
}

_extern ChatMsgType _sub_461821(ChatOrder const *const);
_inline ChatMsgType ChatOrder::GetType() const // 0x461821
{
    mangled_assert("?GetType@ChatOrder@@QBE?AW4ChatMsgType@@XZ");
    todo("implement");
    ChatMsgType __result = _sub_461821(this);
    return __result;
}

_extern __int32 _sub_461774(ChatOrder const *const);
_inline __int32 ChatOrder::GetDestination() const // 0x461774
{
    mangled_assert("?GetDestination@ChatOrder@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_461774(this);
    return __result;
}

_extern _sub_6913C8(SurrenderOrder *const, unsigned __int32);
_inline SurrenderOrder::SurrenderOrder(unsigned __int32) // 0x6913C8
{
    mangled_assert("??0SurrenderOrder@@QAE@I@Z");
    todo("implement");
    _sub_6913C8(this, arg);
}

/* ---------- private code */

#endif // __ORDERS_H__
#endif
