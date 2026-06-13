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
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Render\objects\cliprect.h>
#include <compiler\compilerconfig.h>
#include <localizer\localizer.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewUIScreenManager.h>
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
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <luaconfig\luaconfig.h>
#include <UserInterface\uiprimitives.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewText.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <Render\objects\bitmapfont.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\UICoord.h>
#include <Menus\PatchInfoDialog.h>
#include <UserInterface\NewUIScreen.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern UI::PatchInfoDialog *UI::PatchInfoDialog::ms_screen; // 0x846D14

/* ---------- private variables */

/* ---------- public code */

_extern _sub_59CB1F(UI::PatchInfoDialog *const, char const *);
UI::PatchInfoDialog::PatchInfoDialog(char const *) // 0x59CB1F
{
    mangled_assert("??0PatchInfoDialog@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_59CB1F(this, arg);
}

_extern void _sub_59CB3D(UI::PatchInfoDialog *const);
UI::PatchInfoDialog::~PatchInfoDialog() // 0x59CB3D
{
    mangled_assert("??1PatchInfoDialog@UI@@UAE@XZ");
    todo("implement");
    _sub_59CB3D(this);
}

_extern void _sub_59CB6B(UI::PatchInfoDialog *const);
void UI::PatchInfoDialog::OnPostLoad() // 0x59CB6B
{
    mangled_assert("?OnPostLoad@PatchInfoDialog@UI@@MAEXXZ");
    todo("implement");
    _sub_59CB6B(this);
}

_extern void _sub_59CBA4(wchar_t const *);
void UI::PatchInfoDialog::Show(wchar_t const *message) // 0x59CBA4
{
    mangled_assert("?Show@PatchInfoDialog@UI@@SGXPB_W@Z");
    todo("implement");
    _sub_59CBA4(message);
}

/* ---------- private code */
#endif
