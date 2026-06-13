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
#include <UserInterface\NewDropDownListBox.h>
#include <UserInterface\ListBoxItem.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <mainScreen.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\cliprect.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewButton.h>
#include <list>
#include <localizer\localizer.h>
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
#include <App\AppObj.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <platform\appinterface.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewScrollBar.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <LevelDesc.h>
#include <KeyBindings.h>
#include <Hash.h>
#include <config.h>
#include <fileio\md5.h>
#include <assist\typemagic.h>
#include <App\PlayerProfileGameOptions.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\RadioButton.h>
#include <UserInterface\uitypes.h>
#include <UserInterface\TextButton.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\NewText.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\RadioItem.h>
#include <Menus\InGameOptions.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewListBox.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <Menus\ControlsFrame.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::Data
{
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_subtitleFString; // 0x0
    UI::NewTextLabel *m_lblSubTitle; // 0x18
    UI::RadioButton *m_btnGameplay; // 0x1C
    UI::RadioButton *m_btnAudio; // 0x20
    UI::RadioButton *m_btnVideo; // 0x24
    UI::RadioButton *m_btnControls; // 0x28
    UI::NewFrame *m_tabGameplay; // 0x2C
    UI::NewFrame *m_tabAudio; // 0x30
    UI::NewFrame *m_tabVideo; // 0x34
    UI::NewFrame *m_tabControls; // 0x38
    UI::NewScrollBar *m_sbarOrderFeedback; // 0x3C
    UI::NewButton *m_chkScreenPan; // 0x40
    UI::NewButton *m_chkNLIPS; // 0x44
    UI::NewButton *m_chkMilitarySelection; // 0x48
    UI::NewButton *m_chkRightClickMenu; // 0x4C
    UI::NewScrollBar *m_sbarSFXVolume; // 0x50
    UI::NewScrollBar *m_sbarSpeechVolume; // 0x54
    UI::NewScrollBar *m_sbarMusicVolume; // 0x58
    UI::NewScrollBar *m_sbarUIVolume; // 0x5C
    UI::NewDropDownListBox *m_comboBattleChatter; // 0x60
    UI::NewScrollBar *m_sbarSFXChannels; // 0x64
    UI::ControlsFrame *m_controlsFrame; // 0x68
    Data(UI::Data const &); /* compiler_generated() */
    _inline Data(); /* compiler_generated() */
    _inline ~Data(); /* compiler_generated() */
    UI::Data &operator=(UI::Data const &); /* compiler_generated() */
};
static_assert(sizeof(UI::Data) == 108, "Invalid UI::Data size");

/* ---------- prototypes */

/* ---------- globals */

