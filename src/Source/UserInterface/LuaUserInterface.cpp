#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <luaconfig\luaconfig.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\StringTable.h>
#include <Engine\App\AppObj.h>
#include <platform\appinterface.h>
#include <new>
#include <xstddef>
#include <Engine\task.h>
#include <UserInterface\UISoundManager.h>
#include <type_traits>
#include <Mathlib\mathutil.h>
#include <localizer\localizer.h>
#include <xutility>
#include <UserInterface\UIDialog.h>
#include <utility>
#include <Engine\region.h>
#include <iosfwd>
#include <vector>
#include <Engine\prim.h>
#include <xmemory>
#include <Mathlib\vector2.h>
#include <platform\osdef.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\NewButton.h>
#include <Engine\Menus\SubtitleScreen.h>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <UserInterface\LuaUserInterface.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\NewUIScreenManager.h>
#include <hash_map>
#include <xhash>
#include <map>
#include <Render\gl\lotypes.h>
#include <xtree>
#include <UserInterface\NewTextInput.h>
#include <Render\gl\r_types.h>
#include <UserInterface\uitypes.h>
#include <Render\objects\compiledtext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <cassert>
#include <platform\keydefines.h>
#include <assert.h>
#include <util\types.h>
#include <UserInterface\NewTextLabel.h>
#include <Engine\Menus\EventsScreen.h>
#include <UserInterface\uiprimitives.h>
#include <Engine\GameEventSys.h>
#include <UserInterface\NewText.h>
#include <UserInterface\StyleSheet.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\TextButton.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <debug\db.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\objects.h>
#include <UserInterface\NewFrame.h>
#include <Render\objects\core.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <Mathlib\matrix4.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <Mathlib\matrix3.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <Render\objects\textureregistry.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <stack>
#include <deque>

/* ---------- constants */

/* ---------- definitions */

struct UI::LuaScopedGuard
{
    LuaScopedGuard();
    ~LuaScopedGuard();
};
static_assert(sizeof(UI::LuaScopedGuard) == 1, "Invalid UI::LuaScopedGuard size");

class UI::LuaUserInterfaceLib :
    public LuaLibrary
{
public:
    LuaUserInterfaceLib(UI::LuaUserInterfaceLib const &); /* compiler_generated() */
    _inline LuaUserInterfaceLib();
    virtual _inline ~LuaUserInterfaceLib() override;
    virtual _inline bool Register(LuaConfig &) override;
    virtual _inline bool DeRegister(LuaConfig &) override;
    UI::LuaUserInterfaceLib &operator=(UI::LuaUserInterfaceLib const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LuaUserInterfaceLib) == 16, "Invalid UI::LuaUserInterfaceLib size");

/* ---------- prototypes */


