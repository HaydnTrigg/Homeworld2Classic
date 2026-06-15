#if 0
#ifndef __NEWTASKBAR_H__
#define __NEWTASKBAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewTaskbar :
    public UI::NewUIScreen,
    public GameEventSys::Listener
{
public:
    enum TaskbarButton
    {
        TMB_Fleet = 0,
        TMB_Strike,
        TMB_Tactics,
        TMB_Events,
        TMB_Events_Wide,
        TMB_Chat,
        TMB_Menu,
        TMB_Menu_Wide,
        TMB_Diplomacy,
        TMB_Objectives,
        TMB_Sensors,
        TMB_Recall,
        TMB_Build,
        TMB_Research,
        TMB_Launch,
        TCB_Move,
        TCB_Attack,
        TCB_AttackMove,
        TCB_Guard,
        TCB_Dock,
        TCB_Stop,
        TCB_Waypoints,
        TCB_Harvest,
        TCB_Hyperspace,
        TCB_Retire,
        TCB_SensorPing,
        TCB_EMP,
        TCB_DefenseField,
        TCB_Cloak,
        TCB_Repair,
        TCB_Mines,
        TCB_RallyPoint,
        TCB_RallyObject,
        TCB_Scuttle,
        TCB_Confirm,
        TCB_Cancel,
        TMB_NextPage,
        TMB_PrevPage,
        TMB_ShipListBack,
        TMB_Hide1,
        TMB_Hide2,
        NUM_TaskbarButton,
    };
    NewTaskbar(UI::NewTaskbar const &); /* compiler_generated() */
    NewTaskbar(char const *);
    virtual ~NewTaskbar() override;
    virtual void Draw() override;
    virtual void Update(unsigned __int32) override;
    static void Toggle();
    void NextShips();
    void PrevShips();
    void HighlightShips(std::vector<unsigned int,std::allocator<unsigned int> > &);
    _inline Vector_2i GetMaximizedPos();
    _inline Vector_2i GetMinimizedPos();
    _inline void IgnoreProfilePhase(bool);
    struct ShipButtonData
    {
        unsigned __int32 shipType; // 0x0
        bool ownedByPlayer; // 0x4
        std::vector<unsigned int,std::allocator<unsigned int> > shipIDs; // 0x8
        _inline ShipButtonData(UI::NewTaskbar::ShipButtonData const &); /* compiler_generated() */
        _inline ShipButtonData(); /* compiler_generated() */
        _inline ~ShipButtonData(); /* compiler_generated() */
        UI::NewTaskbar::ShipButtonData &operator=(UI::NewTaskbar::ShipButtonData const &); /* compiler_generated() */
    };
    static_assert(sizeof(ShipButtonData) == 20, "Invalid ShipButtonData size");
    UI::NewTaskbar::ShipButtonData *GetButtonData(__int32);
    UI::NewTaskbar::ShipButtonData *GetButtonPreviousData(__int32);
    enum
    {
        PHASE_FULLUP = 0,
        PHASE_MINIMIZED,
        PHASE_STATSONLY,
        PHASE_HIDDEN,
        NUM_PHASE,
    };
    void SetPhase(__int32, bool);
    _inline __int32 GetPhase() const;
    void SetMenuButtonPressed(UI::NewTaskbar::TaskbarButton, bool);
    virtual void OnEvent(GameEventSys::Event const &) override;
    void SetBlackBgAlpha(float);
    static _inline UI::NewTaskbar *GetScreen();
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    enum
    {
        SHIP_BUTTON_COUNT = 14, // 0x000E
        SUBSYSTEM_BUTTON_COUNT = 12, // 0x000C
    };
private:
    UI::NewButton *m_btnShips[14]; // 0x1A0
    UI::ProgressBar *m_progressShips[14]; // 0x1D8
    UI::NewTextLabel *m_nameShips[14]; // 0x210
    UI::NewTextLabel *m_countShips[14]; // 0x248
    UI::InterfaceElement *m_iconShips[14]; // 0x280
    UI::NewButton *m_btnControlGroups[20]; // 0x2B8
    UI::NewFrame *m_unitStatsFrame; // 0x308
    UI::ProgressBar *m_unitProgress; // 0x30C
    UI::NewTextLabel *m_unitNameLabel; // 0x310
    UI::NewTextLabel *m_unitDamageLabel; // 0x314
    UI::NewTextLabel *m_unitArmourLabel; // 0x318
    UI::NewTextLabel *m_unitStanceLabel; // 0x31C
    UI::NewTextLabel *m_unitStatusLabel; // 0x320
    UI::InterfaceElement *m_unitIcon; // 0x324
    UI::NewButton *m_btnSubsystems[12]; // 0x328
    UI::NewButton *m_taskbarButtons[41]; // 0x358
    UI::NewFrame *m_blackBg; // 0x3FC
    __int32 m_startShip; // 0x400
    std::vector<unsigned int,std::allocator<unsigned int> > m_highlightedShips; // 0x404
    Vector_2i m_minimizedPos; // 0x410
    Vector_2i m_maximizedPos; // 0x418
    std::list<UI::NewTaskbar::ShipButtonData,std::allocator<UI::NewTaskbar::ShipButtonData> > m_shipButtonData[3]; // 0x420
    __int32 m_shipButtonCurrent; // 0x438
    __int32 m_shipButtonNew; // 0x43C
    __int32 m_shipButtonPrevious; // 0x440
    __int32 m_taskbarPhase; // 0x444
    bool m_updatePhase; // 0x448
    bool m_ignoreProfilePhase; // 0x449
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringShipCount; // 0x44C
    Color_4b m_healthBarGoodColor; // 0x464
    Color_4b m_healthBarPoorColor; // 0x468
    Color_4b m_healthBarFatalColor; // 0x46C
    Color_4b m_healthBarBackgroundColor; // 0x470
    Color_4b m_healthBarEnemyColor; // 0x474
    Color_4b m_healthBarEnemyBackgroundColor; // 0x478
    Color_4b m_healthBarAlliedColor; // 0x47C
    Color_4b m_healthBarAlliedBackgroundColor; // 0x480
    static UI::NewTaskbar *ms_taskbar;
    static void OnShipBtnSelect(UI::InterfaceElement *sender);
    static void OnShipNext(UI::InterfaceElement *sender);
    static void OnShipPrev(UI::InterfaceElement *sender);
    static void OnShipBack(UI::InterfaceElement *sender);
    static void OnHideButton1(UI::InterfaceElement *sender);
    static void OnHideButton2(UI::InterfaceElement *sender);
    static void OnSubsystemSelect(UI::InterfaceElement *sender);
    void SetHealthBarColors(UI::ProgressBar *, bool, bool);
public:
    UI::NewTaskbar &operator=(UI::NewTaskbar const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewTaskbar) == 1156, "Invalid UI::NewTaskbar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Vector_2i UI::NewTaskbar::GetMaximizedPos() // 0x59951F
{
    mangled_assert("?GetMaximizedPos@NewTaskbar@UI@@QAE?AUVector_2i@@XZ");
    todo("implement");
}

_inline Vector_2i UI::NewTaskbar::GetMinimizedPos() // 0x599537
{
    mangled_assert("?GetMinimizedPos@NewTaskbar@UI@@QAE?AUVector_2i@@XZ");
    todo("implement");
}

_inline void UI::NewTaskbar::IgnoreProfilePhase(bool) // 0x58D360
{
    mangled_assert("?IgnoreProfilePhase@NewTaskbar@UI@@QAEX_N@Z");
    todo("implement");
}

_inline __int32 UI::NewTaskbar::GetPhase() const // 0x59957C
{
    mangled_assert("?GetPhase@NewTaskbar@UI@@QBEHXZ");
    todo("implement");
}

_inline UI::NewTaskbar *UI::NewTaskbar::GetScreen() // 0x454608
{
    mangled_assert("?GetScreen@NewTaskbar@UI@@SGPAV12@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWTASKBAR_H__
#endif
