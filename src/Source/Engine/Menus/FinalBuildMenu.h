#if 0
#ifndef __FINALBUILDMENU_H__
#define __FINALBUILDMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::BuildInfoPopup :
    public UI::NewUIScreen
{
public:
    BuildInfoPopup(UI::BuildInfoPopup const &); /* compiler_generated() */
    BuildInfoPopup(char const *);
    virtual ~BuildInfoPopup() override;
    static void Popup(__int32 right, __int32 top, __int32 h, unsigned __int32 typeId);
    static void Hide();
protected:
    virtual void OnPostLoad() override;
private:
    UI::NewTextLabel *m_lblName; // 0x19C
    UI::NewTextLabel *m_lblDescription; // 0x1A0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fName; // 0x1A4
    static UI::BuildInfoPopup *ms_screen;
public:
    UI::BuildInfoPopup &operator=(UI::BuildInfoPopup const &); /* compiler_generated() */
};
static_assert(sizeof(UI::BuildInfoPopup) == 444, "Invalid UI::BuildInfoPopup size");

class UI::CollapsableQueue :
    public UI::NewFrame
{
public:
    CollapsableQueue(UI::CollapsableQueue const &); /* compiler_generated() */
    CollapsableQueue(UI::InterfaceElement *, char const *, UI::NewFrame const &);
    virtual ~CollapsableQueue() override;
    void Expand(bool);
    void InsertQueueListBoxItem(UI::QueueListBoxItem *);
    void ClearQueue();
    _inline void ConnectOnExpand(void (*)(UI::InterfaceElement *));
    void ConnectOnPause(void (*)(UI::InterfaceElement *));
    void SetTitle(wchar_t const *);
    void SetProgressColor(Color_4b const &);
    _inline void SetSiblingQueue(UI::CollapsableQueue *);
    void FlashPauseButton(bool);
    _inline UI::NewListBox *GetListBox();
    _inline UI::ListBoxItem *GetQueueListBoxItemToClone();
    _inline UI::QueueListBoxItem *GetTopOfQueueItem() const;
private:
    static void OnExpandedClicked(UI::InterfaceElement *btn);
    void UpdateExpandCollapseButtons(unsigned __int32);
    UI::QueueListBoxItem *m_topOfQueueItem; // 0x400
    UI::NewFrame *m_topOfQueue; // 0x404
    UI::NewListBox *m_listQueue; // 0x408
    UI::NewFrame *m_frameCollapsable; // 0x40C
    UI::NewFrame *m_frameNonCollapsable; // 0x410
    UI::ListBoxItem *m_itemToClone; // 0x414
    UI::NewButton *m_btnPause; // 0x418
    UI::NewTextLabel *m_lblNoTasksPending; // 0x41C
    UI::NewButton *m_btnExpand; // 0x420
    UI::NewButton *m_btnCollapse; // 0x424
    UI::NewButton *m_btnExpandEmpty; // 0x428
    UI::NewButton *m_btnCollapseEmpty; // 0x42C
    UI::NewTextLabel *m_lblItemCount; // 0x430
    UI::CollapsableQueue *m_siblingQueue; // 0x434
    bool m_expanded; // 0x438
    UI::UISignal m_onExpand; // 0x43C
public:
    UI::CollapsableQueue &operator=(UI::CollapsableQueue const &); /* compiler_generated() */
};
static_assert(sizeof(UI::CollapsableQueue) == 1096, "Invalid UI::CollapsableQueue size");

