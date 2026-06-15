#if 0
/* ---------- headers */

#include "decomp.h"
#include <debug\ctassert.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <memory\memorylib.h>
#include <algorithm>
#include <crtdefs.h>
#include <UserInterface\NewFrame.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <platform\osdef.h>
#include <new>
#include <UserInterface\SharedGraphicFactory.h>
#include <xstddef>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <type_traits>
#include <Render\objects\objects.h>
#include <Render\objects\cliprect.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Mathlib\mathutil.h>
#include <xutility>
#include <UserInterface\NewListBox.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <localizer\localizer.h>
#include <xmemory>
#include <Render\gl\lotypes.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <Render\gl\r_types.h>
#include <list>
#include <UserInterface\ScrollView.h>
#include <UserInterface\StyleSheet.h>
#include <hash_map>
#include <xhash>
#include <util\colour.h>
#include <Render\objects\textureproxy.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <map>
#include <xtree>
#include <cassert>
#include <UserInterface\TextButton.h>
#include <assert.h>
#include <UserInterface\NewButton.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\types.h>
#include <platform\platformexports.h>
#include <Render\objects\compiledtext.h>
#include <platform\keydefines.h>
#include <UserInterface\Table.h>
#include <UserInterface\TableCell.h>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\NewScrollBar.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\objects\textureregistry.h>
#include <UserInterface\NewDropDownListBox.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\ListBoxItem.h>
#include <fileio\filestream.h>
#include <wchar.h>
#include <string>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void UI::DestroyPtrList<UI::InterfaceElement>(std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &list);
extern void UI::DestroyPtrList<UI::NewDropDownListBox>(std::list<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > &list);
extern void UI::DestroyPtrList<UI::NewListBox>(std::list<UI::NewListBox *,std::allocator<UI::NewListBox *> > &list);
extern void UI::DestroyPtrList<UI::NewScrollBar>(std::list<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> > &list);
extern void UI::DestroyPtrList<UI::NewText>(std::list<UI::NewText *,std::allocator<UI::NewText *> > &list);
extern void UI::DestroyPtrList<UI::NewTextInput>(std::list<UI::NewTextInput *,std::allocator<UI::NewTextInput *> > &list);
extern void UI::DestroyPtrList<UI::ScrollView>(std::list<UI::ScrollView *,std::allocator<UI::ScrollView *> > &list);
extern void UI::DestroyPtrList<UI::Table>(std::list<UI::Table *,std::allocator<UI::Table *> > &list);
extern void UI::DestroyPtrList<UI::TextButton>(std::list<UI::TextButton *,std::allocator<UI::TextButton *> > &list);

/* ---------- globals */

extern UI::StyleSheet *UI::StyleSheet::ms_i; // 0x84B984

/* ---------- private variables */

/* ---------- public code */

UI::StyleSheet *UI::StyleSheet::i() // 0x67946C
{
    mangled_assert("?i@StyleSheet@UI@@SGPAV12@XZ");
    todo("implement");
}

bool UI::StyleSheet::Create() // 0x6778A8
{
    mangled_assert("?Create@StyleSheet@UI@@SG_NXZ");
    todo("implement");
}

bool UI::StyleSheet::Destroy() // 0x677A9B
{
    mangled_assert("?Destroy@StyleSheet@UI@@SG_NXZ");
    todo("implement");
}

