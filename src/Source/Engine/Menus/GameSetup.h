#if 0
#ifndef __GAMESETUP_H__
#define __GAMESETUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameSetup :
    public UI::NewUIScreen,
    private LobbyEvent,
    public StagingArea::ICallbacks
{
public:
    enum ScreenType
    {
        ST_Skirmish = 0,
        ST_Multiplayer,
    };
    typedef std::vector<UI::PlayerSlotFrame *,std::allocator<UI::PlayerSlotFrame *> > PlayerSlots;
    typedef std::vector<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > DropDownListBoxMap;
    GameSetup(UI::GameSetup &); /* compiler_generated() */
    GameSetup(char const *);
    virtual ~GameSetup() override;
    _inline void SetMultiplayerType(GameSettings::MultiplayerType);
    void SetPreviousScreen(char const *);
    void InitializeSkirmish();
    void InitializeMultiplayer(std::auto_ptr<Net::Session>, unsigned long long);
    void ScrollOptionsUp();
    void ScrollOptionsDown();
    void AddChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &);
protected:
    virtual void OnActivate(bool) override;
    virtual void OnFocus(bool) override;
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void Update(unsigned __int32) override;
private:
    void FillChatStateData();
    void FillLevelListBox();
    void Initialize();
    void InitializePlayersFrame();
    void GameSetupStoreOptionsInProfile();
public:
    UI::GameSetup::ScreenType GetScreenType() const;
    void ClearGameOptions();
    void LoadGameOptions();
    void ApplyGameSettings();
    _inline UI::PlayerSlotFrame *GetPlayerSlotFrame(__int32) const;
    void OnHostReady(bool);
private:
    virtual void OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) override;
    virtual void OnLobbyPlayerConnect(wchar_t const *, bool) override;
    virtual void OnLobbyPlayerDisconnect(wchar_t const *) override;
    virtual void OnLobbyPlayerChanged(wchar_t const *) override;
    virtual void OnLobbyDisconnected(wchar_t const *) override;
    virtual _inline void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionDeleted(unsigned long long) override;
    virtual _inline void OnLobbySessionUpdated(unsigned long long) override;
    virtual _inline void OnLobbyRoomAdded(unsigned long long) override;
    virtual _inline void OnLobbyCDAuthenticate(bool, wchar_t const *) override;
    virtual _inline void OnLobbyChatConnectResult(bool, unsigned __int32) override;
    virtual _inline void OnLobbyRoomJoinedResult(LobbyRoomType, bool) override;
public:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_cpuName; // 0x1A4
private:
    UI::NewDropDownListBox *m_comboMaps; // 0x1BC
    UI::NewFrame *m_frameSkirmish; // 0x1C0
    UI::NewFrame *m_optionFrameToClone; // 0x1C4
    UI::TextListBoxItem *m_listBoxItemToClone; // 0x1C8
    UI::NewTextLabel *m_lblTitle; // 0x1CC
    UI::NewTextLabel *m_lblSubTitle; // 0x1D0
    UI::NewTextLabel *m_lblIP; // 0x1D4
    UI::NewTextLabel *m_lblPing; // 0x1D8
    UI::NewTextLabel *m_lblReady; // 0x1DC
    UI::NewFrame *m_frameChat; // 0x1E0
    UI::NewFrame *m_frameOptions; // 0x1E4
    UI::NewFrame *m_framePlayers; // 0x1E8
    UI::NewFrame *m_framePlayerSlotToClone; // 0x1EC
    std::vector<UI::PlayerSlotFrame *,std::allocator<UI::PlayerSlotFrame *> > m_playerSlots; // 0x1F0
    __int32 m_playerPositions[6]; // 0x1FC
    UI::ChatUI *m_chatUI; // 0x214
    UI::TextButton *m_btnCollapsePlayers; // 0x218
    UI::NewButton *m_btnLobbyChat; // 0x21C
    UI::NewButton *m_btnWhisper; // 0x220
    UI::NewButton *m_btnWhisperToList; // 0x224
    UI::NewButton *m_btnBroadcast; // 0x228
    UI::NewButton *m_btnSuppress; // 0x22C
    UI::NewListBox *m_lstLobbyPlayers; // 0x230
    UI::NewListBox *m_lstMessages; // 0x234
    UI::NewTextLabel *m_lblLobbyChat; // 0x238
    UI::NewButton *m_startButton; // 0x23C
    UI::NewButton *m_backButton; // 0x240
    UI::NewFrame *m_frmGameType; // 0x244
    UI::NewButton *m_presetsButton; // 0x248
    UI::NewButton *m_btnLoad; // 0x24C
    UI::NewButton *m_btnLoadRecorded; // 0x250
    UI::NewButton *m_btnMoreOptions; // 0x254
    unsigned __int32 m_buttonstate; // 0x258
    boost::shared_ptr<UI::Graphic> m_graphicMapThumb; // 0x25C
    std::vector<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > m_comboOptions; // 0x264
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_titleSkirmish; // 0x270
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_titleMultiplayer; // 0x288
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_subtitleSkirmish; // 0x2A0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_levelFString; // 0x2B8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_textShowLobbyPlayers; // 0x2D0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_textHideLobbyPlayers; // 0x2E8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_labelLobbyChat; // 0x300
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_thumbnailNoPic; // 0x318
    __int32 m_subtitleMultiplayerJoinID; // 0x330
    __int32 m_subtitleMultiplayerHostID; // 0x334
    Vector_2i m_posSkirmish; // 0x338
    Vector_2i m_posMultiplayer; // 0x340
    unsigned __int32 m_multiplayerType; // 0x348
    __int32 m_currentGameType; // 0x34C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_previousScreen; // 0x350
    bool m_bGameStarted; // 0x368
    UI::GameSetup::ChatStateData m_chatStateData[3]; // 0x36C
    UI::GameSetup::ChatStates m_currentChatState; // 0x408
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_messages[1]; // 0x40C
    UI::GameSetup::ScreenType m_screenType; // 0x424
    bool m_bHost; // 0x428
    bool m_bPendingSessionHost; // 0x429
    MD5Hash m_level; // 0x42C
    unsigned __int32 m_maxPlayers; // 0x498
    unsigned __int32 m_nbFreeSlots; // 0x49C
    std::auto_ptr<StagingArea> m_stagingArea; // 0x4A0
    StagingArea::HostSettings m_hostSettings; // 0x4A4
    MD5Hash m_gameRules; // 0x4F4
    bool m_bCancelSession; // 0x560
    enum ChatStates
    {
        CS_Game = 0,
        CS_LobbyShowPlayers,
        CS_LobbyHidePlayers,
        CS_NumStates,
    };
    struct ChatStateData
    {
        bool m_bPlayerListVisible; // 0x0
        bool m_bCollapseButtonVisible; // 0x1
        Vector_2i m_posCollapseButton; // 0x4
        Vector_2i m_posListMessages; // 0xC
        UI::Size m_sizeListMessages; // 0x14
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_textCollapseButton; // 0x1C
        ChatStateData(UI::GameSetup::ChatStateData const &); /* compiler_generated() */
        _inline ChatStateData(); /* compiler_generated() */
        _inline ~ChatStateData(); /* compiler_generated() */
        UI::GameSetup::ChatStateData &operator=(UI::GameSetup::ChatStateData const &); /* compiler_generated() */
    };
    static_assert(sizeof(ChatStateData) == 52, "Invalid ChatStateData size");
    enum LocalizedMessages
    {
        LM_Disconnected = 0,
        LM_Number,
    };
    void EnableChatFrame(bool);
    void EnableGameOptions(bool);
    void FillGameTypeOptions();
    void AddGameRules(UI::NewDropDownListBox *, MD5Hash const &);
    void ResizeMaxPlayers(__int32);
    void SetLevel(LevelDesc const *);
    void ShowChatState(UI::GameSetup::ChatStates);
    void UpdateLobbySession();
    void UpdateLobbyGameStarted();
    static void OnMapSelect(UI::InterfaceElement *sender, __int32 mapIndex);
    static void OnGameTypeSelect(UI::InterfaceElement *sender, __int32 itemIndex);
    static void OnGameInfoClicked(UI::InterfaceElement *infoButton);
    static void OnStartGameClicked(UI::InterfaceElement *startButton);
    static void OnSendClicked(UI::InterfaceElement *startButton);
    static void OnBackClicked(UI::InterfaceElement *startButton);
    static void OnCollapsePlayersClicked(UI::InterfaceElement *startButton);
    static void OnLobbyChatClicked(UI::InterfaceElement *startButton);
    static void OnLoadGameClicked(UI::InterfaceElement *loadButton);
    static void OnLoadRecordedGameClicked(UI::InterfaceElement *loadButton);
    static void OnMoreOptionsClicked(UI::InterfaceElement *moreOptionsButton);
    static void OnPresetsClicked(UI::InterfaceElement *presetButton);
    static void OnErrorClicked(UI::InterfaceElement *sender);
