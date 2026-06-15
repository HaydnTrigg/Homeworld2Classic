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
#include <UserInterface\NewScrollBar.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\NewUIScreenManager.h>
#include <boost\checked_delete.hpp>
#include <Menus\MenuSupport.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\StringTable.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Render\objects\compiledtext.h>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <UserInterface\RadioButton.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <Menus\ControlsFrame.h>
#include <UserInterface\TextButton.h>
#include <prim.h>
#include <platform\osdef.h>
#include <UserInterface\NewText.h>
#include <Mathlib\vector3.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <Render\objects\bitmapfont.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <UserInterface\RadioItem.h>
#include <Render\objects\objects.h>
#include <App\AppObj.h>
#include <Render\objects\core.h>
#include <platform\appinterface.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\NewListBox.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <Render\gl\r_types.h>
#include <App\PlayerProfile.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <App\PlayerProfileMan.h>
#include <fileio\md5.h>
#include <KeyBindings.h>
#include <config.h>
#include <App\PlayerProfileGameOptions.h>
#include <assist\typemagic.h>
#include <UserInterface\NewDropDownListBox.h>
#include <UserInterface\ListBoxItem.h>
#include <Mathlib\mathlibdll.h>
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
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <feFlow.h>
#include <FrontEnd\frontend.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <Menus\FEGameOptions.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::Data
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
    UI::NewButton *m_chkMilitary; // 0x48
    UI::NewButton *m_chkRightClickMenu; // 0x4C
    UI::NewScrollBar *m_sbarMouseSensitivity; // 0x50
    UI::NewScrollBar *m_sbarSFXVolume; // 0x54
    UI::NewScrollBar *m_sbarSpeechVolume; // 0x58
    UI::NewScrollBar *m_sbarMusicVolume; // 0x5C
    UI::NewScrollBar *m_sbarUIVolume; // 0x60
    UI::NewDropDownListBox *m_comboBattleChatter; // 0x64
    UI::NewScrollBar *m_sbarSFXChannels; // 0x68
    UI::NewButton *m_chkBattleChatter; // 0x6C
    UI::NewButton *m_chkSelectionSpeech; // 0x70
    UI::NewButton *m_radioVoice1; // 0x74
    UI::NewButton *m_radioVoice2; // 0x78
    UI::NewButton *m_radioVoice3; // 0x7C
    UI::NewDropDownListBox *m_comboVideoPresets; // 0x80
    UI::NewDropDownListBox *m_comboVideoResolution; // 0x84
    UI::NewScrollBar *m_sbarGamma; // 0x88
    UI::NewButton *m_chkVsync; // 0x8C
    UI::ControlsFrame *m_controlsFrame; // 0x90
    UI::NewFrame *m_fxFrameToClone; // 0x94
    UI::TextListBoxItem *m_itemToClone; // 0x98
    std::vector<UI::FXFrame,std::allocator<UI::FXFrame> > m_fxFrames; // 0x9C
    PlayerProfile *m_profile; // 0xA8
    ProfileAudioOptions m_audio; // 0xAC
    ProfileVideoOptions m_video; // 0xCC
    ProfileGameplayOptions m_gameplay; // 0xEC
    ProfileControlsOptions m_controls; // 0xF8
    ProfileFXOptions m_fx; // 0xFC
    ProfileVideoOptions m_origVideo; // 0x11C
    Data(`anonymous-namespace'::Data const &); /* compiler_generated() */
    Data(); /* compiler_generated() */
    ~Data(); /* compiler_generated() */
    `anonymous-namespace'::Data &operator=(`anonymous-namespace'::Data const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::Data) == 316, "Invalid `anonymous-namespace'::Data size");

struct `anonymous-namespace'::ScreenResolution
{
    __int32 width; // 0x0
    __int32 height; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::ScreenResolution) == 8, "Invalid `anonymous-namespace'::ScreenResolution size");

typedef `anonymous-namespace'::ScreenResolution ?A0x37908103::ScreenResolution;
typedef `anonymous-namespace'::Data ?A0x37908103::Data;

/* ---------- prototypes */

/* ---------- globals */

extern UI::FEGameOptions *UI::FEGameOptions::ms_screen; // 0x846CB8

/* ---------- private variables */

/* ---------- public code */

