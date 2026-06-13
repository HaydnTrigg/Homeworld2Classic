#if 0
#ifndef __PLAYMOVIESSCREEN_H__
#define __PLAYMOVIESSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PlayMoviesScreen :
    public UI::NewUIScreen
{
public:
    PlayMoviesScreen(UI::PlayMoviesScreen const &); /* compiler_generated() */
    PlayMoviesScreen(char const *);
    virtual ~PlayMoviesScreen() override;
    static UI::PlayMoviesScreen *GetScreen();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::PlayMoviesScreenData> m_pimpl; // 0x19C
    void FillMovieList(char const *);
    static void OnPlayMovieClicked(UI::InterfaceElement *sender);
    static void OnMovieItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    static void OnMovieItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf);
    static void PlayMovie(char const *);
    static void OnMovieDone();
    static UI::PlayMoviesScreen *ms_playMoviesScreen;
public:
    UI::PlayMoviesScreen &operator=(UI::PlayMoviesScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlayMoviesScreen) == 416, "Invalid UI::PlayMoviesScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYMOVIESSCREEN_H__
#endif
