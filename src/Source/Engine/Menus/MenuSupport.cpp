#if 0
/* ---------- headers */

#include "decomp.h"
#include <sobstatic.h>
#include <assist\stlexsmallvector.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <fixedpoint.h>
#include <io.h>
#include <util\fixed.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <Collision\Primitives\aabb.h>
#include <Render\objects\cliprect.h>
#include <malloc.h>
#include <crtdefs.h>
#include <UserInterface\NewDropDownListBox.h>
#include <UserInterface\ListBoxItem.h>
#include <Camera\OrbitParameters.h>
#include <UserInterface\TextButton.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\NewButton.h>
#include <platform\osdef.h>
#include <boost\static_assert.hpp>
#include <Mathlib\matrix3.h>
#include <mainScreen.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <new>
#include <Render\objects\texture.h>
#include <exception>
#include <xstddef>
#include <Render\objects\objects.h>
#include <UserInterface\UIDialog.h>
#include <Render\objects\core.h>
#include <type_traits>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <App\CampaignMan.h>
#include <UserInterface\NewListBox.h>
#include <xutility>
#include <utility>
#include <Render\gl\lotypes.h>
#include <iosfwd>
#include <vector>
#include <Collision\Primitives\obb.h>
#include <weaponinfo.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <Render\gl\r_types.h>
#include <compiler\compilerconfig.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <platform\cmdline.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\Primitives\capsule.h>
#include <playerresourcetype.h>
#include <math.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <CameraTuning.h>
#include <list>
#include <MainUI.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <platform\timer.h>
#include <assist\fixedstring.h>
#include <Menus\ErrorMessage.h>
#include <Mathlib\vector3.h>
#include <SoundManager\SoundEntityHandle.h>
#include <UserInterface\NewUIScreen.h>
#include <Mathlib\vector4.h>
#include <task.h>
#include <UserInterface\UICoord.h>
#include <stack>
#include <LevelManager.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <gameSettings.h>
#include <Render\objects\compiledtext.h>
#include <syncChecking.h>
#include <sobid.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <localizer\localizer.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Subsystems\HardPointManager.h>
#include <Render\gl\r_defines.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Subsystems\HardPoint.h>
#include <boost\cstdint.hpp>
#include <Render\gl\glext.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Subsystems\HardPointStatic.h>
#include <boost\config.hpp>
#include <Subsystems\SubSystemType.h>
#include <cassert>
#include <assert.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <App\AppObj.h>
#include <UserInterface\NewTextLabel.h>
#include <boost\scoped_array.hpp>
#include <platform\appinterface.h>
#include <UserInterface\uiprimitives.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\quat.h>
#include <Render\objects\bitmapfont.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\mathutil.h>
#include <seInterface2\SoundParams.h>
#include <assist\typemagic.h>
#include <UserInterface\Table.h>
#include <UserInterface\TableCell.h>
#include <CameraCommand.h>
#include <campaign.h>
#include <CameraHW.h>
#include <scripting.h>
#include <Camera\CameraOrbitTarget.h>
#include <scriptaccess.h>
#include <Camera\Camera.h>
#include <Render\objects\draw.h>
#include <Mathlib\mathlibdll.h>
#include <scripttypedef.h>
#include <Menus\SubtitleScreen.h>
#include <Camera\Frustum.h>
#include <Render\objects\material.h>
#include <UserInterface\signals.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\StyleSheet.h>
#include <abilities.h>
#include <Camera\Plane3.h>
#include <ITweak.h>
#include <UserInterface\StringTable.h>
#include <UserInterface\pch.h>
#include <App\PlayerProfileMan.h>
#include <Tactics.h>
#include <UserInterface\NewUIScreenManager.h>
#include <debug\db.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Render\objects\textureregistry.h>
#include <deque>
#include <hash_map>
#include <App\PlayerProfile.h>
#include <xhash>
#include <SobWithMeshStatic.h>
#include <App\PlayerProfileGameOptions.h>
#include <seInterface2\sedefinesshared.h>
#include <util\colour.h>
#include <region.h>
#include <boost\shared_ptr.hpp>
#include <prim.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <SobRigidBodyStatic.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <GameRulesLibrary.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Menus\MenuSupport.h>
#include <gamestructimpl.h>
#include <Collision\intersect.h>
#include <UserInterface\uitypes.h>
#include <Badge.h>
#include <wchar.h>
#include <Collision\primitivesfwd.h>
#include <string>
#include <platform\inputinterface.h>
#include <renderer.h>
#include <Modifiers\ModifierTargetCache.h>
#include <fileio\filepath.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <KeyBindings.h>
#include <config.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool MenuSupport::LoadLocID(LuaConfig &lc, char const *name, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out);
extern InterfaceTexture *MenuSupport::GetTexture(char const *filename);
extern void MenuSupport::ReleaseTexture(InterfaceTexture *texture);
extern void MenuSupport::DrawNow();
extern void MenuSupport::customBreak(double value);
extern void MenuSupport::DrawLine(vector2 const &StartInGLScreen, vector2 const &EndInGLScreen, float nWidth, vector4 const &Colour);
extern void MenuSupport::DrawCircle(vector2 const &CentreInGLScreen, float nRadius, vector4 const &Colour);
extern void MenuSupport::DrawUILine(vector2 const &StartInUI, vector2 const &EndInUI, float nLineWidth, vector4 const &Colour);
extern void MenuSupport::DrawToTarget(vector2 const &StartInUI, SelTarg const &selTarget, float nLineWidth, vector4 const &Colour, float nMaxRadius);
extern void MenuSupport::DrawShipLine(Vector_2i const &pos, unsigned __int32 stubLength, vector4 const &color, unsigned __int32 width, Ship *ship);
extern void MenuSupport::DisableHW2Interface();
extern void MenuSupport::EnableHW2Interface();
extern UI::UIDialog *MenuSupport::ShowYesNoDialog(wchar_t const *message, void (*yesCallback)(UI::InterfaceElement *), void (*noCallback)(UI::InterfaceElement *));
extern void MenuSupport::FillCampaignLevelListBox(UI::NewListBox &listLevels, UI::TextListBoxItem const &templateItem, char const *campaignName, bool openLevelsOnly);
extern void MenuSupport::ActivateResourceUnitsMenu(bool activate);
extern void MenuSupport::ScrollTrackDisablePanPressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
extern void MenuSupport::ScrollTrackEnablePanReleased(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
extern void MenuSupport::ReEnablePanning();
extern void MenuSupport::DisablePanning();
extern bool MenuSupport::SelectLastLevelFromProfile(UI::NewDropDownListBox *list, bool singlePlayer);
extern void MenuSupport::OnErrorUnmatchingModsAccept(UI::InterfaceElement *e);
extern void MenuSupport::AddModRowToTable(UI::Table *table, wchar_t const *clientMod, bool cmissing, wchar_t const *serverMod, bool smissing, Color_4b const &missingColor);
extern void MenuSupport::ErrorUnmatchingMods(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &clientMods, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &serverMods);
extern bool MenuSupport::SetCurrentProfile(wchar_t const *profileName);
extern void MenuSupport::SetGameRulesFromCommandLine();
extern void MenuSupport::SetGameRulesFromProfile();
extern unsigned __int32 MenuSupport::GetNumberOfShipsInSelection(Selection const &sel);
extern void MenuSupport::ShowPauseScreen(bool show);

_static void MenuSupport::startRenderFrame();
_static void MenuSupport::endRenderFrame();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool MenuSupport::LoadLocID(LuaConfig &lc, char const *name, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out) // 0x58FB72
{
    mangled_assert("?LoadLocID@MenuSupport@@YG_NAAVLuaConfig@@PBDAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

InterfaceTexture *MenuSupport::GetTexture(char const *filename) // 0x58FAD9
{
    mangled_assert("?GetTexture@MenuSupport@@YGPAVInterfaceTexture@@PBD@Z");
    todo("implement");
}

void MenuSupport::ReleaseTexture(InterfaceTexture *texture) // 0x58FC74
{
    mangled_assert("?ReleaseTexture@MenuSupport@@YGXPAVInterfaceTexture@@@Z");
    todo("implement");
}

void MenuSupport::DrawNow() // 0x58F1C4
{
    mangled_assert("?DrawNow@MenuSupport@@YGXXZ");
    todo("implement");
}

void MenuSupport::customBreak(double value) // 0x590055
{
    mangled_assert("?customBreak@MenuSupport@@YGXN@Z");
    todo("implement");
}

void MenuSupport::DrawLine(vector2 const &StartInGLScreen, vector2 const &EndInGLScreen, float nWidth, vector4 const &Colour) // 0x58F04E
{
    mangled_assert("?DrawLine@MenuSupport@@YGXABVvector2@@0MABVvector4@@@Z");
    todo("implement");
}

void MenuSupport::DrawCircle(vector2 const &CentreInGLScreen, float nRadius, vector4 const &Colour) // 0x58EE5E
{
    mangled_assert("?DrawCircle@MenuSupport@@YGXABVvector2@@MABVvector4@@@Z");
    todo("implement");
}

void MenuSupport::DrawUILine(vector2 const &StartInUI, vector2 const &EndInUI, float nLineWidth, vector4 const &Colour) // 0x58F48F
{
    mangled_assert("?DrawUILine@MenuSupport@@YGXABVvector2@@0MABVvector4@@@Z");
    todo("implement");
}

void MenuSupport::DrawToTarget(vector2 const &StartInUI, SelTarg const &selTarget, float nLineWidth, vector4 const &Colour, float nMaxRadius) // 0x58F300
{
    mangled_assert("?DrawToTarget@MenuSupport@@YGXABVvector2@@ABVSelTarg@@MABVvector4@@M@Z");
    todo("implement");
}

void MenuSupport::DrawShipLine(Vector_2i const &pos, unsigned __int32 stubLength, vector4 const &color, unsigned __int32 width, Ship *ship) // 0x58F20C
{
    mangled_assert("?DrawShipLine@MenuSupport@@YGXABUVector_2i@@IABVvector4@@IPAVShip@@@Z");
    todo("implement");
}

void MenuSupport::DisableHW2Interface() // 0x58EDDE
{
    mangled_assert("?DisableHW2Interface@MenuSupport@@YGXXZ");
    todo("implement");
}

void MenuSupport::EnableHW2Interface() // 0x58F52F
{
    mangled_assert("?EnableHW2Interface@MenuSupport@@YGXXZ");
    todo("implement");
}

UI::UIDialog *MenuSupport::ShowYesNoDialog(wchar_t const *message, void (*yesCallback)(UI::InterfaceElement *), void (*noCallback)(UI::InterfaceElement *)) // 0x58FF31
{
    mangled_assert("?ShowYesNoDialog@MenuSupport@@YGPAVUIDialog@UI@@PB_WP6GXPAVInterfaceElement@3@@Z2@Z");
    todo("implement");
}

void MenuSupport::FillCampaignLevelListBox(UI::NewListBox &listLevels, UI::TextListBoxItem const &templateItem, char const *campaignName, bool openLevelsOnly) // 0x58F8CE
{
    mangled_assert("?FillCampaignLevelListBox@MenuSupport@@YGXAAVNewListBox@UI@@ABVTextListBoxItem@3@PBD_N@Z");
    todo("implement");
}

void MenuSupport::ActivateResourceUnitsMenu(bool activate) // 0x58ECBE
{
    mangled_assert("?ActivateResourceUnitsMenu@MenuSupport@@YGX_N@Z");
    todo("implement");
}

void MenuSupport::ScrollTrackDisablePanPressed(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x58FC84
{
    mangled_assert("?ScrollTrackDisablePanPressed@MenuSupport@@YGXPAVInterfaceElement@UI@@HHI@Z");
    todo("implement");
}

void MenuSupport::ScrollTrackEnablePanReleased(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x58FC8C
{
    mangled_assert("?ScrollTrackEnablePanReleased@MenuSupport@@YGXPAVInterfaceElement@UI@@HHI@Z");
    todo("implement");
}

void MenuSupport::ReEnablePanning() // 0x58FC3B
{
    mangled_assert("?ReEnablePanning@MenuSupport@@YGXXZ");
    todo("implement");
}

void MenuSupport::DisablePanning() // 0x58EE4B
{
    mangled_assert("?DisablePanning@MenuSupport@@YGXXZ");
    todo("implement");
}

bool MenuSupport::SelectLastLevelFromProfile(UI::NewDropDownListBox *list, bool singlePlayer) // 0x58FC94
{
    mangled_assert("?SelectLastLevelFromProfile@MenuSupport@@YG_NPAVNewDropDownListBox@UI@@_N@Z");
    todo("implement");
}

void MenuSupport::OnErrorUnmatchingModsAccept(UI::InterfaceElement *e) // 0x58FC0B
{
    mangled_assert("?OnErrorUnmatchingModsAccept@MenuSupport@@YGXPAVInterfaceElement@UI@@@Z");
    todo("implement");
}

void MenuSupport::AddModRowToTable(UI::Table *table, wchar_t const *clientMod, bool cmissing, wchar_t const *serverMod, bool smissing, Color_4b const &missingColor) // 0x58ED05
{
    mangled_assert("?AddModRowToTable@MenuSupport@@YGXPAVTable@UI@@PB_W_N12ABUColor_4b@@@Z");
    todo("implement");
}

void MenuSupport::ErrorUnmatchingMods(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &clientMods, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &serverMods) // 0x58F549
{
    mangled_assert("?ErrorUnmatchingMods@MenuSupport@@YGXABV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@0@Z");
    todo("implement");
}

bool MenuSupport::SetCurrentProfile(wchar_t const *profileName) // 0x58FD82
{
    mangled_assert("?SetCurrentProfile@MenuSupport@@YG_NPB_W@Z");
    todo("implement");
}

void MenuSupport::SetGameRulesFromCommandLine() // 0x58FE2E
{
    mangled_assert("?SetGameRulesFromCommandLine@MenuSupport@@YGXXZ");
    todo("implement");
}

void MenuSupport::SetGameRulesFromProfile() // 0x58FEAC
{
    mangled_assert("?SetGameRulesFromProfile@MenuSupport@@YGXXZ");
    todo("implement");
}

unsigned __int32 MenuSupport::GetNumberOfShipsInSelection(Selection const &sel) // 0x58FAAE
{
    mangled_assert("?GetNumberOfShipsInSelection@MenuSupport@@YGIABVSelection@@@Z");
    todo("implement");
}

void MenuSupport::ShowPauseScreen(bool show) // 0x58FF01
{
    mangled_assert("?ShowPauseScreen@MenuSupport@@YGX_N@Z");
    todo("implement");
}

/* ---------- private code */

_static void MenuSupport::startRenderFrame() // 0x59011B
{
    mangled_assert("MenuSupport::startRenderFrame");
    todo("implement");
}

_static void MenuSupport::endRenderFrame() // 0x59006D
{
    mangled_assert("MenuSupport::endRenderFrame");
    todo("implement");
}
#endif