_static UI::InterfaceElement *UI::GetScreenElement(char const *screenName, char const *elementName);
_static void UI::UI_HideScreen(char const *name);
_static void UI::UI_ShowScreen(char const *name, __int32 transType);
_static void UI::UI_ReloadCurrentScreen();
_static void UI::UI_ReloadScreen(char const *name);
_static void UI::UI_ReloadAllScreens();
_static void UI::UI_ExitApp();
_static bool UI::UI_SetTextLabelText(char const *screenName, char const *elementName, char const *text);
_static bool UI::UI_SetLabelTextHotkey(char const *screenName, char const *elementName, char const *text, unsigned __int32 hkeyID);
_static bool UI::UI_SetButtonTextHotkey(char const *screenName, char const *elementName, char const *text, unsigned __int32 hkeyID);
_static void UI::UI_GiveFocus(char const *elementName, char const *screenName);
_static void UI::UI_ToggleScreen(char const *name, __int32 transType);
_static void UI::UI_ToggleScreenElement(char const *screenActive, char const *firstScreenName, char const *firstElementName, char const *secondScreenName, char const *secondElementName);
_static void UI::UI_PlaySound(char const *soundName);
_static bool UI::UI_ShowDialog(char const *name, char const *onAccept, char const *onCancel, char const *custom1, __int32 transType);
_static unsigned __int32 UI::UI_GetScreenID(char const *name);
_static unsigned __int32 UI::UI_GetCurrentScreenID();
_static bool UI::UI_DialogAcceptID(__int32 screenId);
_static bool UI::UI_DialogCancelID(__int32 screenId);
_static bool UI::UI_DialogAccept();
_static bool UI::UI_DialogCancel();
_static bool UI::UI_SetNextScreen(char const *screenName, char const *nextScreenName);
_static bool UI::UI_SetPreviousScreen(char const *screenName, char const *prevScreenName);
_static bool UI::UI_NextScreen(__int32 transType);
_static bool UI::UI_PreviousScreen(__int32 transType);
_static bool UI::UI_SetElementVisible(char const *screenName, char const *elementName, bool visible);
_static bool UI::UI_SetElementEnabled(char const *screenName, char const *elementName, bool enable);
_static bool UI::UI_FlashButton(char const *screenName, char const *elementName, __int32 numberOfTimes);
_static bool UI::UI_StopFlashButton(char const *screenName, char const *elementName);
_static bool UI::UI_SetScreenEnabled(char const *screenName, bool enabled);
_static bool UI::UI_SetScreenVisible(char const *screenName, bool visible);
_static void UI::UI_SetInterfaceEnabled(bool enabled);
_static void UI::UI_SetInterfaceVisible(bool visible);
_static void UI::UI_PushState();
_static void UI::UI_PopState();
_static bool UI::UI_IsScreenActive(char const *screenName);
_static bool UI::UI_IsNamedElementVisible(char const *screenName, char const *element);
_static bool UI::UI_SetElementSize(char const *screenName, char const *elementName, __int32 w, __int32 h);
_static bool UI::UI_SetElementPosition(char const *screenName, char const *elementName, __int32 x, __int32 y);
_static bool UI::UI_ScreenIsActive(char const *name);
_static void UI::UI_ClearEventScreen();
_static void UI::UI_AddToEventScreen(char const *speechname);
_static void UI::UI_SetButtonPressed(char const *screen, char const *element, bool pressed);

/* ---------- globals */

extern char const *LUALIB_USERINTERFACE; // 0x83DC00
extern UI::LuaUserInterfaceLib UI::s_LuaUserInterfaceLib; // 0x84B988

/* ---------- private variables */

/* ---------- public code */

