#if 0
#ifndef __NEWMAINMENU_H__
#define __NEWMAINMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewMainMenu :
    public UI::NewUIScreen
{
public:
    NewMainMenu(UI::NewMainMenu const &); /* compiler_generated() */
    NewMainMenu(char const *);
    virtual ~NewMainMenu() override;
    UI::NewDropDownListBox *m_listLevels; // 0x19C
    static unsigned __int32 ms_selectedLevel;
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    void FillLevelListBox();
    static void CampaignClicked(UI::InterfaceElement *sender);
    static void TutorialClicked(UI::InterfaceElement *sender);
    static void PlayerVsCPUClicked(UI::InterfaceElement *sender);
    static void LevelSelected(UI::InterfaceElement *sender, __int32 i);
    void SetDefaultLevel();
public:
    UI::NewMainMenu &operator=(UI::NewMainMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewMainMenu) == 416, "Invalid UI::NewMainMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NEWMAINMENU_H__
#endif
