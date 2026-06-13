#if 0
#ifndef __USERPROFILE_H__
#define __USERPROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::UserProfile :
    public UI::NewUIScreen
{
public:
    UserProfile(UI::UserProfile const &); /* compiler_generated() */
    UserProfile(char const *);
    virtual ~UserProfile() override;
    void FillProfileList();
    bool SelectCurrentProfile();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    UI::NewListBox *m_listProfiles; // 0x19C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_currentProfile; // 0x1A0
    static void OnDeleteClicked(UI::InterfaceElement *sender);
    static void OnDeleteClicked_Yes(UI::InterfaceElement *sender);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnCancelClicked(UI::InterfaceElement *sender);
    static void OnPlayerSetupClicked(UI::InterfaceElement *sender);
    static void OnCreateNewClicked(UI::InterfaceElement *sender);
    static void OnProfileDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf);
public:
    UI::UserProfile &operator=(UI::UserProfile const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UserProfile) == 440, "Invalid UI::UserProfile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __USERPROFILE_H__
#endif
