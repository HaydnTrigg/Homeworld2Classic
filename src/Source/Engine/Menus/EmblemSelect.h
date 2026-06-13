#if 0
#ifndef __EMBLEMSELECT_H__
#define __EMBLEMSELECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::EmblemSelect :
    public UI::NewUIScreen
{
public:
    EmblemSelect(UI::EmblemSelect const &); /* compiler_generated() */
    EmblemSelect(char const *);
    virtual ~EmblemSelect() override;
    void CommitValues();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    static void OnAccept(UI::InterfaceElement *sender);
    static void OnEmblemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf);
    UI::NewListBox *m_emblemList; // 0x19C
    UI::ListBoxItem *m_emblemItem; // 0x1A0
    bool m_loadedFiles; // 0x1A4
public:
    UI::EmblemSelect &operator=(UI::EmblemSelect const &); /* compiler_generated() */
};
static_assert(sizeof(UI::EmblemSelect) == 424, "Invalid UI::EmblemSelect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __EMBLEMSELECT_H__
#endif
