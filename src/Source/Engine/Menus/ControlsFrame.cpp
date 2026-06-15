#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\StringTable.h>
#include <UserInterface\ListBoxItem.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <boost\checked_delete.hpp>
#include <localizer\localizer.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <UserInterface\NewListBox.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <compiler\compilerconfig.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Menus\ErrorMessage.h>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\NewTextLabel.h>
#include <task.h>
#include <UserInterface\uiprimitives.h>
#include <Mathlib\vector2.h>
#include <stack>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Menus\MenuSupport.h>
#include <App\AppObj.h>
#include <debug\db.h>
#include <platform\appinterface.h>
#include <Render\gl\lotypes.h>
#include <deque>
#include <KeyBindings.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <config.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <region.h>
#include <UserInterface\UIDialog.h>
#include <prim.h>
#include <Menus\ControlsFrame.h>
#include <UserInterface\NewFrame.h>
#include <wchar.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>

/* ---------- constants */

/* ---------- definitions */

class UI::ControlsFrameData
{
public:
    UI::NewListBox *m_listControls; // 0x0
    UI::ListBoxItem *m_headerItemToClone; // 0x4
    UI::ListBoxItem *m_editableItemToClone; // 0x8
    UI::ListBoxItem *m_nonEditableItemToClone; // 0xC
    UI::NewButton *m_btnRestoreDefaults; // 0x10
    UI::NewButton *m_btnResetKey; // 0x14
    KeyBindingList m_localKeyBindings; // 0x18
    std::smallvector<int,5,std::allocator<int> > m_tempKeyCombo; // 0x20
    ControlsFrameData(UI::ControlsFrameData const &); /* compiler_generated() */
    _inline ControlsFrameData(); /* compiler_generated() */
    _inline ~ControlsFrameData(); /* compiler_generated() */
    UI::ControlsFrameData &operator=(UI::ControlsFrameData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ControlsFrameData) == 68, "Invalid UI::ControlsFrameData size");

/* ---------- prototypes */

extern void UI::ControlsFrameOnReset_Yes(UI::InterfaceElement *dlgButton);
extern void UI::ControlsFrameOnRestoreDefaults_Yes(UI::InterfaceElement *dlgButton);

_static void UI::GetCurrentKeyComboMods(std::smallvector<int,5,std::allocator<int> > &kc);
_static UI::ControlsFrame *UI::GetControlsFrameFromListBoxItem(UI::InterfaceElement *item);
_static void UI::SetKeyButtonText(UI::TextButton *btn, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &text);

/* ---------- globals */

extern UI::TextButton *UI::ControlsFrame::ms_btnWaitingKeyInput; // 0x846CB0

/* ---------- private variables */

_static
{
    extern char const *KEYLISTLUAFILE; // 0x839E98
    extern char const *KEYLISTLUASECTION; // 0x839E9C
}

/* ---------- public code */

UI::ControlsFrame::ControlsFrame(UI::InterfaceElement *, char const *, UI::NewFrame const &) // 0x5720AE
{
    mangled_assert("??0ControlsFrame@UI@@QAE@PAVInterfaceElement@1@PBDABVNewFrame@1@@Z");
    todo("implement");
}

