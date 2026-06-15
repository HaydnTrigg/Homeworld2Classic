#if 0
#ifndef __PLAYERSLOTFRAME_H__
#define __PLAYERSLOTFRAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PlayerSlotFrame :
    public UI::NewFrame
{
public:
    PlayerSlotFrame(UI::PlayerSlotFrame const &); /* compiler_generated() */
    PlayerSlotFrame(UI::NewFrame const &, unsigned __int32, unsigned __int32, UI::TextListBoxItem *, UI::InterfaceElement *, char const *, UI::GameSetup *);
    virtual ~PlayerSlotFrame() override;
    _inline bool IsAvailable() const;
    _inline bool IsHumanPlayer() const;
    _inline bool IsCPUPlayer() const;
    _inline bool IsLocalPlayer() const;
    _inline bool IsRemotePlayer() const;
    _inline bool IsLocalSlot() const;
    _inline bool IsReady() const;
    _inline bool IsVisible() const;
    _inline __int32 GetTeam() const;
    _inline unsigned __int32 GetStatus() const;
    StagingArea::PlayerSettings const &GetPlayerSettings();
    void ResetPlayerSettings(__int32);
    _inline wchar_t const *GetPlayerName() const;
    __int32 GetPlayerPosition() const;
    void MakeHumanPlayer(wchar_t const *, bool);
    void MakeCPUPlayer();
    void MakeOpen();
    void MakeClosed();
    void MakeEmpty();
    void DisableReadyButton();
    void EnableHostButtons(bool);
    void EnableLocalButtons(bool);
    void SetPlayerSlotVisible(bool);
    _inline void SetHost(bool);
    _inline void SetLocal(bool);
    void SetPlayerRace(unsigned __int32);
    void SetPlayerTeam(unsigned __int32);
    void SetPlayerPosition(unsigned __int32);
    void SetMaxPlayers(unsigned __int32);
    void SetPlayerDifficulty(__int32);
    void RefreshEmblem();
    void SetPing(__int32);
    SlotStatus GetPlayerSlotStatus() const;
    void OnNetPlayerSettings(StagingArea::PlayerSettings const &, wchar_t const *);
    void OnNetHostSettings(StagingArea::HostSettings const &);
    void UpdateNetwork(StagingArea *);
    void FillHostSettings(StagingArea::HostSettings &);
private:
    void SetPlayerName(wchar_t const *);
    void SetPlayerSlotType(SlotStatus);
    void Init();
    UI::NewDropDownListBox *m_comboSlotSettings; // 0x400
    UI::InterfaceElement *m_framePlayerInfoLOCAL; // 0x404
    UI::NewTextLabel *m_lblNameLocalLOCAL; // 0x408
    UI::InterfaceElement *m_frameEmblemLOCAL; // 0x40C
    UI::InterfaceElement *m_btnEmblemLOCAL; // 0x410
    boost::shared_ptr<UI::Graphic> m_graphicBadgeIconLOCAL; // 0x414
    boost::shared_ptr<UI::Graphic> m_graphicStripeLOCAL; // 0x41C
    UI::InterfaceElement *m_framePlayerInfoOTHER; // 0x424
    UI::InterfaceElement *m_frameEmblemOTHER; // 0x428
    UI::InterfaceElement *m_btnEmblemOTHER; // 0x42C
    boost::shared_ptr<UI::Graphic> m_graphicBadgeIconOTHER; // 0x430
    boost::shared_ptr<UI::Graphic> m_graphicStripeOTHER; // 0x438
    UI::NewDropDownListBox *m_comboRace; // 0x440
    UI::NewDropDownListBox *m_comboTeam; // 0x444
    UI::NewDropDownListBox *m_comboPosition; // 0x448
    UI::NewDropDownListBox *m_comboCPUDifficulty; // 0x44C
    UI::TextListBoxItem *m_itemHuman; // 0x450
    UI::TextListBoxItem *m_itemCPU; // 0x454
    UI::TextListBoxItem *m_itemClosed; // 0x458
    UI::TextListBoxItem *m_itemCPUHuman; // 0x45C
    UI::TextListBoxItem *m_itemCPUClosed; // 0x460
    UI::NewTextLabel *m_lblPing; // 0x464
    UI::NewButton *m_btnOk; // 0x468
    UI::TextListBoxItem *m_listBoxItemToClone; // 0x46C
    unsigned __int32 m_slotIndex; // 0x470
    SlotStatus m_status; // 0x474
    unsigned __int32 m_maxPlayers; // 0x478
    bool m_bPlayerSlotVisible; // 0x47C
    bool m_bLocal; // 0x47D
    bool m_bHost; // 0x47E
    StagingArea::PlayerSettings m_playerSettings; // 0x47F
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_playerName; // 0x4AC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_badge; // 0x4C4
    UI::GameSetup *m_gameSetup; // 0x4DC
    void FillPlayerSettings(StagingArea::PlayerSettings &);
    static void OnSimpleChange(UI::InterfaceElement *element);
    static void OnListBoxChange(UI::InterfaceElement *element);
    static void OnSlotTypeClicked(UI::InterfaceElement *);
    static void OnEmblemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnCPUEmblemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnReadyClicked(UI::InterfaceElement *element);
public:
    UI::PlayerSlotFrame &operator=(UI::PlayerSlotFrame const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlayerSlotFrame) == 1248, "Invalid UI::PlayerSlotFrame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool UI::PlayerSlotFrame::IsAvailable() const // 0x58854A
{
    mangled_assert("?IsAvailable@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsHumanPlayer() const // 0x58856A
{
    mangled_assert("?IsHumanPlayer@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsCPUPlayer() const // 0x588556
{
    mangled_assert("?IsCPUPlayer@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsLocalPlayer() const // 0x5A2D12
{
    mangled_assert("?IsLocalPlayer@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsRemotePlayer() const // 0x5A2D30
{
    mangled_assert("?IsRemotePlayer@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsLocalSlot() const // 0x588577
{
    mangled_assert("?IsLocalSlot@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsReady() const // 0x58857E
{
    mangled_assert("?IsReady@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::PlayerSlotFrame::IsVisible() const // 0x58858C
{
    mangled_assert("?IsVisible@PlayerSlotFrame@UI@@QBE_NXZ");
    todo("implement");
}

_inline __int32 UI::PlayerSlotFrame::GetTeam() const // 0x587D1E
{
    mangled_assert("?GetTeam@PlayerSlotFrame@UI@@QBEHXZ");
    todo("implement");
}

_inline unsigned __int32 UI::PlayerSlotFrame::GetStatus() const // 0x587D17
{
    mangled_assert("?GetStatus@PlayerSlotFrame@UI@@QBEIXZ");
    todo("implement");
}

_inline wchar_t const *UI::PlayerSlotFrame::GetPlayerName() const // 0x587CFE
{
    mangled_assert("?GetPlayerName@PlayerSlotFrame@UI@@QBEPB_WXZ");
    todo("implement");
}

_inline void UI::PlayerSlotFrame::SetHost(bool) // 0x58A090
{
    mangled_assert("?SetHost@PlayerSlotFrame@UI@@QAEX_N@Z");
    todo("implement");
}

_inline void UI::PlayerSlotFrame::SetLocal(bool) // 0x58A192
{
    mangled_assert("?SetLocal@PlayerSlotFrame@UI@@QAEX_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PLAYERSLOTFRAME_H__
#endif
