#if 0
#ifndef __PATCHSCREEN_H__
#define __PATCHSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PatchScreen :
    public UI::NewUIScreen,
    private GSPatcher::CheckCallback
{
public:
    PatchScreen(UI::PatchScreen const &); /* compiler_generated() */
    PatchScreen(char const *);
    virtual ~PatchScreen() override;
    void SetPreviousScreen(char const *);
    void OnDownloadMirrorList();
    void OnDownloadMirrorListComplete(unsigned __int32, char const *, char const *);
    void OnExtraInfoGetFileSizeComplete(unsigned __int32, char const *, unsigned __int32, unsigned __int32);
    void OnDownloadPatchComplete(unsigned __int32, char const *, char const *);
    void ProgressSetSize(unsigned __int32);
    void ProgressSetPosition(unsigned __int32);
    virtual void Update(unsigned __int32) override;
protected:
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnPatchCheckComplete(bool, bool, char const *, __int32, char const *) override;
private:
    static void OnCancelClicked(UI::InterfaceElement *sender);
    static void OnBackClicked(UI::InterfaceElement *sender);
    static void OnApplyClicked(UI::InterfaceElement *sender);
    static void OnApplyClicked_Yes(UI::InterfaceElement *sender);
    static void OnDownloadClicked(UI::InterfaceElement *sender);
    static void OnExtraInfoClicked(UI::InterfaceElement *sender);
    void CreatePatcher();
    void DestroyPatcher();
    void ClearMirrors();
    void DoCheckForPatch();
    void DoDownloadStart();
    void DoDownloadCancel();
    void DoExecutePatch(char const *, char const *);
    void CrackUrl();
    unsigned __int32 GetPatchType(char const *);
    void HandlePatchURL(char const *);
    void DoGetPatchMirrors(char const *);
    void AddDownloadLocation(char const *, char const *);
    void HandleMirrorList(char const *);
    void HandlePatchAvailable(char const *);
    void DisplayExtraInfo(char const *, char const *, char const *, unsigned __int32);
    void ReadyToChooseLocation();
    class Data;
    UI::PatchScreen::Data *m_pimpl; // 0x1A0
public:
    UI::PatchScreen &operator=(UI::PatchScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PatchScreen) == 420, "Invalid UI::PatchScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PATCHSCREEN_H__
#endif
