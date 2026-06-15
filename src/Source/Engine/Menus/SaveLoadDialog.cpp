#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <platform\osdef.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\matrix3.h>
#include <fileio\filepath.h>
#include <boost\checked_delete.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <seInterface2\PatchID.h>
#include <Render\objects\texture.h>
#include <seInterface2\PatchBase.h>
#include <new>
#include <Render\objects\objects.h>
#include <seInterface2\SoundParams.h>
#include <Render\objects\core.h>
#include <SOBGroupManager.h>
#include <xstddef>
#include <Render\gl\types.h>
#include <Render\objects\compiledtext.h>
#include <type_traits>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <SquadronList.h>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\gl\r_types.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <UserInterface\NewTextInput.h>
#include <compiler\compilerconfig.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Menus\GameMenu.h>
#include <Render\objects\fontsystem.h>
#include <fixedpoint.h>
#include <Render\objects\bitmapfont.h>
#include <list>
#include <util\fixed.h>
#include <Menus\SaveLoadDialog.h>
#include <UserInterface\NewUIScreen.h>
#include <assist\fixedstring.h>
#include <region.h>
#include <UserInterface\NewUIScreenManager.h>
#include <prim.h>
#include <SelTarg.h>
#include <Mathlib\vector3.h>
#include <orders.h>
#include <Mathlib\vector4.h>
#include <orders_base.h>
#include <sobid.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <App\PlayerProfileGameOptions.h>
#include <Render\gl\glext.h>
#include <KeyBindings.h>
#include <platform\keydefines.h>
#include <UserInterface\NewFrame.h>
#include <boost\cstdint.hpp>
#include <Universe.h>
#include <UserInterface\InterfaceElement.h>
#include <Waypoint.h>
#include <UserInterface\uitypes.h>
#include <cassert>
#include <SobUnmoveable.h>
#include <platform\inputinterface.h>
#include <assert.h>
#include <sob.h>
#include <sobstatic.h>
#include <commandtype.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\quat.h>
#include <Menus\MovieScreen.h>
#include <assist\typemagic.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <HyperspaceManager.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <GameObj.h>
#include <Collision\primitivesfwd.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <util\statmonitor.h>
#include <Render\objects\textureregistry.h>
#include <gamemsg.h>
#include <util\utilexports.h>
#include <hash_map>
#include <platform\timer.h>
#include <xhash>
#include <UserInterface\ListBoxItem.h>
#include <deque>
#include <platform\platformexports.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\pch.h>
#include <Render\objects\cliprect.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <Collision\Primitives\obb.h>
#include <Interpolation.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <luaconfig\luaconfig.h>
#include <sobtypes.h>
#include <lua.h>
#include <boost\throw_exception.hpp>
#include <Menus\MenuSupport.h>
#include <selection.h>
#include <savegamedef.h>
#include <savegame.h>
#include <Collision\Primitives\aabb.h>
#include <boost\detail\shared_count.hpp>
#include <task.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <stack>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\textureproxy.h>
#include <UserInterface\StringTable.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <UserInterface\NewListBox.h>
#include <Menus\ErrorMessage.h>
#include <recorder.h>
#include <config.h>
#include <wchar.h>
#include <string>
#include <syncChecking.h>
#include <UserInterface\UIDialog.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::SaveLoadDialogData
{
    UI::NewListBox *m_listGames; // 0x0
    UI::TextListBoxItem *m_itemToClone; // 0x4
    UI::SaveLoadDialog::SaveLoadDialogType m_screenType; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_campaign; // 0xC
    UI::NewFrame *m_frmLoadSkirmish; // 0x24
    UI::NewFrame *m_frmLoadCampaign; // 0x28
    UI::NewFrame *m_frmLoadRecorded; // 0x2C
    UI::NewFrame *m_frmSaveSkirmish; // 0x30
    UI::NewFrame *m_frmSaveCampaign; // 0x34
    UI::NewFrame *m_frmSaveRecorded; // 0x38
    UI::NewButton *m_btnLoadSkirmish; // 0x3C
    UI::NewButton *m_btnLoadCampaign; // 0x40
    UI::NewButton *m_btnLoadRecorded; // 0x44
    UI::NewButton *m_btnSaveCampaign; // 0x48
    UI::NewButton *m_btnSaveSkirmish; // 0x4C
    UI::NewButton *m_btnSaveRecorded; // 0x50
    UI::NewButton *m_btnDelete; // 0x54
    UI::NewTextInput *m_txtInput; // 0x58
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_path; // 0x5C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_tempFilename; // 0x74
    SaveLoadDialogData(UI::SaveLoadDialogData const &); /* compiler_generated() */
    _inline SaveLoadDialogData(); /* compiler_generated() */
    _inline ~SaveLoadDialogData(); /* compiler_generated() */
    UI::SaveLoadDialogData &operator=(UI::SaveLoadDialogData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::SaveLoadDialogData) == 140, "Invalid UI::SaveLoadDialogData size");

/* ---------- prototypes */


_static bool UI::ValidateFilename(char const *file);

/* ---------- globals */

extern UI::SaveLoadDialog *UI::SaveLoadDialog::ms_saveLoadDialog; // 0x846D20
extern char const *UI::SAVEGAMEPATH_SKIRMISH; // 0x83A76C
extern char const *UI::SAVEGAMEPATH_RECORDED; // 0x83A770
extern char const *UI::SAVEGAMEPATH_CAMPAIGN; // 0x83A774
extern char const *UI::SAVEGAMEFILEEXTENSION; // 0x83A778
extern char const *UI::RECGAMEFILEEXTENSION; // 0x83A77C