class UI::FinalBuildMenu :
    public UI::NewUIScreen,
    public SquadronList::Observer,
    public Selection::Observer
{
public:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Insertion(Squadron *) override;
    virtual void Notify_Removal(Sob *) override;
    virtual void Notify_Removal(Squadron *) override;
    FinalBuildMenu(UI::FinalBuildMenu const &); /* compiler_generated() */
    FinalBuildMenu(char const *);
    virtual ~FinalBuildMenu() override;
    virtual void Update(unsigned __int32) override;
    virtual void Draw() override;
    void NextShip();
    void FocusOnCurrentShip(bool, bool);
    void SelectFacility(unsigned __int32);
    void SelectShowAll();
    Ship *GetCurrentBuildShipPtr();
    static void Toggle();
    static void ToggleNextShip();
    static UI::NewFrame *GetCollapsableQueueToClone();
    void SetBuildShip(SobID const &, bool);
    _inline SobID const &GetBuildShip() const;
    void HotKeySendBuildOrder(unsigned __int32);
    void HotKeySendPauseShipOrder();
    void HotKeySendPauseSubSystemOrder();
    void HotKeyCancelBuildShip();
    void HotKeyCancelBuildSubSystem();
    static _inline UI::FinalBuildMenu *GetScreen();
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnPostActivate(bool) override;
    enum BuildItemState
    {
        BIS_Available = 0,
        BIS_UnitCapsReached,
        BIS_NotYetAvailable,
        BIS_AlreadyBuilt,
        BIS_Replaceable,
    };
private:
    UI::NewListBox *m_listShips; // 0x1A4
    UI::CollapsableQueue *m_collapsableShipQueue; // 0x1A8
    UI::CollapsableQueue *m_collapsableSubsystemQueue; // 0x1AC
    UI::NewFrame *m_frameQueues; // 0x1B0
    UI::NewDropDownListBox *m_comboShips; // 0x1B4
    UI::TextListBoxItem *m_buildShipDropDownListBoxItem; // 0x1B8
    UI::NewButton *m_showAllItemToClone; // 0x1BC
    UI::ListBoxItem *m_showAllFamilyItemToClone; // 0x1C0
    UI::ListBoxItem *m_buildItemToClone; // 0x1C4
    UI::ListBoxItem *m_emptyBuildItemToClone; // 0x1C8
    UI::ListBoxItem *m_emptyShowAllItemToClone; // 0x1CC
    UI::NewFrame *m_frameBuildQueueHeader; // 0x1D0
    UI::NewFrame *m_frameShipGraphic; // 0x1D4
    UI::NewFrame *m_frameButtonGroup; // 0x1D8
    UI::NewTextLabel *m_lblToolTip; // 0x1DC
    UI::NewTextLabel *m_lblProductionCount; // 0x1E0
    UI::NewTextLabel *m_lblSensorsCount; // 0x1E4
    UI::NewTextLabel *m_lblModuleCount; // 0x1E8
    UI::NewTextLabel *m_lblFacilityUnitCaps; // 0x1EC
    UI::InterfaceElement *m_elmtDrawToShipLine; // 0x1F0
    UI::ProgressBar *m_progressHealth; // 0x1F4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_textureFolder; // 0x1F8
    bool m_firstUpdate; // 0x210
    bool m_needUpdate; // 0x211
    bool m_showAll; // 0x212
    SobID m_currentBuildShip; // 0x214
    unsigned __int32 m_currentFamilyIndex; // 0x220
    std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > > m_mapShipItems; // 0x224
    std::map<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > > m_mapShowAllItems; // 0x22C
    std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > m_mapShowAllFamilyItems; // 0x234
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > m_mapFamilyIndex; // 0x23C
    std::map<unsigned int,UI::NewButton *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> > > m_mapFacilityButtons; // 0x244
    UI::NewButton *m_btnShowAll; // 0x24C
    std::vector<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > m_emptyItems; // 0x250
    std::vector<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > m_emptyShowAllItems; // 0x25C
    vector4 m_drawToShipLineColor; // 0x268
    __int32 m_drawToShipLineWidth; // 0x278
    __int32 m_drawToShipStubLength; // 0x27C
    __int32 m_queuesFramePos; // 0x280
    Color_4b m_menuColor; // 0x284
    Color_4b m_notYetAvail; // 0x288
    Color_4b m_unitCapsReachedColor; // 0x28C
    Color_4b m_unitCapsReachedTextColor; // 0x290
    Color_4b m_itemBGColor; // 0x294
    Color_4b m_neverAvail; // 0x298
    Color_4b m_shipNameEnabledColor; // 0x29C
    Color_4b m_shipNameDisabledColor; // 0x2A0
    Color_4b m_subsysColor; // 0x2A4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringRU; // 0x2A8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringQueue; // 0x2C0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_shipQueueTitle; // 0x2D8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_subsystemQueueTitle; // 0x2F0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringHardpoints; // 0x308
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringSubReplace; // 0x320
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringUnitCaps; // 0x338
    std::map<int,boost::shared_ptr<UI::Graphic>,std::less<int>,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > > > m_buildShipIcons; // 0x350
    bool m_ignoreSelection; // 0x358
    Selection m_lastSelection; // 0x35C
    static UI::FinalBuildMenu *ms_buildMenu;
    void SetPointerInfo();
    void InitShipItemText(UI::InterfaceElement *, BuildData const *);
    void InitShipItemIcon(UI::ListBoxItem *, BuildData const *);
    void SetBuildItemState(UI::ListBoxItem *, UI::FinalBuildMenu::BuildItemState);
    void InitQueueItem(UI::QueueListBoxItem *, UIBuildJob const *);
    void FillBuildShipList();
    void FillBuildList(__int32);
    void FillQueues();
    void FillQueueWithType(BuildType, UI::CollapsableQueue *, BuildQueue *);
    void AddBuildShipsToDropDownList(Selection const &);
    void PurgeBuildShipsFromDropDownList();
    bool LoadBuildShipIcon(char const *);
    void ValidateFacilityButtons(Ship *);
    void UpdateFamilyUnitCapsHeader(unsigned __int32);
    void UpdateUnitCapsLabel(unsigned __int32, UI::NewTextLabel *);
    bool FileDoesExist(char const *);
    void UpdateSubsystemHardpoints();
    bool IsBuildFamilyRestricted(unsigned __int32);
    static void OnFacilityClicked(UI::InterfaceElement *sender);
    static void OnShowAllClicked(UI::InterfaceElement *sender);
    static void OnShipListItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
    static void OnChooseBuildShipSelect(UI::InterfaceElement *sender, __int32 index);
    static void OnShipListMousePressed(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 b);
    static void OnChooseBuildShipMouseReleased(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
    static void OnQueueExpand(UI::InterfaceElement *queue);
    static void OnPauseShipQueue(UI::InterfaceElement *btn);
    static void OnPauseSubsystemQueue(UI::InterfaceElement *btn);
    static void OnHideShipItemInfo(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b);
    static void OnShowShipItemInfo(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b);
    static void OnNextShipClicked(UI::InterfaceElement *btn);
    static void OnPrevShipClicked(UI::InterfaceElement *btn);
    static void OnBuildShipIconClicked(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b);
    static void OnAcceptReplaceSubSystem(UI::InterfaceElement *e);
public:
    UI::FinalBuildMenu &operator=(UI::FinalBuildMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::FinalBuildMenu) == 912, "Invalid UI::FinalBuildMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_57ED5D(UI::CollapsableQueue *const, void (*)(UI::InterfaceElement *));
_inline void UI::CollapsableQueue::ConnectOnExpand(void (*)(UI::InterfaceElement *)) // 0x57ED5D
{
    mangled_assert("?ConnectOnExpand@CollapsableQueue@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_57ED5D(this, arg);
}

_extern void _sub_5820A1(UI::CollapsableQueue *const, UI::CollapsableQueue *);
_inline void UI::CollapsableQueue::SetSiblingQueue(UI::CollapsableQueue *) // 0x5820A1
{
    mangled_assert("?SetSiblingQueue@CollapsableQueue@UI@@QAEXPAV12@@Z");
    todo("implement");
    _sub_5820A1(this, arg);
}

_extern UI::NewListBox *_sub_57F9C3(UI::CollapsableQueue *const);
_inline UI::NewListBox *UI::CollapsableQueue::GetListBox() // 0x57F9C3
{
    mangled_assert("?GetListBox@CollapsableQueue@UI@@QAEPAVNewListBox@2@XZ");
    todo("implement");
    UI::NewListBox * __result = _sub_57F9C3(this);
    return __result;
}

_extern UI::ListBoxItem *_sub_57FA16(UI::CollapsableQueue *const);
_inline UI::ListBoxItem *UI::CollapsableQueue::GetQueueListBoxItemToClone() // 0x57FA16
{
    mangled_assert("?GetQueueListBoxItemToClone@CollapsableQueue@UI@@QAEPAVListBoxItem@2@XZ");
    todo("implement");
    UI::ListBoxItem * __result = _sub_57FA16(this);
    return __result;
}

_extern UI::QueueListBoxItem *_sub_57FA37(UI::CollapsableQueue const *const);
_inline UI::QueueListBoxItem *UI::CollapsableQueue::GetTopOfQueueItem() const // 0x57FA37
{
    mangled_assert("?GetTopOfQueueItem@CollapsableQueue@UI@@QBEPAVQueueListBoxItem@2@XZ");
    todo("implement");
    UI::QueueListBoxItem * __result = _sub_57FA37(this);
    return __result;
}

_extern SobID const &_sub_59374F(UI::FinalBuildMenu const *const);
_inline SobID const &UI::FinalBuildMenu::GetBuildShip() const // 0x59374F
{
    mangled_assert("?GetBuildShip@FinalBuildMenu@UI@@QBEABVSobID@@XZ");
    todo("implement");
    SobID const & __result = _sub_59374F(this);
    return __result;
}

_extern UI::FinalBuildMenu *_sub_57FA24();
_inline UI::FinalBuildMenu *UI::FinalBuildMenu::GetScreen() // 0x57FA24
{
    mangled_assert("?GetScreen@FinalBuildMenu@UI@@SGPAV12@XZ");
    todo("implement");
    UI::FinalBuildMenu * __result = _sub_57FA24();
    return __result;
}

/* ---------- private code */

#endif // __FINALBUILDMENU_H__
#endif
