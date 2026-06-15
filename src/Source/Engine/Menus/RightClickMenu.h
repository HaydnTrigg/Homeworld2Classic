#if 0
#ifndef __RIGHTCLICKMENU_H__
#define __RIGHTCLICKMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::RightClickMenu :
    public UI::NewUIScreen
{
public:
    RightClickMenu(UI::RightClickMenu const &); /* compiler_generated() */
    RightClickMenu(char const *);
    virtual ~RightClickMenu() override;
    _inline UI::InterfaceElement *GetRootMenu();
    _inline UI::InterfaceElement *GetOpenSubMenu();
    _inline void SetOpenSubMenu(UI::InterfaceElement *);
    _inline bool ShouldOpenLeft();
    _inline void SetOpenLeft(bool);
    _inline __int32 GetTargetSobID();
    static void Menu_Move(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Attack(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Guard(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Dock(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Waypoint(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Stop(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Retire(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Harvest(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Repair(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_DefenseField(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Cloak(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Capture(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_SensorPing(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Mines(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_SpecialAttack(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Scuttle(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Aggressive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Defensive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Passive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Focus(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Overlay1(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Overlay2(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Overlay3(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Overlay4(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_OverlayOff(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Strike1(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Strike2(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_Strike3(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void Menu_StrikeLeave(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    UI::InterfaceElement *AddMenuItem(wchar_t const *, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32), __int32);
    UI::InterfaceElement *AddMenuLabel(wchar_t const *);
    UI::InterfaceElement *StartSubMenu(wchar_t const *);
    void EndSubMenu();
    static void CloseMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnOpenSubMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnCloseSubMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    UI::InterfaceElement *m_menu; // 0x19C
    UI::InterfaceElement *m_subMenu; // 0x1A0
    UI::InterfaceElement *m_menuItem; // 0x1A4
    UI::InterfaceElement *m_menuLabel; // 0x1A8
    UI::InterfaceElement *m_openSubMenu; // 0x1AC
    bool m_shouldOpenLeft; // 0x1B0
    __int32 m_targetSobID; // 0x1B4
    std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > m_menuStack; // 0x1B8
    std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > m_subMenus; // 0x1C0
public:
    UI::RightClickMenu &operator=(UI::RightClickMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::RightClickMenu) == 456, "Invalid UI::RightClickMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::RightClickMenu::GetRootMenu() // 0x5A519D
{
    mangled_assert("?GetRootMenu@RightClickMenu@UI@@QAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::RightClickMenu::GetOpenSubMenu() // 0x5A5196
{
    mangled_assert("?GetOpenSubMenu@RightClickMenu@UI@@QAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::RightClickMenu::SetOpenSubMenu(UI::InterfaceElement *) // 0x5A6879
{
    mangled_assert("?SetOpenSubMenu@RightClickMenu@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
}

_inline bool UI::RightClickMenu::ShouldOpenLeft() // 0x5A6886
{
    mangled_assert("?ShouldOpenLeft@RightClickMenu@UI@@QAE_NXZ");
    todo("implement");
}

_inline void UI::RightClickMenu::SetOpenLeft(bool) // 0x5A686C
{
    mangled_assert("?SetOpenLeft@RightClickMenu@UI@@QAEX_N@Z");
    todo("implement");
}

_inline __int32 UI::RightClickMenu::GetTargetSobID() // 0x5A51A4
{
    mangled_assert("?GetTargetSobID@RightClickMenu@UI@@QAEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RIGHTCLICKMENU_H__
#endif
