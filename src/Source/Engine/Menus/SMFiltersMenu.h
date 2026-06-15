#if 0
#ifndef __SMFILTERSMENU_H__
#define __SMFILTERSMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SMFiltersMenu :
    public UI::NewUIScreen
{
public:
    SMFiltersMenu(UI::SMFiltersMenu const &); /* compiler_generated() */
    SMFiltersMenu(char const *);
    virtual ~SMFiltersMenu() override;
    static void Toggle();
    enum
    {
        SHOW_WITHTASKBAR = 0,
        SHOW_NEVER,
        SHOW_ALWAYS,
    };
    void SetShowState(__int32, bool);
    _inline __int32 GetShowState() const;
    static void Show();
    static void Hide();
    static void TaskbarToggle(bool taskbarActive);
protected:
    virtual void OnPostLoad() override;
private:
    __int32 m_showState; // 0x19C
    bool m_showing; // 0x1A0
    UI::InterfaceElement *m_filterList; // 0x1A4
    UI::InterfaceElement *m_filterItem; // 0x1A8
public:
    UI::SMFiltersMenu &operator=(UI::SMFiltersMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SMFiltersMenu) == 428, "Invalid UI::SMFiltersMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 UI::SMFiltersMenu::GetShowState() const // 0x5A8BC5
{
    mangled_assert("?GetShowState@SMFiltersMenu@UI@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SMFILTERSMENU_H__
#endif
