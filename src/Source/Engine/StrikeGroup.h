#if 0
#ifndef __STRIKEGROUP_H__
#define __STRIKEGROUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StrikeGroup :
    public SaveObject,
    private SquadronList::Observer
{
public:
    StrikeGroup(StrikeGroup const &); /* compiler_generated() */
    StrikeGroup(SaveGameData *);
    StrikeGroup(StrikeGroupFormationNode const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    virtual ~StrikeGroup() override;
    bool update(float);
    void addSquadron(Squadron *);
    void removeSquadron(Squadron *);
    bool getSquadronStation(Squadron const *, Squadron *&, vector3 &) const;
    bool squadronIsInStrikeGroup(Squadron *);
    _inline SquadronList const &getShipList() const;
    Squadron const *getCentreSquadron() const;
    float const getMaxSpeedFraction(Squadron const *) const;
    void newDestination(vector3 const &);
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getStrikeGroupName() const;
    float getCurrentFormationSlotRadius();
    unsigned __int32 getDisplayPriority();
    wchar_t const *getDisplayName();
    unsigned __int32 getID() const;
    _inline void setID(unsigned __int32);
    static bool scriptInit();
    static void convertSelectionIntoStrikeGroups(Selection const &selection, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &strikeGroups);
    static void convertSquadronListIntoStrikeGroups(SquadronList const &squadronList, std::list<StrikeGroup *,std::allocator<StrikeGroup *> > &strikeGroups);
    static StrikeGroup *formStrikeGroupFrom(SquadronList &squadrons, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &strikeGroupName);
    static StrikeGroup *formStrikeGroupFrom(std::list<Squadron *,std::allocator<Squadron *> > &squadrons, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &strikeGroupName);
    static void splitFromParentStrikeGroups(SquadronList const &squadronList);
    static bool isSelectionAllOfAStrikeGroup(Selection const &selection);
private:
    bool useStrikeGroupRules() const;
    void updateGroupInCombat();
    void reformStrikeGroup();
    virtual void Notify_Insertion(Squadron *) override;
    virtual void Notify_Removal(Squadron *) override;
    SquadronList m_allSquadrons; // 0x10
    StrikeGroupFormationNode *m_formation; // 0x30
    bool m_squadronsRemoved; // 0x34
    bool m_groupInCombat; // 0x35
    vector3 m_destination; // 0x38
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_strikeGroupName; // 0x44
    unsigned __int32 m_id; // 0x5C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    StrikeGroup &operator=(StrikeGroup const &); /* compiler_generated() */
};
static_assert(sizeof(StrikeGroup) == 96, "Invalid StrikeGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern SquadronList const &_sub_456AB4(StrikeGroup const *const);
_inline SquadronList const &StrikeGroup::getShipList() const // 0x456AB4
{
    mangled_assert("?getShipList@StrikeGroup@@QBEABVSquadronList@@XZ");
    todo("implement");
    SquadronList const & __result = _sub_456AB4(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_50812A(StrikeGroup const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &StrikeGroup::getStrikeGroupName() const // 0x50812A
{
    mangled_assert("?getStrikeGroupName@StrikeGroup@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_50812A(this);
    return __result;
}

_extern void _sub_6508D2(StrikeGroup *const, unsigned __int32);
_inline void StrikeGroup::setID(unsigned __int32) // 0x6508D2
{
    mangled_assert("?setID@StrikeGroup@@QAEXI@Z");
    todo("implement");
    _sub_6508D2(this, arg);
}

_extern bool _sub_508146(StrikeGroup *const);
_inline bool StrikeGroup::isDeterministic() // 0x508146
{
    mangled_assert("?isDeterministic@StrikeGroup@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_508146(this);
    return __result;
}

_extern char const *_sub_508430(StrikeGroup *const);
_inline char const *StrikeGroup::saveToken() // 0x508430
{
    mangled_assert("?saveToken@StrikeGroup@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_508430(this);
    return __result;
}

/* ---------- private code */

#endif // __STRIKEGROUP_H__
#endif