_inline UI::ControlsFrameData::ControlsFrameData() // 0x572219
{
    mangled_assert("??0ControlsFrameData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::NewFrame::NewFrame(UI::NewFrame const &) // 0x572239
{
    mangled_assert("??0NewFrame@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

UI::ControlsFrame::~ControlsFrame() // 0x572281
{
    mangled_assert("??1ControlsFrame@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::ControlsFrameData::~ControlsFrameData() // 0x5722C6
{
    mangled_assert("??1ControlsFrameData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::NewFrame &UI::NewFrame::operator=(UI::NewFrame const &) // 0x57231C
{
    mangled_assert("??4NewFrame@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void UI::ControlsFrame::Refresh(KeyBindingList const &) // 0x5733F4
{
    mangled_assert("?Refresh@ControlsFrame@UI@@QAEXABVKeyBindingList@@@Z");
    todo("implement");
}

void UI::ControlsFrame::LoadKeyGroup(LuaConfig &) // 0x572A97
{
    mangled_assert("?LoadKeyGroup@ControlsFrame@UI@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ControlsFrame::InsertHeaderItem(wchar_t const *) // 0x572940
{
    mangled_assert("?InsertHeaderItem@ControlsFrame@UI@@AAEXPB_W@Z");
    todo("implement");
}

void UI::ControlsFrame::InsertControlItem(__int32, bool) // 0x57284B
{
    mangled_assert("?InsertControlItem@ControlsFrame@UI@@AAEXH_N@Z");
    todo("implement");
}

void UI::ControlsFrame::ResetSelectedKey() // 0x573691
{
    mangled_assert("?ResetSelectedKey@ControlsFrame@UI@@QAEXXZ");
    todo("implement");
}

void UI::ControlsFrame::CancelWaitingForInput() // 0x5724C4
{
    mangled_assert("?CancelWaitingForInput@ControlsFrame@UI@@SGXXZ");
    todo("implement");
}

void UI::ControlsFrame::AssignKeyCombo(std::smallvector<int,5,std::allocator<int> > const &, std::smallvector<int,5,std::allocator<int> > const &) // 0x5723B1
{
    mangled_assert("?AssignKeyCombo@ControlsFrame@UI@@AAEXABV?$smallvector@H$04V?$allocator@H@std@@@std@@0@Z");
    todo("implement");
}

UI::TextButton *UI::ControlsFrame::GetKeyButtonWithBindingId(__int32) // 0x5727F2
{
    mangled_assert("?GetKeyButtonWithBindingId@ControlsFrame@UI@@AAEPAVTextButton@2@H@Z");
    todo("implement");
}

KeyBindingList const &UI::ControlsFrame::GetKeyBindings() // 0x5727E8
{
    mangled_assert("?GetKeyBindings@ControlsFrame@UI@@QAEABVKeyBindingList@@XZ");
    todo("implement");
}

void UI::ControlsFrame::OnKeyButtonLoseFocus(UI::InterfaceElement *button) // 0x57321D
{
    mangled_assert("?OnKeyButtonLoseFocus@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrame::OnKeyButtonClicked(UI::InterfaceElement *button) // 0x572B72
{
    mangled_assert("?OnKeyButtonClicked@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrameOnReset_Yes(UI::InterfaceElement *dlgButton) // 0x5725EF
{
    mangled_assert("?ControlsFrameOnReset_Yes@UI@@YGXPAVInterfaceElement@1@@Z");
    todo("implement");
}

void UI::ControlsFrame::OnResetKeyClicked(UI::InterfaceElement *button) // 0x57329C
{
    mangled_assert("?OnResetKeyClicked@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrameOnRestoreDefaults_Yes(UI::InterfaceElement *dlgButton) // 0x572657
{
    mangled_assert("?ControlsFrameOnRestoreDefaults_Yes@UI@@YGXPAVInterfaceElement@1@@Z");
    todo("implement");
}

void UI::ControlsFrame::OnRestoreDefaultsClicked(UI::InterfaceElement *button) // 0x573348
{
    mangled_assert("?OnRestoreDefaultsClicked@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrame::ReplaceKeyCombo_Yes(UI::InterfaceElement *dlgButton) // 0x57355A
{
    mangled_assert("?ReplaceKeyCombo_Yes@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrame::ReplaceKeyCombo_No(UI::InterfaceElement *dlgButton) // 0x573552
{
    mangled_assert("?ReplaceKeyCombo_No@ControlsFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ControlsFrame::OnKeyButtonKeyPressed(UI::InterfaceElement *button, unsigned short key, __int32 mods) // 0x572C2D
{
    mangled_assert("?OnKeyButtonKeyPressed@ControlsFrame@UI@@CGXPAVInterfaceElement@2@GH@Z");
    todo("implement");
}

void UI::ControlsFrame::OnKeyButtonKeyReleased(UI::InterfaceElement *button, unsigned short key, __int32 mods) // 0x573148
{
    mangled_assert("?OnKeyButtonKeyReleased@ControlsFrame@UI@@CGXPAVInterfaceElement@2@GH@Z");
    todo("implement");
}

void UI::ControlsFrame::OnListBoxItemSelect(UI::InterfaceElement *listbox, __int32 index) // 0x573235
{
    mangled_assert("?OnListBoxItemSelect@ControlsFrame@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

bool UI::ControlsFrame::IsBindedToKeyUpEvent(std::smallvector<int,5,std::allocator<int> > const &tempCombo, KeyBinding const *binding, KeyBindingList const &localKeyBindings) // 0x572986
{
    mangled_assert("?IsBindedToKeyUpEvent@ControlsFrame@UI@@CG_NABV?$smallvector@H$04V?$allocator@H@std@@@std@@PBVKeyBinding@@ABVKeyBindingList@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void UI::GetCurrentKeyComboMods(std::smallvector<int,5,std::allocator<int> > &kc) // 0x572745
{
    mangled_assert("UI::GetCurrentKeyComboMods");
    todo("implement");
}

_static UI::ControlsFrame *UI::GetControlsFrameFromListBoxItem(UI::InterfaceElement *item) // 0x572725
{
    mangled_assert("UI::GetControlsFrameFromListBoxItem");
    todo("implement");
}

_static void UI::SetKeyButtonText(UI::TextButton *btn, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &text) // 0x57378C
{
    mangled_assert("UI::SetKeyButtonText");
    todo("implement");
}
#endif
