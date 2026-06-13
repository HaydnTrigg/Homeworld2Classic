#if 0
#ifndef __PLAYBACKMENU_H__
#define __PLAYBACKMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PlaybackMenu :
    public UI::NewUIScreen
{
public:
    PlaybackMenu(UI::PlaybackMenu const &); /* compiler_generated() */
    PlaybackMenu(char const *);
    virtual ~PlaybackMenu() override;
    virtual void Update(unsigned __int32) override;
protected:
    virtual void OnPostLoad() override;
public:
    UI::PlaybackMenu &operator=(UI::PlaybackMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlaybackMenu) == 412, "Invalid UI::PlaybackMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYBACKMENU_H__
#endif
