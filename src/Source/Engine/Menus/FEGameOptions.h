#if 0
#ifndef __FEGAMEOPTIONS_H__
#define __FEGAMEOPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct UI::FXFrame
{
    UI::NewFrame *m_frameRoot; // 0x0
    UI::NewTextLabel *m_lblTitle; // 0x4
    UI::NewDropDownListBox *m_comboChoice; // 0x8
    UI::NewFrame *m_frameThumbnail; // 0xC
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_thumbnails; // 0x10
    _inline FXFrame(UI::FXFrame const &); /* compiler_generated() */
    _inline FXFrame(); /* compiler_generated() */
    _inline ~FXFrame(); /* compiler_generated() */
    UI::FXFrame &operator=(UI::FXFrame const &); /* compiler_generated() */
};
static_assert(sizeof(UI::FXFrame) == 28, "Invalid UI::FXFrame size");

class UI::FEGameOptions :
    public UI::NewUIScreen
{
public:
    FEGameOptions(UI::FEGameOptions const &); /* compiler_generated() */
    FEGameOptions(char const *);
    virtual ~FEGameOptions() override;
    static bool Show(UI::ScreenTransitionType trans);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnLoad(LuaConfig &) override;
private:
    void LoadAllOptions();
    void LoadGameplayOptions(ProfileGameplayOptions const &);
    void LoadAudioOptions(ProfileAudioOptions const &);
    void LoadVideoOptions(ProfileVideoOptions const &);
    void LoadControlsOptions(ProfileControlsOptions const &);
    void LoadFXOptions(ProfileFXOptions &);
    void SaveCurrentTabOptions();
    void SaveAudioOptions(ProfileAudioOptions &);
    void SaveGameplayOptions(ProfileGameplayOptions &);
    void SaveVideoOptions(ProfileVideoOptions &);
    void SaveControlsOptions(ProfileControlsOptions &);
    void SaveFXOptions(ProfileFXOptions &);
    UI::FXFrame LoadFXFrame(LuaConfig &);
    void QueryFXOption(char const *, bool, __int32 &, ProfileFXOptions &);
    bool Apply();
    void RestoreDefaults();
    boost::scoped_ptr<`anonymous namespace'::Data> m_pimpl; // 0x19C
    static UI::FEGameOptions *ms_screen;
    static void OnTabClicked(UI::InterfaceElement *sender);
    static void OnGameplayTab(UI::InterfaceElement *sender);
    static void OnAudioTab(UI::InterfaceElement *sender);
    static void OnVideoTab(UI::InterfaceElement *sender);
    static void OnControlsTab(UI::InterfaceElement *sender);
    static void OnFXTab(UI::InterfaceElement *sender);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnRestoreDefaultsClicked(UI::InterfaceElement *sender);
    static void OnRestoreDefaults_Yes(UI::InterfaceElement *sender);
    static void OnScrollMusicVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSFXVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSpeechVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollUIVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollButtonReleasedMusicVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSFXVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSpeechVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedUIVolume(UI::InterfaceElement *sbar);
    static void ApplyRezChange_No(UI::InterfaceElement *e);
    static void ApplyRezChange_Yes(UI::InterfaceElement *e);
public:
    UI::FEGameOptions &operator=(UI::FEGameOptions const &); /* compiler_generated() */
};
static_assert(sizeof(UI::FEGameOptions) == 416, "Invalid UI::FEGameOptions size");

class UI::FEGameOptions :
    public UI::NewUIScreen
{
public:
    FEGameOptions(UI::FEGameOptions const &); /* compiler_generated() */
    FEGameOptions(char const *);
    virtual ~FEGameOptions() override;
    static bool Show(UI::ScreenTransitionType trans);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnLoad(LuaConfig &) override;
private:
    void LoadAllOptions();
    void LoadGameplayOptions(ProfileGameplayOptions const &);
    void LoadAudioOptions(ProfileAudioOptions const &);
    void LoadVideoOptions(ProfileVideoOptions const &);
    void LoadControlsOptions(ProfileControlsOptions const &);
    void LoadFXOptions(ProfileFXOptions &);
    void SaveCurrentTabOptions();
    void SaveAudioOptions(ProfileAudioOptions &);
    void SaveGameplayOptions(ProfileGameplayOptions &);
    void SaveVideoOptions(ProfileVideoOptions &);
    void SaveControlsOptions(ProfileControlsOptions &);
    void SaveFXOptions(ProfileFXOptions &);
    UI::FXFrame LoadFXFrame(LuaConfig &);
    void QueryFXOption(char const *, bool, __int32 &, ProfileFXOptions &);
    bool Apply();
    void RestoreDefaults();
    boost::scoped_ptr<UI::Data> m_pimpl; // 0x19C
    static UI::FEGameOptions *ms_screen;
    static void OnTabClicked(UI::InterfaceElement *sender);
    static void OnGameplayTab(UI::InterfaceElement *sender);
    static void OnAudioTab(UI::InterfaceElement *sender);
    static void OnVideoTab(UI::InterfaceElement *sender);
    static void OnControlsTab(UI::InterfaceElement *sender);
    static void OnFXTab(UI::InterfaceElement *sender);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnRestoreDefaultsClicked(UI::InterfaceElement *sender);
    static void OnRestoreDefaults_Yes(UI::InterfaceElement *sender);
    static void OnScrollMusicVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSFXVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSpeechVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollUIVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollButtonReleasedMusicVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSFXVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSpeechVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedUIVolume(UI::InterfaceElement *sbar);
    static void ApplyRezChange_No(UI::InterfaceElement *e);
    static void ApplyRezChange_Yes(UI::InterfaceElement *e);
public:
    UI::FEGameOptions &operator=(UI::FEGameOptions const &); /* compiler_generated() */
};
static_assert(sizeof(UI::FEGameOptions) == 416, "Invalid UI::FEGameOptions size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FEGAMEOPTIONS_H__
#endif
