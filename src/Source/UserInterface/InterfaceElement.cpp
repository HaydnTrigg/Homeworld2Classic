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

_inline UI::EventInfo::EventInfo() // 0x66974D
{
    mangled_assert("??0EventInfo@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool UI::LoadColor(LuaConfig &lc, char const *name, Color_4b &c) // 0x66BE66
{
    mangled_assert("?LoadColor@UI@@YG_NAAVLuaConfig@@PBDAAUColor_4b@@@Z");
    todo("implement");
}

UI::InterfaceElement const &UI::InterfaceElement::CopyNoChildren(UI::InterfaceElement const &) // 0x66A9E3
{
    mangled_assert("?CopyNoChildren@InterfaceElement@UI@@QAEABV12@ABV12@@Z");
    todo("implement");
}

void UI::InterfaceElement::Init() // 0x66BC7D
{
    mangled_assert("?Init@InterfaceElement@UI@@AAEXXZ");
    todo("implement");
}

UI::InterfaceElement const &UI::InterfaceElement::operator=(UI::InterfaceElement const &) // 0x66A607
{
    mangled_assert("??4InterfaceElement@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

UI::InterfaceElement::InterfaceElement(LuaConfig &) // 0x669760
{
    mangled_assert("??0InterfaceElement@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::InterfaceElement::InterfaceElement(UI::InterfaceElement const &) // 0x669B0B
{
    mangled_assert("??0InterfaceElement@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::InterfaceElement::InterfaceElement(UI::InterfaceElement *, char const *) // 0x669EB6
{
    mangled_assert("??0InterfaceElement@UI@@QAE@PAV01@PBD@Z");
    todo("implement");
}

_inline UI::UIKeySignal::UIKeySignal() // 0x66A2B1
{
    mangled_assert("??0UIKeySignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::UIMouseSignal::UIMouseSignal() // 0x66A2BE
{
    mangled_assert("??0UIMouseSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UISolidColoredBorderRect::UISolidColoredBorderRect() // 0x66A2CB
{
    mangled_assert("??0UISolidColoredBorderRect@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UISolidColoredLine::UISolidColoredLine() // 0x66A2CE
{
    mangled_assert("??0UISolidColoredLine@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UIVertexColoredQuad::UIVertexColoredQuad() // 0x66A2D1
{
    mangled_assert("??0UIVertexColoredQuad@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::RadioItem *,std::allocator<UI::RadioItem *> >::~_List_buy<UI::RadioItem *,std::allocator<UI::RadioItem *> >() // 0x66A2E6
{
    mangled_assert("??1?$_List_buy@PAVRadioItem@UI@@V?$allocator@PAVRadioItem@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::Line,std::allocator<UI::Line> >::~_List_buy<UI::Line,std::allocator<UI::Line> >() // 0x66A2EF
{
    mangled_assert("??1?$_List_buy@VLine@UI@@V?$allocator@VLine@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >::~sp_counted_base_impl<UI::Graphic *,boost::checked_deleter<UI::Graphic> >() // 0x66A31C
{
    mangled_assert("??1?$sp_counted_base_impl@PAVGraphic@UI@@U?$checked_deleter@VGraphic@UI@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::InterfaceElement::SetParentNewUIScreen(UI::NewUIScreen *) // 0x66D37F
{
    mangled_assert("?SetParentNewUIScreen@InterfaceElement@UI@@QAEXPAVNewUIScreen@2@@Z");
    todo("implement");
}

UI::InterfaceElement::~InterfaceElement() // 0x66A32D
{
    mangled_assert("??1InterfaceElement@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::UIKeySignal::~UIKeySignal() // 0x66A5E2
{
    mangled_assert("??1UIKeySignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::UIMouseSignal::~UIMouseSignal() // 0x66A5E7
{
    mangled_assert("??1UIMouseSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Rect_i UI::InterfaceElement::GetDimensions() const // 0x66B6C4
{
    mangled_assert("?GetDimensions@InterfaceElement@UI@@QBE?AURect_i@@XZ");
    todo("implement");
}

Rect_i UI::InterfaceElement::GetAbsoluteDimensions() const // 0x66B5C6
{
    mangled_assert("?GetAbsoluteDimensions@InterfaceElement@UI@@QBE?AURect_i@@XZ");
    todo("implement");
}

Vector_2i UI::InterfaceElement::GetAbsolutePosition() const // 0x66B69E
{
    mangled_assert("?GetAbsolutePosition@InterfaceElement@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

Vector_2i UI::InterfaceElement::GetPosition() const // 0x66B747
{
    mangled_assert("?GetPosition@InterfaceElement@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

UI::InterfaceElement *UI::InterfaceElement::FindNamedElement(char const *) // 0x66B57E
{
    mangled_assert("?FindNamedElement@InterfaceElement@UI@@QAEPAV12@PBD@Z");
    todo("implement");
}

UI::InterfaceElement *UI::InterfaceElement::FindElement(unsigned __int32) // 0x66B544
{
    mangled_assert("?FindElement@InterfaceElement@UI@@QAEPAV12@I@Z");
    todo("implement");
}

UI::InterfaceElement *UI::InterfaceElement::NewCreate(LuaConfig &lc, char const *typeName) // 0x66CA07
{
    mangled_assert("?NewCreate@InterfaceElement@UI@@SGPAV12@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

void UI::InterfaceElement::LoadNoChildren(LuaConfig &) // 0x66BFCD
{
    mangled_assert("?LoadNoChildren@InterfaceElement@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::InterfaceElement::Load(LuaConfig &) // 0x66BD6C
{
    mangled_assert("?Load@InterfaceElement@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::RunLuaString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaString) // 0x66D0C4
{
    mangled_assert("?RunLuaString@UI@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool UI::InterfaceElement::HandleEvent(UI::EventType, UI::EventInfo const &) // 0x66B766
{
    mangled_assert("?HandleEvent@InterfaceElement@UI@@QAE_NW4EventType@2@ABUEventInfo@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::Click(Vector_2i const &, UI::MouseButton const &) // 0x66A952
{
    mangled_assert("?Click@InterfaceElement@UI@@QAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::DoubleClick(Vector_2i const &, UI::MouseButton const &) // 0x66AE3F
{
    mangled_assert("?DoubleClick@InterfaceElement@UI@@QAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::AddChildR(UI::InterfaceElement *) // 0x66A792
{
    mangled_assert("?AddChildR@InterfaceElement@UI@@UAEXPAV12@@Z");
    todo("implement");
}

UI::InterfaceElement *UI::InterfaceElement::RemoveChildR(UI::InterfaceElement *) // 0x66CF14
{
    mangled_assert("?RemoveChildR@InterfaceElement@UI@@UAEPAV12@PAV12@@Z");
    todo("implement");
}

void UI::InterfaceElement::Move(__int32, __int32) // 0x66C9DD
{
    mangled_assert("?Move@InterfaceElement@UI@@UAEXHH@Z");
    todo("implement");
}

void UI::InterfaceElement::Resize(__int32, __int32) // 0x66CF91
{
    mangled_assert("?Resize@InterfaceElement@UI@@UAEXHH@Z");
    todo("implement");
}

void UI::InterfaceElement::ResizeInternal(__int32, __int32) // 0x66CF9E
{
    mangled_assert("?ResizeInternal@InterfaceElement@UI@@IAEXHH@Z");
    todo("implement");
}

Vector_2i UI::InterfaceElement::GetAbsoluteFromLocal(Vector_2i const &) const // 0x66B609
{
    mangled_assert("?GetAbsoluteFromLocal@InterfaceElement@UI@@QBE?AUVector_2i@@ABU3@@Z");
    todo("implement");
}

Vector_2i UI::InterfaceElement::GetLocalFromAbsolute(Vector_2i const &) const // 0x66B70E
{
    mangled_assert("?GetLocalFromAbsolute@InterfaceElement@UI@@QBE?AUVector_2i@@ABU3@@Z");
    todo("implement");
}

void UI::InterfaceElement::Draw2(Vector_2i const &, Rect_i const &) // 0x66AEB6
{
    mangled_assert("?Draw2@InterfaceElement@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::InterfaceElement::DrawLines(Vector_2i const &, Rect_i const &) // 0x66B376
{
    mangled_assert("?DrawLines@InterfaceElement@UI@@IAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::InterfaceElement::DrawChildren(Vector_2i const &, Rect_i const &) // 0x66B130
{
    mangled_assert("?DrawChildren@InterfaceElement@UI@@IAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::InterfaceElement::DrawBackground(Rect_i const &, Rect_i const &) // 0x66AF91
{
    mangled_assert("?DrawBackground@InterfaceElement@UI@@IAEXABURect_i@@0@Z");
    todo("implement");
}

void UI::InterfaceElement::RemoveAllChildren() // 0x66CEBC
{
    mangled_assert("?RemoveAllChildren@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::DestroyAllChildren() // 0x66AE0B
{
    mangled_assert("?DestroyAllChildren@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
}

wchar_t const *UI::InterfaceElement::GetHelpTip() const // 0x66B6FF
{
    mangled_assert("?GetHelpTip@InterfaceElement@UI@@QBEPB_WXZ");
    todo("implement");
}

void UI::InterfaceElement::RemoveRadioItem(UI::RadioItem *) // 0x66CF76
{
    mangled_assert("?RemoveRadioItem@InterfaceElement@UI@@QAEXPAVRadioItem@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::AddRadioItem(UI::RadioItem *) // 0x66A811
{
    mangled_assert("?AddRadioItem@InterfaceElement@UI@@QAEXPAVRadioItem@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::UnselectAllRadioItems() // 0x66D5C0
{
    mangled_assert("?UnselectAllRadioItems@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::FillRect(Color_4b const &color, Rect_i const &rect, Rect_i const &clip) // 0x66B45F
{
    mangled_assert("?FillRect@InterfaceElement@UI@@SGXABUColor_4b@@ABURect_i@@1@Z");
    todo("implement");
}

void UI::InterfaceElement::FillBorderRect(Color_4b const &color, Rect_i const &rect, Color_4b const &borderColor, long borderWidth, long outerBorderWidth, Rect_i const &clip) // 0x66B3CA
{
    mangled_assert("?FillBorderRect@InterfaceElement@UI@@SGXABUColor_4b@@ABURect_i@@0JJ1@Z");
    todo("implement");
}

void UI::InterfaceElement::DrawLine(Vector_2i const &offset, UI::Line const &line, Rect_i const &clip) // 0x66B314
{
    mangled_assert("?DrawLine@InterfaceElement@UI@@SGXABUVector_2i@@ABVLine@2@ABURect_i@@@Z");
    todo("implement");
}

void UI::InterfaceElement::DrawLine(Color_4b const &color, Vector_2i const &p1, Vector_2i const &p2, long lineWidth, Rect_i const &clip, bool above) // 0x66B29F
{
    mangled_assert("?DrawLine@InterfaceElement@UI@@SGXABUColor_4b@@ABUVector_2i@@1JABURect_i@@_N@Z");
    todo("implement");
}

void UI::InterfaceElement::SetAutoSize(bool) // 0x66D131
{
    mangled_assert("?SetAutoSize@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::InterfaceElement::SetAutoArrange(bool) // 0x66D0F0
{
    mangled_assert("?SetAutoArrange@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::InterfaceElement::SetAutoArrangeWidth(__int32) // 0x66D10E
{
    mangled_assert("?SetAutoArrangeWidth@InterfaceElement@UI@@QAEXH@Z");
    todo("implement");
}

void UI::InterfaceElement::CalcAutoSize() // 0x66A84B
{
    mangled_assert("?CalcAutoSize@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::ParentResizeNotify() // 0x66CE8C
{
    mangled_assert("?ParentResizeNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::ChildResizeNotify() // 0x66A94D
{
    mangled_assert("?ChildResizeNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::ChildMoveNotify() // 0x66A948
{
    mangled_assert("?ChildMoveNotify@InterfaceElement@UI@@MAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::SetChildVisible(char const *, bool) // 0x66D1A8
{
    mangled_assert("?SetChildVisible@InterfaceElement@UI@@QAEXPBD_N@Z");
    todo("implement");
}

void UI::InterfaceElement::SetChildEnabled(char const *, bool) // 0x66D183
{
    mangled_assert("?SetChildEnabled@InterfaceElement@UI@@QAEXPBD_N@Z");
    todo("implement");
}

void UI::InterfaceElement::SetGiveParentMouseInputRecursive(bool) // 0x66D238
{
    mangled_assert("?SetGiveParentMouseInputRecursive@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::InterfaceElement::ShowHelpTip() // 0x66D3B7
{
    mangled_assert("?ShowHelpTip@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::HideHelpTip() // 0x66BB9E
{
    mangled_assert("?HideHelpTip@InterfaceElement@UI@@QAEXXZ");
    todo("implement");
}

void UI::InterfaceElement::AddLine(UI::Line const &) // 0x66A800
{
    mangled_assert("?AddLine@InterfaceElement@UI@@QAEXABVLine@2@@Z");
    todo("implement");
}

bool UI::InterfaceElement::CustomDataComp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2) // 0x66ADDB
{
    mangled_assert("?CustomDataComp@InterfaceElement@UI@@SG_NPBV12@0@Z");
    todo("implement");
}

bool UI::InterfaceElement::CustomData2Comp(UI::InterfaceElement const *item1, UI::InterfaceElement const *item2) // 0x66ADC0
{
    mangled_assert("?CustomData2Comp@InterfaceElement@UI@@SG_NPBV12@0@Z");
    todo("implement");
}

void UI::InterfaceElement::SetMaxSize(UI::Size const &) // 0x66D325
{
    mangled_assert("?SetMaxSize@InterfaceElement@UI@@QAEXABVSize@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::SetMinSize(UI::Size const &) // 0x66D352
{
    mangled_assert("?SetMinSize@InterfaceElement@UI@@QAEXABVSize@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::SetEnabled(bool) // 0x66D215
{
    mangled_assert("?SetEnabled@InterfaceElement@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::InterfaceElement::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x66CE38
{
    mangled_assert("?OnKeyPressed@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x66CE54
{
    mangled_assert("?OnKeyReleased@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::OnKeyRepeat(unsigned char, UI::KeyModifier const &) // 0x66CE70
{
    mangled_assert("?OnKeyRepeat@InterfaceElement@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::InterfaceElement::SetHelpTip(wchar_t const *) // 0x66D266
{
    mangled_assert("?SetHelpTip@InterfaceElement@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::InterfaceElement::SetDisabledHelpTip(wchar_t const *) // 0x66D1D4
{
    mangled_assert("?SetDisabledHelpTip@InterfaceElement@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::InterfaceElement::SetHelpTipTextLabel(char const *) // 0x66D2E6
{
    mangled_assert("?SetHelpTipTextLabel@InterfaceElement@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::InterfaceElement::SetHelpTipScreen(char const *) // 0x66D2A7
{
    mangled_assert("?SetHelpTipScreen@InterfaceElement@UI@@QAEXPBD@Z");
    todo("implement");
}

bool UI::InterfaceElement::AreAnyParentsDisabled() const // 0x66A82D
{
    mangled_assert("?AreAnyParentsDisabled@InterfaceElement@UI@@QBE_NXZ");
    todo("implement");
}

void UI::InterfaceElement::SortChildren(bool (*)(UI::InterfaceElement const *, UI::InterfaceElement const *)) // 0x66D553
{
    mangled_assert("?SortChildren@InterfaceElement@UI@@QAEXP6G_NPBV12@0@Z@Z");
    todo("implement");
}

/* ---------- private code */
#endif