extern UI::InGameOptions *UI::InGameOptions::ms_screen; // 0x846CD0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_58BBDE(UI::Data *const);
_inline UI::Data::Data() // 0x58BBDE
{
    mangled_assert("??0Data@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_58BBDE(this);
}

_extern _sub_58BBF1(UI::InGameOptions *const, char const *);
UI::InGameOptions::InGameOptions(char const *) // 0x58BBF1
{
    mangled_assert("??0InGameOptions@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_58BBF1(this, arg);
}

_extern void _sub_58BC59(UI::Data *const);
_inline UI::Data::~Data() // 0x58BC59
{
    mangled_assert("??1Data@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_58BC59(this);
}

_extern void _sub_58BC63(UI::InGameOptions *const);
UI::InGameOptions::~InGameOptions() // 0x58BC63
{
    mangled_assert("??1InGameOptions@UI@@UAE@XZ");
    todo("implement");
    _sub_58BC63(this);
}

_extern bool _sub_58C6DB(UI::ScreenTransitionType);
bool UI::InGameOptions::Show(UI::ScreenTransitionType trans) // 0x58C6DB
{
    mangled_assert("?Show@InGameOptions@UI@@SG_NW4ScreenTransitionType@2@@Z");
    todo("implement");
    bool __result = _sub_58C6DB(trans);
    return __result;
}

_extern void _sub_58BFED(UI::InGameOptions *const, bool);
void UI::InGameOptions::OnActivate(bool) // 0x58BFED
{
    mangled_assert("?OnActivate@InGameOptions@UI@@MAEX_N@Z");
    todo("implement");
    _sub_58BFED(this, arg);
}

_extern void _sub_58C166(UI::InGameOptions *const);
void UI::InGameOptions::OnPostLoad() // 0x58C166
{
    mangled_assert("?OnPostLoad@InGameOptions@UI@@MAEXXZ");
    todo("implement");
    _sub_58C166(this);
}

_extern void _sub_58BF32(UI::InGameOptions *const);
void UI::InGameOptions::LoadGameplayOptions() // 0x58BF32
{
    mangled_assert("?LoadGameplayOptions@InGameOptions@UI@@AAEXXZ");
    todo("implement");
    _sub_58BF32(this);
}

_extern void _sub_58BE6C(UI::InGameOptions *const);
void UI::InGameOptions::LoadAudioOptions() // 0x58BE6C
{
    mangled_assert("?LoadAudioOptions@InGameOptions@UI@@AAEXXZ");
    todo("implement");
    _sub_58BE6C(this);
}

_extern void _sub_58BFB3(UI::InGameOptions *const);
void UI::InGameOptions::LoadVideoOptions() // 0x58BFB3
{
    mangled_assert("?LoadVideoOptions@InGameOptions@UI@@AAEXXZ");
    todo("implement");
    _sub_58BFB3(this);
}

_extern void _sub_58BF14(UI::InGameOptions *const);
void UI::InGameOptions::LoadControlsOptions() // 0x58BF14
{
    mangled_assert("?LoadControlsOptions@InGameOptions@UI@@AAEXXZ");
    todo("implement");
    _sub_58BF14(this);
}

_extern bool _sub_58BCC5(UI::InGameOptions *const);
bool UI::InGameOptions::Apply() // 0x58BCC5
{
    mangled_assert("?Apply@InGameOptions@UI@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_58BCC5(this);
    return __result;
}

_extern void _sub_58C5F9(UI::InterfaceElement *);
void UI::InGameOptions::OnTabClicked(UI::InterfaceElement *sender) // 0x58C5F9
{
    mangled_assert("?OnTabClicked@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C5F9(sender);
}

_extern void _sub_58C118(UI::InterfaceElement *);
void UI::InGameOptions::OnGameplayTab(UI::InterfaceElement *sender) // 0x58C118
{
    mangled_assert("?OnGameplayTab@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C118(sender);
}

_extern void _sub_58C063(UI::InterfaceElement *);
void UI::InGameOptions::OnAudioTab(UI::InterfaceElement *sender) // 0x58C063
{
    mangled_assert("?OnAudioTab@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C063(sender);
}

_extern void _sub_58C68D(UI::InterfaceElement *);
void UI::InGameOptions::OnVideoTab(UI::InterfaceElement *sender) // 0x58C68D
{
    mangled_assert("?OnVideoTab@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C68D(sender);
}

_extern void _sub_58C0CA(UI::InterfaceElement *);
void UI::InGameOptions::OnControlsTab(UI::InterfaceElement *sender) // 0x58C0CA
{
    mangled_assert("?OnControlsTab@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C0CA(sender);
}

_extern void _sub_58BFB4(UI::InterfaceElement *);
void UI::InGameOptions::OnAcceptClicked(UI::InterfaceElement *sender) // 0x58BFB4
{
    mangled_assert("?OnAcceptClicked@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58BFB4(sender);
}

_extern void _sub_58C0B1(UI::InterfaceElement *);
void UI::InGameOptions::OnCancelClicked(UI::InterfaceElement *sender) // 0x58C0B1
{
    mangled_assert("?OnCancelClicked@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C0B1(sender);
}

_extern void _sub_58C5ED(UI::InterfaceElement *, __int32);
void UI::InGameOptions::OnScrollMusicVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x58C5ED
{
    mangled_assert("?OnScrollMusicVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_58C5ED(sbar, pos);
}

_extern void _sub_58C5F0(UI::InterfaceElement *, __int32);
void UI::InGameOptions::OnScrollSFXVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x58C5F0
{
    mangled_assert("?OnScrollSFXVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_58C5F0(sbar, pos);
}

_extern void _sub_58C5F3(UI::InterfaceElement *, __int32);
void UI::InGameOptions::OnScrollSpeechVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x58C5F3
{
    mangled_assert("?OnScrollSpeechVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_58C5F3(sbar, pos);
}

_extern void _sub_58C5F6(UI::InterfaceElement *, __int32);
void UI::InGameOptions::OnScrollUIVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x58C5F6
{
    mangled_assert("?OnScrollUIVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_58C5F6(sbar, pos);
}

_extern void _sub_58C5BA(UI::InterfaceElement *);
void UI::InGameOptions::OnScrollButtonReleasedMusicVolume(UI::InterfaceElement *sbar) // 0x58C5BA
{
    mangled_assert("?OnScrollButtonReleasedMusicVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C5BA(sbar);
}

_extern void _sub_58C5E4(UI::InterfaceElement *);
void UI::InGameOptions::OnScrollButtonReleasedSFXVolume(UI::InterfaceElement *sbar) // 0x58C5E4
{
    mangled_assert("?OnScrollButtonReleasedSFXVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C5E4(sbar);
}

_extern void _sub_58C5E7(UI::InterfaceElement *);
void UI::InGameOptions::OnScrollButtonReleasedSpeechVolume(UI::InterfaceElement *sbar) // 0x58C5E7
{
    mangled_assert("?OnScrollButtonReleasedSpeechVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C5E7(sbar);
}

_extern void _sub_58C5EA(UI::InterfaceElement *);
void UI::InGameOptions::OnScrollButtonReleasedUIVolume(UI::InterfaceElement *sbar) // 0x58C5EA
{
    mangled_assert("?OnScrollButtonReleasedUIVolume@InGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_58C5EA(sbar);
}

/* ---------- private code */
#endif
