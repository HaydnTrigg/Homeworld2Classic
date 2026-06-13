#if 0
#ifndef __SPEECHRECALL_H__
#define __SPEECHRECALL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SpeechRecall :
    public UI::NewUIScreen
{
public:
    SpeechRecall(UI::SpeechRecall const &); /* compiler_generated() */
    SpeechRecall(char const *);
    virtual ~SpeechRecall() override;
    virtual void Draw() override;
    static void Toggle();
    void AddString(wchar_t const *, Texture *);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    UI::NewListBox *m_listBox; // 0x19C
    UI::ListBoxItem *m_listBoxItem; // 0x1A0
public:
    UI::SpeechRecall &operator=(UI::SpeechRecall const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SpeechRecall) == 420, "Invalid UI::SpeechRecall size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SPEECHRECALL_H__
#endif
