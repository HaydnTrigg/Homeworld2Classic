#if 0
#ifndef __OBJECTIVESLIST_H__
#define __OBJECTIVESLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ObjectivesList :
    public UI::NewUIScreen,
    public GameEventSys::Listener
{
public:
    ObjectivesList(UI::ObjectivesList const &); /* compiler_generated() */
    ObjectivesList(char const *);
    virtual ~ObjectivesList() override;
    virtual void Update(unsigned __int32) override;
    virtual void OnEvent(GameEventSys::Event const &) override;
    void SelectObjective(unsigned __int32);
    static _inline UI::ObjectivesList *GetScreen();
protected:
    virtual void OnActivate(bool) override;
    virtual void OnPostLoad() override;
    void ShowObjectiveDetails(unsigned __int32);
private:
    UI::NewListBox *m_primaryList; // 0x1A0
    UI::NewListBox *m_secondaryList; // 0x1A4
    UI::ListBoxItem *m_listBoxItem; // 0x1A8
    UI::NewListBox *m_descriptionList; // 0x1AC
    UI::ListBoxItem *m_descriptionItem; // 0x1B0
    bool m_needUpdate; // 0x1B4
    __int32 m_selectedObjective; // 0x1B8
    static UI::ObjectivesList *ms_screen;
    static void OnObjectiveSelect(UI::InterfaceElement *sender, __int32 i);
public:
    UI::ObjectivesList &operator=(UI::ObjectivesList const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ObjectivesList) == 444, "Invalid UI::ObjectivesList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::ObjectivesList *_sub_57768C();
_inline UI::ObjectivesList *UI::ObjectivesList::GetScreen() // 0x57768C
{
    mangled_assert("?GetScreen@ObjectivesList@UI@@SGPAV12@XZ");
    todo("implement");
    UI::ObjectivesList * __result = _sub_57768C();
    return __result;
}

/* ---------- private code */

#endif // __OBJECTIVESLIST_H__
#endif
