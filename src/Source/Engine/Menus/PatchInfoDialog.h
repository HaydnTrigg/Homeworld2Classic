#if 0
#ifndef __PATCHINFODIALOG_H__
#define __PATCHINFODIALOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PatchInfoDialog :
    public UI::NewUIScreen
{
public:
    PatchInfoDialog(UI::PatchInfoDialog const &); /* compiler_generated() */
    PatchInfoDialog(char const *);
    virtual ~PatchInfoDialog() override;
    static void Show(wchar_t const *message);
protected:
    virtual void OnPostLoad() override;
private:
    UI::NewTextLabel *m_lblTitle; // 0x19C
    UI::NewTextLabel *m_lblDescription; // 0x1A0
    UI::InterfaceElement *m_frmDialogRoot; // 0x1A4
    static UI::PatchInfoDialog *ms_screen;
public:
    UI::PatchInfoDialog &operator=(UI::PatchInfoDialog const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PatchInfoDialog) == 424, "Invalid UI::PatchInfoDialog size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PATCHINFODIALOG_H__
#endif
