#if 0
#ifndef __LOADINGSCREENRENDERER_H__
#define __LOADINGSCREENRENDERER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LoadingScreenRenderer
{
public:
    static void ShowScreenWithTitle(char const *levelFilePath, wchar_t const *titleText1, wchar_t const *titleText2);
    static void ShowScreen(char const *levelFilePath);
    static void HideScreen();
    static void UpdateCallback(__int32 currentCount, __int32 totalCount, wchar_t const *text);
private:
    static UI::ProgressBar *ms_progress;
    static UI::NewTextLabel *ms_txtLabel;
    static UI::NewTextLabel *ms_titleLabel1;
    static UI::NewTextLabel *ms_titleLabel2;
};
static_assert(sizeof(LoadingScreenRenderer) == 1, "Invalid LoadingScreenRenderer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOADINGSCREENRENDERER_H__
#endif
