#if 0
#ifndef __RESEARCHDATA_H__
#define __RESEARCHDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResearchData :
    public DependencyData
{
public:
    enum AvailabiltyState
    {
        AS_Locked = 0,
        AS_Done,
        AS_InProgress,
        AS_Pending,
        AS_Restricted,
        AS_COUNT,
    };
    enum ResearchState
    {
        ResearchStateNotStarted = 0,
        ResearchStateResearching,
        ResearchStateFinished,
        NUMBER_OF_RESEARCH_STATES,
    };
    ResearchData(ResearchData const &); /* compiler_generated() */
    ResearchData(SaveGameData *);
private:
    ResearchData();
public:
    virtual ~ResearchData() override;
    bool update(float);
    void pauseResearch();
    void startResearch(float);
    void cancelResearch();
    _inline ResearchData::ResearchState getResearchState() const;
    _inline __int32 getCost() const;
    __int32 getTime() const;
    _inline __int32 getCurrentSpend() const;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getIcon() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getDisplayedName() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getShortDisplayedName() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getDescription() const;
    _inline unsigned __int32 getTypeId() const;
    void instantlyCompleteResearch();
    static void CreateResearchData(LuaConfig &lc, Player *pOwner);
    enum UpgradeTargetType
    {
        AllShips = 0,
        ShipFamily,
        ShipType,
        NUMBER_OF_UPGRADE_TARGET_TYPES,
    };
    enum UpgradeType
    {
        Modifier = 0,
        Ability,
        None,
        NUMBER_OF_UPGRADE_TYPES,
    };
    _inline ResearchData::UpgradeTargetType const getUpgradeTargetType() const;
    _inline ResearchData::UpgradeType const getUpgradeType() const;
    _inline MultiplierType const getMultiplierType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getTarget() const;
    _inline unsigned __int32 const getTargetId() const;
    _inline float const getUpgradeValue() const;
    void ApplyUpgradeToShip(Ship *);
    bool doWeUpgradeThisShip(Ship *);
    bool isRestricted() const;
    _inline void setRestricted(bool);
private:
    bool ApplyUpgrade();
    unsigned __int32 m_typeid; // 0x34
    bool m_isRestricted; // 0x38
    __int32 m_nCost; // 0x3C
    __int32 m_nTime; // 0x40
    Fixed<10> m_nMoneySpent; // 0x44
    unsigned __int32 m_nDisplayPriority; // 0x48
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x4C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_ShortDisplayedName; // 0x64
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x7C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_icon; // 0x94
    ResearchData::ResearchState m_State; // 0xAC
    ResearchData::UpgradeTargetType m_TargetType; // 0xB0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_Target; // 0xB4
    unsigned __int32 m_targetId; // 0xCC
    ResearchData::UpgradeType m_UpgradeType; // 0xD0
    ResearchData::UpgradeTypeUnion m_upgradeTypeUnion; // 0xD4
    float m_UpgradeValue; // 0xD8
    union UpgradeTypeUnion
    {
        AbilityType m_AbilityType; // 0x0
        MultiplierType m_MultiplierType; // 0x0
    };
    static_assert(sizeof(UpgradeTypeUnion) == 4, "Invalid UpgradeTypeUnion size");
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResearchData &operator=(ResearchData const &); /* compiler_generated() */
};
static_assert(sizeof(ResearchData) == 220, "Invalid ResearchData size");

