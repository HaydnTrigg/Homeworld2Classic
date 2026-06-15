#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Menus\MenuSupport.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Menus\PlayerSetup.h>
#include <UserInterface\NewListBox.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <compiler\compilerconfig.h>
#include <App\PlayerProfileGameOptions.h>
#include <GameOptions.h>
#include <list>
#include <Menus\ErrorMessage.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <Render\objects\cliprect.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <UserInterface\ListBoxItem.h>
#include <Render\objects\core.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <LevelManager.h>
#include <debug\db.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Menus\NewProfile.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Menus\UserProfile.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\StringTable.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::UserProfile::UserProfile(char const *) // 0x5AF339
{
    mangled_assert("??0UserProfile@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::UserProfile::~UserProfile() // 0x5AF36B
{
    mangled_assert("??1UserProfile@UI@@UAE@XZ");
    todo("implement");
}

void UI::UserProfile::OnActivate(bool) // 0x5AF626
{
    mangled_assert("?OnActivate@UserProfile@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::UserProfile::FillProfileList() // 0x5AF3A7
{
    mangled_assert("?FillProfileList@UserProfile@UI@@QAEXXZ");
    todo("implement");
}

void UI::UserProfile::OnPostLoad() // 0x5AF9BB
{
    mangled_assert("?OnPostLoad@UserProfile@UI@@MAEXXZ");
    todo("implement");
}

bool UI::UserProfile::SelectCurrentProfile() // 0x5AFABA
{
    mangled_assert("?SelectCurrentProfile@UserProfile@UI@@QAE_NXZ");
    todo("implement");
}

void UI::UserProfile::OnAcceptClicked(UI::InterfaceElement *sender) // 0x5AF55C
{
    mangled_assert("?OnAcceptClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnCancelClicked(UI::InterfaceElement *sender) // 0x5AF70E
{
    mangled_assert("?OnCancelClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnDeleteClicked_Yes(UI::InterfaceElement *sender) // 0x5AF877
{
    mangled_assert("?OnDeleteClicked_Yes@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnDeleteClicked(UI::InterfaceElement *sender) // 0x5AF80A
{
    mangled_assert("?OnDeleteClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnPlayerSetupClicked(UI::InterfaceElement *sender) // 0x5AF947
{
    mangled_assert("?OnPlayerSetupClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnCreateNewClicked(UI::InterfaceElement *sender) // 0x5AF784
{
    mangled_assert("?OnCreateNewClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::UserProfile::OnProfileDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf) // 0x5AFAAE
{
    mangled_assert("?OnProfileDoubleClicked@UserProfile@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
