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
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <Render\objects\compiledtext.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Mathlib\matrix3.h>
#include <App\PlayerProfileGameOptions.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <UserInterface\RadioButton.h>
#include <Render\objects\objects.h>
#include <UserInterface\TextButton.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <fileio\filepath.h>
#include <Mathlib\vector2.h>
#include <UserInterface\NewUIScreenManager.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Render\objects\image.h>
#include <Render\objects\hw2ddraw.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\cliprect.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <localizer\localizer.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <Menus\PlayerSetup.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\ListBoxItem.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\RadioItem.h>
#include <boost\detail\lwm_win32.hpp>
#include <Menus\EmblemSelect.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewButton.h>
#include <UserInterface\NewListBox.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_575128(UI::EmblemSelect *const, char const *);
UI::EmblemSelect::EmblemSelect(char const *) // 0x575128
{
    mangled_assert("??0EmblemSelect@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_575128(this, arg);
}

_extern void _sub_575147(UI::EmblemSelect *const);
UI::EmblemSelect::~EmblemSelect() // 0x575147
{
    mangled_assert("??1EmblemSelect@UI@@UAE@XZ");
    todo("implement");
    _sub_575147(this);
}

_extern void _sub_575981(UI::EmblemSelect *const);
void UI::EmblemSelect::OnPostLoad() // 0x575981
{
    mangled_assert("?OnPostLoad@EmblemSelect@UI@@MAEXXZ");
    todo("implement");
    _sub_575981(this);
}

_extern void _sub_5752E2(UI::EmblemSelect *const, bool);
void UI::EmblemSelect::OnActivate(bool) // 0x5752E2
{
    mangled_assert("?OnActivate@EmblemSelect@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5752E2(this, arg);
}

_extern void _sub_57528B(UI::InterfaceElement *);
void UI::EmblemSelect::OnAccept(UI::InterfaceElement *sender) // 0x57528B
{
    mangled_assert("?OnAccept@EmblemSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_57528B(sender);
}

_extern void _sub_5751B3(UI::EmblemSelect *const);
void UI::EmblemSelect::CommitValues() // 0x5751B3
{
    mangled_assert("?CommitValues@EmblemSelect@UI@@QAEXXZ");
    todo("implement");
    _sub_5751B3(this);
}

_extern void _sub_575975(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::EmblemSelect::OnEmblemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf) // 0x575975
{
    mangled_assert("?OnEmblemDoubleClicked@EmblemSelect@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_575975(e, x, y, bf);
}

/* ---------- private code */
#endif
