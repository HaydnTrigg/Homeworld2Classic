#if 0
#ifndef __GAMETYPEINFO_H__
#define __GAMETYPEINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameTypeInfo :
    public UI::NewUIScreen
{
public:
    GameTypeInfo(UI::GameTypeInfo const &); /* compiler_generated() */
    GameTypeInfo(char const *);
    virtual ~GameTypeInfo() override;
    static void Show(GameRulesLibrary::GameRulesDescription const *desc);
protected:
    virtual void OnPostLoad() override;
private:
    UI::NewTextLabel *m_lblTitle; // 0x19C
    UI::NewTextLabel *m_lblDescription; // 0x1A0
    UI::InterfaceElement *m_frmDialogRoot; // 0x1A4
    static UI::GameTypeInfo *ms_screen;
public:
    UI::GameTypeInfo &operator=(UI::GameTypeInfo const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameTypeInfo) == 424, "Invalid UI::GameTypeInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMETYPEINFO_H__
#endif