UI::FEGameOptions::FEGameOptions(char const *) // 0x578065
{
    mangled_assert("??0FEGameOptions@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::FXFrame::FXFrame(UI::FXFrame const &) // 0x5780C0
{
    mangled_assert("??0FXFrame@UI@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::FXFrame::FXFrame() // 0x5780EF
{
    mangled_assert("??0FXFrame@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::FEGameOptions::~FEGameOptions() // 0x578125
{
    mangled_assert("??1FEGameOptions@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::FXFrame::~FXFrame() // 0x578148
{
    mangled_assert("??1FXFrame@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool UI::FEGameOptions::Show(UI::ScreenTransitionType trans) // 0x57986A
{
    mangled_assert("?Show@FEGameOptions@UI@@SG_NW4ScreenTransitionType@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnActivate(bool) // 0x57898F
{
    mangled_assert("?OnActivate@FEGameOptions@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::FEGameOptions::OnLoad(LuaConfig &) // 0x578BF1
{
    mangled_assert("?OnLoad@FEGameOptions@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UI::FXFrame UI::FEGameOptions::LoadFXFrame(LuaConfig &) // 0x578503
{
    mangled_assert("?LoadFXFrame@FEGameOptions@UI@@AAE?AUFXFrame@2@AAVLuaConfig@@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnPostLoad() // 0x578D39
{
    mangled_assert("?OnPostLoad@FEGameOptions@UI@@MAEXXZ");
    todo("implement");
}

void UI::FEGameOptions::SaveAudioOptions(ProfileAudioOptions &) // 0x5795F0
{
    mangled_assert("?SaveAudioOptions@FEGameOptions@UI@@AAEXAAUProfileAudioOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::SaveVideoOptions(ProfileVideoOptions &) // 0x57980D
{
    mangled_assert("?SaveVideoOptions@FEGameOptions@UI@@AAEXAAUProfileVideoOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::SaveGameplayOptions(ProfileGameplayOptions &) // 0x5797A8
{
    mangled_assert("?SaveGameplayOptions@FEGameOptions@UI@@AAEXAAUProfileGameplayOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::SaveControlsOptions(ProfileControlsOptions &) // 0x5796AA
{
    mangled_assert("?SaveControlsOptions@FEGameOptions@UI@@AAEXAAUProfileControlsOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::SaveFXOptions(ProfileFXOptions &) // 0x57970E
{
    mangled_assert("?SaveFXOptions@FEGameOptions@UI@@AAEXAAUProfileFXOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::LoadAllOptions() // 0x5783D5
{
    mangled_assert("?LoadAllOptions@FEGameOptions@UI@@AAEXXZ");
    todo("implement");
}

void UI::FEGameOptions::LoadGameplayOptions(ProfileGameplayOptions const &) // 0x578895
{
    mangled_assert("?LoadGameplayOptions@FEGameOptions@UI@@AAEXABUProfileGameplayOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::LoadAudioOptions(ProfileAudioOptions const &) // 0x578450
{
    mangled_assert("?LoadAudioOptions@FEGameOptions@UI@@AAEXABUProfileAudioOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::LoadVideoOptions(ProfileVideoOptions const &) // 0x578906
{
    mangled_assert("?LoadVideoOptions@FEGameOptions@UI@@AAEXABUProfileVideoOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::LoadControlsOptions(ProfileControlsOptions const &) // 0x5784E0
{
    mangled_assert("?LoadControlsOptions@FEGameOptions@UI@@AAEXABUProfileControlsOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::LoadFXOptions(ProfileFXOptions &) // 0x5787FF
{
    mangled_assert("?LoadFXOptions@FEGameOptions@UI@@AAEXAAUProfileFXOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::QueryFXOption(char const *, bool, __int32 &, ProfileFXOptions &) // 0x579445
{
    mangled_assert("?QueryFXOption@FEGameOptions@UI@@AAEXPBD_NAAHAAUProfileFXOptions@@@Z");
    todo("implement");
}

void UI::FEGameOptions::ApplyRezChange_Yes(UI::InterfaceElement *e) // 0x57833E
{
    mangled_assert("?ApplyRezChange_Yes@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::ApplyRezChange_No(UI::InterfaceElement *e) // 0x578308
{
    mangled_assert("?ApplyRezChange_No@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

bool UI::FEGameOptions::Apply() // 0x5781B6
{
    mangled_assert("?Apply@FEGameOptions@UI@@AAE_NXZ");
    todo("implement");
}

void UI::FEGameOptions::RestoreDefaults() // 0x579539
{
    mangled_assert("?RestoreDefaults@FEGameOptions@UI@@AAEXXZ");
    todo("implement");
}

void UI::FEGameOptions::SaveCurrentTabOptions() // 0x5796AD
{
    mangled_assert("?SaveCurrentTabOptions@FEGameOptions@UI@@AAEXXZ");
    todo("implement");
}

void UI::FEGameOptions::OnTabClicked(UI::InterfaceElement *sender) // 0x579359
{
    mangled_assert("?OnTabClicked@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnGameplayTab(UI::InterfaceElement *sender) // 0x578BA3
{
    mangled_assert("?OnGameplayTab@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnAudioTab(UI::InterfaceElement *sender) // 0x578ABA
{
    mangled_assert("?OnAudioTab@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnVideoTab(UI::InterfaceElement *sender) // 0x5793F7
{
    mangled_assert("?OnVideoTab@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnControlsTab(UI::InterfaceElement *sender) // 0x578B08
{
    mangled_assert("?OnControlsTab@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnFXTab(UI::InterfaceElement *sender) // 0x578B56
{
    mangled_assert("?OnFXTab@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnAcceptClicked(UI::InterfaceElement *sender) // 0x578960
{
    mangled_assert("?OnAcceptClicked@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnRestoreDefaults_Yes(UI::InterfaceElement *sender) // 0x579308
{
    mangled_assert("?OnRestoreDefaults_Yes@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnRestoreDefaultsClicked(UI::InterfaceElement *sender) // 0x57928D
{
    mangled_assert("?OnRestoreDefaultsClicked@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollMusicVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x57934D
{
    mangled_assert("?OnScrollMusicVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollSFXVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x579350
{
    mangled_assert("?OnScrollSFXVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollSpeechVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x579353
{
    mangled_assert("?OnScrollSpeechVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollUIVolume(UI::InterfaceElement *sbar, __int32 pos) // 0x579356
{
    mangled_assert("?OnScrollUIVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollButtonReleasedMusicVolume(UI::InterfaceElement *sbar) // 0x57931A
{
    mangled_assert("?OnScrollButtonReleasedMusicVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollButtonReleasedSFXVolume(UI::InterfaceElement *sbar) // 0x579344
{
    mangled_assert("?OnScrollButtonReleasedSFXVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollButtonReleasedSpeechVolume(UI::InterfaceElement *sbar) // 0x579347
{
    mangled_assert("?OnScrollButtonReleasedSpeechVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FEGameOptions::OnScrollButtonReleasedUIVolume(UI::InterfaceElement *sbar) // 0x57934A
{
    mangled_assert("?OnScrollButtonReleasedUIVolume@FEGameOptions@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
