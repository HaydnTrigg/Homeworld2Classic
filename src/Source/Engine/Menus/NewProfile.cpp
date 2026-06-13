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
#include <Menus\ErrorMessage.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Render\objects\compiledtext.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <UserInterface\NewText.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\vector3.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
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
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <Render\gl\lotypes.h>
#include <fileio\md5.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <App\PlayerProfileGameOptions.h>
#include <Render\gl\r_types.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <Menus\MenuSupport.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <Menus\UserProfile.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\cliprect.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <Menus\NewProfile.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewUIScreenManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_59534D(UI::NewProfile *const, char const *);
UI::NewProfile::NewProfile(char const *) // 0x59534D
{
    mangled_assert("??0NewProfile@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_59534D(this, arg);
}

_extern void _sub_59537F(UI::NewProfile *const);
UI::NewProfile::~NewProfile() // 0x59537F
{
    mangled_assert("??1NewProfile@UI@@UAE@XZ");
    todo("implement");
    _sub_59537F(this);
}

_extern void _sub_5953CB(UI::NewProfile *const, bool);
void UI::NewProfile::EnableCancel(bool) // 0x5953CB
{
    mangled_assert("?EnableCancel@NewProfile@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5953CB(this, arg);
}

_extern void _sub_595563(UI::NewProfile *const, bool);
void UI::NewProfile::OnActivate(bool) // 0x595563
{
    mangled_assert("?OnActivate@NewProfile@UI@@MAEX_N@Z");
    todo("implement");
    _sub_595563(this, arg);
}

_extern void _sub_595683(UI::NewProfile *const);
void UI::NewProfile::OnPostLoad() // 0x595683
{
    mangled_assert("?OnPostLoad@NewProfile@UI@@MAEXXZ");
    todo("implement");
    _sub_595683(this);
}

_extern void _sub_5953DB(UI::InterfaceElement *);
void UI::NewProfile::OnAcceptClicked(UI::InterfaceElement *sender) // 0x5953DB
{
    mangled_assert("?OnAcceptClicked@NewProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5953DB(sender);
}

_extern void _sub_59564F(UI::InterfaceElement *);
void UI::NewProfile::OnCancelClicked(UI::InterfaceElement *sender) // 0x59564F
{
    mangled_assert("?OnCancelClicked@NewProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59564F(sender);
}

/* ---------- private code */
#endif
