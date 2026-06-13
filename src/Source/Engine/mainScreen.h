#if 0
#ifndef __MAINSCREEN_H__
#define __MAINSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MainScreen
{
public:
    static bool Initialize();
    static bool Denitialize();
    static _inline region *GetRegion();
    static void FrontEndToInGame();
    static void BringUpInGameFrontEnd();
    static void LoadKeyBindingFile(char const *luaKeyBindFile);
    static void ResetKeyBindings(KeyBindingList const &bindings);
    static bool Is3DSceneVisible();
    static bool EnableGameEvent(__int32 event, bool enable);
    static bool IsGameEventEnabled(__int32 event);
    static void EnableAllGameEvents(bool enable);
    static void PushEnabledGameEvents();
    static void PopEnabledGameEvents();
    static void PopAllEnabledGameEvents();
    static void MainRegionUserEvent(__int32 userEvent, __int32 data, __int32 data2);
private:
    static region *m_pMainReg;
};
static_assert(sizeof(MainScreen) == 1, "Invalid MainScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern region *_sub_44E330();
_inline region *MainScreen::GetRegion() // 0x44E330
{
    mangled_assert("?GetRegion@MainScreen@@SGPAVregion@@XZ");
    todo("implement");
    region * __result = _sub_44E330();
    return __result;
}

/* ---------- private code */

#endif // __MAINSCREEN_H__
#endif
