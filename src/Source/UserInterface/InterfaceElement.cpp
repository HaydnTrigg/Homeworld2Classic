#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\matrix3.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Render\objects\compiledtext.h>
#include <memory\memorylib.h>
#include <algorithm>
#include <UserInterface\NewUIScreenManager.h>
#include <crtdefs.h>
#include <stack>
#include <Render\objects\textureregistry.h>
#include <deque>
#include <hash_map>
#include <xhash>
#include <UserInterface\UISoundManager.h>
#include <UserInterface\RadioButton.h>
#include <boost\checked_delete.hpp>
#include <UserInterface\TextButton.h>
#include <new>
#include <UserInterface\NewText.h>
#include <xstddef>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <type_traits>
#include <xutility>
#include <UserInterface\RadioItem.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\DestinationTextInput.h>
#include <math.h>
#include <UserInterface\NewScrollBar.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <list>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\Line.h>
#include <assist\stlexstring.h>
#include <UserInterface\StyleSheet.h>
#include <map>
#include <platform\osdef.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <cassert>
#include <assert.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewFrame.h>
#include <util\types.h>
#include <UserInterface\NewListBox.h>
#include <Render\gl\r_types.h>
#include <Engine\task.h>
#include <assist\faststring.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\mathlibdll.h>
#include <Engine\App\AppObj.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\Table.h>
#include <platform\appinterface.h>
#include <UserInterface\TableCell.h>
#include <UserInterface\NewButton.h>
#include <Engine\region.h>
#include <Engine\prim.h>
#include <localizer\localizer.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewDropDownListBox.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\RenderUIPrim.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <UserInterface\ScrollView.h>
#include <debug\db.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <UserInterface\movie.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <Engine\KeyBindings.h>
#include <UserInterface\ProgressBar.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <wchar.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > SectionMap;
typedef void *func_t(ScreenshotRequested_t *);

/* ---------- prototypes */

extern bool UI::LoadColor(LuaConfig &lc, char const *name, Color_4b &c);
extern void UI::RunLuaString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaString);

/* ---------- globals */

extern void (*UI::InterfaceElement::ms_keybinder)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32); // 0x84B958
extern unsigned __int32 UI::InterfaceElement::ms_count; // 0x84B954

/* ---------- private variables */

/* ---------- public code */

