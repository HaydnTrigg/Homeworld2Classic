#if 0
#ifndef __NEWPROFILE_H__
#define __NEWPROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewProfile :
    public UI::NewUIScreen
{
public:
    NewProfile(UI::NewProfile const &); /* compiler_generated() */
    NewProfile(char const *);
    virtual ~NewProfile() override;
    void EnableCancel(bool);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    UI::NewButton *m_btnAccept; // 0x19C
    UI::NewButton *m_btnCancel; // 0x1A0
    UI::NewTextInput *m_txtName; // 0x1A4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_defaultName; // 0x1A8
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnCancelClicked(UI::InterfaceElement *sender);
public:
    UI::NewProfile &operator=(UI::NewProfile const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewProfile) == 448, "Invalid UI::NewProfile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NEWPROFILE_H__
#endif
