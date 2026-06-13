#if 0
#ifndef __SAVELOADDIALOG_H__
#define __SAVELOADDIALOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SaveLoadDialog :
    public UI::NewUIScreen
{
public:
    enum SaveLoadDialogType
    {
        SLD_LoadSkirmish = 0,
        SLD_LoadCampaign,
        SLD_LoadRecorded,
        SLD_SaveSkirmish,
        SLD_SaveCampaign,
        SLD_SaveRecorded,
    };
    SaveLoadDialog(UI::SaveLoadDialog const &); /* compiler_generated() */
    SaveLoadDialog(char const *);
    virtual ~SaveLoadDialog() override;
    static void Show(UI::SaveLoadDialog::SaveLoadDialogType screenType, UI::ScreenTransitionType trans, char const *campaign);
    static bool DoSavedCampaignExist(char const *campaignName);
    static bool DoSavedSkirmishExist();
    static bool DoSavedRecordedExist();
    static UI::SaveLoadDialog *GetScreen();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::SaveLoadDialogData> m_pimpl; // 0x19C
    void InitData();
    void FillList(char const *, char const *);
    static void OnLoadSkirmishClicked(UI::InterfaceElement *sender);
    static void OnLoadRecordedClicked(UI::InterfaceElement *sender);
    static void OnLoadCampaignClicked(UI::InterfaceElement *sender);
    static void OnSaveSkirmishClicked(UI::InterfaceElement *sender);
    static void OnSaveCampaignClicked(UI::InterfaceElement *sender);
    static void OnSaveRecordedClicked(UI::InterfaceElement *sender);
    static void OnDeleteClicked(UI::InterfaceElement *sender);
    static void OnCancelClicked(UI::InterfaceElement *sender);
    static void OnItemDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void DeleteAccept(UI::InterfaceElement *btn);
    static void LoadGame(wchar_t const *savename);
    static void VerifyLoadAccept(UI::InterfaceElement *btn);
    static void VerifyLoadCancel(UI::InterfaceElement *btn);
    static void SaveGame(wchar_t const *savename);
    static bool SaveFile(char const *filename);
    static void OverwriteGameAccept(UI::InterfaceElement *btn);
    static void OverwriteGameCancel(UI::InterfaceElement *btn);
    static void OnLoadItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf);
    static UI::SaveLoadDialog *ms_saveLoadDialog;
public:
    UI::SaveLoadDialog &operator=(UI::SaveLoadDialog const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SaveLoadDialog) == 416, "Invalid UI::SaveLoadDialog size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SAVELOADDIALOG_H__
#endif
