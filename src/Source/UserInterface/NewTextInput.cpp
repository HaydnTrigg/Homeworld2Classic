#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <seInterface2\SampleID.h>
#include <bitset>
#include <Render\objects\objects.h>
#include <Collision\BVH\octree.h>
#include <seInterface2\SampleBase.h>
#include <boost\smart_ptr.hpp>
#include <Render\objects\core.h>
#include <Collision\BVH\span.h>
#include <boost\scoped_array.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\matvec.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Collision\BVH\proxy.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <Collision\intersect.h>
#include <algorithm>
#include <Collision\primitivesfwd.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\compiledtext.h>
#include <boost\assert.hpp>
#include <Render\gl\r_types.h>
#include <new>
#include <Collision\Primitives\aabb.h>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\NewTextLabel.h>
#include <utility>
#include <UserInterface\uiprimitives.h>
#include <iosfwd>
#include <seInterface2\sedefinesshared.h>
#include <vector>
#include <UserInterface\NewText.h>
#include <xmemory>
#include <Render\objects\fontsystem.h>
#include <UserInterface\UISoundManager.h>
#include <boost\shared_array.hpp>
#include <Render\objects\bitmapfont.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Camera\OrbitParameters.h>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <map>
#include <xtree>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\capsule.h>
#include <debug\ctassert.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\NewFrame.h>
#include <Engine\Address2UdwordMapper.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix4.h>
#include <Engine\MetaSelTarg.h>
#include <Mathlib\vector3.h>
#include <assist\fixedstring.h>
#include <Engine\SelTarg.h>
#include <cassert>
#include <Engine\region.h>
#include <assist\stlexstring.h>
#include <assert.h>
#include <Engine\prim.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\textureregistry.h>
#include <Engine\MultiplierContainer.h>
#include <Engine\visibility.h>
#include <platform\timer.h>
#include <hash_map>
#include <Engine\MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xhash>
#include <Engine\savegamedatainfo.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <Engine\sobtypes.h>
#include <assist\stlexsmallvector.h>
#include <Render\objects\cliprect.h>
#include <Engine\SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Engine\sobid.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <localizer\localizer.h>
#include <UserInterface\keytable.h>
#include <Engine\savegameimpl.h>
#include <Engine\savegamedata.h>
#include <UserInterface\NewUIScreen.h>
#include <Engine\pathpoints.h>
#include <Engine\task.h>
#include <boost\shared_ptr.hpp>
#include <stack>
#include <deque>
#include <Engine\Interpolation.h>
#include <boost\config.hpp>
#include <Mathlib\quat.h>
#include <Engine\abilities.h>
#include <UserInterface\StyleSheet.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <wchar.h>
#include <seInterface2\SoundParams.h>
#include <swprintf.inl>
#include <platform\osdef.h>
#include <Engine\MainUI.h>
#include <Engine\Selector.h>
#include <Engine\selection.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Engine\savegamedef.h>
#include <UserInterface\Graphic.h>

/* ---------- constants */

