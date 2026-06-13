#if 0
#ifndef __SHIPICONS_H__
#define __SHIPICONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ShipIcons
{
public:
    static UI::ShipIcons *i();
    static bool Create();
    static bool Destroy();
    boost::shared_ptr<UI::Graphic> GetShipIcon(unsigned __int32);
    boost::shared_ptr<UI::Graphic> GetShipIconByName(char const *);
    boost::shared_ptr<UI::Graphic> GetShipSmallIcon(unsigned __int32);
    boost::shared_ptr<UI::Graphic> GetShipSmallIconByName(char const *);
    boost::shared_ptr<UI::Graphic> GetDefaultShipIcon();
    boost::shared_ptr<UI::Graphic> GetDefaultShipSmallIcon();
private:
    static UI::ShipIcons *ms_shipIcons;
public:
    ShipIcons(UI::ShipIcons const &); /* compiler_generated() */
private:
    ShipIcons();
    ~ShipIcons();
    struct ShipIconInfo
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > shipName; // 0x0
        unsigned __int32 id; // 0x18
        boost::shared_ptr<UI::Graphic> icon; // 0x1C
        boost::shared_ptr<UI::Graphic> smallIcon; // 0x24
        _inline ShipIconInfo(UI::ShipIcons::ShipIconInfo const &); /* compiler_generated() */
        _inline ShipIconInfo(); /* compiler_generated() */
        _inline ~ShipIconInfo(); /* compiler_generated() */
        UI::ShipIcons::ShipIconInfo &operator=(UI::ShipIcons::ShipIconInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(ShipIconInfo) == 44, "Invalid ShipIconInfo size");
    bool LoadFile(char const *, char const *);
    bool Load(LuaConfig &, char const *, UI::ShipIcons::ShipIconInfo &);
    UI::ShipIcons::ShipIconInfo *GetShipIconInfo(unsigned __int32);
    UI::ShipIcons::ShipIconInfo *GetShipIconInfoByName(char const *);
    std::list<UI::ShipIcons::ShipIconInfo,std::allocator<UI::ShipIcons::ShipIconInfo> > m_shipIconList; // 0x0
    UI::ShipIcons::ShipIconInfo m_defaultIcon; // 0x8
public:
    UI::ShipIcons &operator=(UI::ShipIcons const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ShipIcons) == 52, "Invalid UI::ShipIcons size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHIPICONS_H__
#endif
