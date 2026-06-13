#if 0
#ifndef __UNITSMENU_H__
#define __UNITSMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::UnitCapInfoPopup :
    public UI::NewUIScreen,
    public GameEventSys::Listener
{
public:
    UnitCapInfoPopup(UI::UnitCapInfoPopup const &); /* compiler_generated() */
    UnitCapInfoPopup(char const *);
    virtual ~UnitCapInfoPopup() override;
    struct UnitCapEntry
    {
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > title; // 0x0
        __int32 familyId; // 0x18
        __int32 shipId; // 0x1C
        unsigned __int32 priority; // 0x20
        unsigned __int32 maxPop; // 0x24
        unsigned __int32 currentPop; // 0x28
        unsigned __int32 tabs; // 0x2C
        _inline UnitCapEntry(UI::UnitCapInfoPopup::UnitCapEntry const &); /* compiler_generated() */
        _inline UnitCapEntry(); /* compiler_generated() */
        _inline ~UnitCapEntry(); /* compiler_generated() */
        UI::UnitCapInfoPopup::UnitCapEntry &operator=(UI::UnitCapInfoPopup::UnitCapEntry const &); /* compiler_generated() */
    };
    static_assert(sizeof(UnitCapEntry) == 48, "Invalid UnitCapEntry size");
    static UI::UnitCapInfoPopup *GetScreen();
    virtual void Update(unsigned __int32) override;
    virtual void OnEvent(GameEventSys::Event const &) override;
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnLoad(LuaConfig &) override;
private:
    boost::scoped_ptr<UI::UnitCapInfoPopupData> m_pimpl; // 0x1A0
    static UI::UnitCapInfoPopup *ms_screen;
    void DisplayUnitCapInfo(unsigned __int32);
    void AddUnitCap(wchar_t const *, unsigned __int32, unsigned __int32, unsigned __int32);
public:
    UI::UnitCapInfoPopup &operator=(UI::UnitCapInfoPopup const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UnitCapInfoPopup) == 420, "Invalid UI::UnitCapInfoPopup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __UNITSMENU_H__
#endif