UI::StyleSheet::StyleSheet() // 0x67707F
{
    mangled_assert("??0StyleSheet@UI@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> >::~_List_buy<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> >() // 0x677243
{
    mangled_assert("??1?$_List_buy@PAVNewDropDownListBox@UI@@V?$allocator@PAVNewDropDownListBox@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::NewListBox *,std::allocator<UI::NewListBox *> >::~_List_buy<UI::NewListBox *,std::allocator<UI::NewListBox *> >() // 0x67724C
{
    mangled_assert("??1?$_List_buy@PAVNewListBox@UI@@V?$allocator@PAVNewListBox@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> >::~_List_buy<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> >() // 0x677255
{
    mangled_assert("??1?$_List_buy@PAVNewScrollBar@UI@@V?$allocator@PAVNewScrollBar@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::NewText *,std::allocator<UI::NewText *> >::~_List_buy<UI::NewText *,std::allocator<UI::NewText *> >() // 0x67725E
{
    mangled_assert("??1?$_List_buy@PAVNewText@UI@@V?$allocator@PAVNewText@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::DestroyPtrList<UI::InterfaceElement>(std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &list) // 0x674F29
{
    mangled_assert("??$DestroyPtrList@VInterfaceElement@UI@@@UI@@YGXAAV?$list@PAVInterfaceElement@UI@@V?$allocator@PAVInterfaceElement@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::NewDropDownListBox>(std::list<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > &list) // 0x674F51
{
    mangled_assert("??$DestroyPtrList@VNewDropDownListBox@UI@@@UI@@YGXAAV?$list@PAVNewDropDownListBox@UI@@V?$allocator@PAVNewDropDownListBox@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::NewListBox>(std::list<UI::NewListBox *,std::allocator<UI::NewListBox *> > &list) // 0x674F79
{
    mangled_assert("??$DestroyPtrList@VNewListBox@UI@@@UI@@YGXAAV?$list@PAVNewListBox@UI@@V?$allocator@PAVNewListBox@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::NewScrollBar>(std::list<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> > &list) // 0x674FA1
{
    mangled_assert("??$DestroyPtrList@VNewScrollBar@UI@@@UI@@YGXAAV?$list@PAVNewScrollBar@UI@@V?$allocator@PAVNewScrollBar@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::NewText>(std::list<UI::NewText *,std::allocator<UI::NewText *> > &list) // 0x674FC9
{
    mangled_assert("??$DestroyPtrList@VNewText@UI@@@UI@@YGXAAV?$list@PAVNewText@UI@@V?$allocator@PAVNewText@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::NewTextInput>(std::list<UI::NewTextInput *,std::allocator<UI::NewTextInput *> > &list) // 0x674FFD
{
    mangled_assert("??$DestroyPtrList@VNewTextInput@UI@@@UI@@YGXAAV?$list@PAVNewTextInput@UI@@V?$allocator@PAVNewTextInput@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::ScrollView>(std::list<UI::ScrollView *,std::allocator<UI::ScrollView *> > &list) // 0x675025
{
    mangled_assert("??$DestroyPtrList@VScrollView@UI@@@UI@@YGXAAV?$list@PAVScrollView@UI@@V?$allocator@PAVScrollView@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::Table>(std::list<UI::Table *,std::allocator<UI::Table *> > &list) // 0x67504D
{
    mangled_assert("??$DestroyPtrList@VTable@UI@@@UI@@YGXAAV?$list@PAVTable@UI@@V?$allocator@PAVTable@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::DestroyPtrList<UI::TextButton>(std::list<UI::TextButton *,std::allocator<UI::TextButton *> > &list) // 0x675075
{
    mangled_assert("??$DestroyPtrList@VTextButton@UI@@@UI@@YGXAAV?$list@PAVTextButton@UI@@V?$allocator@PAVTextButton@UI@@@std@@@std@@@Z");
    todo("implement");
}

_inline std::_List_buy<UI::NewTextInput *,std::allocator<UI::NewTextInput *> >::~_List_buy<UI::NewTextInput *,std::allocator<UI::NewTextInput *> >() // 0x677267
{
    mangled_assert("??1?$_List_buy@PAVNewTextInput@UI@@V?$allocator@PAVNewTextInput@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::ScrollView *,std::allocator<UI::ScrollView *> >::~_List_buy<UI::ScrollView *,std::allocator<UI::ScrollView *> >() // 0x677270
{
    mangled_assert("??1?$_List_buy@PAVScrollView@UI@@V?$allocator@PAVScrollView@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::Table *,std::allocator<UI::Table *> >::~_List_buy<UI::Table *,std::allocator<UI::Table *> >() // 0x677279
{
    mangled_assert("??1?$_List_buy@PAVTable@UI@@V?$allocator@PAVTable@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::TextButton *,std::allocator<UI::TextButton *> >::~_List_buy<UI::TextButton *,std::allocator<UI::TextButton *> >() // 0x677282
{
    mangled_assert("??1?$_List_buy@PAVTextButton@UI@@V?$allocator@PAVTextButton@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x67728B
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x677294
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::StyleSheet::~StyleSheet() // 0x677340
{
    mangled_assert("??1StyleSheet@UI@@QAE@XZ");
    todo("implement");
}

void UI::StyleSheet::Load(char const *, char const *) // 0x677CA6
{
    mangled_assert("?Load@StyleSheet@UI@@QAEXPBD0@Z");
    todo("implement");
}

UI::InterfaceElement *UI::StyleSheet::FindElementStyle(LuaConfig &, char const *) // 0x677B9E
{
    mangled_assert("?FindElementStyle@StyleSheet@UI@@QAEPAVInterfaceElement@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewText *UI::StyleSheet::FindTextStyle(LuaConfig &, char const *) // 0x677C76
{
    mangled_assert("?FindTextStyle@StyleSheet@UI@@QAEPAVNewText@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::ScrollView *UI::StyleSheet::FindScrollViewStyle(LuaConfig &, char const *) // 0x677C0A
{
    mangled_assert("?FindScrollViewStyle@StyleSheet@UI@@QAEPAVScrollView@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::TextButton *UI::StyleSheet::FindButtonStyle(LuaConfig &, char const *) // 0x677B56
{
    mangled_assert("?FindButtonStyle@StyleSheet@UI@@QAEPAVTextButton@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewScrollBar *UI::StyleSheet::FindScrollBarStyle(LuaConfig &, char const *) // 0x677BE6
{
    mangled_assert("?FindScrollBarStyle@StyleSheet@UI@@QAEPAVNewScrollBar@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewListBox *UI::StyleSheet::FindListBoxStyle(LuaConfig &, char const *) // 0x677BC2
{
    mangled_assert("?FindListBoxStyle@StyleSheet@UI@@QAEPAVNewListBox@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewDropDownListBox *UI::StyleSheet::FindDropDownListBoxStyle(LuaConfig &, char const *) // 0x677B7A
{
    mangled_assert("?FindDropDownListBoxStyle@StyleSheet@UI@@QAEPAVNewDropDownListBox@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewTextInput *UI::StyleSheet::FindTextInputStyle(LuaConfig &, char const *) // 0x677C52
{
    mangled_assert("?FindTextInputStyle@StyleSheet@UI@@QAEPAVNewTextInput@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::Table *UI::StyleSheet::FindTableStyle(LuaConfig &, char const *) // 0x677C2E
{
    mangled_assert("?FindTableStyle@StyleSheet@UI@@QAEPAVTable@2@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

char const *UI::StyleSheet::FindAttribute(char const *) // 0x677AC3
{
    mangled_assert("?FindAttribute@StyleSheet@UI@@QAEPBDPBD@Z");
    todo("implement");
}

UI::InterfaceElement *UI::StyleSheet::FindElementStyle(char const *) // 0x677BB2
{
    mangled_assert("?FindElementStyle@StyleSheet@UI@@QAEPAVInterfaceElement@2@PBD@Z");
    todo("implement");
}

UI::NewText *UI::StyleSheet::FindTextStyle(char const *) // 0x677C8A
{
    mangled_assert("?FindTextStyle@StyleSheet@UI@@QAEPAVNewText@2@PBD@Z");
    todo("implement");
}

UI::ScrollView *UI::StyleSheet::FindScrollViewStyle(char const *) // 0x677C1E
{
    mangled_assert("?FindScrollViewStyle@StyleSheet@UI@@QAEPAVScrollView@2@PBD@Z");
    todo("implement");
}

UI::TextButton *UI::StyleSheet::FindButtonStyle(char const *) // 0x677B6A
{
    mangled_assert("?FindButtonStyle@StyleSheet@UI@@QAEPAVTextButton@2@PBD@Z");
    todo("implement");
}

UI::NewScrollBar *UI::StyleSheet::FindScrollBarStyle(char const *) // 0x677BFA
{
    mangled_assert("?FindScrollBarStyle@StyleSheet@UI@@QAEPAVNewScrollBar@2@PBD@Z");
    todo("implement");
}

UI::NewListBox *UI::StyleSheet::FindListBoxStyle(char const *) // 0x677BD6
{
    mangled_assert("?FindListBoxStyle@StyleSheet@UI@@QAEPAVNewListBox@2@PBD@Z");
    todo("implement");
}

UI::NewDropDownListBox *UI::StyleSheet::FindDropDownListBoxStyle(char const *) // 0x677B8E
{
    mangled_assert("?FindDropDownListBoxStyle@StyleSheet@UI@@QAEPAVNewDropDownListBox@2@PBD@Z");
    todo("implement");
}

UI::NewTextInput *UI::StyleSheet::FindTextInputStyle(char const *) // 0x677C66
{
    mangled_assert("?FindTextInputStyle@StyleSheet@UI@@QAEPAVNewTextInput@2@PBD@Z");
    todo("implement");
}

UI::Table *UI::StyleSheet::FindTableStyle(char const *) // 0x677C42
{
    mangled_assert("?FindTableStyle@StyleSheet@UI@@QAEPAVTable@2@PBD@Z");
    todo("implement");
}

UI::InterfaceElement *UI::StyleSheet::FindStyle<UI::InterfaceElement>(std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &, char const *) // 0x6751C9
{
    mangled_assert("??$FindStyle@VInterfaceElement@UI@@@StyleSheet@UI@@AAEPAVInterfaceElement@1@AAV?$list@PAVInterfaceElement@UI@@V?$allocator@PAVInterfaceElement@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::NewDropDownListBox *UI::StyleSheet::FindStyle<UI::NewDropDownListBox>(std::list<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > &, char const *) // 0x675333
{
    mangled_assert("??$FindStyle@VNewDropDownListBox@UI@@@StyleSheet@UI@@AAEPAVNewDropDownListBox@1@AAV?$list@PAVNewDropDownListBox@UI@@V?$allocator@PAVNewDropDownListBox@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::NewListBox *UI::StyleSheet::FindStyle<UI::NewListBox>(std::list<UI::NewListBox *,std::allocator<UI::NewListBox *> > &, char const *) // 0x67549D
{
    mangled_assert("??$FindStyle@VNewListBox@UI@@@StyleSheet@UI@@AAEPAVNewListBox@1@AAV?$list@PAVNewListBox@UI@@V?$allocator@PAVNewListBox@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::NewScrollBar *UI::StyleSheet::FindStyle<UI::NewScrollBar>(std::list<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> > &, char const *) // 0x675607
{
    mangled_assert("??$FindStyle@VNewScrollBar@UI@@@StyleSheet@UI@@AAEPAVNewScrollBar@1@AAV?$list@PAVNewScrollBar@UI@@V?$allocator@PAVNewScrollBar@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::NewText *UI::StyleSheet::FindStyle<UI::NewText>(std::list<UI::NewText *,std::allocator<UI::NewText *> > &, char const *) // 0x675771
{
    mangled_assert("??$FindStyle@VNewText@UI@@@StyleSheet@UI@@AAEPAVNewText@1@AAV?$list@PAVNewText@UI@@V?$allocator@PAVNewText@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::NewTextInput *UI::StyleSheet::FindStyle<UI::NewTextInput>(std::list<UI::NewTextInput *,std::allocator<UI::NewTextInput *> > &, char const *) // 0x6758DB
{
    mangled_assert("??$FindStyle@VNewTextInput@UI@@@StyleSheet@UI@@AAEPAVNewTextInput@1@AAV?$list@PAVNewTextInput@UI@@V?$allocator@PAVNewTextInput@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::ScrollView *UI::StyleSheet::FindStyle<UI::ScrollView>(std::list<UI::ScrollView *,std::allocator<UI::ScrollView *> > &, char const *) // 0x675A45
{
    mangled_assert("??$FindStyle@VScrollView@UI@@@StyleSheet@UI@@AAEPAVScrollView@1@AAV?$list@PAVScrollView@UI@@V?$allocator@PAVScrollView@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::Table *UI::StyleSheet::FindStyle<UI::Table>(std::list<UI::Table *,std::allocator<UI::Table *> > &, char const *) // 0x675BAF
{
    mangled_assert("??$FindStyle@VTable@UI@@@StyleSheet@UI@@AAEPAVTable@1@AAV?$list@PAVTable@UI@@V?$allocator@PAVTable@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::TextButton *UI::StyleSheet::FindStyle<UI::TextButton>(std::list<UI::TextButton *,std::allocator<UI::TextButton *> > &, char const *) // 0x675D19
{
    mangled_assert("??$FindStyle@VTextButton@UI@@@StyleSheet@UI@@AAEPAVTextButton@1@AAV?$list@PAVTextButton@UI@@V?$allocator@PAVTextButton@UI@@@std@@@std@@PBD@Z");
    todo("implement");
}

UI::InterfaceElement *UI::StyleSheet::FindStyle<UI::InterfaceElement>(std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > &, LuaConfig &, char const *) // 0x67509D
{
    mangled_assert("??$FindStyle@VInterfaceElement@UI@@@StyleSheet@UI@@AAEPAVInterfaceElement@1@AAV?$list@PAVInterfaceElement@UI@@V?$allocator@PAVInterfaceElement@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewDropDownListBox *UI::StyleSheet::FindStyle<UI::NewDropDownListBox>(std::list<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > &, LuaConfig &, char const *) // 0x675207
{
    mangled_assert("??$FindStyle@VNewDropDownListBox@UI@@@StyleSheet@UI@@AAEPAVNewDropDownListBox@1@AAV?$list@PAVNewDropDownListBox@UI@@V?$allocator@PAVNewDropDownListBox@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewListBox *UI::StyleSheet::FindStyle<UI::NewListBox>(std::list<UI::NewListBox *,std::allocator<UI::NewListBox *> > &, LuaConfig &, char const *) // 0x675371
{
    mangled_assert("??$FindStyle@VNewListBox@UI@@@StyleSheet@UI@@AAEPAVNewListBox@1@AAV?$list@PAVNewListBox@UI@@V?$allocator@PAVNewListBox@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewScrollBar *UI::StyleSheet::FindStyle<UI::NewScrollBar>(std::list<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> > &, LuaConfig &, char const *) // 0x6754DB
{
    mangled_assert("??$FindStyle@VNewScrollBar@UI@@@StyleSheet@UI@@AAEPAVNewScrollBar@1@AAV?$list@PAVNewScrollBar@UI@@V?$allocator@PAVNewScrollBar@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewText *UI::StyleSheet::FindStyle<UI::NewText>(std::list<UI::NewText *,std::allocator<UI::NewText *> > &, LuaConfig &, char const *) // 0x675645
{
    mangled_assert("??$FindStyle@VNewText@UI@@@StyleSheet@UI@@AAEPAVNewText@1@AAV?$list@PAVNewText@UI@@V?$allocator@PAVNewText@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::NewTextInput *UI::StyleSheet::FindStyle<UI::NewTextInput>(std::list<UI::NewTextInput *,std::allocator<UI::NewTextInput *> > &, LuaConfig &, char const *) // 0x6757AF
{
    mangled_assert("??$FindStyle@VNewTextInput@UI@@@StyleSheet@UI@@AAEPAVNewTextInput@1@AAV?$list@PAVNewTextInput@UI@@V?$allocator@PAVNewTextInput@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::ScrollView *UI::StyleSheet::FindStyle<UI::ScrollView>(std::list<UI::ScrollView *,std::allocator<UI::ScrollView *> > &, LuaConfig &, char const *) // 0x675919
{
    mangled_assert("??$FindStyle@VScrollView@UI@@@StyleSheet@UI@@AAEPAVScrollView@1@AAV?$list@PAVScrollView@UI@@V?$allocator@PAVScrollView@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::Table *UI::StyleSheet::FindStyle<UI::Table>(std::list<UI::Table *,std::allocator<UI::Table *> > &, LuaConfig &, char const *) // 0x675A83
{
    mangled_assert("??$FindStyle@VTable@UI@@@StyleSheet@UI@@AAEPAVTable@1@AAV?$list@PAVTable@UI@@V?$allocator@PAVTable@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

UI::TextButton *UI::StyleSheet::FindStyle<UI::TextButton>(std::list<UI::TextButton *,std::allocator<UI::TextButton *> > &, LuaConfig &, char const *) // 0x675BED
{
    mangled_assert("??$FindStyle@VTextButton@UI@@@StyleSheet@UI@@AAEPAVTextButton@1@AAV?$list@PAVTextButton@UI@@V?$allocator@PAVTextButton@UI@@@std@@@std@@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

void UI::StyleSheet::LoadStyle(LuaConfig &, char const *, char const *) // 0x678178
{
    mangled_assert("?LoadStyle@StyleSheet@UI@@AAEXAAVLuaConfig@@PBD1@Z");
    todo("implement");
}

/* ---------- private code */
#endif