/* ---------- private variables */

/* ---------- public code */

UI::SaveLoadDialog::SaveLoadDialog(char const *) // 0x5A6A45
{
    mangled_assert("??0SaveLoadDialog@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::SaveLoadDialogData::SaveLoadDialogData() // 0x5A6AA7
{
    mangled_assert("??0SaveLoadDialogData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::SaveLoadDialog::~SaveLoadDialog() // 0x5A6AD8
{
    mangled_assert("??1SaveLoadDialog@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::SaveLoadDialogData::~SaveLoadDialogData() // 0x5A6AFB
{
    mangled_assert("??1SaveLoadDialogData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::SaveLoadDialog::InitData() // 0x5A6EAF
{
    mangled_assert("?InitData@SaveLoadDialog@UI@@AAEXXZ");
    todo("implement");
}

void UI::SaveLoadDialog::OnActivate(bool) // 0x5A7144
{
    mangled_assert("?OnActivate@SaveLoadDialog@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnPostLoad() // 0x5A76D6
{
    mangled_assert("?OnPostLoad@SaveLoadDialog@UI@@MAEXXZ");
    todo("implement");
}

void UI::SaveLoadDialog::FillList(char const *, char const *) // 0x5A6C72
{
    mangled_assert("?FillList@SaveLoadDialog@UI@@AAEXPBD0@Z");
    todo("implement");
}

void UI::SaveLoadDialog::DeleteAccept(UI::InterfaceElement *btn) // 0x5A6B52
{
    mangled_assert("?DeleteAccept@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnDeleteClicked(UI::InterfaceElement *sender) // 0x5A7434
{
    mangled_assert("?OnDeleteClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnCancelClicked(UI::InterfaceElement *sender) // 0x5A73B0
{
    mangled_assert("?OnCancelClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::Show(UI::SaveLoadDialog::SaveLoadDialogType screenType, UI::ScreenTransitionType trans, char const *campaign) // 0x5A7C73
{
    mangled_assert("?Show@SaveLoadDialog@UI@@SGXW4SaveLoadDialogType@12@W4ScreenTransitionType@2@PBD@Z");
    todo("implement");
}

bool UI::SaveLoadDialog::DoSavedCampaignExist(char const *campaignName) // 0x5A6BA7
{
    mangled_assert("?DoSavedCampaignExist@SaveLoadDialog@UI@@SG_NPBD@Z");
    todo("implement");
}

bool UI::SaveLoadDialog::DoSavedSkirmishExist() // 0x5A6C30
{
    mangled_assert("?DoSavedSkirmishExist@SaveLoadDialog@UI@@SG_NXZ");
    todo("implement");
}

bool UI::SaveLoadDialog::DoSavedRecordedExist() // 0x5A6BEE
{
    mangled_assert("?DoSavedRecordedExist@SaveLoadDialog@UI@@SG_NXZ");
    todo("implement");
}

void UI::SaveLoadDialog::OnLoadSkirmishClicked(UI::InterfaceElement *sender) // 0x5A76B2
{
    mangled_assert("?OnLoadSkirmishClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnLoadCampaignClicked(UI::InterfaceElement *sender) // 0x5A752B
{
    mangled_assert("?OnLoadCampaignClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnLoadRecordedClicked(UI::InterfaceElement *sender) // 0x5A758D
{
    mangled_assert("?OnLoadRecordedClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnSaveSkirmishClicked(UI::InterfaceElement *sender) // 0x5A795B
{
    mangled_assert("?OnSaveSkirmishClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnSaveCampaignClicked(UI::InterfaceElement *sender) // 0x5A7913
{
    mangled_assert("?OnSaveCampaignClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnSaveRecordedClicked(UI::InterfaceElement *sender) // 0x5A7937
{
    mangled_assert("?OnSaveRecordedClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnItemDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A74BD
{
    mangled_assert("?OnItemDoubleClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::SaveLoadDialog::LoadGame(wchar_t const *savename) // 0x5A6F4A
{
    mangled_assert("?LoadGame@SaveLoadDialog@UI@@CGXPB_W@Z");
    todo("implement");
}

void UI::SaveLoadDialog::VerifyLoadAccept(UI::InterfaceElement *btn) // 0x5A7D92
{
    mangled_assert("?VerifyLoadAccept@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::VerifyLoadCancel(UI::InterfaceElement *btn) // 0x5A7DEA
{
    mangled_assert("?VerifyLoadCancel@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::SaveGame(wchar_t const *savename) // 0x5A7A6E
{
    mangled_assert("?SaveGame@SaveLoadDialog@UI@@CGXPB_W@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OverwriteGameAccept(UI::InterfaceElement *btn) // 0x5A797F
{
    mangled_assert("?OverwriteGameAccept@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OverwriteGameCancel(UI::InterfaceElement *btn) // 0x5A7A1C
{
    mangled_assert("?OverwriteGameCancel@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

bool UI::SaveLoadDialog::SaveFile(char const *filename) // 0x5A7A1F
{
    mangled_assert("?SaveFile@SaveLoadDialog@UI@@CG_NPBD@Z");
    todo("implement");
}

void UI::SaveLoadDialog::OnLoadItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf) // 0x5A754F
{
    mangled_assert("?OnLoadItemDoubleClicked@SaveLoadDialog@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */

_static bool UI::ValidateFilename(char const *file) // 0x5A7CFC
{
    mangled_assert("UI::ValidateFilename");
    todo("implement");
}
#endif
