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
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <App\PlayerProfileMan.h>
#include <Render\objects\compiledtext.h>
#include <App\PlayerProfile.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <xutility>
#include <fileio\md5.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <App\PlayerProfileGameOptions.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <list>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
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
#include <UserInterface\RadioButton.h>
#include <Render\objects\texture.h>
#include <UserInterface\TextButton.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Menus\MenuSupport.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <fileio\filepath.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
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
#include <Render\objects\cliprect.h>
#include <Menus\ErrorMessage.h>
#include <UserInterface\RadioItem.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <localizer\localizer.h>
#include <Menus\PlayerSetup.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewButton.h>
#include <UserInterface\StringTable.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void UI::ConvertHSV2RGB(__int32 h, __int32 s, __int32 v, __int32 &r, __int32 &g, __int32 &b);
_static void UI::ConvertRGB2HSV(__int32 r, __int32 g, __int32 b, __int32 &h, __int32 &s, __int32 &v);
_static bool UI::IsNameSteamFriendly(wchar_t const *wname);
_static void UI::CommitValuesAndClose(UI::PlayerSetup *m);
_static void UI::OnRestoreDefaultClicked_Yes(UI::InterfaceElement *sender);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_59FD67(UI::PlayerSetup *const, char const *);
UI::PlayerSetup::PlayerSetup(char const *) // 0x59FD67
{
    mangled_assert("??0PlayerSetup@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_59FD67(this, arg);
}

_extern void _sub_59FDAD(UI::PlayerSetup *const);
UI::PlayerSetup::~PlayerSetup() // 0x59FDAD
{
    mangled_assert("??1PlayerSetup@UI@@UAE@XZ");
    todo("implement");
    _sub_59FDAD(this);
}

_extern void _sub_5A0C4B(UI::PlayerSetup *const);
void UI::PlayerSetup::OnPostLoad() // 0x5A0C4B
{
    mangled_assert("?OnPostLoad@PlayerSetup@UI@@MAEXXZ");
    todo("implement");
    _sub_5A0C4B(this);
}

_extern void _sub_5A0754(UI::PlayerSetup *const, bool);
void UI::PlayerSetup::OnActivate(bool) // 0x5A0754
{
    mangled_assert("?OnActivate@PlayerSetup@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5A0754(this, arg);
}

_extern void _sub_5A0379(UI::PlayerSetup *const, bool);
void UI::PlayerSetup::EnableChatNameTextInput(bool) // 0x5A0379
{
    mangled_assert("?EnableChatNameTextInput@PlayerSetup@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5A0379(this, arg);
}

_extern void _sub_5A0466(UI::PlayerSetup *const, PlayerProfile *);
void UI::PlayerSetup::LoadColorsFromProfile(PlayerProfile *) // 0x5A0466
{
    mangled_assert("?LoadColorsFromProfile@PlayerSetup@UI@@AAEXPAVPlayerProfile@@@Z");
    todo("implement");
    _sub_5A0466(this, arg);
}

_extern void _sub_5A165F(UI::PlayerSetup *const, __int32, __int32, __int32);
void UI::PlayerSetup::SetTeamColor(__int32, __int32, __int32) // 0x5A165F
{
    mangled_assert("?SetTeamColor@PlayerSetup@UI@@QAEXHHH@Z");
    todo("implement");
    _sub_5A165F(this, arg, arg, arg);
}

_extern void _sub_5A1715(UI::PlayerSetup *const, __int32, __int32, __int32, bool);
void UI::PlayerSetup::SetTeamColorHSV(__int32, __int32, __int32, bool) // 0x5A1715
{
    mangled_assert("?SetTeamColorHSV@PlayerSetup@UI@@QAEXHHH_N@Z");
    todo("implement");
    _sub_5A1715(this, arg, arg, arg, arg);
}

_extern void _sub_5A120E(UI::PlayerSetup *const, __int32, __int32, __int32);
void UI::PlayerSetup::SetStripeColor(__int32, __int32, __int32) // 0x5A120E
{
    mangled_assert("?SetStripeColor@PlayerSetup@UI@@QAEXHHH@Z");
    todo("implement");
    _sub_5A120E(this, arg, arg, arg);
}

_extern void _sub_5A12E0(UI::PlayerSetup *const, __int32, __int32, __int32, bool);
void UI::PlayerSetup::SetStripeColorHSV(__int32, __int32, __int32, bool) // 0x5A12E0
{
    mangled_assert("?SetStripeColorHSV@PlayerSetup@UI@@QAEXHHH_N@Z");
    todo("implement");
    _sub_5A12E0(this, arg, arg, arg, arg);
}

_extern void _sub_5A0AB6(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSetup::OnColorPickerPressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed) // 0x5A0AB6
{
    mangled_assert("?OnColorPickerPressed@PlayerSetup@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A0AB6(sender, x, y, pressed);
}

_extern void _sub_5A0A04(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSetup::OnColorPicker(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed) // 0x5A0A04
{
    mangled_assert("?OnColorPicker@PlayerSetup@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A0A04(sender, x, y, pressed);
}

_extern void _sub_5A0BE5(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSetup::OnGreyScalePressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed) // 0x5A0BE5
{
    mangled_assert("?OnGreyScalePressed@PlayerSetup@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A0BE5(sender, x, y, pressed);
}

_extern void _sub_5A0B50(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSetup::OnGreyScale(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 pressed) // 0x5A0B50
{
    mangled_assert("?OnGreyScale@PlayerSetup@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A0B50(sender, x, y, pressed);
}

_extern void _sub_5A15F6(UI::PlayerSetup *const, bool);
void UI::PlayerSetup::SetStripeEdit(bool) // 0x5A15F6
{
    mangled_assert("?SetStripeEdit@PlayerSetup@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5A15F6(this, arg);
}

_extern void _sub_5A0895(UI::InterfaceElement *);
void UI::PlayerSetup::OnClickBase(UI::InterfaceElement *sender) // 0x5A0895
{
    mangled_assert("?OnClickBase@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A0895(sender);
}

_extern void _sub_5A094C(UI::InterfaceElement *);
void UI::PlayerSetup::OnClickStripe(UI::InterfaceElement *sender) // 0x5A094C
{
    mangled_assert("?OnClickStripe@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A094C(sender);
}

_extern void _sub_5A0B1C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSetup::OnDoubleClickSwap(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A0B1C
{
    mangled_assert("?OnDoubleClickSwap@PlayerSetup@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A0B1C(sender, x, y, b);
}

_extern void _sub_5A1A0E(UI::PlayerSetup *const);
void UI::PlayerSetup::SwapColors() // 0x5A1A0E
{
    mangled_assert("?SwapColors@PlayerSetup@UI@@QAEXXZ");
    todo("implement");
    _sub_5A1A0E(this);
}

_extern void _sub_5A0721(UI::InterfaceElement *);
void UI::PlayerSetup::OnAcceptChatNameWarning(UI::InterfaceElement *sender) // 0x5A0721
{
    mangled_assert("?OnAcceptChatNameWarning@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A0721(sender);
}

_extern void _sub_5A05DB(UI::InterfaceElement *);
void UI::PlayerSetup::OnAccept(UI::InterfaceElement *sender) // 0x5A05DB
{
    mangled_assert("?OnAccept@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A05DB(sender);
}

_extern void _sub_5A0851(UI::InterfaceElement *);
void UI::PlayerSetup::OnCancel(UI::InterfaceElement *sender) // 0x5A0851
{
    mangled_assert("?OnCancel@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A0851(sender);
}

_extern bool _sub_5A1ABD(UI::PlayerSetup *const);
bool UI::PlayerSetup::ValidateChatName() // 0x5A1ABD
{
    mangled_assert("?ValidateChatName@PlayerSetup@UI@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5A1ABD(this);
    return __result;
}

_extern void _sub_59FE48(UI::PlayerSetup *const);
void UI::PlayerSetup::CommitValues() // 0x59FE48
{
    mangled_assert("?CommitValues@PlayerSetup@UI@@QAEXXZ");
    todo("implement");
    _sub_59FE48(this);
}

_extern void _sub_59FDE5(UI::PlayerSetup *const);
void UI::PlayerSetup::CancelValues() // 0x59FDE5
{
    mangled_assert("?CancelValues@PlayerSetup@UI@@QAEXXZ");
    todo("implement");
    _sub_59FDE5(this);
}

_extern void _sub_5A10D5(UI::PlayerSetup *const, char const *);
void UI::PlayerSetup::SetEmblemFileName(char const *) // 0x5A10D5
{
    mangled_assert("?SetEmblemFileName@PlayerSetup@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_5A10D5(this, arg);
}

_extern void _sub_5A03D6(UI::PlayerSetup *const, __int32 &, __int32 &, __int32 &);
void UI::PlayerSetup::GetTeamColor(__int32 &, __int32 &, __int32 &) // 0x5A03D6
{
    mangled_assert("?GetTeamColor@PlayerSetup@UI@@QAEXAAH00@Z");
    todo("implement");
    _sub_5A03D6(this, arg, arg, arg);
}

_extern void _sub_5A03A0(UI::PlayerSetup *const, __int32 &, __int32 &, __int32 &);
void UI::PlayerSetup::GetStripeColor(__int32 &, __int32 &, __int32 &) // 0x5A03A0
{
    mangled_assert("?GetStripeColor@PlayerSetup@UI@@QAEXAAH00@Z");
    todo("implement");
    _sub_5A03A0(this, arg, arg, arg);
}

_extern void _sub_5A11C1(UI::PlayerSetup *const, bool, __int32);
void UI::PlayerSetup::SetPlayerToSetup(bool, __int32) // 0x5A11C1
{
    mangled_assert("?SetPlayerToSetup@PlayerSetup@UI@@QAEX_NH@Z");
    todo("implement");
    _sub_5A11C1(this, arg, arg);
}

_extern void _sub_5A108C(UI::PlayerSetup *const);
void UI::PlayerSetup::RestoreDefaults() // 0x5A108C
{
    mangled_assert("?RestoreDefaults@PlayerSetup@UI@@QAEXXZ");
    todo("implement");
    _sub_5A108C(this);
}

_extern void _sub_5A0982(UI::InterfaceElement *);
void UI::PlayerSetup::OnClickSwatch(UI::InterfaceElement *sender) // 0x5A0982
{
    mangled_assert("?OnClickSwatch@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A0982(sender);
}

_extern void _sub_5A08CB(UI::InterfaceElement *);
void UI::PlayerSetup::OnClickSaveSwatch(UI::InterfaceElement *sender) // 0x5A08CB
{
    mangled_assert("?OnClickSaveSwatch@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A08CB(sender);
}

_extern void _sub_5A101F(UI::InterfaceElement *);
void UI::PlayerSetup::OnRestoreDefaultsClicked(UI::InterfaceElement *sender) // 0x5A101F
{
    mangled_assert("?OnRestoreDefaultsClicked@PlayerSetup@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A101F(sender);
}

_extern void _sub_5A10B4(UI::PlayerSetup *const, wchar_t const *);
void UI::PlayerSetup::SetCPUName(wchar_t const *) // 0x5A10B4
{
    mangled_assert("?SetCPUName@PlayerSetup@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5A10B4(this, arg);
}

/* ---------- private code */

_extern void _sub_5A0166(__int32, __int32, __int32, __int32 &, __int32 &, __int32 &);
_static void UI::ConvertHSV2RGB(__int32 h, __int32 s, __int32 v, __int32 &r, __int32 &g, __int32 &b) // 0x5A0166
{
    mangled_assert("UI::ConvertHSV2RGB");
    todo("implement");
    _sub_5A0166(h, s, v, r, g, b);
}

_extern void _sub_5A0259(__int32, __int32, __int32, __int32 &, __int32 &, __int32 &);
_static void UI::ConvertRGB2HSV(__int32 r, __int32 g, __int32 b, __int32 &h, __int32 &s, __int32 &v) // 0x5A0259
{
    mangled_assert("UI::ConvertRGB2HSV");
    todo("implement");
    _sub_5A0259(r, g, b, h, s, v);
}

_extern bool _sub_5A040C(wchar_t const *);
_static bool UI::IsNameSteamFriendly(wchar_t const *wname) // 0x5A040C
{
    mangled_assert("UI::IsNameSteamFriendly");
    todo("implement");
    bool __result = _sub_5A040C(wname);
    return __result;
}

_extern void _sub_5A012D(UI::PlayerSetup *);
_static void UI::CommitValuesAndClose(UI::PlayerSetup *m) // 0x5A012D
{
    mangled_assert("UI::CommitValuesAndClose");
    todo("implement");
    _sub_5A012D(m);
}

_extern void _sub_5A0FE7(UI::InterfaceElement *);
_static void UI::OnRestoreDefaultClicked_Yes(UI::InterfaceElement *sender) // 0x5A0FE7
{
    mangled_assert("UI::OnRestoreDefaultClicked_Yes");
    todo("implement");
    _sub_5A0FE7(sender);
}
#endif
