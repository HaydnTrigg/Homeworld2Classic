#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\appinterface.h>
#include <Engine\region.h>
#include <Engine\prim.h>
#include <xstring>
#include <Mathlib\vector2.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\mathlibdll.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\fastmath.h>
#include <UserInterface\Graphic.h>
#include <memory\memorylib.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <crtdefs.h>
#include <platform\keydefines.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <Mathlib\mathutil.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\UIDialog.h>
#include <UserInterface\NewUIScreen.h>
#include <Engine\task.h>
#include <stack>
#include <deque>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <Render\objects\textureproxy.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\r_types.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
#include <Engine\App\AppObj.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_670C48(UI::UIDialog *const, char const *);
UI::UIDialog::UIDialog(char const *) // 0x670C48
{
    mangled_assert("??0UIDialog@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_670C48(this, arg);
}

_extern void _sub_670CAD(UI::UIDialog *const);
UI::UIDialog::~UIDialog() // 0x670CAD
{
    mangled_assert("??1UIDialog@UI@@UAE@XZ");
    todo("implement");
    _sub_670CAD(this);
}

_extern void _sub_670DB0(UI::UIDialog *const);
void UI::UIDialog::DisconnectSlots() // 0x670DB0
{
    mangled_assert("?DisconnectSlots@UIDialog@UI@@QAEXXZ");
    todo("implement");
    _sub_670DB0(this);
}

_extern void _sub_670D06(UI::UIDialog *const);
void UI::UIDialog::Accept() // 0x670D06
{
    mangled_assert("?Accept@UIDialog@UI@@QAEXXZ");
    todo("implement");
    _sub_670D06(this);
}

_extern void _sub_670D5B(UI::UIDialog *const);
void UI::UIDialog::Cancel() // 0x670D5B
{
    mangled_assert("?Cancel@UIDialog@UI@@QAEXXZ");
    todo("implement");
    _sub_670D5B(this);
}

_extern void _sub_670DE2(UI::UIDialog *const, LuaConfig &);
void UI::UIDialog::OnLoad(LuaConfig &) // 0x670DE2
{
    mangled_assert("?OnLoad@UIDialog@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_670DE2(this, arg);
}

_extern void _sub_670E15(UI::UIDialog *const);
void UI::UIDialog::OnPostLoad() // 0x670E15
{
    mangled_assert("?OnPostLoad@UIDialog@UI@@MAEXXZ");
    todo("implement");
    _sub_670E15(this);
}

_extern void _sub_670DDE(UI::UIDialog *const, bool);
void UI::UIDialog::OnActivate(bool) // 0x670DDE
{
    mangled_assert("?OnActivate@UIDialog@UI@@MAEX_N@Z");
    todo("implement");
    _sub_670DDE(this, arg);
}

/* ---------- private code */
#endif