_inline UI::LuaUserInterfaceLib::LuaUserInterfaceLib() // 0x679DE1
{
    mangled_assert("??0LuaUserInterfaceLib@UI@@QAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0Free<unsigned int> >::~ObjInternal0<unsigned int,LuaBinding::Functor0Free<unsigned int> >() // 0x679E22
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0Free@I@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1Free<char const *,bool> >::~ObjInternal1<char const *,bool,LuaBinding::Functor1Free<char const *,bool> >() // 0x679E28
{
    mangled_assert("??1?$ObjInternal1@PBD_NV?$Functor1Free@PBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,char const *,bool,LuaBinding::Functor2Free<char const *,char const *,bool> >::~ObjInternal2<char const *,char const *,bool,LuaBinding::Functor2Free<char const *,char const *,bool> >() // 0x679E2E
{
    mangled_assert("??1?$ObjInternal2@PBDPBD_NV?$Functor2Free@PBDPBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,bool,bool,LuaBinding::Functor2Free<char const *,bool,bool> >::~ObjInternal2<char const *,bool,bool,LuaBinding::Functor2Free<char const *,bool,bool> >() // 0x679E34
{
    mangled_assert("??1?$ObjInternal2@PBD_N_NV?$Functor2Free@PBD_N_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,char const *,int,bool,LuaBinding::Functor3Free<char const *,char const *,int,bool> >::~ObjInternal3<char const *,char const *,int,bool,LuaBinding::Functor3Free<char const *,char const *,int,bool> >() // 0x679E3A
{
    mangled_assert("??1?$ObjInternal3@PBDPBDH_NV?$Functor3Free@PBDPBDH_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,char const *,char const *,bool,LuaBinding::Functor3Free<char const *,char const *,char const *,bool> >::~ObjInternal3<char const *,char const *,char const *,bool,LuaBinding::Functor3Free<char const *,char const *,char const *,bool> >() // 0x679E40
{
    mangled_assert("??1?$ObjInternal3@PBDPBDPBD_NV?$Functor3Free@PBDPBDPBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::LuaUserInterfaceLib::~LuaUserInterfaceLib() // 0x679E6A
{
    mangled_assert("??1LuaUserInterfaceLib@UI@@UAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,char const *,bool,void,LuaBinding::Functor3Free<char const *,char const *,bool,void> >::~ObjInternal3<char const *,char const *,bool,void,LuaBinding::Functor3Free<char const *,char const *,bool,void> >() // 0x679E46
{
    mangled_assert("??1?$ObjInternal3@PBDPBD_NXV?$Functor3Free@PBDPBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,char const *,bool,bool,LuaBinding::Functor3Free<char const *,char const *,bool,bool> >::~ObjInternal3<char const *,char const *,bool,bool,LuaBinding::Functor3Free<char const *,char const *,bool,bool> >() // 0x679E4C
{
    mangled_assert("??1?$ObjInternal3@PBDPBD_N_NV?$Functor3Free@PBDPBD_N_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,char const *,int,int,bool,LuaBinding::Functor4Free<char const *,char const *,int,int,bool> >::~ObjInternal4<char const *,char const *,int,int,bool,LuaBinding::Functor4Free<char const *,char const *,int,int,bool> >() // 0x679E52
{
    mangled_assert("??1?$ObjInternal4@PBDPBDHH_NV?$Functor4Free@PBDPBDHH_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,char const *,char const *,unsigned int,bool,LuaBinding::Functor4Free<char const *,char const *,char const *,unsigned int,bool> >::~ObjInternal4<char const *,char const *,char const *,unsigned int,bool,LuaBinding::Functor4Free<char const *,char const *,char const *,unsigned int,bool> >() // 0x679E58
{
    mangled_assert("??1?$ObjInternal4@PBDPBDPBDI_NV?$Functor4Free@PBDPBDPBDI_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal5<char const *,char const *,char const *,char const *,int,bool,LuaBinding::Functor5Free<char const *,char const *,char const *,char const *,int,bool> >::~ObjInternal5<char const *,char const *,char const *,char const *,int,bool,LuaBinding::Functor5Free<char const *,char const *,char const *,char const *,int,bool> >() // 0x679E5E
{
    mangled_assert("??1?$ObjInternal5@PBDPBDPBDPBDH_NV?$Functor5Free@PBDPBDPBDPBDH_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline bool UI::LuaUserInterfaceLib::Register(LuaConfig &) // 0x67A7DB
{
    mangled_assert("?Register@LuaUserInterfaceLib@UI@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal5<char const *,char const *,char const *,char const *,char const *,void,LuaBinding::Functor5Free<char const *,char const *,char const *,char const *,char const *,void> >::~ObjInternal5<char const *,char const *,char const *,char const *,char const *,void,LuaBinding::Functor5Free<char const *,char const *,char const *,char const *,char const *,void> >() // 0x679E64
{
    mangled_assert("??1?$ObjInternal5@PBDPBDPBDPBDPBDXV?$Functor5Free@PBDPBDPBDPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline bool UI::LuaUserInterfaceLib::DeRegister(LuaConfig &) // 0x67A19D
{
    mangled_assert("?DeRegister@LuaUserInterfaceLib@UI@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */

_static UI::InterfaceElement *UI::GetScreenElement(char const *screenName, char const *elementName) // 0x67A797
{
    mangled_assert("UI::GetScreenElement");
    todo("implement");
}

_static void UI::UI_HideScreen(char const *name) // 0x67B2EF
{
    mangled_assert("UI::UI_HideScreen");
    todo("implement");
}

_static void UI::UI_ShowScreen(char const *name, __int32 transType) // 0x67B902
{
    mangled_assert("UI::UI_ShowScreen");
    todo("implement");
}

_static void UI::UI_ReloadCurrentScreen() // 0x67B3F7
{
    mangled_assert("UI::UI_ReloadCurrentScreen");
    todo("implement");
}

_static void UI::UI_ReloadScreen(char const *name) // 0x67B415
{
    mangled_assert("UI::UI_ReloadScreen");
    todo("implement");
}

_static void UI::UI_ReloadAllScreens() // 0x67B3EB
{
    mangled_assert("UI::UI_ReloadAllScreens");
    todo("implement");
}

_static void UI::UI_ExitApp() // 0x67B1BF
{
    mangled_assert("UI::UI_ExitApp");
    todo("implement");
}

_static bool UI::UI_SetTextLabelText(char const *screenName, char const *elementName, char const *text) // 0x67B7F6
{
    mangled_assert("UI::UI_SetTextLabelText");
    todo("implement");
}

_static bool UI::UI_SetLabelTextHotkey(char const *screenName, char const *elementName, char const *text, unsigned __int32 hkeyID) // 0x67B67B
{
    mangled_assert("UI::UI_SetLabelTextHotkey");
    todo("implement");
}

_static bool UI::UI_SetButtonTextHotkey(char const *screenName, char const *elementName, char const *text, unsigned __int32 hkeyID) // 0x67B47E
{
    mangled_assert("UI::UI_SetButtonTextHotkey");
    todo("implement");
}

_static void UI::UI_GiveFocus(char const *elementName, char const *screenName) // 0x67B292
{
    mangled_assert("UI::UI_GiveFocus");
    todo("implement");
}

_static void UI::UI_ToggleScreen(char const *name, __int32 transType) // 0x67B958
{
    mangled_assert("UI::UI_ToggleScreen");
    todo("implement");
}

_static void UI::UI_ToggleScreenElement(char const *screenActive, char const *firstScreenName, char const *firstElementName, char const *secondScreenName, char const *secondElementName) // 0x67B995
{
    mangled_assert("UI::UI_ToggleScreenElement");
    todo("implement");
}

_static void UI::UI_PlaySound(char const *soundName) // 0x67B382
{
    mangled_assert("UI::UI_PlaySound");
    todo("implement");
}

_static bool UI::UI_ShowDialog(char const *name, char const *onAccept, char const *onCancel, char const *custom1, __int32 transType) // 0x67B879
{
    mangled_assert("UI::UI_ShowDialog");
    todo("implement");
}

_static unsigned __int32 UI::UI_GetScreenID(char const *name) // 0x67B26B
{
    mangled_assert("UI::UI_GetScreenID");
    todo("implement");
}

_static unsigned __int32 UI::UI_GetCurrentScreenID() // 0x67B236
{
    mangled_assert("UI::UI_GetCurrentScreenID");
    todo("implement");
}

_static bool UI::UI_DialogAcceptID(__int32 screenId) // 0x67B117
{
    mangled_assert("UI::UI_DialogAcceptID");
    todo("implement");
}

_static bool UI::UI_DialogCancelID(__int32 screenId) // 0x67B171
{
    mangled_assert("UI::UI_DialogCancelID");
    todo("implement");
}

_static bool UI::UI_DialogAccept() // 0x67B10B
{
    mangled_assert("UI::UI_DialogAccept");
    todo("implement");
}

_static bool UI::UI_DialogCancel() // 0x67B165
{
    mangled_assert("UI::UI_DialogCancel");
    todo("implement");
}

_static bool UI::UI_SetNextScreen(char const *screenName, char const *nextScreenName) // 0x67B71E
{
    mangled_assert("UI::UI_SetNextScreen");
    todo("implement");
}

_static bool UI::UI_SetPreviousScreen(char const *screenName, char const *prevScreenName) // 0x67B758
{
    mangled_assert("UI::UI_SetPreviousScreen");
    todo("implement");
}

_static bool UI::UI_NextScreen(__int32 transType) // 0x67B344
{
    mangled_assert("UI::UI_NextScreen");
    todo("implement");
}

_static bool UI::UI_PreviousScreen(__int32 transType) // 0x67B3A1
{
    mangled_assert("UI::UI_PreviousScreen");
    todo("implement");
}

_static bool UI::UI_SetElementVisible(char const *screenName, char const *elementName, bool visible) // 0x67B5C7
{
    mangled_assert("UI::UI_SetElementVisible");
    todo("implement");
}

_static bool UI::UI_SetElementEnabled(char const *screenName, char const *elementName, bool enable) // 0x67B528
{
    mangled_assert("UI::UI_SetElementEnabled");
    todo("implement");
}

_static bool UI::UI_FlashButton(char const *screenName, char const *elementName, __int32 numberOfTimes) // 0x67B1FA
{
    mangled_assert("UI::UI_FlashButton");
    todo("implement");
}

_static bool UI::UI_StopFlashButton(char const *screenName, char const *elementName) // 0x67B919
{
    mangled_assert("UI::UI_StopFlashButton");
    todo("implement");
}

_static bool UI::UI_SetScreenEnabled(char const *screenName, bool enabled) // 0x67B782
{
    mangled_assert("UI::UI_SetScreenEnabled");
    todo("implement");
}

_static bool UI::UI_SetScreenVisible(char const *screenName, bool visible) // 0x67B7AD
{
    mangled_assert("UI::UI_SetScreenVisible");
    todo("implement");
}

_static void UI::UI_SetInterfaceEnabled(bool enabled) // 0x67B61B
{
    mangled_assert("UI::UI_SetInterfaceEnabled");
    todo("implement");
}

_static void UI::UI_SetInterfaceVisible(bool visible) // 0x67B65E
{
    mangled_assert("UI::UI_SetInterfaceVisible");
    todo("implement");
}

_static void UI::UI_PushState() // 0x67B3DF
{
    mangled_assert("UI::UI_PushState");
    todo("implement");
}

_static void UI::UI_PopState() // 0x67B395
{
    mangled_assert("UI::UI_PopState");
    todo("implement");
}

_static bool UI::UI_IsScreenActive(char const *screenName) // 0x67B331
{
    mangled_assert("UI::UI_IsScreenActive");
    todo("implement");
}

_static bool UI::UI_IsNamedElementVisible(char const *screenName, char const *element) // 0x67B302
{
    mangled_assert("UI::UI_IsNamedElementVisible");
    todo("implement");
}

_static bool UI::UI_SetElementSize(char const *screenName, char const *elementName, __int32 w, __int32 h) // 0x67B58A
{
    mangled_assert("UI::UI_SetElementSize");
    todo("implement");
}

_static bool UI::UI_SetElementPosition(char const *screenName, char const *elementName, __int32 x, __int32 y) // 0x67B54D
{
    mangled_assert("UI::UI_SetElementPosition");
    todo("implement");
}

_static bool UI::UI_ScreenIsActive(char const *name) // 0x67B428
{
    mangled_assert("UI::UI_ScreenIsActive");
    todo("implement");
}

_static void UI::UI_ClearEventScreen() // 0x67B0D5
{
    mangled_assert("UI::UI_ClearEventScreen");
    todo("implement");
}

_static void UI::UI_AddToEventScreen(char const *speechname) // 0x67B09D
{
    mangled_assert("UI::UI_AddToEventScreen");
    todo("implement");
}

_static void UI::UI_SetButtonPressed(char const *screen, char const *element, bool pressed) // 0x67B448
{
    mangled_assert("UI::UI_SetButtonPressed");
    todo("implement");
}
#endif