enum UI::NewTextInput::HandleKeyPressed::__l4::<unnamed-type-signal>
{
    NONE = 0,
    EDIT,
    TYPE,
    CURSOR,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern VisibleKeyMap g_keyEntryTable[256]; // 0x83E168

/* ---------- private variables */

_static
{
    extern unsigned char g_keyDelegates[6]; // 0x83E368
}

/* ---------- public code */

_extern _sub_688E90(UI::NewTextInput *const, UI::InterfaceElement *, char const *);
UI::NewTextInput::NewTextInput(UI::InterfaceElement *, char const *) // 0x688E90
{
    mangled_assert("??0NewTextInput@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_688E90(this, arg, arg);
}

_extern _sub_688D57(UI::NewTextInput *const, UI::NewTextInput const &);
UI::NewTextInput::NewTextInput(UI::NewTextInput const &) // 0x688D57
{
    mangled_assert("??0NewTextInput@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_688D57(this, arg);
}

_extern _sub_688BFF(UI::NewTextInput *const, LuaConfig &);
UI::NewTextInput::NewTextInput(LuaConfig &) // 0x688BFF
{
    mangled_assert("??0NewTextInput@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_688BFF(this, arg);
}

_extern void _sub_688FDE(UI::NewTextInput *const);
UI::NewTextInput::~NewTextInput() // 0x688FDE
{
    mangled_assert("??1NewTextInput@UI@@UAE@XZ");
    todo("implement");
    _sub_688FDE(this);
}

_extern UI::NewTextInput const &_sub_689061(UI::NewTextInput *const, UI::NewTextInput const &);
UI::NewTextInput const &UI::NewTextInput::operator=(UI::NewTextInput const &) // 0x689061
{
    mangled_assert("??4NewTextInput@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::NewTextInput const & __result = _sub_689061(this, arg);
    return __result;
}

_extern void _sub_68915C(UI::NewTextInput *const, Vector_2i const &, Rect_i const &);
void UI::NewTextInput::Draw2(Vector_2i const &, Rect_i const &) // 0x68915C
{
    mangled_assert("?Draw2@NewTextInput@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_68915C(this, arg, arg);
}

_extern void _sub_689A26(UI::NewTextInput *const, wchar_t const *, bool);
void UI::NewTextInput::SetText(wchar_t const *, bool) // 0x689A26
{
    mangled_assert("?SetText@NewTextInput@UI@@UAEXPB_W_N@Z");
    todo("implement");
    _sub_689A26(this, arg, arg);
}

_extern void _sub_689AA6(UI::NewTextInput *const, wchar_t const *, bool);
void UI::NewTextInput::SetTextInternal(wchar_t const *, bool) // 0x689AA6
{
    mangled_assert("?SetTextInternal@NewTextInput@UI@@AAEXPB_W_N@Z");
    todo("implement");
    _sub_689AA6(this, arg, arg);
}

_extern void _sub_6899D1(UI::NewTextInput *const, unsigned __int32);
void UI::NewTextInput::OnUpdate(unsigned __int32) // 0x6899D1
{
    mangled_assert("?OnUpdate@NewTextInput@UI@@MAEXI@Z");
    todo("implement");
    _sub_6899D1(this, arg);
}

_extern void _sub_68967B(UI::NewTextInput *const, LuaConfig &);
void UI::NewTextInput::Load(LuaConfig &) // 0x68967B
{
    mangled_assert("?Load@NewTextInput@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68967B(this, arg);
}

_extern void _sub_689352(UI::NewTextInput *const, unsigned char, UI::KeyModifier const &);
void UI::NewTextInput::HandleKeyPressed(unsigned char, UI::KeyModifier const &) // 0x689352
{
    mangled_assert("?HandleKeyPressed@NewTextInput@UI@@EAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_689352(this, arg, arg);
}

_extern void _sub_689846(UI::NewTextInput *const, unsigned char, UI::KeyModifier const &);
void UI::NewTextInput::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x689846
{
    mangled_assert("?OnKeyPressed@NewTextInput@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_689846(this, arg, arg);
}

_extern void _sub_689878(UI::NewTextInput *const, unsigned char, UI::KeyModifier const &);
void UI::NewTextInput::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x689878
{
    mangled_assert("?OnKeyReleased@NewTextInput@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_689878(this, arg, arg);
}

_extern void _sub_6898A1(UI::NewTextInput *const, unsigned char, UI::KeyModifier const &);
void UI::NewTextInput::OnKeyRepeat(unsigned char, UI::KeyModifier const &) // 0x6898A1
{
    mangled_assert("?OnKeyRepeat@NewTextInput@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_6898A1(this, arg, arg);
}

_extern void _sub_68980F(UI::NewTextInput *const, bool);
void UI::NewTextInput::OnFocus(bool) // 0x68980F
{
    mangled_assert("?OnFocus@NewTextInput@UI@@MAEX_N@Z");
    todo("implement");
    _sub_68980F(this, arg);
}

_extern void _sub_6898D3(UI::NewTextInput *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewTextInput::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x6898D3
{
    mangled_assert("?OnMousePressed@NewTextInput@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_6898D3(this, arg, arg);
}

_extern void _sub_689A19(UI::NewTextInput *const, bool);
void UI::NewTextInput::SetReadOnly(bool) // 0x689A19
{
    mangled_assert("?SetReadOnly@NewTextInput@UI@@QAEX_N@Z");
    todo("implement");
    _sub_689A19(this, arg);
}

_extern void _sub_6899F4(UI::NewTextInput *const, unsigned __int32);
void UI::NewTextInput::SetCursorPosition(unsigned __int32) // 0x6899F4
{
    mangled_assert("?SetCursorPosition@NewTextInput@UI@@QAEXI@Z");
    todo("implement");
    _sub_6899F4(this, arg);
}

_extern void _sub_689A0C(UI::NewTextInput *const);
void UI::NewTextInput::SetCursorPositionToEnd() // 0x689A0C
{
    mangled_assert("?SetCursorPositionToEnd@NewTextInput@UI@@QAEXXZ");
    todo("implement");
    _sub_689A0C(this);
}

_extern void _sub_689148(UI::NewTextInput *const);
void UI::NewTextInput::ClearInput() // 0x689148
{
    mangled_assert("?ClearInput@NewTextInput@UI@@QAEXXZ");
    todo("implement");
    _sub_689148(this);
}

/* ---------- private code */
#endif
