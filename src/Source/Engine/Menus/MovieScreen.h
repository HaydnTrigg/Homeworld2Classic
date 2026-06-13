#if 0
#ifndef __MOVIESCREEN_H__
#define __MOVIESCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::MovieScreen :
    public UI::NewUIScreen
{
public:
    MovieScreen(UI::MovieScreen const &); /* compiler_generated() */
    MovieScreen(char const *, char const *);
    virtual ~MovieScreen() override;
    virtual void Init();
    virtual void Uninit();
    virtual void Draw() override;
    virtual void Update(unsigned __int32) override;
    void Play(unsigned __int32);
    void Stop();
    void OnDone();
    _inline char const *GetNextMovie() const;
    virtual void SetMovieCallback(void (*)());
    bool IsOpaque() const;
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnActivate(bool) override;
    virtual void OnPostLoad() override;
private:
    UI::Movie *pMovie; // 0x19C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_nextMovie; // 0x1A0
    boost::scoped_ptr<UI::MovieSpeech> m_movieSpeech; // 0x1B8
    boost::scoped_ptr<UI::MovieTimer> m_movieTimer; // 0x1BC
    static void OnRootClicked(UI::InterfaceElement *rootFrame, __int32 x, __int32 y, unsigned __int32 b);
public:
    UI::MovieScreen &operator=(UI::MovieScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::MovieScreen) == 448, "Invalid UI::MovieScreen size");

class UI::Animatic
{
public:
    typedef void (*Callback)();
    static bool StartAnimatic(char const *filename, unsigned __int32 const nisHandle, bool const pause, bool const disableInput, bool const restoreInterface);
    static void Done();
    static void Stop();
    static void SetOnDoneCB(void (*cb)());
    static void SetNisHandle(unsigned __int32);
    static bool IsRenderingExclusively();
private:
    static UI::MovieScreen *m_pMovieScreen;
    static char const *ScreenName;
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename;
    static bool m_bCursorWasVisible;
    static bool m_bpaused;
    static bool m_bdisabledInput;
    static unsigned __int32 m_nisHandle;
    static bool m_restoreInterface;
    static void (*m_onDoneCB)();
};
static_assert(sizeof(UI::Animatic) == 1, "Invalid UI::Animatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_5914ED(UI::MovieScreen const *const);
_inline char const *UI::MovieScreen::GetNextMovie() const // 0x5914ED
{
    mangled_assert("?GetNextMovie@MovieScreen@UI@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5914ED(this);
    return __result;
}

/* ---------- private code */

#endif // __MOVIESCREEN_H__
#endif