public:
    virtual void OnNetCreateHost(StagingArea::HostSettings &) override;
    virtual bool OnNetCreatePlayer(StagingArea::PlayerSettings &) override;
    virtual void OnNetDestroyPlayer(__int32) override;
    virtual void OnNetPlayerSettings(StagingArea::PlayerSettings const &, wchar_t const *, bool, bool) override;
    virtual void OnNetHostSettings(StagingArea::HostSettings const &) override;
    virtual void OnNetStartGame() override;
    virtual void OnNetChat(__int32, wchar_t const *) override;
    virtual void OnNetHostMigration() override;
private:
    void FillHostSettings(StagingArea::HostSettings &);
    void UpdateStartButton(bool);
    void UpdateClientHostSettings(StagingArea::HostSettings const &);
    void UpdatePositions();
    void DoSessionCancel();
    void UpdateMapName(char const *);
public:
    UI::GameSetup &operator=(UI::GameSetup &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameSetup) == 1380, "Invalid UI::GameSetup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5AC289(UI::GameSetup *const, GameSettings::MultiplayerType);
_inline void UI::GameSetup::SetMultiplayerType(GameSettings::MultiplayerType) // 0x5AC289
{
    mangled_assert("?SetMultiplayerType@GameSetup@UI@@QAEXW4MultiplayerType@GameSettings@@@Z");
    todo("implement");
    _sub_5AC289(this, arg);
}

_extern UI::PlayerSlotFrame *_sub_5A218F(UI::GameSetup const *const, __int32);
_inline UI::PlayerSlotFrame *UI::GameSetup::GetPlayerSlotFrame(__int32) const // 0x5A218F
{
    mangled_assert("?GetPlayerSlotFrame@GameSetup@UI@@QBEPAVPlayerSlotFrame@2@H@Z");
    todo("implement");
    UI::PlayerSlotFrame * __result = _sub_5A218F(this, arg);
    return __result;
}

_extern void _sub_58927F(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::GameSetup::OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) // 0x58927F
{
    mangled_assert("?OnLobbySessionAdded@GameSetup@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_58927F(this, arg, arg);
}

_extern void _sub_589282(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::GameSetup::OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) // 0x589282
{
    mangled_assert("?OnLobbySessionAddedDirect@GameSetup@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_589282(this, arg, arg);
}

_extern void _sub_589285(LobbyEvent * const, unsigned long long);
_inline void UI::GameSetup::OnLobbySessionDeleted(unsigned long long) // 0x589285
{
    mangled_assert("?OnLobbySessionDeleted@GameSetup@UI@@EAEX_K@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_589285(this, arg);
}

_extern void _sub_589288(LobbyEvent * const, unsigned long long);
_inline void UI::GameSetup::OnLobbySessionUpdated(unsigned long long) // 0x589288
{
    mangled_assert("?OnLobbySessionUpdated@GameSetup@UI@@EAEX_K@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_589288(this, arg);
}

_extern void _sub_589279(LobbyEvent * const, unsigned long long);
_inline void UI::GameSetup::OnLobbyRoomAdded(unsigned long long) // 0x589279
{
    mangled_assert("?OnLobbyRoomAdded@GameSetup@UI@@EAEX_K@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_589279(this, arg);
}

_extern void _sub_589058(LobbyEvent * const, bool, wchar_t const *);
_inline void UI::GameSetup::OnLobbyCDAuthenticate(bool, wchar_t const *) // 0x589058
{
    mangled_assert("?OnLobbyCDAuthenticate@GameSetup@UI@@EAEX_NPB_W@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_589058(this, arg, arg);
}

_extern void _sub_58914A(LobbyEvent * const, bool, unsigned __int32);
_inline void UI::GameSetup::OnLobbyChatConnectResult(bool, unsigned __int32) // 0x58914A
{
    mangled_assert("?OnLobbyChatConnectResult@GameSetup@UI@@EAEX_NI@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_58914A(this, arg, arg);
}

_extern void _sub_58927C(LobbyEvent * const, LobbyRoomType, bool);
_inline void UI::GameSetup::OnLobbyRoomJoinedResult(LobbyRoomType, bool) // 0x58927C
{
    mangled_assert("?OnLobbyRoomJoinedResult@GameSetup@UI@@EAEXW4LobbyRoomType@@_N@Z");
    // __shifted(UI::GameSetup, 412);
    todo("implement");
    _sub_58927C(this, arg, arg);
}

/* ---------- private code */

#endif // __GAMESETUP_H__
#endif
