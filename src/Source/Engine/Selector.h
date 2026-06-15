#if 0
#ifndef __SELECTOR_H__
#define __SELECTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SelectionOwnerStatus
{
    SOS_Friendly = 0,
    SOS_Allied,
    SOS_Enemy,
    SOS_Neutral,
    SOS_NumberStatuses,
};

/* ---------- definitions */

class Selector
{
public:
    Selector(Selector const &); /* compiler_generated() */
    Selector();
    enum SelectionType
    {
        eSelectable = 1, // 0x0001
        eCurrentPlayers = 2, // 0x0002
        eAttackable = 4, // 0x0004
        eForceAttackable = 8, // 0x0008
        eFocusable = 16, // 0x0010
        eWaypoint = 32, // 0x0020 ' '
        eHarvestable = 64, // 0x0040 '@'
        eRepairable = 128, // 0x0080
        eSpecialAttackable = 256, // 0x0100
        eMilitary = 512, // 0x0200
        eAny = 65535, // 0xFFFF
    };
    enum StatsCategories
    {
        SC_ControllableShips = 0,
        SC_ControllableSubSystems,
        SC_Waypoints,
        SC_Enemies,
        SC_Others,
        SC_NumCategories,
    };
    enum SelectionLists
    {
        eSelected = 0,
        eSelecting,
        eMouseOver,
        eSelectedUncontrollable,
        eHotkeyGroup1,
        eHotkeyGroup2,
        eHotkeyGroup3,
        eHotkeyGroup4,
        eHotkeyGroup5,
        eHotkeyGroup6,
        eHotkeyGroup7,
        eHotkeyGroup8,
        eHotkeyGroup9,
        eHotkeyGroup10,
        eHotkeyGroup11,
        eHotkeyGroup12,
        eHotkeyGroup13,
        eHotkeyGroup14,
        eHotkeyGroup15,
        eHotkeyGroup16,
        eHotkeyGroup17,
        eHotkeyGroup18,
        eHotkeyGroup19,
        eHotkeyGroup20,
        eNumSelectionLists,
    };
    struct PriorityModifiers
    {
        PriorityModifiers();
        void Parse(LuaConfig &);
        float Apply(Sob const *) const;
        float m_sobTypeModifiers[15]; // 0x0
        float m_ownerModifiers[4]; // 0x3C
        float m_abilityModifiers[30]; // 0x4C
    };
    static_assert(sizeof(PriorityModifiers) == 196, "Invalid PriorityModifiers size");
    struct MixModifiers
    {
        MixModifiers();
        void Parse(LuaConfig &);
        float m_dist2DModifier; // 0x0
        float m_depthModifier; // 0x4
        float m_depthLogMax; // 0x8
        float m_priorityMin; // 0xC
    };
    static_assert(sizeof(MixModifiers) == 16, "Invalid MixModifiers size");
    struct SobWithPriority
    {
        Sob *sob; // 0x0
        float priority; // 0x4
    };
    static_assert(sizeof(SobWithPriority) == 8, "Invalid SobWithPriority size");
    typedef std::vector<Selector::SobWithPriority,std::allocator<Selector::SobWithPriority> > PrioritySobList;
    void clearAll();
    void clearSelected();
    void clearSelectedUncontrollable();
    void clearSelecting();
    void clearMouseOver();
    void clearHotKeyGroup(__int32);
    void addToSelecting(Sob *);
    void addToSelected(Selection const &);
    void addToSelected(Sob *);
    void addObserverToSelected(Selection::Observer *);
    void addToSelectedUncontrollable(Selection const &);
    void addToSelectedUncontrollable(Sob *);
    void addToHotKeyGroup(__int32, Sob *);
    void addToHotKeyGroup(__int32, Selection const &);
    void removeFromSelected(Selection const &);
    void removeFromSelected(Sob *);
    void removeObserverFromSelected(Selection::Observer *);
    void removeFromAllHotKeyGroups(Sob *);
    void removeFromAllHotKeyGroups(Selection const &);
    void removeFromHotKeyGroup(__int32, Sob *);
    void moveSelectingToSelected();
    void moveMouseOverToSelected();
    void moveToSelected(Sob *);
    void moveToSelected(Selection const &, Sob *);
    void moveToSelectedUncontrollable(Selection const &);
    void moveToMouseOver(Selection const &, Sob *);
    void selectHotKeyGroup(__int32);
    void rectDrag(Selection const &, PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &);
    Selection const &findMouseOverCandidates(Selection const &, float, float);
    void chooseBestMouseOver(Selector::PriorityModifiers const &, Selector::MixModifiers const &);
    Selection const &getSelected() const;
    Selection const &getSelectedUncontrollable() const;
    Selection const &getSelecting() const;
    Selection const &getMouseOver() const;
    __int32 getMouseOverNSquadrons() const;
    Selection const &getHotKeyGroup(__int32) const;
    bool isSelectedOnly(Selector::StatsCategories) const;
    bool isSelectedEither(Selector::StatsCategories, Selector::StatsCategories) const;
    bool isMouseOverOnly(Selector::StatsCategories) const;
    void buildSelTargs(Camera *, SensorsBlobArray *, bool);
    void updateSelTargs(Camera *, Selection const &, SensorsBlobArray *, bool);
    unsigned __int32 getNumMetaSelTarg();
    MetaSelTarg *getMetaSelTarg(unsigned __int32);
    void addMetaSelTarg(Selection const *, vector2 const &, float, float, unsigned __int32, unsigned __int32);
    void buildMetaSelTargs(Camera *, Selection const *);
    void removeNonVisibleSob(Selector::SelectionLists);
    void selectAllShipsOnScreenOfType();
    _inline void setMilitaryPriority(bool);
    bool getMilitaryPriority() const;
    bool hasHotKeyGroupChanged(__int32) const;
    void clearHotKeyGroupChangedFlag(__int32);
    struct SelectionStats
    {
        unsigned __int32 e[5]; // 0x0
    };
    static_assert(sizeof(SelectionStats) == 20, "Invalid SelectionStats size");
private:
    void addToList(Selector::SelectionLists, Sob *);
    bool removeFromList(Selector::SelectionLists, Sob *);
    bool findInList(Selector::SelectionLists, Sob *) const;
    void clearList(Selector::SelectionLists);
    void clearStats(Selector::SelectionLists);
    void setSelectedFlags();
    bool isListOnly(Selector::SelectionLists, Selector::StatsCategories) const;
    bool isListEither(Selector::SelectionLists, Selector::StatsCategories, Selector::StatsCategories) const;
    void updateSquadCount(Selector::SelectionLists);
    float rectDragMeta(PrimRectangle const &, unsigned __int32, Selector::PriorityModifiers const &, Selector::MixModifiers const &, std::vector<Selector::SobWithPriority,std::allocator<Selector::SobWithPriority> > &);
    MetaSelTarg *findMouseOverMeta(float, float);
    bool isBandBoxable(Sob *, unsigned __int32) const;
    void clearMetaSelTargs();
    void addMouseOverSob(Sob *);
    Selection m_lists[24]; // 0x0
    Selector::SelectionStats m_stats[24]; // 0x4E0
    __int32 m_squadCounts[24]; // 0x6C0
    unsigned __int32 m_metaSelTargCount; // 0x720
    std::vector<MetaSelTarg,std::allocator<MetaSelTarg> > m_metaSelTargs; // 0x724
    float m_LastUpdatedTime; // 0x730
    bool m_militaryPriority; // 0x734
    bool m_hotKeyGroupChanged[20]; // 0x735
    vector2 m_mouseOverPosition; // 0x74C
    unsigned __int32 m_nNormalCandidates; // 0x754
    Selection m_mouseOverCandidates; // 0x758
public:
    _inline ~Selector(); /* compiler_generated() */
    Selector &operator=(Selector const &); /* compiler_generated() */
};
static_assert(sizeof(Selector) == 1932, "Invalid Selector size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Selector::setMilitaryPriority(bool) // 0x503B27
{
    mangled_assert("?setMilitaryPriority@Selector@@QAEX_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SELECTOR_H__
#endif
