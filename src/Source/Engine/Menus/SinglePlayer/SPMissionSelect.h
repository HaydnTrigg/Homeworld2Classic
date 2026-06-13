#if 0
#ifndef __SPMISSIONSELECT_H__
#define __SPMISSIONSELECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SPMissionSelect :
    public UI::NewUIScreen
{
public:
    SPMissionSelect(UI::SPMissionSelect const &); /* compiler_generated() */
    SPMissionSelect(char const *);
    virtual ~SPMissionSelect() override;
    UI::NewTextLabel *m_lblCampaignName; // 0x19C
    UI::NewTextLabel *m_lblTitle; // 0x1A0
    UI::NewTextLabel *m_lblSubTitle; // 0x1A4
    UI::NewTextLabel *m_lblChooseLevel; // 0x1A8
    UI::NewTextLabel *m_lblTitleTut; // 0x1AC
    UI::NewTextLabel *m_lblSubTitleTut; // 0x1B0
    UI::NewTextLabel *m_lblChooseLevelTut; // 0x1B4
    UI::NewListBox *m_listTutorials; // 0x1B8
    UI::NewButton *m_btnLoadMission; // 0x1BC
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgIncomplete; // 0x1C0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgComplete; // 0x1D8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_strIncomplete; // 0x1F0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_strComplete; // 0x208
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_thumbPath; // 0x220
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_campaignName; // 0x238
    boost::shared_ptr<UI::Graphic> m_graphicThumb; // 0x250
    Color_4b m_unfinishedColor; // 0x258
    Color_4b m_finishedColor; // 0x25C
public:
    void SetCampaign(char const *, bool);
    virtual void OnFocus(bool) override;
    virtual void OnLoad(LuaConfig &) override;
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    void FillTutorialListBox(bool);
    void SelectMission(unsigned __int32);
    unsigned __int32 GetSelectedMissionIndex();
    static UI::SPMissionSelect *ms_screen;
    static void TutorialSelected(UI::InterfaceElement *sender);
    static void StartMissionClicked(UI::InterfaceElement *sender);
    static void LoadMissionClicked(UI::InterfaceElement *sender);
    static void ResetClicked(UI::InterfaceElement *sender);
    static void ResetClicked_Yes(UI::InterfaceElement *sender);
    static void OnListBoxItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf);
public:
    UI::SPMissionSelect &operator=(UI::SPMissionSelect const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SPMissionSelect) == 608, "Invalid UI::SPMissionSelect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SPMISSIONSELECT_H__
#endif