_extern _sub_66974D(UI::EventInfo *const);
_inline UI::EventInfo::EventInfo() // 0x66974D
{
    mangled_assert("??0EventInfo@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66974D(this);
}

_extern bool _sub_66BE66(LuaConfig &, char const *, Color_4b &);
bool UI::LoadColor(LuaConfig &lc, char const *name, Color_4b &c) // 0x66BE66
{
    mangled_assert("?LoadColor@UI@@YG_NAAVLuaConfig@@PBDAAUColor_4b@@@Z");
    todo("implement");
    bool __result = _sub_66BE66(lc, name, c);
    return __result;
}

_extern UI::InterfaceElement const &_sub_66A9E3(UI::InterfaceElement *const, UI::InterfaceElement const &);
UI::InterfaceElement const &UI::InterfaceElement::CopyNoChildren(UI::InterfaceElement const &) // 0x66A9E3
{
    mangled_assert("?CopyNoChildren@InterfaceElement@UI@@QAEABV12@ABV12@@Z");
    todo("implement");
    UI::InterfaceElement const & __result = _sub_66A9E3(this, arg);
    return __result;
}

_extern void _sub_66BC7D(UI::InterfaceElement *const);
void UI::InterfaceElement::Init() // 0x66BC7D
{
    mangled_assert("?Init@InterfaceElement@UI@@AAEXXZ");
    todo("implement");
    _sub_66BC7D(this);
}

_extern UI::InterfaceElement const &_sub_66A607(UI::InterfaceElement *const, UI::InterfaceElement const &);
UI::InterfaceElement const &UI::InterfaceElement::operator=(UI::InterfaceElement const &) // 0x66A607
{
    mangled_assert("??4InterfaceElement@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::InterfaceElement const & __result = _sub_66A607(this, arg);
    return __result;
}

_extern _sub_669760(UI::InterfaceElement *const, LuaConfig &);
UI::InterfaceElement::InterfaceElement(LuaConfig &) // 0x669760
{
    mangled_assert("??0InterfaceElement@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_669760(this, arg);
}

_extern _sub_669B0B(UI::InterfaceElement *const, UI::InterfaceElement const &);
UI::InterfaceElement::InterfaceElement(UI::InterfaceElement const &) // 0x669B0B
{
    mangled_assert("??0InterfaceElement@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_669B0B(this, arg);
}

_extern _sub_669EB6(UI::InterfaceElement *const, UI::InterfaceElement *, char const *);
UI::InterfaceElement::InterfaceElement(UI::InterfaceElement *, char const *) // 0x669EB6
{
    mangled_assert("??0InterfaceElement@UI@@QAE@PAV01@PBD@Z");
    todo("implement");
    _sub_669EB6(this, arg, arg);
}

_extern _sub_66A2B1(UI::UIKeySignal *const);
_inline UI::UIKeySignal::UIKeySignal() // 0x66A2B1
{
    mangled_assert("??0UIKeySignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2B1(this);
}

_extern _sub_66A2BE(UI::UIMouseSignal *const);
_inline UI::UIMouseSignal::UIMouseSignal() // 0x66A2BE
{
    mangled_assert("??0UIMouseSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2BE(this);
}

_extern _sub_66A2CB(UISolidColoredBorderRect *const);
_inline UISolidColoredBorderRect::UISolidColoredBorderRect() // 0x66A2CB
{
    mangled_assert("??0UISolidColoredBorderRect@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2CB(this);
}

_extern _sub_66A2CE(UISolidColoredLine *const);
_inline UISolidColoredLine::UISolidColoredLine() // 0x66A2CE
{
    mangled_assert("??0UISolidColoredLine@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2CE(this);
}

_extern _sub_66A2D1(UIVertexColoredQuad *const);
_inline UIVertexColoredQuad::UIVertexColoredQuad() // 0x66A2D1
{
    mangled_assert("??0UIVertexColoredQuad@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2D1(this);
}

_extern void _sub_66A2E6(std::_List_buy<UI::RadioItem *,std::allocator<UI::RadioItem *> > *const);
_inline std::_List_buy<UI::RadioItem *,std::allocator<UI::RadioItem *> >::~_List_buy<UI::RadioItem *,std::allocator<UI::RadioItem *> >() // 0x66A2E6
{
    mangled_assert("??1?$_List_buy@PAVRadioItem@UI@@V?$allocator@PAVRadioItem@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2E6(this);
}

_extern void _sub_66A2EF(std::_List_buy<UI::Line,std::allocator<UI::Line> > *const);
_inline std::_List_buy<UI::Line,std::allocator<UI::Line> >::~_List_buy<UI::Line,std::allocator<UI::Line> >() // 0x66A2EF
{
    mangled_assert("??1?$_List_buy@VLine@UI@@V?$allocator@VLine@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A2EF(this);
}

_extern void _sub_66A31C(boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> > *const);
_inline boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >::~sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >() // 0x66A31C
{
    mangled_assert("??1?$sp_counted_base_impl@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A31C(this);
}

_extern void _sub_66D37F(UI::InterfaceElement *const, UI::NewUIScreen *);
void UI::InterfaceElement::SetParentNewUIScreen(UI::NewUIScreen *) // 0x66D37F
{
    mangled_assert("?SetParentNewUIScreen@InterfaceElement@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
    _sub_66D37F(this, arg);
}

_extern void _sub_66A32D(UI::InterfaceElement *const);
UI::InterfaceElement::~InterfaceElement() // 0x66A32D
{
    mangled_assert("??1InterfaceElement@UI@@UAE@XZ");
    todo("implement");
    _sub_66A32D(this);
}

_extern void _sub_66A5E2(UI::UIKeySignal *const);
_inline UI::UIKeySignal::~UIKeySignal() // 0x66A5E2
{
    mangled_assert("??1UIKeySignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A5E2(this);
}

_extern void _sub_66A5E7(UI::UIMouseSignal *const);
_inline UI::UIMouseSignal::~UIMouseSignal() // 0x66A5E7
{
    mangled_assert("??1UIMouseSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_66A5E7(this);
}

_extern Rect_i _sub_66B6C4(UI::InterfaceElement const *const);
Rect_i UI::InterfaceElement::GetDimensions() const // 0x66B6C4
{
    mangled_assert("?GetDimensions@InterfaceElement@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_66B6C4(this);
    return __result;
}

_extern Rect_i _sub_66B5C6(UI::InterfaceElement const *const);
Rect_i UI::InterfaceElement::GetAbsoluteDimensions() const // 0x66B5C6
{
    mangled_assert("?GetAbsoluteDimensions@InterfaceElement@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_66B5C6(this);
    return __result;
}

_extern Vector_2i _sub_66B69E(UI::InterfaceElement const *const);
Vector_2i UI::InterfaceElement::GetAbsolutePosition() const // 0x66B69E
{
    mangled_assert("?GetAbsolutePosition@InterfaceElement@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
    Vector_2i __result = _sub_66B69E(this);
    return __result;
}

_extern Vector_2i _sub_66B747(UI::InterfaceElement const *const);
Vector_2i UI::InterfaceElement::GetPosition() const // 0x66B747
{
    mangled_assert("?GetPosition@InterfaceElement@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
    Vector_2i __result = _sub_66B747(this);
    return __result;
}

_extern UI::InterfaceElement *_sub_66B57E(UI::InterfaceElement *const, char const *);
UI::InterfaceElement *UI::InterfaceElement::FindNamedElement(char const *) // 0x66B57E
{
    mangled_assert("?FindNamedElement@InterfaceElement@UI@@QAEPAV12@PBD@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66B57E(this, arg);
    return __result;
}

_extern UI::InterfaceElement *_sub_66B544(UI::InterfaceElement *const, unsigned __int32);
UI::InterfaceElement *UI::InterfaceElement::FindElement(unsigned __int32) // 0x66B544
{
    mangled_assert("?FindElement@InterfaceElement@UI@@QAEPAV12@I@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66B544(this, arg);
    return __result;
}

_extern UI::InterfaceElement *_sub_66CA07(LuaConfig &, char const *);
UI::InterfaceElement *UI::InterfaceElement::NewCreate(LuaConfig &lc, char const *typeName) // 0x66CA07
{
    mangled_assert("?NewCreate@InterfaceElement@UI@@SGPAV12@AAVLuaConfig@@PBD@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66CA07(lc, typeName);
    return __result;
}

_extern void _sub_66BFCD(UI::InterfaceElement *const, LuaConfig &);
void UI::InterfaceElement::LoadNoChildren(LuaConfig &) // 0x66BFCD
{
    mangled_assert("?LoadNoChildren@InterfaceElement@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_66BFCD(this, arg);
}

_extern void _sub_66BD6C(UI::InterfaceElement *const, LuaConfig &);
void UI::InterfaceElement::Load(LuaConfig &) // 0x66BD6C
{
    mangled_assert("?Load@InterfaceElement@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_66BD6C(this, arg);
}

_extern void _sub_66D0C4(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void UI::RunLuaString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaString) // 0x66D0C4
{
    mangled_assert("?RunLuaString@UI@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_66D0C4(luaString);
}

_extern bool _sub_66B766(UI::InterfaceElement *const, UI::EventType, UI::EventInfo const &);
bool UI::InterfaceElement::HandleEvent(UI::EventType, UI::EventInfo const &) // 0x66B766
{
    mangled_assert("?HandleEvent@InterfaceElement@UI@@QAE_NW4EventType@2@ABUEventInfo@2@@Z");
    todo("implement");
    bool __result = _sub_66B766(this, arg, arg);
    return __result;
}

_extern void _sub_66A952(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
void UI::InterfaceElement::Click(Vector_2i const &, UI::MouseButton const &) // 0x66A952
{
    mangled_assert("?Click@InterfaceElement@UI@@QAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_66A952(this, arg, arg);
}

_extern void _sub_66AE3F(UI::InterfaceElement *const, Vector_2i const &, UI::MouseButton const &);
void UI::InterfaceElement::DoubleClick(Vector_2i const &, UI::MouseButton const &) // 0x66AE3F
{
    mangled_assert("?DoubleClick@InterfaceElement@UI@@QAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_66AE3F(this, arg, arg);
}

_extern void _sub_66A792(UI::InterfaceElement *const, UI::InterfaceElement *);
void UI::InterfaceElement::AddChildR(UI::InterfaceElement *) // 0x66A792
{
    mangled_assert("?AddChildR@InterfaceElement@UI@@UAEXPAV12@@Z");
    todo("implement");
    _sub_66A792(this, arg);
}

_extern UI::InterfaceElement *_sub_66CF14(UI::InterfaceElement *const, UI::InterfaceElement *);
UI::InterfaceElement *UI::InterfaceElement::RemoveChildR(UI::InterfaceElement *) // 0x66CF14
{
    mangled_assert("?RemoveChildR@InterfaceElement@UI@@UAEPAV12@PAV12@@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66CF14(this, arg);
    return __result;
}

_extern void _sub_66C9DD(UI::InterfaceElement *const, __int32, __int32);
void UI::InterfaceElement::Move(__int32, __int32) // 0x66C9DD
{
    mangled_assert("?Move@InterfaceElement@UI@@UAEXHH@Z");
    todo("implement");
    _sub_66C9DD(this, arg, arg);
}

_extern void _sub_66CF91(UI::InterfaceElement *const, __int32, __int32);
void UI::InterfaceElement::Resize(__int32, __int32) // 0x66CF91
{
    mangled_assert("?Resize@InterfaceElement@UI@@UAEXHH@Z");
    todo("implement");
    _sub_66CF91(this, arg, arg);
}

_extern void _sub_66CF9E(UI::InterfaceElement *const, __int32, __int32);
void UI::InterfaceElement::ResizeInternal(__int32, __int32) // 0x66CF9E
{
    mangled_assert("?ResizeInternal@InterfaceElement@UI@@IAEXHH@Z");
    todo("implement");
    _sub_66CF9E(this, arg, arg);
}

_extern Vector_2i _sub_66B609(UI::InterfaceElement const *const, Vector_2i const &);
Vector_2i UI::InterfaceElement::GetAbsoluteFromLocal(Vector_2i const &) const // 0x66B609
{
    mangled_assert("?GetAbsoluteFromLocal@InterfaceElement@UI@@QBE?AUVector_2i@@ABU3@@Z");
    todo("implement");
    Vector_2i __result = _sub_66B609(this, arg);
    return __result;
}

_extern Vector_2i _sub_66B70E(UI::InterfaceElement const *const, Vector_2i const &);
Vector_2i UI::InterfaceElement::GetLocalFromAbsolute(Vector_2i const &) const // 0x66B70E
{
    mangled_assert("?GetLocalFromAbsolute@InterfaceElement@UI@@QBE?AUVector_2i@@ABU3@@Z");
    todo("implement");
    Vector_2i __result = _sub_66B70E(this, arg);
    return __result;
}

_extern void _sub_66AEB6(UI::InterfaceElement *const, Vector_2i const &, Rect_i const &);
void UI::InterfaceElement::Draw2(Vector_2i const &, Rect_i const &) // 0x66AEB6
{
    mangled_assert("?Draw2@InterfaceElement@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_66AEB6(this, arg, arg);
}

_extern void _sub_66B376(UI::InterfaceElement *const, Vector_2i const &, Rect_i const &);
void UI::InterfaceElement::DrawLines(Vector_2i const &, Rect_i const &) // 0x66B376
{
    mangled_assert("?DrawLines@InterfaceElement@UI@@IAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_66B376(this, arg, arg);
}

_extern void _sub_66B130(UI::InterfaceElement *const, Vector_2i const &, Rect_i const &);
void UI::InterfaceElement::DrawChildren(Vector_2i const &, Rect_i const &) // 0x66B130
{
    mangled_assert("?DrawChildren@InterfaceElement@UI@@IAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_66B130(this, arg, arg);
}

_extern void _sub_66AF91(UI::InterfaceElement *const, Rect_i const &, Rect_i const &);
void UI::InterfaceElement::DrawBackground(Rect_i const &, Rect_i const &) // 0x66AF91
{
    mangled_assert("?DrawBackground@InterfaceElement@UI@@IAEXABURect_i@@0@Z");
    todo("implement");
    _sub_66AF91(this, arg, arg);
}

_extern void _sub_66CEBC(UI::InterfaceElement *const);
void UI::InterfaceElement::RemoveAllChildren() // 0x66CEBC
{
    mangled_assert("?RemoveAllChildren@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_66CEBC(this);
}

_extern void _sub_66AE0B(UI::InterfaceElement *const);
void UI::InterfaceElement::DestroyAllChildren() // 0x66AE0B
{
    mangled_assert("?DestroyAllChildren@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_66AE0B(this);
}

_extern wchar_t const *_sub_66B6FF(UI::InterfaceElement const *const);
wchar_t const *UI::InterfaceElement::GetHelpTip() const // 0x66B6FF
{
    mangled_assert("?GetHelpTip@InterfaceElement@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_66B6FF(this);
    return __result;
}

_extern void _sub_66CF76(UI::InterfaceElement *const, UI::RadioItem *);
void UI::InterfaceElement::RemoveRadioItem(UI::RadioItem *) // 0x66CF76
{
    mangled_assert("?RemoveRadioItem@InterfaceElement@UI@@QAEXPAVRadioItem@2@@Z");
    todo("implement");
    _sub_66CF76(this, arg);
}

_extern void _sub_66A811(UI::InterfaceElement *const, UI::RadioItem *);
void UI::InterfaceElement::AddRadioItem(UI::RadioItem *) // 0x66A811
{
    mangled_assert("?AddRadioItem@InterfaceElement@UI@@QAEXPAVRadioItem@2@@Z");
    todo("implement");
    _sub_66A811(this, arg);
}

_extern void _sub_66D5C0(UI::InterfaceElement *const);
void UI::InterfaceElement::UnselectAllRadioItems() // 0x66D5C0
{
    mangled_assert("?UnselectAllRadioItems@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_66D5C0(this);
}

_extern void _sub_66B45F(Color_4b const &, Rect_i const &, Rect_i const &);
void UI::InterfaceElement::FillRect(Color_4b const &color, Rect_i const &rect, Rect_i const &clip) // 0x66B45F
{
    mangled_assert("?FillRect@InterfaceElement@UI@@SGXABUColor_4b@@ABURect_i@@1@Z");
    todo("implement");
    _sub_66B45F(color, rect, clip);
}

_extern void _sub_66B3CA(Color_4b const &, Rect_i const &, Color_4b const &, long, long, Rect_i const &);
void UI::InterfaceElement::FillBorderRect(Color_4b const &color, Rect_i const &rect, Color_4b const &borderColor, long borderWidth, long outerBorderWidth, Rect_i const &clip) // 0x66B3CA
{
    mangled_assert("?FillBorderRect@InterfaceElement@UI@@SGXABUColor_4b@@ABURect_i@@0JJ1@Z");
    todo("implement");
    _sub_66B3CA(color, rect, borderColor, borderWidth, outerBorderWidth, clip);
}

_extern void _sub_66B314(Vector_2i const &, UI::Line const &, Rect_i const &);
void UI::InterfaceElement::DrawLine(Vector_2i const &offset, UI::Line const &line, Rect_i const &clip) // 0x66B314
{
    mangled_assert("?DrawLine@InterfaceElement@UI@@SGXABUVector_2i@@ABVLine@2@ABURect_i@@@Z");
    todo("implement");
    _sub_66B314(offset, line, clip);
}

_extern void _sub_66B29F(Color_4b const &, Vector_2i const &, Vector_2i const &, long, Rect_i const &, bool);
void UI::InterfaceElement::DrawLine(Color_4b const &color, Vector_2i const &p1, Vector_2i const &p2, long lineWidth, Rect_i const &clip, bool above) // 0x66B29F
{
    mangled_assert("?DrawLine@InterfaceElement@UI@@SGXABUColor_4b@@ABUVector_2i@@1JABURect_i@@_N@Z");
    todo("implement");
    _sub_66B29F(color, p1, p2, lineWidth, clip, above);
}

_extern void _sub_66D131(UI::InterfaceElement *const, bool);
void UI::InterfaceElement::SetAutoSize(bool) // 0x66D131
{
    mangled_assert("?SetAutoSize@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66D131(this, arg);
}

_extern void _sub_66D0F0(UI::InterfaceElement *const, bool);
void UI::InterfaceElement::SetAutoArrange(bool) // 0x66D0F0
{
    mangled_assert("?SetAutoArrange@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66D0F0(this, arg);
}

_extern void _sub_66D10E(UI::InterfaceElement *const, __int32);
void UI::InterfaceElement::SetAutoArrangeWidth(__int32) // 0x66D10E
{
    mangled_assert("?SetAutoArrangeWidth@InterfaceElement@UI@@QAEXH@Z");
    todo("implement");
    _sub_66D10E(this, arg);
}

_extern void _sub_66A84B(UI::InterfaceElement *const);
void UI::InterfaceElement::CalcAutoSize() // 0x66A84B
{
    mangled_assert("?CalcAutoSize@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_66A84B(this);
}

_extern void _sub_66CE8C(UI::InterfaceElement *const);
void UI::InterfaceElement::ParentResizeNotify() // 0x66CE8C
{
    mangled_assert("?ParentResizeNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_66CE8C(this);
}

_extern void _sub_66A94D(UI::InterfaceElement *const);
void UI::InterfaceElement::ChildResizeNotify() // 0x66A94D
{
    mangled_assert("?ChildResizeNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_66A94D(this);
}

_extern void _sub_66A948(UI::InterfaceElement *const);
void UI::InterfaceElement::ChildMoveNotify() // 0x66A948
{
    mangled_assert("?ChildMoveNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
    _sub_66A948(this);
}

_extern void _sub_66D1A8(UI::InterfaceElement *const, char const *, bool);
void UI::InterfaceElement::SetChildVisible(char const *, bool) // 0x66D1A8
{
    mangled_assert("?SetChildVisible@InterfaceElement@UI@@QAEXPBD_N@Z");
    todo("implement");
    _sub_66D1A8(this, arg, arg);
}

_extern void _sub_66D183(UI::InterfaceElement *const, char const *, bool);
void UI::InterfaceElement::SetChildEnabled(char const *, bool) // 0x66D183
{
    mangled_assert("?SetChildEnabled@InterfaceElement@UI@@QAEXPBD_N@Z");
    todo("implement");
    _sub_66D183(this, arg, arg);
}

_extern void _sub_66D238(UI::InterfaceElement *const, bool);
void UI::InterfaceElement::SetGiveParentMouseInputRecursive(bool) // 0x66D238
{
    mangled_assert("?SetGiveParentMouseInputRecursive@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66D238(this, arg);
}

_extern void _sub_66D3B7(UI::InterfaceElement *const);
void UI::InterfaceElement::ShowHelpTip() // 0x66D3B7
{
    mangled_assert("?ShowHelpTip@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_66D3B7(this);
}

_extern void _sub_66BB9E(UI::InterfaceElement *const);
void UI::InterfaceElement::HideHelpTip() // 0x66BB9E
{
    mangled_assert("?HideHelpTip@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
    _sub_66BB9E(this);
}

_extern void _sub_66A800(UI::InterfaceElement *const, UI::Line const &);
void UI::InterfaceElement::AddLine(UI::Line const &) // 0x66A800
{
    mangled_assert("?AddLine@InterfaceElement@UI@@QAEXABVLine@2@@Z");
    todo("implement");
    _sub_66A800(this, arg);
}

_extern bool _sub_66ADDB(UI::InterfaceElement const *, UI::InterfaceElement const *);
bool UI::InterfaceElement::CustomDataComp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2) // 0x66ADDB
{
    mangled_assert("?CustomDataComp@InterfaceElement@UI@@SG_NPBV12@0@Z");
    todo("implement");
    bool __result = _sub_66ADDB(item1, item2);
    return __result;
}

_extern bool _sub_66ADC0(UI::InterfaceElement const *, UI::InterfaceElement const *);
bool UI::InterfaceElement::CustomData2Comp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2) // 0x66ADC0
{
    mangled_assert("?CustomData2Comp@InterfaceElement@UI@@SG_NPBV12@0@Z");
    todo("implement");
    bool __result = _sub_66ADC0(item1, item2);
    return __result;
}

_extern void _sub_66D325(UI::InterfaceElement *const, UI::Size const &);
void UI::InterfaceElement::SetMaxSize(UI::Size const &) // 0x66D325
{
    mangled_assert("?SetMaxSize@InterfaceElement@UI@@QAEXABVSize@2@@Z");
    todo("implement");
    _sub_66D325(this, arg);
}

_extern void _sub_66D352(UI::InterfaceElement *const, UI::Size const &);
void UI::InterfaceElement::SetMinSize(UI::Size const &) // 0x66D352
{
    mangled_assert("?SetMinSize@InterfaceElement@UI@@QAEXABVSize@2@@Z");
    todo("implement");
    _sub_66D352(this, arg);
}

_extern void _sub_66D215(UI::InterfaceElement *const, bool);
void UI::InterfaceElement::SetEnabled(bool) // 0x66D215
{
    mangled_assert("?SetEnabled@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66D215(this, arg);
}

_extern void _sub_66CE38(UI::InterfaceElement *const, unsigned char, UI::KeyModifier const &);
void UI::InterfaceElement::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x66CE38
{
    mangled_assert("?OnKeyPressed@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_66CE38(this, arg, arg);
}

_extern void _sub_66CE54(UI::InterfaceElement *const, unsigned char, UI::KeyModifier const &);
void UI::InterfaceElement::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x66CE54
{
    mangled_assert("?OnKeyReleased@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_66CE54(this, arg, arg);
}

_extern void _sub_66CE70(UI::InterfaceElement *const, unsigned char, UI::KeyModifier const &);
void UI::InterfaceElement::OnKeyRepeat(unsigned char, UI::KeyModifier const &) // 0x66CE70
{
    mangled_assert("?OnKeyRepeat@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_66CE70(this, arg, arg);
}

_extern void _sub_66D266(UI::InterfaceElement *const, wchar_t const *);
void UI::InterfaceElement::SetHelpTip(wchar_t const *) // 0x66D266
{
    mangled_assert("?SetHelpTip@InterfaceElement@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_66D266(this, arg);
}

_extern void _sub_66D1D4(UI::InterfaceElement *const, wchar_t const *);
void UI::InterfaceElement::SetDisabledHelpTip(wchar_t const *) // 0x66D1D4
{
    mangled_assert("?SetDisabledHelpTip@InterfaceElement@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_66D1D4(this, arg);
}

_extern void _sub_66D2E6(UI::InterfaceElement *const, char const *);
void UI::InterfaceElement::SetHelpTipTextLabel(char const *) // 0x66D2E6
{
    mangled_assert("?SetHelpTipTextLabel@InterfaceElement@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_66D2E6(this, arg);
}

_extern void _sub_66D2A7(UI::InterfaceElement *const, char const *);
void UI::InterfaceElement::SetHelpTipScreen(char const *) // 0x66D2A7
{
    mangled_assert("?SetHelpTipScreen@InterfaceElement@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_66D2A7(this, arg);
}

_extern bool _sub_66A82D(UI::InterfaceElement const *const);
bool UI::InterfaceElement::AreAnyParentsDisabled() const // 0x66A82D
{
    mangled_assert("?AreAnyParentsDisabled@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_66A82D(this);
    return __result;
}

_extern void _sub_66D553(UI::InterfaceElement *const, bool (*)(UI::InterfaceElement const *, UI::InterfaceElement const *));
void UI::InterfaceElement::SortChildren(bool (*)(UI::InterfaceElement const *, UI::InterfaceElement const *)) // 0x66D553
{
    mangled_assert("?SortChildren@InterfaceElement@UI@@QAEXP6G_NPBV12@0@Z@Z");
    todo("implement");
    _sub_66D553(this, arg);
}

/* ---------- private code */
#endif
