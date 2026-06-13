#if 0
#ifndef __SUBTITLESCREEN_H__
#define __SUBTITLESCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::SubtitleScreen :
    public UI::NewUIScreen
{
public:
    SubtitleScreen(UI::SubtitleScreen const &); /* compiler_generated() */
    SubtitleScreen(char const *);
    virtual ~SubtitleScreen() override;
    bool IsEmpty() const;
    void SetIcon(char const *, Texture *);
    void SetText(char const *, wchar_t const *, vector4 const &, float);
    bool TextNeedsScroll(char const *);
    void TextSetScroll(char const *, float);
    void HideIcon(char const *);
    void HideText(char const *);
    bool IsTextVisible(char const *);
    bool IsIconVisible(char const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > NAME;
protected:
    virtual void OnActivate(bool) override;
private:
    void SetVisible(UI::InterfaceElement *, bool);
    typedef void (*Callback)();
public:
    void SetShutdownCallback(void (*)());
    class Data;
private:
    boost::scoped_ptr<UI::SubtitleScreen::Data> m_pimpl; // 0x19C
public:
    UI::SubtitleScreen &operator=(UI::SubtitleScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SubtitleScreen) == 416, "Invalid UI::SubtitleScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SUBTITLESCREEN_H__
#endif