class ResearchData :
    public DependencyData
{
public:
    enum AvailabiltyState
    {
        AS_Locked = 0,
        AS_Done,
        AS_InProgress,
        AS_Pending,
        AS_Restricted,
        AS_COUNT,
    };
    enum ResearchState
    {
        ResearchStateNotStarted = 0,
        ResearchStateResearching,
        ResearchStateFinished,
        NUMBER_OF_RESEARCH_STATES,
    };
    ResearchData(ResearchData const &); /* compiler_generated() */
    ResearchData(SaveGameData *);
private:
    ResearchData();
public:
    virtual ~ResearchData() override;
    bool update(float);
    void pauseResearch();
    void startResearch(float);
    void cancelResearch();
    _inline ResearchData::ResearchState getResearchState() const;
    _inline __int32 getCost() const;
    __int32 getTime() const;
    _inline __int32 getCurrentSpend() const;
    _inline unsigned __int32 const getDisplayPriority() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getIcon() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getDisplayedName() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getShortDisplayedName() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getDescription() const;
    _inline unsigned __int32 getTypeId() const;
    void instantlyCompleteResearch();
    static void CreateResearchData(LuaConfig &lc, Player *pOwner);
    enum UpgradeTargetType
    {
        AllShips = 0,
        ShipFamily,
        ShipType,
        NUMBER_OF_UPGRADE_TARGET_TYPES,
    };
    enum UpgradeType
    {
        Modifier = 0,
        Ability,
        None,
        NUMBER_OF_UPGRADE_TYPES,
    };
    _inline ResearchData::UpgradeTargetType const getUpgradeTargetType() const;
    _inline ResearchData::UpgradeType const getUpgradeType() const;
    _inline MultiplierType const getMultiplierType() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getTarget() const;
    _inline unsigned __int32 const getTargetId() const;
    _inline float const getUpgradeValue() const;
    void ApplyUpgradeToShip(Ship *);
    bool doWeUpgradeThisShip(Ship *);
    bool isRestricted() const;
    _inline void setRestricted(bool);
private:
    bool ApplyUpgrade();
    unsigned __int32 m_typeid; // 0x34
    bool m_isRestricted; // 0x38
    __int32 m_nCost; // 0x3C
    __int32 m_nTime; // 0x40
    Fixed<10> m_nMoneySpent; // 0x44
    unsigned __int32 m_nDisplayPriority; // 0x48
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_DisplayedName; // 0x4C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_ShortDisplayedName; // 0x64
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_Description; // 0x7C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_icon; // 0x94
    ResearchData::ResearchState m_State; // 0xAC
    ResearchData::UpgradeTargetType m_TargetType; // 0xB0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_Target; // 0xB4
    unsigned __int32 m_targetId; // 0xCC
    ResearchData::UpgradeType m_UpgradeType; // 0xD0
    ResearchData::UpgradeTypeUnion m_upgradeTypeUnion; // 0xD4
    float m_UpgradeValue; // 0xD8
    union UpgradeTypeUnion
    {
        AbilityType m_AbilityType; // 0x0
        MultiplierType m_MultiplierType; // 0x0
    };
    static_assert(sizeof(UpgradeTypeUnion) == 4, "Invalid UpgradeTypeUnion size");
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResearchData &operator=(ResearchData const &); /* compiler_generated() */
};
static_assert(sizeof(ResearchData) == 220, "Invalid ResearchData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ResearchData::ResearchState ResearchData::getResearchState() const // 0x4EEA5C
{
    mangled_assert("?getResearchState@ResearchData@@QBE?AW4ResearchState@1@XZ");
    todo("implement");
}

_inline __int32 ResearchData::getCost() const // 0x4EE9FB
{
    mangled_assert("?getCost@ResearchData@@QBEHXZ");
    todo("implement");
}

_inline __int32 ResearchData::getCurrentSpend() const // 0x538926
{
    mangled_assert("?getCurrentSpend@ResearchData@@QBEHXZ");
    todo("implement");
}

_inline unsigned __int32 const ResearchData::getDisplayPriority() const // 0x598CC0
{
    mangled_assert("?getDisplayPriority@ResearchData@@QBE?BIXZ");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &ResearchData::getIcon() const // 0x598CC4
{
    mangled_assert("?getIcon@ResearchData@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &ResearchData::getDisplayedName() const // 0x53892D
{
    mangled_assert("?getDisplayedName@ResearchData@@QBEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &ResearchData::getShortDisplayedName() const // 0x598CCB
{
    mangled_assert("?getShortDisplayedName@ResearchData@@QBEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &ResearchData::getDescription() const // 0x598CBC
{
    mangled_assert("?getDescription@ResearchData@@QBEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 ResearchData::getTypeId() const // 0x4EEA6A
{
    mangled_assert("?getTypeId@ResearchData@@QBEIXZ");
    todo("implement");
}

_inline ResearchData::UpgradeTargetType const ResearchData::getUpgradeTargetType() const // 0x4ED8DA
{
    mangled_assert("?getUpgradeTargetType@ResearchData@@QBE?BW4UpgradeTargetType@1@XZ");
    todo("implement");
}

_inline ResearchData::UpgradeType const ResearchData::getUpgradeType() const // 0x53894B
{
    mangled_assert("?getUpgradeType@ResearchData@@QBE?BW4UpgradeType@1@XZ");
    todo("implement");
}

_inline MultiplierType const ResearchData::getMultiplierType() const // 0x4ED8CC
{
    mangled_assert("?getMultiplierType@ResearchData@@QBE?BW4MultiplierType@@XZ");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &ResearchData::getTarget() const // 0x4ED8D3
{
    mangled_assert("?getTarget@ResearchData@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 const ResearchData::getTargetId() const // 0x4EEA63
{
    mangled_assert("?getTargetId@ResearchData@@QBE?BIXZ");
    todo("implement");
}

_inline float const ResearchData::getUpgradeValue() const // 0x4ED8E1
{
    mangled_assert("?getUpgradeValue@ResearchData@@QBE?BMXZ");
    todo("implement");
}

_inline void ResearchData::setRestricted(bool) // 0x4EEB77
{
    mangled_assert("?setRestricted@ResearchData@@QAEX_N@Z");
    todo("implement");
}

_inline bool ResearchData::isDeterministic() // 0x4ED905
{
    mangled_assert("?isDeterministic@ResearchData@@UAE_NXZ");
    todo("implement");
}

_inline char const *ResearchData::saveToken() // 0x4ED9B6
{
    mangled_assert("?saveToken@ResearchData@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RESEARCHDATA_H__
#endif
