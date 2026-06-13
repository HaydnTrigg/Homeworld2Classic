#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <platform\cmdline.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <UserInterface\NewUIScreenManager.h>
#include <type_traits>
#include <Render\objects\cliprect.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <localizer\localizer.h>
#include <fileio\fileioexports.h>
#include <luaconfig\luabinding.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <fileio\filepath.h>
#include <campaign.h>
#include <gamestructimpl.h>
#include <scripting.h>
#include <Badge.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <scriptaccess.h>
#include <prim.h>
#include <platform\osdef.h>
#include <scripttypedef.h>
#include <Mathlib\vector3.h>
#include <Menus\MenuSupport.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <App\CampaignMan.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <Render\gl\lotypes.h>
#include <boost\static_assert.hpp>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <Render\objects\compiledtext.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <App\AppObj.h>
#include <Mathlib\fastmath.h>
#include <platform\appinterface.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <platform\keydefines.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <LevelManager.h>
#include <LevelDesc.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Hash.h>
#include <UserInterface\NewListBox.h>
#include <fileio\md5.h>
#include <boost\detail\lwm_win32.hpp>
#include <gameSettings.h>
#include <syncChecking.h>
#include <Menus\TutorialScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5AD87B(UI::TutorialScreen *const, char const *);
UI::TutorialScreen::TutorialScreen(char const *) // 0x5AD87B
{
    mangled_assert("??0TutorialScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5AD87B(this, arg);
}

_extern void _sub_5AD8F3(UI::TutorialScreen *const);
UI::TutorialScreen::~TutorialScreen() // 0x5AD8F3
{
    mangled_assert("??1TutorialScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_5AD8F3(this);
}

_extern void _sub_5ADE8F(UI::TutorialScreen *const, char const *, bool);
void UI::TutorialScreen::SetCampaign(char const *, bool) // 0x5ADE8F
{
    mangled_assert("?SetCampaign@TutorialScreen@UI@@QAEXPBD_N@Z");
    todo("implement");
    _sub_5ADE8F(this, arg, arg);
}

_extern void _sub_5ADCDC(UI::TutorialScreen *const, LuaConfig &);
void UI::TutorialScreen::OnLoad(LuaConfig &) // 0x5ADCDC
{
    mangled_assert("?OnLoad@TutorialScreen@UI@@UAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5ADCDC(this, arg);
}

_extern void _sub_5ADE21(UI::TutorialScreen *const);
void UI::TutorialScreen::OnPostLoad() // 0x5ADE21
{
    mangled_assert("?OnPostLoad@TutorialScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_5ADE21(this);
}

_extern void _sub_5AD988(UI::TutorialScreen *const, bool);
void UI::TutorialScreen::FillTutorialListBox(bool) // 0x5AD988
{
    mangled_assert("?FillTutorialListBox@TutorialScreen@UI@@AAEX_N@Z");
    todo("implement");
    _sub_5AD988(this, arg);
}

_extern void _sub_5ADC76(UI::TutorialScreen *const, bool);
void UI::TutorialScreen::OnFocus(bool) // 0x5ADC76
{
    mangled_assert("?OnFocus@TutorialScreen@UI@@UAEX_N@Z");
    todo("implement");
    _sub_5ADC76(this, arg);
}

_extern void _sub_5ADF23(UI::InterfaceElement *);
void UI::TutorialScreen::TutorialSelected(UI::InterfaceElement *sender) // 0x5ADF23
{
    mangled_assert("?TutorialSelected@TutorialScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5ADF23(sender);
}

/* ---------- private code */
#endif
