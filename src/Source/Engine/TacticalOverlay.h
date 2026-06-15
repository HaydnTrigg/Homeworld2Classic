#if 0
#ifndef __TACTICALOVERLAY_H__
#define __TACTICALOVERLAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TacticalOverlay
{
public:
    enum TO_Flags
    {
        TO_SphereModifiers = 1, // 0x0001
        TO_SelectionIcons = 2, // 0x0002
        TO_DistantTOs = 4, // 0x0004
        TOM_ATIBits = 7, // 0x0007
        TO_Friendly = 8, // 0x0008
        TO_Enemy = 16, // 0x0010
        TO_Resources = 32, // 0x0020 ' '
        TO_NoATIAtAll = 64, // 0x0040 '@'
        TO_OrderFeedbackMouseOver = 128, // 0x0080
        TO_OrderFeedbackSelection = 256, // 0x0100
        TO_OrderFeedbackAlwaysOn = 512, // 0x0200
        TO_RallyPointsSelected = 1024, // 0x0400
        TO_RallyPointsAll = 2048, // 0x0800
    };
    static TacticalOverlay *i();
    static bool release();
    void incrementSetting();
    void chooseSettingIndex(unsigned __int32);
    void turnOnSetting(TacticalOverlay::TO_Flags);
    void turnOffSetting(TacticalOverlay::TO_Flags);
    _inline bool isSettingOn(TacticalOverlay::TO_Flags const) const;
    _inline unsigned __int32 getSettings() const;
    _inline void setSettings(unsigned __int32);
    TacticalIcon *getTacticalIcon(char const *);
    void addTacticalIcon(char const *, TacticalIcon *);
    TacticalOverlay(TacticalOverlay const &); /* compiler_generated() */
private:
    TacticalOverlay();
    ~TacticalOverlay();
    static TacticalOverlay *s_instance;
    bool m_on; // 0x0
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TacticalIcon *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TacticalIcon *> > > m_nameToTacticalIconMap; // 0x4
    unsigned __int32 m_TOSetting; // 0x24
    std::vector<unsigned int,std::allocator<unsigned int> > m_TOSettings; // 0x28
    unsigned __int32 m_currentValue; // 0x34
public:
    TacticalOverlay &operator=(TacticalOverlay const &); /* compiler_generated() */
};
static_assert(sizeof(TacticalOverlay) == 56, "Invalid TacticalOverlay size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool TacticalOverlay::isSettingOn(TacticalOverlay::TO_Flags const) const // 0x45159F
{
    mangled_assert("?isSettingOn@TacticalOverlay@@QBE_NW4TO_Flags@1@@Z");
    todo("implement");
}

_inline unsigned __int32 TacticalOverlay::getSettings() const // 0x5C6BE5
{
    mangled_assert("?getSettings@TacticalOverlay@@QBEIXZ");
    todo("implement");
}

_inline void TacticalOverlay::setSettings(unsigned __int32) // 0x5A699C
{
    mangled_assert("?setSettings@TacticalOverlay@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __TACTICALOVERLAY_H__
#endif
