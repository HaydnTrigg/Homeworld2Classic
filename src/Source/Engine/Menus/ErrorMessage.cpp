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
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <boost\checked_delete.hpp>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <App\PlayerProfileMan.h>
#include <utility>
#include <iosfwd>
#include <App\PlayerProfile.h>
#include <vector>
#include <LevelDesc.h>
#include <xmemory>
#include <Hash.h>
#include <fileio\fileioexports.h>
#include <UserInterface\StringTable.h>
#include <fileio\md5.h>
#include <compiler\compilerconfig.h>
#include <App\PlayerProfileGameOptions.h>
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
#include <Render\objects\cliprect.h>
#include <assist\typemagic.h>
#include <UserInterface\NewButton.h>
#include <Mathlib\mathlibdll.h>
#include <localizer\localizer.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <UserInterface\UICoord.h>
#include <UserInterface\NewUIScreenManager.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Menus\ErrorMessage.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Render\objects\compiledtext.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::ErrorMessageEntry
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_msgName; // 0x0
    unsigned __int32 m_showFlags; // 0x18
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgText; // 0x1C
    _inline ErrorMessageEntry(UI::ErrorMessageEntry const &); /* compiler_generated() */
    _inline ErrorMessageEntry(); /* compiler_generated() */
    _inline ~ErrorMessageEntry(); /* compiler_generated() */
    UI::ErrorMessageEntry &operator=(UI::ErrorMessageEntry const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ErrorMessageEntry) == 52, "Invalid UI::ErrorMessageEntry size");

