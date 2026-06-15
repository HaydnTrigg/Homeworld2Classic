#if 0
#ifndef __NEWUISCREENMANAGER_H__
#define __NEWUISCREENMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewUIScreenManager
{
public:
    static UI::NewUIScreenManager *i();
    static bool Create();
    static bool Destroy();
    void UpdateFunction(float);
    static void DrawFunction();
    UI::NewUIScreen *LoadScreen(char const *, char const *, char const *, bool);
    _inline void LoadScreen(UI::NewUIScreen *);
    void UnloadScreen(char const *);
    void UnloadScreen(UI::NewUIScreen *);
    void ActivateScreen(char const *, UI::ScreenTransitionType);
    void ActivateScreen(UI::NewUIScreen *, UI::ScreenTransitionType);
    void DeactivateScreen(char const *);
    void DeactivateScreen(UI::NewUIScreen *);
    void ActivateAllScreens();
    void DeactivateAllScreens();
    void UnloadAllScreens();
    void ReloadAllScreens();
    void ReloadScreen(UI::NewUIScreen *);
    void ReloadScreen(unsigned __int32);
    void ReloadScreen(char const *);
    void SetAllScreensEnabled(bool);
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > &GetLoadedScreenList();
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &GetActiveScreenList();
    UI::NewUIScreen *FindScreen(unsigned __int32, bool);
    UI::NewUIScreen *FindScreen(char const *, bool);
    UI::NewUIScreen *GetCurrentScreen();
    UI::NewUIScreen *GetTopLevelScreen();
    bool IsActive(char const *);
    void SetHelpTipText(wchar_t const *);
    UI::NewTextLabel *GetHelpTipLabel();
    bool GetHelpTipVisible() const;
    void SetHelpTipVisible(bool);
    void SetHelpTipPosition(Vector_2i const &);
    _inline region *GetUIRootRegion();
    void Flush();
    void PushState();
    void PopState();
    void PopAll();
    _inline bool IsStatePushed() const;
    static _inline void LockMouseInput(UI::InterfaceElement *e);
    static _inline void UnlockMouseInput();
    static _inline UI::InterfaceElement *GetMouseInputLock();
    static void SetTopLevelElement(UI::InterfaceElement *e);
    static _inline UI::InterfaceElement *GetTopLevelElement();
    static _inline UI::InterfaceElement *GetFocus();
    static void SetFocus(UI::InterfaceElement *focus);
    static _inline void ClearFocus();
    static void OnElementDestruction(UI::InterfaceElement *e);
    bool HandleEvent(UI::EventType, UI::EventInfo &);
    bool HandleElementEvent(UI::InterfaceElement *, UI::EventType, UI::EventInfo &);
    void LoadScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
    void UnloadScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
    void ActivateScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
    void DeactivateScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
    void GetLoadedScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
    bool LoadScreenMapFromSection(LuaConfig &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &, char const *);
    _inline bool IsMouseOverScreen();
    NewUIScreenManager(UI::NewUIScreenManager const &); /* compiler_generated() */
private:
    NewUIScreenManager();
    ~NewUIScreenManager();
    static UI::NewUIScreenManager *ms_i;
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_activateQueue; // 0x0
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_deactivateQueue; // 0x8
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_loadQueue; // 0x10
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_unloadQueue; // 0x18
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_activeScreens; // 0x20
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > m_loadedScreens; // 0x28
    UI::NewTextLabel *m_helpTipLabel; // 0x30
    UI::NewUIScreen *m_currentScreen; // 0x34
    region *m_uiRootRegion; // 0x38
    unsigned __int32 m_focusedScreen; // 0x3C
    UI::InterfaceElement *m_pressedElement; // 0x40
    bool m_mousePressedLast; // 0x44
    bool m_mousePressedThis; // 0x45
    bool m_mousePressedDouble; // 0x46
    Vector_2i m_lastMousePos; // 0x48
    Vector_2i m_lastMousePressPos; // 0x50
    float m_timeSinceLastMousePress; // 0x58
    unsigned __int32 m_lastFramesUIScreen; // 0x5C
    unsigned char m_lastKeyPressed; // 0x60
    float m_timeKeyPressed; // 0x64
    unsigned char m_lastKeyRepeat; // 0x68
    float m_repeatDelay; // 0x6C
    std::stack<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::deque<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::allocator<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > m_stack; // 0x70
    KeyBindingList m_globalBindings; // 0x84
    boost::scoped_ptr<UIDirectRenderer> m_directRenderer; // 0x8C
    bool m_inUpdate; // 0x90
    bool m_inFlush; // 0x91
    bool m_mouseOverScreen; // 0x92
    void HandleInput(float);
    static UI::InterfaceElement *ms_mouseInputLock;
    static UI::InterfaceElement *ms_topLevelElement;
    static UI::InterfaceElement *ms_focusedElement;
    void GetScreenMapFromList(std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
public:
    UI::NewUIScreenManager &operator=(UI::NewUIScreenManager const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewUIScreenManager) == 148, "Invalid UI::NewUIScreenManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::NewUIScreenManager::LoadScreen(UI::NewUIScreen *) // 0x65C04F
{
    mangled_assert("?LoadScreen@NewUIScreenManager@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
}

_inline region *UI::NewUIScreenManager::GetUIRootRegion() // 0x66E2B7
{
    mangled_assert("?GetUIRootRegion@NewUIScreenManager@UI@@QAEPAVregion@@XZ");
    todo("implement");
}

_inline bool UI::NewUIScreenManager::IsStatePushed() const // 0x599787
{
    mangled_assert("?IsStatePushed@NewUIScreenManager@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::NewUIScreenManager::LockMouseInput(UI::InterfaceElement *e) // 0x5A05CF
{
    mangled_assert("?LockMouseInput@NewUIScreenManager@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

_inline void UI::NewUIScreenManager::UnlockMouseInput() // 0x673257
{
    mangled_assert("?UnlockMouseInput@NewUIScreenManager@UI@@SGXXZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::NewUIScreenManager::GetMouseInputLock() // 0x681814
{
    mangled_assert("?GetMouseInputLock@NewUIScreenManager@UI@@SGPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::NewUIScreenManager::GetTopLevelElement() // 0x66B759
{
    mangled_assert("?GetTopLevelElement@NewUIScreenManager@UI@@SGPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline UI::InterfaceElement *UI::NewUIScreenManager::GetFocus() // 0x689342
{
    mangled_assert("?GetFocus@NewUIScreenManager@UI@@SGPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::NewUIScreenManager::ClearFocus() // 0x689140
{
    mangled_assert("?ClearFocus@NewUIScreenManager@UI@@SGXXZ");
    todo("implement");
}

_inline bool UI::NewUIScreenManager::IsMouseOverScreen() // 0x63028A
{
    mangled_assert("?IsMouseOverScreen@NewUIScreenManager@UI@@QAE_NXZ");
    todo("implement");
}

_inline UI::GameFilterScreen *UI::NewUIScreenManager::FindScreenT<UI::GameFilterScreen>(char const *, bool) // 0x5B46DA
{
    mangled_assert("??$FindScreenT@VGameFilterScreen@UI@@@NewUIScreenManager@UI@@QAEPAVGameFilterScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::GameInfoScreen *UI::NewUIScreenManager::FindScreenT<UI::GameInfoScreen>(char const *, bool) // 0x5B46E8
{
    mangled_assert("??$FindScreenT@VGameInfoScreen@UI@@@NewUIScreenManager@UI@@QAEPAVGameInfoScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::CreateGameScreen *UI::NewUIScreenManager::FindScreenT<UI::CreateGameScreen>(char const *, bool) // 0x5B334C
{
    mangled_assert("??$FindScreenT@VCreateGameScreen@UI@@@NewUIScreenManager@UI@@QAEPAVCreateGameScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::DirectConnectionScreen *UI::NewUIScreenManager::FindScreenT<UI::DirectConnectionScreen>(char const *, bool) // 0x5B335A
{
    mangled_assert("??$FindScreenT@VDirectConnectionScreen@UI@@@NewUIScreenManager@UI@@QAEPAVDirectConnectionScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::ConnectionTypeScreen *UI::NewUIScreenManager::FindScreenT<UI::ConnectionTypeScreen>(char const *, bool) // 0x5B2018
{
    mangled_assert("??$FindScreenT@VConnectionTypeScreen@UI@@@NewUIScreenManager@UI@@QAEPAVConnectionTypeScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::LobbyScreen *UI::NewUIScreenManager::FindScreenT<UI::LobbyScreen>(char const *, bool) // 0x5B2026
{
    mangled_assert("??$FindScreenT@VLobbyScreen@UI@@@NewUIScreenManager@UI@@QAEPAVLobbyScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::WaitMessage *UI::NewUIScreenManager::FindScreenT<UI::WaitMessage>(char const *, bool) // 0x5AFAFD
{
    mangled_assert("??$FindScreenT@VWaitMessage@UI@@@NewUIScreenManager@UI@@QAEPAVWaitMessage@1@PBD_N@Z");
    todo("implement");
}

_inline UI::UserProfile *UI::NewUIScreenManager::FindScreenT<UI::UserProfile>(char const *, bool) // 0x5AF32B
{
    mangled_assert("??$FindScreenT@VUserProfile@UI@@@NewUIScreenManager@UI@@QAEPAVUserProfile@1@PBD_N@Z");
    todo("implement");
}

_inline UI::PlayerSetup *UI::NewUIScreenManager::FindScreenT<UI::PlayerSetup>(char const *, bool) // 0x5A1B0E
{
    mangled_assert("??$FindScreenT@VPlayerSetup@UI@@@NewUIScreenManager@UI@@QAEPAVPlayerSetup@1@PBD_N@Z");
    todo("implement");
}

_inline UI::PatchScreen *UI::NewUIScreenManager::FindScreenT<UI::PatchScreen>(char const *, bool) // 0x59CC1E
{
    mangled_assert("??$FindScreenT@VPatchScreen@UI@@@NewUIScreenManager@UI@@QAEPAVPatchScreen@1@PBD_N@Z");
    todo("implement");
}

_inline UI::SPMissionSelect *UI::NewUIScreenManager::FindScreenT<UI::SPMissionSelect>(char const *, bool) // 0x594C51
{
    mangled_assert("??$FindScreenT@VSPMissionSelect@UI@@@NewUIScreenManager@UI@@QAEPAVSPMissionSelect@1@PBD_N@Z");
    todo("implement");
}

_inline UI::FinalBuildMenu *UI::NewUIScreenManager::FindScreenT<UI::FinalBuildMenu>(char const *, bool) // 0x5926E3
{
    mangled_assert("??$FindScreenT@VFinalBuildMenu@UI@@@NewUIScreenManager@UI@@QAEPAVFinalBuildMenu@1@PBD_N@Z");
    todo("implement");
}

_inline UI::GameSetup *UI::NewUIScreenManager::FindScreenT<UI::GameSetup>(char const *, bool) // 0x586208
{
    mangled_assert("??$FindScreenT@VGameSetup@UI@@@NewUIScreenManager@UI@@QAEPAVGameSetup@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewLaunchMenu *UI::NewUIScreenManager::FindScreenT<UI::NewLaunchMenu>(char const *, bool) // 0x579F52
{
    mangled_assert("??$FindScreenT@VNewLaunchMenu@UI@@@NewUIScreenManager@UI@@QAEPAVNewLaunchMenu@1@PBD_N@Z");
    todo("implement");
}

_inline UI::ErrorMessage *UI::NewUIScreenManager::FindScreenT<UI::ErrorMessage>(char const *, bool) // 0x575A78
{
    mangled_assert("??$FindScreenT@VErrorMessage@UI@@@NewUIScreenManager@UI@@QAEPAVErrorMessage@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewProfile *UI::NewUIScreenManager::FindScreenT<UI::NewProfile>(char const *, bool) // 0x45D5AA
{
    mangled_assert("??$FindScreenT@VNewProfile@UI@@@NewUIScreenManager@UI@@QAEPAVNewProfile@1@PBD_N@Z");
    todo("implement");
}

_inline UI::Statistics *UI::NewUIScreenManager::FindScreenT<UI::Statistics>(char const *, bool) // 0x45D5B8
{
    mangled_assert("??$FindScreenT@VStatistics@UI@@@NewUIScreenManager@UI@@QAEPAVStatistics@1@PBD_N@Z");
    todo("implement");
}

_inline UI::UIDialog *UI::NewUIScreenManager::FindScreenT<UI::UIDialog>(char const *, bool) // 0x44F3F3
{
    mangled_assert("??$FindScreenT@VUIDialog@UI@@@NewUIScreenManager@UI@@QAEPAVUIDialog@1@PBD_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWUISCREENMANAGER_H__
#endif
