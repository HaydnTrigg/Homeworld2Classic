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
#include <campaign.h>
#include <gamestructimpl.h>
#include <scripting.h>
#include <Badge.h>
#include <UserInterface\NewListBox.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <Menus\MenuSupport.h>
#include <Mathlib\matrix3.h>
#include <App\CampaignMan.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <boost\static_assert.hpp>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <App\AppObj.h>
#include <map>
#include <UserInterface\NewUIScreenManager.h>
#include <platform\appinterface.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\cliprect.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <localizer\localizer.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <LevelManager.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <Render\gl\r_types.h>
#include <fileio\md5.h>
#include <KeyBindings.h>
#include <config.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <UserInterface\ListBoxItem.h>
#include <debug\db.h>
#include <UserInterface\TextButton.h>
#include <platform\cmdline.h>
#include <UserInterface\NewButton.h>
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
#include <Menus\SaveLoadDialog.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\compiledtext.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\StringTable.h>
#include <Menus\SinglePlayer\SPMissionSelect.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\uiprimitives.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\NewText.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <luaconfig\luabinding.h>
#include <fileio\filepath.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<CampaignMan::CampaignEntry,std::allocator<CampaignMan::CampaignEntry> > CampaignList;

/* ---------- prototypes */

/* ---------- globals */

extern UI::SPMissionSelect *UI::SPMissionSelect::ms_screen; // 0x846D6C

/* ---------- private variables */

/* ---------- public code */

UI::SPMissionSelect::SPMissionSelect(char const *) // 0x5AFD14
{
    mangled_assert("??0SPMissionSelect@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::SPMissionSelect::~SPMissionSelect() // 0x5AFDB8
{
    mangled_assert("??1SPMissionSelect@UI@@UAE@XZ");
    todo("implement");
}

void UI::SPMissionSelect::SetCampaign(char const *, bool) // 0x5B0896
{
    mangled_assert("?SetCampaign@SPMissionSelect@UI@@QAEXPBD_N@Z");
    todo("implement");
}

void UI::SPMissionSelect::OnActivate(bool) // 0x5B02C2
{
    mangled_assert("?OnActivate@SPMissionSelect@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::SPMissionSelect::OnLoad(LuaConfig &) // 0x5B0349
{
    mangled_assert("?OnLoad@SPMissionSelect@UI@@UAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::SPMissionSelect::OnPostLoad() // 0x5B0536
{
    mangled_assert("?OnPostLoad@SPMissionSelect@UI@@MAEXXZ");
    todo("implement");
}

void UI::SPMissionSelect::FillTutorialListBox(bool) // 0x5AFE71
{
    mangled_assert("?FillTutorialListBox@SPMissionSelect@UI@@AAEX_N@Z");
    todo("implement");
}

void UI::SPMissionSelect::SelectMission(unsigned __int32) // 0x5B079C
{
    mangled_assert("?SelectMission@SPMissionSelect@UI@@AAEXI@Z");
    todo("implement");
}

void UI::SPMissionSelect::OnFocus(bool) // 0x5B02D7
{
    mangled_assert("?OnFocus@SPMissionSelect@UI@@UAEX_N@Z");
    todo("implement");
}

unsigned __int32 UI::SPMissionSelect::GetSelectedMissionIndex() // 0x5B026B
{
    mangled_assert("?GetSelectedMissionIndex@SPMissionSelect@UI@@AAEIXZ");
    todo("implement");
}

void UI::SPMissionSelect::StartMissionClicked(UI::InterfaceElement *sender) // 0x5B091A
{
    mangled_assert("?StartMissionClicked@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SPMissionSelect::LoadMissionClicked(UI::InterfaceElement *sender) // 0x5B0284
{
    mangled_assert("?LoadMissionClicked@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SPMissionSelect::TutorialSelected(UI::InterfaceElement *sender) // 0x5B0961
{
    mangled_assert("?TutorialSelected@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SPMissionSelect::ResetClicked_Yes(UI::InterfaceElement *sender) // 0x5B0701
{
    mangled_assert("?ResetClicked_Yes@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SPMissionSelect::ResetClicked(UI::InterfaceElement *sender) // 0x5B0694
{
    mangled_assert("?ResetClicked@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SPMissionSelect::OnListBoxItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf) // 0x5B033D
{
    mangled_assert("?OnListBoxItemDoubleClicked@SPMissionSelect@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
