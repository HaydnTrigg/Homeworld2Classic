#if 0
#ifndef __NEWLAUNCHMENU_H__
#define __NEWLAUNCHMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewLaunchMenu :
    public UI::NewUIScreen,
    public GameEventSys::Listener,
    public Selection::Observer
{
public:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    NewLaunchMenu(UI::NewLaunchMenu const &); /* compiler_generated() */
    NewLaunchMenu(char const *);
    virtual ~NewLaunchMenu() override;
    virtual void Update(unsigned __int32) override;
    virtual void Draw() override;
    virtual void OnEvent(GameEventSys::Event const &) override;
    static void Toggle();
    static void ToggleNextShip();
    void NextShip();
    _inline SobID const &GetLaunchShip() const;
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnPostActivate(bool) override;
private:
    void SetLaunchShip(SobID const &);
    void FillLaunchShipList();
    void FillDockedShipList();
    void ToggleStayDocked();
    void LaunchAll();
    void LaunchSelected();
    void FocusOnCurrentShip(bool, bool);
    void SetPointerInfo();
    static void OnChooseLaunchShip(UI::InterfaceElement *sender, __int32 index);
    static void OnStayDockedButton(UI::InterfaceElement *sender);
    static void OnLaunchAllButton(UI::InterfaceElement *sender);
    static void OnLaunchButton(UI::InterfaceElement *sender);
    static void OnNextShipClicked(UI::InterfaceElement *btn);
    static void OnPrevShipClicked(UI::InterfaceElement *btn);
    static void OnBuildShipIconClicked(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b);
    UI::NewDropDownListBox *m_launchShipList; // 0x1A4
    UI::TextListBoxItem *m_launchShipItem; // 0x1A8
    UI::NewListBox *m_dockedShipList; // 0x1AC
    UI::ListBoxItem *m_dockedShipItem; // 0x1B0
    UI::NewTextLabel *m_dockedCountLabel; // 0x1B4
    UI::NewFrame *m_shipIcon; // 0x1B8
    UI::InterfaceElement *m_elmtDrawToShipLine; // 0x1BC
    UI::ProgressBar *m_progressHealth; // 0x1C0
    SobID m_currentLaunchShip; // 0x1C4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringDockedCount; // 0x1D0
    vector4 m_drawToShipLineColor; // 0x1E8
    __int32 m_drawToShipLineWidth; // 0x1F8
    __int32 m_drawToShipStubLength; // 0x1FC
    Color_4b m_shipHealthColor; // 0x200
    bool m_ignoreSelection; // 0x204
    bool m_firstUpdate; // 0x205
    bool m_needUpdate; // 0x206
    stdext::hash_map<unsigned int,UI::ProgressBar *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > > m_progressMap; // 0x208
public:
    UI::NewLaunchMenu &operator=(UI::NewLaunchMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewLaunchMenu) == 552, "Invalid UI::NewLaunchMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SobID const &UI::NewLaunchMenu::GetLaunchShip() const // 0x57F9BC
{
    mangled_assert("?GetLaunchShip@NewLaunchMenu@UI@@QBEABVSobID@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWLAUNCHMENU_H__
#endif
