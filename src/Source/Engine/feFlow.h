#if 0
#ifndef __FEFLOW_H__
#define __FEFLOW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SpaghettiFrontEnd
{
public:
    static void StartupFrontend(FrontEnd::FEStartupCode feStartUpCode);
    static void ShutdownFrontend(FrontEnd::FEShutdownCode fe);
    static bool StartupInGameFrontend();
    static bool ShutdownInGameFrontend();
    static void ShowLoadingScreen(char const *levelFilePath, wchar_t const *title1, wchar_t const *title2);
    static void AnimaticCallback();
    static void SetDefaultLevel();
    static void LoadScreenMaps();
    static bool g_skipIntroMovie;
private:
    static void FELogic_AppStart();
    static void FELogic_GameMenuExit();
    static void FELogic_GameOver();
public:
    static std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > ms_mapAppScreens;
    static std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > ms_mapTransScreens;
    static std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > ms_mapGameScreens;
};
static_assert(sizeof(SpaghettiFrontEnd) == 1, "Invalid SpaghettiFrontEnd size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FEFLOW_H__
#endif
