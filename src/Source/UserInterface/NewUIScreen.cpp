#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\region.h>
#include <Engine\prim.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector2.h>
#include <platform\cmdline.h>
#include <assist\stlexstring.h>
#include <xstring>
#include <Mathlib\mathlibdll.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\Graphic.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <memory\memorylib.h>
#include <algorithm>
#include <Render\objects\objects.h>
#include <platform\keydefines.h>
#include <Render\objects\core.h>
#include <crtdefs.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\Line.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Engine\App\AppObj.h>
#include <xstddef>
#include <Engine\scripting.h>
#include <platform\appinterface.h>
#include <Render\objects\textureregistry.h>
#include <Engine\scriptaccess.h>
#include <type_traits>
#include <hash_map>
#include <Engine\scripttypedef.h>
#include <xhash>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <platform\sysinputinterface.h>
#include <compiler\compilerconfig.h>
#include <Mathlib\mathutil.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <lua.h>
#include <UserInterface\NewUIScreen.h>
#include <Engine\task.h>
#include <stack>
#include <deque>
#include <map>
#include <UserInterface\UISoundManager.h>
#include <xtree>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <cassert>
#include <assert.h>
#include <Render\objects\textureproxy.h>
#include <util\types.h>
#include <UserInterface\UICoord.h>
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
#include <fileio\filestream.h>
#include <Engine\mainScreen.h>
#include <fileio\filepath.h>
#include <boost\shared_ptr.hpp>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <wchar.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void UI::LoadRegionList(LuaConfig &lc, std::vector<Rect_i,std::allocator<Rect_i> > &regionList);
_static unsigned __int32 UI::NewUIScreenRegionCB(region *reg, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data);
_static void UI::NewUIScreenRegionLuaCB(region *region, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luastring);
_static void UI::SafeDeleteRegion(region *&region);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::NewUIScreen::NewUIScreen(char const *) // 0x66DCFE
{
    mangled_assert("??0NewUIScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::UIScreenInfo::UIScreenInfo(UI::UIScreenInfo const &) // 0x66DEA2
{
    mangled_assert("??0UIScreenInfo@UI@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::UIScreenInfo::UIScreenInfo() // 0x66DEF5
{
    mangled_assert("??0UIScreenInfo@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::NewUIScreen::Init() // 0x66E324
{
    mangled_assert("?Init@NewUIScreen@UI@@IAEXXZ");
    todo("implement");
}

UI::NewUIScreen::~NewUIScreen() // 0x66DF1C
{
    mangled_assert("??1NewUIScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::NewUIScreen::Draw() // 0x66E0DB
{
    mangled_assert("?Draw@NewUIScreen@UI@@UAEXXZ");
    todo("implement");
}

void UI::NewUIScreen::DrawChildren(UI::InterfaceElement *element) // 0x66E119
{
    mangled_assert("?DrawChildren@NewUIScreen@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewUIScreen::Resize(UI::Size const &) // 0x66F0B8
{
    mangled_assert("?Resize@NewUIScreen@UI@@QAEXABVSize@2@@Z");
    todo("implement");
}

void UI::NewUIScreen::Move(Vector_2i const &) // 0x66EB86
{
    mangled_assert("?Move@NewUIScreen@UI@@QAEXABUVector_2i@@@Z");
    todo("implement");
}

void UI::NewUIScreen::Load(char const *, char const *, bool) // 0x66E3C7
{
    mangled_assert("?Load@NewUIScreen@UI@@QAEXPBD0_N@Z");
    todo("implement");
}

void UI::NewUIScreen::Update(unsigned __int32) // 0x66F26C
{
    mangled_assert("?Update@NewUIScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::NewUIScreen::UpdateChildren(UI::InterfaceElement *, unsigned __int32) // 0x66F2AF
{
    mangled_assert("?UpdateChildren@NewUIScreen@UI@@AAEXPAVInterfaceElement@2@I@Z");
    todo("implement");
}

UI::InterfaceElement *UI::NewUIScreen::FindNamedElement(char const *) // 0x66E238
{
    mangled_assert("?FindNamedElement@NewUIScreen@UI@@QAEPAVInterfaceElement@2@PBD@Z");
    todo("implement");
}

UI::InterfaceElement *UI::NewUIScreen::FindElement(unsigned __int32) // 0x66E230
{
    mangled_assert("?FindElement@NewUIScreen@UI@@QAEPAVInterfaceElement@2@I@Z");
    todo("implement");
}

UI::InterfaceElement *UI::NewUIScreen::AddElement(UI::InterfaceElement *) // 0x66E0A6
{
    mangled_assert("?AddElement@NewUIScreen@UI@@QAEPAVInterfaceElement@2@PAV32@@Z");
    todo("implement");
}

UI::InterfaceElement *UI::NewUIScreen::RemoveElement(UI::InterfaceElement *) // 0x66F0B0
{
    mangled_assert("?RemoveElement@NewUIScreen@UI@@QAEPAVInterfaceElement@2@PAV32@@Z");
    todo("implement");
}

void UI::NewUIScreen::SetActive(bool) // 0x66F165
{
    mangled_assert("?SetActive@NewUIScreen@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::NewUIScreen::DeleteRegions() // 0x66E0B9
{
    mangled_assert("?DeleteRegions@NewUIScreen@UI@@AAEXXZ");
    todo("implement");
}

region *UI::NewUIScreen::GetRegion(unsigned __int32) const // 0x66E2A7
{
    mangled_assert("?GetRegion@NewUIScreen@UI@@QBEPAVregion@@I@Z");
    todo("implement");
}

void UI::NewUIScreen::RebuildRegions() // 0x66EE66
{
    mangled_assert("?RebuildRegions@NewUIScreen@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewUIScreen::SetCaptureInput(bool) // 0x66F1FB
{
    mangled_assert("?SetCaptureInput@NewUIScreen@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::NewUIScreen::OnElementDestruction(UI::InterfaceElement *e) // 0x66EDE8
{
    mangled_assert("?OnElementDestruction@NewUIScreen@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

Vector_2i UI::NewUIScreen::GetCurrentMousePosition() // 0x66E257
{
    mangled_assert("?GetCurrentMousePosition@NewUIScreen@UI@@SG?AUVector_2i@@XZ");
    todo("implement");
}

UI::UIScreenInfo UI::NewUIScreen::GetUIScreenInfo() const // 0x66E2BB
{
    mangled_assert("?GetUIScreenInfo@NewUIScreen@UI@@QBE?AUUIScreenInfo@2@XZ");
    todo("implement");
}

void UI::NewUIScreen::NextScreen(UI::ScreenTransitionType) // 0x66EDA2
{
    mangled_assert("?NextScreen@NewUIScreen@UI@@QAEXW4ScreenTransitionType@2@@Z");
    todo("implement");
}

void UI::NewUIScreen::PreviousScreen(UI::ScreenTransitionType) // 0x66EE1D
{
    mangled_assert("?PreviousScreen@NewUIScreen@UI@@QAEXW4ScreenTransitionType@2@@Z");
    todo("implement");
}

bool UI::NewUIScreen::RegionsContainPoint(Vector_2i const &) // 0x66F017
{
    mangled_assert("?RegionsContainPoint@NewUIScreen@UI@@QAE_NABUVector_2i@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void UI::LoadRegionList(LuaConfig &lc, std::vector<Rect_i,std::allocator<Rect_i> > &regionList) // 0x66EAF9
{
    mangled_assert("UI::LoadRegionList");
    todo("implement");
}

_static unsigned __int32 UI::NewUIScreenRegionCB(region *reg, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data) // 0x66EBB4
{
    mangled_assert("UI::NewUIScreenRegionCB");
    todo("implement");
}

_static void UI::NewUIScreenRegionLuaCB(region *region, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luastring) // 0x66ED76
{
    mangled_assert("UI::NewUIScreenRegionLuaCB");
    todo("implement");
}

_static void UI::SafeDeleteRegion(region *&region) // 0x66F14D
{
    mangled_assert("UI::SafeDeleteRegion");
    todo("implement");
}
#endif
