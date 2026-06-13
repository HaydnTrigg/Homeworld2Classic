#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\StyleSheet.h>
#include <xstring>
#include <Render\gl\r_defines.h>
#include <luaconfig\luaconfig.h>
#include <Render\gl\glext.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <UserInterface\NewTextLabel.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <boost\checked_delete.hpp>
#include <Engine\task.h>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\objects.h>
#include <new>
#include <UserInterface\NewFrame.h>
#include <Render\objects\core.h>
#include <xstddef>
#include <Mathlib\mathutil.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <Mathlib\matrix4.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <type_traits>
#include <Mathlib\vector3.h>
#include <Engine\App\AppObj.h>
#include <platform\appinterface.h>
#include <Engine\region.h>
#include <xutility>
#include <Engine\prim.h>
#include <utility>
#include <Mathlib\vector2.h>
#include <iosfwd>
#include <vector>
#include <Mathlib\matrix3.h>
#include <xmemory>
#include <Render\objects\textureregistry.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewDropDownListBox.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\ListBoxItem.h>
#include <luaconfig\luabinding.h>
#include <math.h>
#include <UserInterface\TextButton.h>
#include <util\colour.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewButton.h>
#include <Mathlib\vector4.h>
#include <list>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Engine\Menus\MenuFactory.h>
#include <UserInterface\NewUIScreenManager.h>
#include <hash_map>
#include <xhash>
#include <Render\objects\cliprect.h>
#include <map>
#include <xtree>
#include <Engine\FrontEnd\ScriptedFE\ScriptedFE.h>
#include <Engine\FrontEnd\frontend.h>
#include <localizer\localizer.h>
#include <UserInterface\UISoundManager.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <cassert>
#include <assert.h>
#include <UserInterface\UIDirectRenderer.h>
#include <UserInterface\uirenderproxy.h>
#include <util\types.h>
#include <UserInterface\UICoord.h>
#include <platform\osdef.h>
#include <Engine\LevelManager.h>
#include <Engine\renderer.h>
#include <Engine\LevelDesc.h>
#include <Engine\Hash.h>
#include <fileio\md5.h>
#include <fileio\fileioexports.h>
#include <Render\gl\lotypes.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\StringTable.h>
#include <Render\gl\r_types.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
#include <profile\profile.h>
#include <UserInterface\RenderUIPrim.h>
#include <iostream>
#include <boost\shared_ptr.hpp>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <deque>
#include <UserInterface\NewListBox.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::StateSaver
{
    bool oldDepthCap; // 0x0
    bool oldDepthWrite; // 0x1
    ComparisonFunc oldDepthFunc; // 0x4
    vector4 oldColour; // 0x8
    TextureMode oldTexUnitMode; // 0x18
    BlendFunc oldSrcBlend; // 0x1C
    BlendFunc oldDestBlend; // 0x20
    CapChanges changes; // 0x24
    StateSaver();
    ~StateSaver();
};
static_assert(sizeof(`anonymous-namespace'::StateSaver) == 644, "Invalid `anonymous-namespace'::StateSaver size");

typedef void (*CustomFunctionPtr)(void *);
typedef `anonymous-namespace'::StateSaver ?A0x6455cb4f::StateSaver;

/* ---------- prototypes */


_static void UI::NewUIScreenManagerRegionLuaCB(region *region, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luastring);

/* ---------- globals */

extern UI::InterfaceElement *UI::NewUIScreenManager::ms_mouseInputLock; // 0x84B964
extern UI::InterfaceElement *UI::NewUIScreenManager::ms_topLevelElement; // 0x84B968
extern UI::InterfaceElement *UI::NewUIScreenManager::ms_focusedElement; // 0x84B96C
extern UI::NewUIScreenManager *UI::NewUIScreenManager::ms_i; // 0x84B960

/* ---------- private variables */

_static
{
    extern float const gc_doubleClickDelay; // 0x7B4134
    extern float const gc_helpTipDelay; // 0x7B4138
}

/* ---------- public code */

_extern _sub_671380(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > const &) // 0x671380
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_671380(this, arg);
}

_extern _sub_6713C2(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > const &) // 0x6713C2
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6713C2(this, arg);
}

_extern UI::NewUIScreenManager *_sub_67375D();
UI::NewUIScreenManager *UI::NewUIScreenManager::i() // 0x67375D
{
    mangled_assert("?i@NewUIScreenManager@UI@@SGPAV12@XZ");
    todo("implement");
    UI::NewUIScreenManager * __result = _sub_67375D();
    return __result;
}

_extern bool _sub_671D19();
bool UI::NewUIScreenManager::Create() // 0x671D19
{
    mangled_assert("?Create@NewUIScreenManager@UI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_671D19();
    return __result;
}

_extern bool _sub_671E9A();
bool UI::NewUIScreenManager::Destroy() // 0x671E9A
{
    mangled_assert("?Destroy@NewUIScreenManager@UI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_671E9A();
    return __result;
}

_extern _sub_6715AD(UI::NewUIScreenManager *const);
UI::NewUIScreenManager::NewUIScreenManager() // 0x6715AD
{
    mangled_assert("??0NewUIScreenManager@UI@@AAE@XZ");
    todo("implement");
    _sub_6715AD(this);
}

_extern void _sub_671862(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >() // 0x671862
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_671862(this);
}

_extern void _sub_671863(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >() // 0x671863
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_671863(this);
}

_extern void _sub_671864(std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > *const);
_inline std::_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > >::~_Deque_val<std::_Deque_simple_types<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > >() // 0x671864
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_671864(this);
}

_extern void _sub_671873(std::_List_buy<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > *const);
_inline std::_List_buy<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> >::~_List_buy<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> >() // 0x671873
{
    mangled_assert("??1?$_List_buy@PAVNewUIScreen@UI@@V?$allocator@PAVNewUIScreen@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_671873(this);
}

_extern void _sub_6718AB(std::stack<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::deque<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::allocator<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > > *const);
_inline std::stack<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::deque<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::allocator<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >::~stack<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::deque<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >,std::allocator<std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > > > >() // 0x6718AB
{
    mangled_assert("??1?$stack@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@V?$deque@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@V?$allocator@V?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@2@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6718AB(this);
}

_extern void _sub_6718BB(UI::NewUIScreenManager *const);
UI::NewUIScreenManager::~NewUIScreenManager() // 0x6718BB
{
    mangled_assert("??1NewUIScreenManager@UI@@AAE@XZ");
    todo("implement");
    _sub_6718BB(this);
}

_extern void _sub_6720A0(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::Flush() // 0x6720A0
{
    mangled_assert("?Flush@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_6720A0(this);
}

_extern void _sub_67325F(UI::NewUIScreenManager *const, float);
void UI::NewUIScreenManager::UpdateFunction(float) // 0x67325F
{
    mangled_assert("?UpdateFunction@NewUIScreenManager@UI@@QAEXM@Z");
    todo("implement");
    _sub_67325F(this, arg);
}

_extern void _sub_671ED1();
void UI::NewUIScreenManager::DrawFunction() // 0x671ED1
{
    mangled_assert("?DrawFunction@NewUIScreenManager@UI@@SGXXZ");
    todo("implement");
    _sub_671ED1();
}

_extern UI::NewUIScreen *_sub_671FF6(UI::NewUIScreenManager *const, unsigned __int32, bool);
UI::NewUIScreen *UI::NewUIScreenManager::FindScreen(unsigned __int32, bool) // 0x671FF6
{
    mangled_assert("?FindScreen@NewUIScreenManager@UI@@QAEPAVNewUIScreen@2@I_N@Z");
    todo("implement");
    UI::NewUIScreen * __result = _sub_671FF6(this, arg, arg);
    return __result;
}

_extern UI::NewUIScreen *_sub_67203B(UI::NewUIScreenManager *const, char const *, bool);
UI::NewUIScreen *UI::NewUIScreenManager::FindScreen(char const *, bool) // 0x67203B
{
    mangled_assert("?FindScreen@NewUIScreenManager@UI@@QAEPAVNewUIScreen@2@PBD_N@Z");
    todo("implement");
    UI::NewUIScreen * __result = _sub_67203B(this, arg, arg);
    return __result;
}

_extern UI::NewUIScreen *_sub_672A89(UI::NewUIScreenManager *const, char const *, char const *, char const *, bool);
UI::NewUIScreen *UI::NewUIScreenManager::LoadScreen(char const *, char const *, char const *, bool) // 0x672A89
{
    mangled_assert("?LoadScreen@NewUIScreenManager@UI@@QAEPAVNewUIScreen@2@PBD00_N@Z");
    todo("implement");
    UI::NewUIScreen * __result = _sub_672A89(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_671D96(UI::NewUIScreenManager *const, UI::NewUIScreen *);
void UI::NewUIScreenManager::DeactivateScreen(UI::NewUIScreen *) // 0x671D96
{
    mangled_assert("?DeactivateScreen@NewUIScreenManager@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
    _sub_671D96(this, arg);
}

_extern void _sub_671BE8(UI::NewUIScreenManager *const, UI::NewUIScreen *, UI::ScreenTransitionType);
void UI::NewUIScreenManager::ActivateScreen(UI::NewUIScreen *, UI::ScreenTransitionType) // 0x671BE8
{
    mangled_assert("?ActivateScreen@NewUIScreenManager@UI@@QAEXPAVNewUIScreen@2@W4ScreenTransitionType@2@@Z");
    todo("implement");
    _sub_671BE8(this, arg, arg);
}

_extern void _sub_671CAC(UI::NewUIScreenManager *const, char const *, UI::ScreenTransitionType);
void UI::NewUIScreenManager::ActivateScreen(char const *, UI::ScreenTransitionType) // 0x671CAC
{
    mangled_assert("?ActivateScreen@NewUIScreenManager@UI@@QAEXPBDW4ScreenTransitionType@2@@Z");
    todo("implement");
    _sub_671CAC(this, arg, arg);
}

_extern void _sub_671E39(UI::NewUIScreenManager *const, char const *);
void UI::NewUIScreenManager::DeactivateScreen(char const *) // 0x671E39
{
    mangled_assert("?DeactivateScreen@NewUIScreenManager@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_671E39(this, arg);
}

_extern void _sub_67320D(UI::NewUIScreenManager *const, char const *);
void UI::NewUIScreenManager::UnloadScreen(char const *) // 0x67320D
{
    mangled_assert("?UnloadScreen@NewUIScreenManager@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_67320D(this, arg);
}

_extern void _sub_6731EB(UI::NewUIScreenManager *const, UI::NewUIScreen *);
void UI::NewUIScreenManager::UnloadScreen(UI::NewUIScreen *) // 0x6731EB
{
    mangled_assert("?UnloadScreen@NewUIScreenManager@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
    _sub_6731EB(this, arg);
}

_extern bool _sub_672A46(UI::NewUIScreenManager *const, char const *);
bool UI::NewUIScreenManager::IsActive(char const *) // 0x672A46
{
    mangled_assert("?IsActive@NewUIScreenManager@UI@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_672A46(this, arg);
    return __result;
}

_extern void _sub_673175(UI::NewUIScreenManager *const, wchar_t const *);
void UI::NewUIScreenManager::SetHelpTipText(wchar_t const *) // 0x673175
{
    mangled_assert("?SetHelpTipText@NewUIScreenManager@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_673175(this, arg);
}

_extern bool _sub_672265(UI::NewUIScreenManager const *const);
bool UI::NewUIScreenManager::GetHelpTipVisible() const // 0x672265
{
    mangled_assert("?GetHelpTipVisible@NewUIScreenManager@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_672265(this);
    return __result;
}

_extern void _sub_673186(UI::NewUIScreenManager *const, bool);
void UI::NewUIScreenManager::SetHelpTipVisible(bool) // 0x673186
{
    mangled_assert("?SetHelpTipVisible@NewUIScreenManager@UI@@QAEX_N@Z");
    todo("implement");
    _sub_673186(this, arg);
}

_extern void _sub_673161(UI::NewUIScreenManager *const, Vector_2i const &);
void UI::NewUIScreenManager::SetHelpTipPosition(Vector_2i const &) // 0x673161
{
    mangled_assert("?SetHelpTipPosition@NewUIScreenManager@UI@@QAEXABUVector_2i@@@Z");
    todo("implement");
    _sub_673161(this, arg);
}

_extern void _sub_6727F0(UI::NewUIScreenManager *const, float);
void UI::NewUIScreenManager::HandleInput(float) // 0x6727F0
{
    mangled_assert("?HandleInput@NewUIScreenManager@UI@@AAEXM@Z");
    todo("implement");
    _sub_6727F0(this, arg);
}

_extern bool _sub_672528(UI::NewUIScreenManager *const, UI::EventType, UI::EventInfo &);
bool UI::NewUIScreenManager::HandleEvent(UI::EventType, UI::EventInfo &) // 0x672528
{
    mangled_assert("?HandleEvent@NewUIScreenManager@UI@@QAE_NW4EventType@2@AAUEventInfo@2@@Z");
    todo("implement");
    bool __result = _sub_672528(this, arg, arg);
    return __result;
}

_extern bool _sub_672318(UI::NewUIScreenManager *const, UI::InterfaceElement *, UI::EventType, UI::EventInfo &);
bool UI::NewUIScreenManager::HandleElementEvent(UI::InterfaceElement *, UI::EventType, UI::EventInfo &) // 0x672318
{
    mangled_assert("?HandleElementEvent@NewUIScreenManager@UI@@QAE_NPAVInterfaceElement@2@W4EventType@2@AAUEventInfo@2@@Z");
    todo("implement");
    bool __result = _sub_672318(this, arg, arg, arg);
    return __result;
}

_extern void _sub_672E06(UI::InterfaceElement *);
void UI::NewUIScreenManager::OnElementDestruction(UI::InterfaceElement *e) // 0x672E06
{
    mangled_assert("?OnElementDestruction@NewUIScreenManager@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_672E06(e);
}

_extern void _sub_673094(UI::NewUIScreenManager *const, char const *);
void UI::NewUIScreenManager::ReloadScreen(char const *) // 0x673094
{
    mangled_assert("?ReloadScreen@NewUIScreenManager@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_673094(this, arg);
}

_extern void _sub_672FB6(UI::NewUIScreenManager *const, unsigned __int32);
void UI::NewUIScreenManager::ReloadScreen(unsigned __int32) // 0x672FB6
{
    mangled_assert("?ReloadScreen@NewUIScreenManager@UI@@QAEXI@Z");
    todo("implement");
    _sub_672FB6(this, arg);
}

_extern void _sub_672FD4(UI::NewUIScreenManager *const, UI::NewUIScreen *);
void UI::NewUIScreenManager::ReloadScreen(UI::NewUIScreen *) // 0x672FD4
{
    mangled_assert("?ReloadScreen@NewUIScreenManager@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
    _sub_672FD4(this, arg);
}

_extern void _sub_671CE1(UI::NewUIScreenManager *const, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::ActivateScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x671CE1
{
    mangled_assert("?ActivateScreenMap@NewUIScreenManager@UI@@QAEXAAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@Z");
    todo("implement");
    _sub_671CE1(this, arg);
}

_extern void _sub_671E6A(UI::NewUIScreenManager *const, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::DeactivateScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x671E6A
{
    mangled_assert("?DeactivateScreenMap@NewUIScreenManager@UI@@QAEXAAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@Z");
    todo("implement");
    _sub_671E6A(this, arg);
}

_extern void _sub_672AE7(UI::NewUIScreenManager *const, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::LoadScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x672AE7
{
    mangled_assert("?LoadScreenMap@NewUIScreenManager@UI@@QAEXAAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@Z");
    todo("implement");
    _sub_672AE7(this, arg);
}

_extern void _sub_673227(UI::NewUIScreenManager *const, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::UnloadScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x673227
{
    mangled_assert("?UnloadScreenMap@NewUIScreenManager@UI@@QAEXAAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@Z");
    todo("implement");
    _sub_673227(this, arg);
}

_extern UI::NewUIScreen *_sub_67224D(UI::NewUIScreenManager *const);
UI::NewUIScreen *UI::NewUIScreenManager::GetCurrentScreen() // 0x67224D
{
    mangled_assert("?GetCurrentScreen@NewUIScreenManager@UI@@QAEPAVNewUIScreen@2@XZ");
    todo("implement");
    UI::NewUIScreen * __result = _sub_67224D(this);
    return __result;
}

_extern void _sub_6730B2(UI::NewUIScreenManager *const, bool);
void UI::NewUIScreenManager::SetAllScreensEnabled(bool) // 0x6730B2
{
    mangled_assert("?SetAllScreensEnabled@NewUIScreenManager@UI@@QAEX_N@Z");
    todo("implement");
    _sub_6730B2(this, arg);
}

_extern void _sub_6731CA(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::UnloadAllScreens() // 0x6731CA
{
    mangled_assert("?UnloadAllScreens@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_6731CA(this);
}

_extern void _sub_671BC5(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::ActivateAllScreens() // 0x671BC5
{
    mangled_assert("?ActivateAllScreens@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_671BC5(this);
}

_extern void _sub_671D75(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::DeactivateAllScreens() // 0x671D75
{
    mangled_assert("?DeactivateAllScreens@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_671D75(this);
}

_extern void _sub_672F36(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::ReloadAllScreens() // 0x672F36
{
    mangled_assert("?ReloadAllScreens@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_672F36(this);
}

_extern bool _sub_672BDE(UI::NewUIScreenManager *const, LuaConfig &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &, char const *);
bool UI::NewUIScreenManager::LoadScreenMapFromSection(LuaConfig &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &, char const *) // 0x672BDE
{
    mangled_assert("?LoadScreenMapFromSection@NewUIScreenManager@UI@@QAE_NAAVLuaConfig@@AAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@PBD@Z");
    todo("implement");
    bool __result = _sub_672BDE(this, arg, arg, arg);
    return __result;
}

_extern std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > &_sub_67226C(UI::NewUIScreenManager *const);
std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > &UI::NewUIScreenManager::GetLoadedScreenList() // 0x67226C
{
    mangled_assert("?GetLoadedScreenList@NewUIScreenManager@UI@@QAEAAV?$list@PAVNewUIScreen@UI@@V?$allocator@PAVNewUIScreen@UI@@@std@@@std@@XZ");
    todo("implement");
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > & __result = _sub_67226C(this);
    return __result;
}

_extern std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &_sub_672232(UI::NewUIScreenManager *const);
std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &UI::NewUIScreenManager::GetActiveScreenList() // 0x672232
{
    mangled_assert("?GetActiveScreenList@NewUIScreenManager@UI@@QAEABV?$list@PAVNewUIScreen@UI@@V?$allocator@PAVNewUIScreen@UI@@@std@@@std@@XZ");
    todo("implement");
    std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const & __result = _sub_672232(this);
    return __result;
}

_extern void _sub_672289(UI::NewUIScreenManager *const, std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::GetScreenMapFromList(std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > const &, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x672289
{
    mangled_assert("?GetScreenMapFromList@NewUIScreenManager@UI@@AAEXABV?$list@PAVNewUIScreen@UI@@V?$allocator@PAVNewUIScreen@UI@@@std@@@std@@AAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@4@@Z");
    todo("implement");
    _sub_672289(this, arg, arg);
}

_extern void _sub_672ECB(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::PushState() // 0x672ECB
{
    mangled_assert("?PushState@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_672ECB(this);
}

_extern void _sub_672E4F(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::PopAll() // 0x672E4F
{
    mangled_assert("?PopAll@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_672E4F(this);
}

_extern void _sub_672E66(UI::NewUIScreenManager *const);
void UI::NewUIScreenManager::PopState() // 0x672E66
{
    mangled_assert("?PopState@NewUIScreenManager@UI@@QAEXXZ");
    todo("implement");
    _sub_672E66(this);
}

_extern void _sub_6730DC(UI::InterfaceElement *);
void UI::NewUIScreenManager::SetFocus(UI::InterfaceElement *focus) // 0x6730DC
{
    mangled_assert("?SetFocus@NewUIScreenManager@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_6730DC(focus);
}

_extern void _sub_673193(UI::InterfaceElement *);
void UI::NewUIScreenManager::SetTopLevelElement(UI::InterfaceElement *e) // 0x673193
{
    mangled_assert("?SetTopLevelElement@NewUIScreenManager@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_673193(e);
}

_extern void _sub_672279(UI::NewUIScreenManager *const, std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &);
void UI::NewUIScreenManager::GetLoadedScreenMap(std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > &) // 0x672279
{
    mangled_assert("?GetLoadedScreenMap@NewUIScreenManager@UI@@QAEXAAV?$list@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@@Z");
    todo("implement");
    _sub_672279(this, arg);
}

_extern UI::NewUIScreen *_sub_6722E9(UI::NewUIScreenManager *const);
UI::NewUIScreen *UI::NewUIScreenManager::GetTopLevelScreen() // 0x6722E9
{
    mangled_assert("?GetTopLevelScreen@NewUIScreenManager@UI@@QAEPAVNewUIScreen@2@XZ");
    todo("implement");
    UI::NewUIScreen * __result = _sub_6722E9(this);
    return __result;
}

/* ---------- private code */

_extern void _sub_672DDA(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_static void UI::NewUIScreenManagerRegionLuaCB(region *region, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luastring) // 0x672DDA
{
    mangled_assert("UI::NewUIScreenManagerRegionLuaCB");
    todo("implement");
    _sub_672DDA(region, luastring);
}
#endif
