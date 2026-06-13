#if 0
#ifndef __NEWRESEARCHMENU_H__
#define __NEWRESEARCHMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ResearchInfoPopup :
    public UI::NewUIScreen
{
public:
    ResearchInfoPopup(UI::ResearchInfoPopup const &); /* compiler_generated() */
    ResearchInfoPopup(char const *);
    virtual ~ResearchInfoPopup() override;
    static void Popup(__int32 right, __int32 top, __int32 h, unsigned __int32 researchId);
    static void Hide();
protected:
    virtual void OnPostLoad() override;
private:
    UI::NewTextLabel *m_lblName; // 0x19C
    UI::NewTextLabel *m_lblDescription; // 0x1A0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fName; // 0x1A4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fDescription; // 0x1BC
    static UI::ResearchInfoPopup *ms_screen;
    void SetResearchInfo(ResearchData *);
public:
    UI::ResearchInfoPopup &operator=(UI::ResearchInfoPopup const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ResearchInfoPopup) == 468, "Invalid UI::ResearchInfoPopup size");

class UI::NewResearchMenu :
    public UI::NewUIScreen
{
public:
    NewResearchMenu(UI::NewResearchMenu const &); /* compiler_generated() */
    NewResearchMenu(char const *);
    virtual ~NewResearchMenu() override;
    void SelectFacility(unsigned __int32);
    void SelectShowAll();
    virtual void Update(unsigned __int32) override;
    static void Toggle();
    static _inline UI::NewResearchMenu *GetScreen();
    void Refresh();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnLoad(LuaConfig &) override;
private:
    static UI::NewResearchMenu *ms_researchMenu;
    void FillResearchList(__int32);
    void AddResearchItemsToList(std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > const &, std::list<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > &);
    void AddSingleResearchItemToList(UI::ListBoxItem *, std::list<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > &);
    void InitQueueItem(UI::QueueListBoxItem *, ResearchData const *);
    void FillResearchQueue();
    void FlushResearchListItems();
    void FlushItemUpgrades(UI::ListBoxItem *);
    unsigned __int32 InsertItemUpgrades(unsigned __int32, UI::ListBoxItem *);
    std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > > m_mapFacilityButtons; // 0x19C
    std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > > m_mapUpgradeButtons; // 0x1A4
    std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > > m_mapShipUpgradeItems; // 0x1AC
    std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > m_mapFamilyUpgradeItems; // 0x1B4
    bool m_showAll; // 0x1BC
    unsigned __int32 m_currentFamilyIndex; // 0x1C0
    unsigned __int32 m_lastUpdatedPlayer; // 0x1C4
    Color_4b m_menuColor; // 0x1C8
    UI::NewListBox *m_listResearch; // 0x1CC
    UI::NewFrame *m_frameQueues; // 0x1D0
    UI::NewFrame *m_frameButtonGroup; // 0x1D4
    UI::CollapsableQueue *m_collapsableQueue; // 0x1D8
    UI::NewTextLabel *m_lblToolTip; // 0x1DC
    UI::NewButton *m_btnShowAll; // 0x1E0
    UI::ListBoxItem *m_queueItemToClone; // 0x1E4
    UI::ListBoxItem *m_emptyShipUpgradeItemToClone; // 0x1E8
    std::vector<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > m_emptyItems; // 0x1EC
    std::list<ResearchData *,std::allocator<ResearchData *> > m_listMasterResearch; // 0x1F8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fCostString; // 0x200
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_abilitiesText; // 0x218
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_techText; // 0x230
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_queueTitle; // 0x248
    __int32 m_itemIconUV[4]; // 0x260
    __int32 m_queuesFramePos; // 0x270
    std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_familyIcons; // 0x274
    unsigned __int32 m_defaultDisplayPriority; // 0x27C
    static void AvailResearchDoubleClicked(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
    static void OnTechsTabClicked(UI::InterfaceElement *);
    static void OnUpgradesTabClicked(UI::InterfaceElement *);
    static void OnUpgradeEnter(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnUpgradeExit(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnShowAllClicked(UI::InterfaceElement *sender);
    static void OnFacilityClicked(UI::InterfaceElement *sender);
    static void OnUpgradeClicked(UI::InterfaceElement *sender);
    static void OnQueueExpand(UI::InterfaceElement *queue);
    static void OnPauseResearchQueue(UI::InterfaceElement *btn);
public:
    UI::NewResearchMenu &operator=(UI::NewResearchMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewResearchMenu) == 640, "Invalid UI::NewResearchMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::NewResearchMenu *_sub_5C556F();
_inline UI::NewResearchMenu *UI::NewResearchMenu::GetScreen() // 0x5C556F
{
    mangled_assert("?GetScreen@NewResearchMenu@UI@@SGPAV12@XZ");
    todo("implement");
    UI::NewResearchMenu * __result = _sub_5C556F();
    return __result;
}

/* ---------- private code */

#endif // __NEWRESEARCHMENU_H__
#endif
