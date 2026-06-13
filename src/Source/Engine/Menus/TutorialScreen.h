#if 0
#ifndef __TUTORIALSCREEN_H__
#define __TUTORIALSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::TutorialScreen :
    public UI::NewUIScreen
{
public:
    TutorialScreen(UI::TutorialScreen const &); /* compiler_generated() */
    TutorialScreen(char const *);
    virtual ~TutorialScreen() override;
    UI::NewTextLabel *m_lblTitle; // 0x19C
    UI::NewTextLabel *m_lblSubTitle; // 0x1A0
    UI::NewListBox *m_listTutorials; // 0x1A4
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgIncomplete; // 0x1A8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgComplete; // 0x1C0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_thumbPath; // 0x1D8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_campaignName; // 0x1F0
    boost::shared_ptr<UI::Graphic> m_graphicThumb; // 0x208
public:
    void SetCampaign(char const *, bool);
    virtual void OnFocus(bool) override;
    virtual void OnLoad(LuaConfig &) override;
protected:
    virtual void OnPostLoad() override;
private:
    void FillTutorialListBox(bool);
    static void TutorialSelected(UI::InterfaceElement *sender);
public:
    UI::TutorialScreen &operator=(UI::TutorialScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::TutorialScreen) == 528, "Invalid UI::TutorialScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TUTORIALSCREEN_H__
#endif
