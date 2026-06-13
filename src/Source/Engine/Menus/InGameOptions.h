#if 0
#ifndef __INGAMEOPTIONS_H__
#define __INGAMEOPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::InGameOptions :
    public UI::NewUIScreen
{
public:
    InGameOptions(UI::InGameOptions const &); /* compiler_generated() */
    InGameOptions(char const *);
    virtual ~InGameOptions() override;
    static bool Show(UI::ScreenTransitionType trans);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    void LoadGameplayOptions();
    void LoadAudioOptions();
    void LoadVideoOptions();
    void LoadControlsOptions();
    bool Apply();
    boost::scoped_ptr<UI::Data> m_pimpl; // 0x19C
    static UI::InGameOptions *ms_screen;
    static void OnTabClicked(UI::InterfaceElement *sender);
    static void OnGameplayTab(UI::InterfaceElement *sender);
    static void OnAudioTab(UI::InterfaceElement *sender);
    static void OnVideoTab(UI::InterfaceElement *sender);
    static void OnControlsTab(UI::InterfaceElement *sender);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnCancelClicked(UI::InterfaceElement *sender);
    static void OnScrollMusicVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSFXVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollSpeechVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollUIVolume(UI::InterfaceElement *sbar, __int32 pos);
    static void OnScrollButtonReleasedMusicVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSFXVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedSpeechVolume(UI::InterfaceElement *sbar);
    static void OnScrollButtonReleasedUIVolume(UI::InterfaceElement *sbar);
public:
    UI::InGameOptions &operator=(UI::InGameOptions const &); /* compiler_generated() */
};
static_assert(sizeof(UI::InGameOptions) == 416, "Invalid UI::InGameOptions size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INGAMEOPTIONS_H__
#endif