struct UI::ErrorMessageData
{
    UI::NewFrame *m_frmDialogRoot; // 0x0
    UI::NewButton *m_btnAccept; // 0x4
    UI::NewButton *m_btnAcceptWide; // 0x8
    UI::NewButton *m_btnMoreInfo; // 0xC
    UI::NewTextLabel *m_lblTitle; // 0x10
    UI::NewTextLabel *m_lblSubTitle; // 0x14
    UI::NewTextLabel *m_lblMessage; // 0x18
    UI::NewButton *m_chkDontShowAgain; // 0x1C
    UI::NewFrame *m_frmBorderRoot; // 0x20
    UI::NewFrame *m_frmMessageLabel; // 0x24
    UI::NewFrame *m_frmDontShowAgain; // 0x28
    UI::NewFrame *m_frmMoreInfoRoot; // 0x2C
    UI::NewFrame *m_frmMoreInfo; // 0x30
    UI::NewFrame *m_frmButtons; // 0x34
    UI::UISignal m_onAccept; // 0x38
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_title; // 0x44
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_subtitle; // 0x5C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_warningTitle; // 0x74
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_warningSubTitle; // 0x8C
    unsigned __int32 m_showFlags; // 0xA4
    bool m_moreInfo; // 0xA8
    __int32 m_jRight; // 0xAC
    __int32 m_jCenter; // 0xB0
    __int32 m_jLeft; // 0xB4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_msgName; // 0xB8
    std::list<UI::ErrorMessageEntry,std::allocator<UI::ErrorMessageEntry> > m_errorQueue; // 0xD0
    ErrorMessageData(UI::ErrorMessageData const &); /* compiler_generated() */
    _inline ErrorMessageData(); /* compiler_generated() */
    _inline ~ErrorMessageData(); /* compiler_generated() */
    UI::ErrorMessageData &operator=(UI::ErrorMessageData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ErrorMessageData) == 216, "Invalid UI::ErrorMessageData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_575DA8(UI::ErrorMessage *const, char const *);
UI::ErrorMessage::ErrorMessage(char const *) // 0x575DA8
{
    mangled_assert("??0ErrorMessage@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_575DA8(this, arg);
}

_extern _sub_575E04(UI::ErrorMessageData *const);
_inline UI::ErrorMessageData::ErrorMessageData() // 0x575E04
{
    mangled_assert("??0ErrorMessageData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_575E04(this);
}

_extern _sub_575EA0(UI::ErrorMessageEntry *const, UI::ErrorMessageEntry const &);
_inline UI::ErrorMessageEntry::ErrorMessageEntry(UI::ErrorMessageEntry const &) // 0x575EA0
{
    mangled_assert("??0ErrorMessageEntry@UI@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_575EA0(this, arg);
}

_extern _sub_575EE3(UI::ErrorMessageEntry *const);
_inline UI::ErrorMessageEntry::ErrorMessageEntry() // 0x575EE3
{
    mangled_assert("??0ErrorMessageEntry@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_575EE3(this);
}

_extern void _sub_575F53(UI::ErrorMessage *const);
UI::ErrorMessage::~ErrorMessage() // 0x575F53
{
    mangled_assert("??1ErrorMessage@UI@@UAE@XZ");
    todo("implement");
    _sub_575F53(this);
}

_extern _sub_575F15(UI::UISignal *const);
_inline UI::UISignal::UISignal() // 0x575F15
{
    mangled_assert("??0UISignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_575F15(this);
}

_extern void _sub_57604F(UI::ErrorMessageData *const);
_inline UI::ErrorMessageData::~ErrorMessageData() // 0x57604F
{
    mangled_assert("??1ErrorMessageData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_57604F(this);
}

_extern void _sub_575F2B(std::_List_buy<UI::ErrorMessageEntry,std::allocator<UI::ErrorMessageEntry> > *const);
_inline std::_List_buy<UI::ErrorMessageEntry,std::allocator<UI::ErrorMessageEntry> >::~_List_buy<UI::ErrorMessageEntry,std::allocator<UI::ErrorMessageEntry> >() // 0x575F2B
{
    mangled_assert("??1?$_List_buy@UErrorMessageEntry@UI@@V?$allocator@UErrorMessageEntry@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_575F2B(this);
}

_extern void _sub_5760AF(UI::ErrorMessageEntry *const);
_inline UI::ErrorMessageEntry::~ErrorMessageEntry() // 0x5760AF
{
    mangled_assert("??1ErrorMessageEntry@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5760AF(this);
}

_extern void _sub_5760C6(UI::UISignal *const);
_inline UI::UISignal::~UISignal() // 0x5760C6
{
    mangled_assert("??1UISignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5760C6(this);
}

_extern void _sub_5762C7(UI::ErrorMessage *const, bool);
void UI::ErrorMessage::OnActivate(bool) // 0x5762C7
{
    mangled_assert("?OnActivate@ErrorMessage@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5762C7(this, arg);
}

_extern void _sub_5762EA(UI::ErrorMessage *const, LuaConfig &);
void UI::ErrorMessage::OnLoad(LuaConfig &) // 0x5762EA
{
    mangled_assert("?OnLoad@ErrorMessage@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5762EA(this, arg);
}

_extern void _sub_5764A3(UI::ErrorMessage *const);
void UI::ErrorMessage::OnPostLoad() // 0x5764A3
{
    mangled_assert("?OnPostLoad@ErrorMessage@UI@@MAEXXZ");
    todo("implement");
    _sub_5764A3(this);
}

_extern void _sub_5761F5(UI::ErrorMessage *const);
void UI::ErrorMessage::DisconnectSlots() // 0x5761F5
{
    mangled_assert("?DisconnectSlots@ErrorMessage@UI@@QAEXXZ");
    todo("implement");
    _sub_5761F5(this);
}

_extern UI::Size _sub_57621F(UI::ErrorMessage const *const);
UI::Size UI::ErrorMessage::GetMoreInfoSize() const // 0x57621F
{
    mangled_assert("?GetMoreInfoSize@ErrorMessage@UI@@QBE?AVSize@2@XZ");
    todo("implement");
    UI::Size __result = _sub_57621F(this);
    return __result;
}

_extern void _sub_5761B8(UI::ErrorMessage *const, UI::InterfaceElement *);
void UI::ErrorMessage::AddMoreInfo(UI::InterfaceElement *) // 0x5761B8
{
    mangled_assert("?AddMoreInfo@ErrorMessage@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5761B8(this, arg);
}

_extern void _sub_576674(UI::ErrorMessage *const, UI::InterfaceElement *);
void UI::ErrorMessage::RemoveMoreInfo(UI::InterfaceElement *) // 0x576674
{
    mangled_assert("?RemoveMoreInfo@ErrorMessage@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_576674(this, arg);
}

_extern void _sub_576195(UI::ErrorMessage *const);
void UI::ErrorMessage::Accept() // 0x576195
{
    mangled_assert("?Accept@ErrorMessage@UI@@AAEXXZ");
    todo("implement");
    _sub_576195(this);
}

_extern void _sub_576287(UI::InterfaceElement *);
void UI::ErrorMessage::OnAcceptClicked(UI::InterfaceElement *sender) // 0x576287
{
    mangled_assert("?OnAcceptClicked@ErrorMessage@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_576287(sender);
}

_extern void _sub_576BE6(UI::ErrorMessage *const);
void UI::ErrorMessage::ShowNextMessage() // 0x576BE6
{
    mangled_assert("?ShowNextMessage@ErrorMessage@UI@@AAEXXZ");
    todo("implement");
    _sub_576BE6(this);
}

_extern UI::ErrorMessage *_sub_57623D();
UI::ErrorMessage *UI::ErrorMessage::GetScreen() // 0x57623D
{
    mangled_assert("?GetScreen@ErrorMessage@UI@@SGPAV12@XZ");
    todo("implement");
    UI::ErrorMessage * __result = _sub_57623D();
    return __result;
}

_extern void _sub_576B43(char const *, unsigned __int32);
void UI::ErrorMessage::ShowFromStringTable(char const *stringName, unsigned __int32 showFlags) // 0x576B43
{
    mangled_assert("?ShowFromStringTable@ErrorMessage@UI@@SGXPBDI@Z");
    todo("implement");
    _sub_576B43(stringName, showFlags);
}

_extern void _sub_57694D(wchar_t const *, unsigned __int32, char const *);
void UI::ErrorMessage::Show(wchar_t const *message, unsigned __int32 showFlags, char const *msgName) // 0x57694D
{
    mangled_assert("?Show@ErrorMessage@UI@@SGXPB_WIPBD@Z");
    todo("implement");
    _sub_57694D(message, showFlags, msgName);
}

_extern void _sub_5761C6(UI::ErrorMessage *const, void (*)(UI::InterfaceElement *));
void UI::ErrorMessage::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x5761C6
{
    mangled_assert("?ConnectOnAccept@ErrorMessage@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_5761C6(this, arg);
}

_extern void _sub_57644F(UI::InterfaceElement *);
void UI::ErrorMessage::OnMoreInfoClicked(UI::InterfaceElement *btn) // 0x57644F
{
    mangled_assert("?OnMoreInfoClicked@ErrorMessage@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_57644F(btn);
}

_extern void _sub_5766EF(UI::ErrorMessage *const, unsigned __int32, bool);
void UI::ErrorMessage::SetState(unsigned __int32, bool) // 0x5766EF
{
    mangled_assert("?SetState@ErrorMessage@UI@@AAEXI_N@Z");
    todo("implement");
    _sub_5766EF(this, arg, arg);
}

_extern void _sub_576682(UI::ErrorMessage *const);
void UI::ErrorMessage::SetProfile() // 0x576682
{
    mangled_assert("?SetProfile@ErrorMessage@UI@@AAEXXZ");
    todo("implement");
    _sub_576682(this);
}

_extern UI::InterfaceElement *_sub_576211(UI::ErrorMessage *const, char const *);
UI::InterfaceElement *UI::ErrorMessage::GetMoreInfoChild(char const *) // 0x576211
{
    mangled_assert("?GetMoreInfoChild@ErrorMessage@UI@@QAEPAVInterfaceElement@2@PBD@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_576211(this, arg);
    return __result;
}

/* ---------- private code */
#endif
