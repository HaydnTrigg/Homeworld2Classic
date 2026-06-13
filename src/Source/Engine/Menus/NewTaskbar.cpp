#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <Collision\BVH\octree.h>
#include <set>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\span.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Collision\BVH\proxy.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <Collision\intersect.h>
#include <seInterface2\SampleID.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <UserInterface\NewFrame.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\SampleBase.h>
#include <crtdefs.h>
#include <WeaponClassSpecificInfo.h>
#include <sob.h>
#include <sobstatic.h>
#include <fixedpoint.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <util\fixed.h>
#include <UserInterface\ProgressBar.h>
#include <playerresourcetype.h>
#include <gameSettings.h>
#include <Collision\Primitives\aabb.h>
#include <syncChecking.h>
#include <new>
#include <MeshAnimation.h>
#include <gamemsg.h>
#include <exception>
#include <ShieldTypes.h>
#include <xstddef>
#include <type_traits>
#include <Menus\RightClickMenu.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <GameEventDefs.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <xutility>
#include <Menus\NewTaskbar.h>
#include <Subsystems\HardPointStatic.h>
#include <utility>
#include <iosfwd>
#include <UserInterface\NewUIScreen.h>
#include <Subsystems\SubSystemType.h>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Render\objects\textureregistry.h>
#include <GameEventSys.h>
#include <seInterface2\sedefinesshared.h>
#include <Camera\CameraOrbitTarget.h>
#include <hash_map>
#include <Camera\Camera.h>
#include <xhash>
#include <Camera\Frustum.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\ListBoxItem.h>
#include <Camera\Plane3.h>
#include <Modifiers\ModifierAbility.h>
#include <math.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <list>
#include <task.h>
#include <shipstatic.h>
#include <weaponinfo.h>
#include <commandtype.h>
#include <Collision\Primitives\obb.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <map>
#include <region.h>
#include <xtree>
#include <prim.h>
#include <Collision\Primitives\capsule.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\NewListBox.h>
#include <OrderFeedback.h>
#include <TeamColourRegistry.h>
#include <SquadronList.h>
#include <savegame.h>
#include <Mathlib\vector2.h>
#include <Render\objects\cliprect.h>
#include <util\types.h>
#include <Menus\SMFiltersMenu.h>
#include <SobWithMeshStatic.h>
#include <ITweak.h>
#include <recorder.h>
#include <ship.h>
#include <Tactics.h>
#include <orders.h>
#include <boost\cstdint.hpp>
#include <SobWithMesh.h>
#include <orders_base.h>
#include <sobid.h>
#include <SobRigidBody.h>
#include <boost\config.hpp>
#include <cassert>
#include <localizer\localizer.h>
#include <HyperspaceManager.h>
#include <assert.h>
#include <SobRigidBodyStatic.h>
#include <shipHold.h>
#include <MainUI.h>
#include <Selector.h>
#include <boost\scoped_array.hpp>
#include <AttackCommand.h>
#include <KeyBindings.h>
#include <MetaSelTarg.h>
#include <AttackStyle.h>
#include <config.h>
#include <Mathlib\quat.h>
#include <Menus\DiplomacyScreen.h>
#include <gamestructimpl.h>
#include <weaponTargetInfo.h>
#include <Render\objects\textureproxy.h>
#include <LevelDesc.h>
#include <Badge.h>
#include <platform\osdef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Hash.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <fileio\md5.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <App\Hw2Identify.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <SelTarg.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\matvec.h>
#include <seInterface2\PatchBase.h>
#include <Camera\OrbitParameters.h>
#include <seInterface2\SoundParams.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\gl\lotypes.h>
#include <DynamicPoint.h>
#include <alliance.h>
#include <boost\static_assert.hpp>
#include <deque>
#include <SensorsManager.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Subsystems\Subsystem.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <MoveCommand.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Subsystems\SubsystemStatic.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <ParadeCommand.h>
#include <selection.h>
#include <Parade.h>
#include <savegamedef.h>
#include <Modifiers\ModifierUIInfo.h>
#include <boost\detail\shared_count.hpp>
#include <Modifiers\ModifierMultiplier.h>
#include <bitset>
#include <SoundManager\SoundEntityHandle.h>
#include <Modifiers\ModifierEffect.h>
#include <Squadron.h>
#include <boost\detail\lwm_win32.hpp>
#include <command.h>
#include <Render\objects\compiledtext.h>
#include <Modifiers\ModifierApplier.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <wchar.h>
#include <Menus\ShipIcons.h>
#include <UserInterface\InterfaceElement.h>
#include <abilities.h>
#include <swprintf.inl>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <weaponstaticinfo.h>
#include <queue>
#include <platform\platformexports.h>
#include <platform\timer.h>
#include <GunBinding.h>
#include <platform\keydefines.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <SOBGroupManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void UI::AddShipListToSelection(std::vector<unsigned int,std::allocator<unsigned int> > &shipList);
_static void UI::RemoveShipListFromSelection(std::vector<unsigned int,std::allocator<unsigned int> > &shipList);
_static void UI::FocusOnShipList(std::vector<unsigned int,std::allocator<unsigned int> > &shipList);
_static float UI::GetSquadHealth(Sob *sob);
_static float UI::GetSquadMaxHealthValue(Sob *sob);
_static float UI::GetShipListHealth(std::vector<unsigned int,std::allocator<unsigned int> > &shipList);
_static bool UI::IsValidForSelection(Sob *sob, bool anyShip);

/* ---------- globals */

extern UI::NewTaskbar *UI::NewTaskbar::ms_taskbar; // 0x846D0C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5990A0(UI::NewTaskbar *const, char const *);
UI::NewTaskbar::NewTaskbar(char const *) // 0x5990A0
{
    mangled_assert("??0NewTaskbar@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5990A0(this, arg);
}

_extern _sub_599173(UI::NewTaskbar::ShipButtonData *const, UI::NewTaskbar::ShipButtonData const &);
_inline UI::NewTaskbar::ShipButtonData::ShipButtonData(UI::NewTaskbar::ShipButtonData const &) // 0x599173
{
    mangled_assert("??0ShipButtonData@NewTaskbar@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
    _sub_599173(this, arg);
}

_extern _sub_599196(UI::NewTaskbar::ShipButtonData *const);
_inline UI::NewTaskbar::ShipButtonData::ShipButtonData() // 0x599196
{
    mangled_assert("??0ShipButtonData@NewTaskbar@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_599196(this);
}

_extern void _sub_5991AD(std::_List_buy<UI::NewTaskbar::ShipButtonData,std::allocator<UI::NewTaskbar::ShipButtonData> > *const);
_inline std::_List_buy<UI::NewTaskbar::ShipButtonData,std::allocator<UI::NewTaskbar::ShipButtonData> >::~_List_buy<UI::NewTaskbar::ShipButtonData,std::allocator<UI::NewTaskbar::ShipButtonData> >() // 0x5991AD
{
    mangled_assert("??1?$_List_buy@UShipButtonData@NewTaskbar@UI@@V?$allocator@UShipButtonData@NewTaskbar@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5991AD(this);
}

_extern void _sub_5991C8(UI::NewTaskbar *const);
UI::NewTaskbar::~NewTaskbar() // 0x5991C8
{
    mangled_assert("??1NewTaskbar@UI@@UAE@XZ");
    todo("implement");
    _sub_5991C8(this);
}

_extern void _sub_599255(UI::NewTaskbar::ShipButtonData *const);
_inline UI::NewTaskbar::ShipButtonData::~ShipButtonData() // 0x599255
{
    mangled_assert("??1ShipButtonData@NewTaskbar@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_599255(this);
}

_extern void _sub_599855(UI::NewTaskbar *const, LuaConfig &);
void UI::NewTaskbar::OnLoad(LuaConfig &) // 0x599855
{
    mangled_assert("?OnLoad@NewTaskbar@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_599855(this, arg);
}

_extern void _sub_5999BB(UI::NewTaskbar *const);
void UI::NewTaskbar::OnPostLoad() // 0x5999BB
{
    mangled_assert("?OnPostLoad@NewTaskbar@UI@@MAEXXZ");
    todo("implement");
    _sub_5999BB(this);
}

_extern void _sub_5993EE(UI::NewTaskbar *const);
void UI::NewTaskbar::Draw() // 0x5993EE
{
    mangled_assert("?Draw@NewTaskbar@UI@@UAEXXZ");
    todo("implement");
    _sub_5993EE(this);
}

_extern void _sub_59AA71(UI::NewTaskbar *const, unsigned __int32);
void UI::NewTaskbar::Update(unsigned __int32) // 0x59AA71
{
    mangled_assert("?Update@NewTaskbar@UI@@UAEXI@Z");
    todo("implement");
    _sub_59AA71(this, arg);
}

_extern void _sub_59AA42();
void UI::NewTaskbar::Toggle() // 0x59AA42
{
    mangled_assert("?Toggle@NewTaskbar@UI@@SGXXZ");
    todo("implement");
    _sub_59AA42();
}

_extern void _sub_59A6DF(UI::NewTaskbar *const, __int32, bool);
void UI::NewTaskbar::SetPhase(__int32, bool) // 0x59A6DF
{
    mangled_assert("?SetPhase@NewTaskbar@UI@@QAEXH_N@Z");
    todo("implement");
    _sub_59A6DF(this, arg, arg);
}

_extern UI::NewTaskbar::ShipButtonData *_sub_599481(UI::NewTaskbar *const, __int32);
UI::NewTaskbar::ShipButtonData *UI::NewTaskbar::GetButtonData(__int32) // 0x599481
{
    mangled_assert("?GetButtonData@NewTaskbar@UI@@QAEPAUShipButtonData@12@H@Z");
    todo("implement");
    UI::NewTaskbar::ShipButtonData * __result = _sub_599481(this, arg);
    return __result;
}

_extern UI::NewTaskbar::ShipButtonData *_sub_5994AF(UI::NewTaskbar *const, __int32);
UI::NewTaskbar::ShipButtonData *UI::NewTaskbar::GetButtonPreviousData(__int32) // 0x5994AF
{
    mangled_assert("?GetButtonPreviousData@NewTaskbar@UI@@QAEPAUShipButtonData@12@H@Z");
    todo("implement");
    UI::NewTaskbar::ShipButtonData * __result = _sub_5994AF(this, arg);
    return __result;
}

_extern void _sub_59A2C1(UI::InterfaceElement *);
void UI::NewTaskbar::OnShipBtnSelect(UI::InterfaceElement *sender) // 0x59A2C1
{
    mangled_assert("?OnShipBtnSelect@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59A2C1(sender);
}

_extern void _sub_599806(UI::NewTaskbar *const, bool);
void UI::NewTaskbar::OnActivate(bool) // 0x599806
{
    mangled_assert("?OnActivate@NewTaskbar@UI@@MAEX_N@Z");
    todo("implement");
    _sub_599806(this, arg);
}

_extern void _sub_59A3C4(UI::InterfaceElement *);
void UI::NewTaskbar::OnShipNext(UI::InterfaceElement *sender) // 0x59A3C4
{
    mangled_assert("?OnShipNext@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59A3C4(sender);
}

_extern void _sub_59A3D2(UI::InterfaceElement *);
void UI::NewTaskbar::OnShipPrev(UI::InterfaceElement *sender) // 0x59A3D2
{
    mangled_assert("?OnShipPrev@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59A3D2(sender);
}

_extern void _sub_59A281(UI::InterfaceElement *);
void UI::NewTaskbar::OnShipBack(UI::InterfaceElement *sender) // 0x59A281
{
    mangled_assert("?OnShipBack@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59A281(sender);
}

_extern void _sub_599831(UI::InterfaceElement *);
void UI::NewTaskbar::OnHideButton1(UI::InterfaceElement *sender) // 0x599831
{
    mangled_assert("?OnHideButton1@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_599831(sender);
}

_extern void _sub_599843(UI::InterfaceElement *);
void UI::NewTaskbar::OnHideButton2(UI::InterfaceElement *sender) // 0x599843
{
    mangled_assert("?OnHideButton2@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_599843(sender);
}

_extern void _sub_5997DC(UI::NewTaskbar *const);
void UI::NewTaskbar::NextShips() // 0x5997DC
{
    mangled_assert("?NextShips@NewTaskbar@UI@@QAEXXZ");
    todo("implement");
    _sub_5997DC(this);
}

_extern void _sub_59A4A8(UI::NewTaskbar *const);
void UI::NewTaskbar::PrevShips() // 0x59A4A8
{
    mangled_assert("?PrevShips@NewTaskbar@UI@@QAEXXZ");
    todo("implement");
    _sub_59A4A8(this);
}

_extern void _sub_599700(UI::NewTaskbar *const, std::vector<unsigned int,std::allocator<unsigned int> > &);
void UI::NewTaskbar::HighlightShips(std::vector<unsigned int,std::allocator<unsigned int> > &) // 0x599700
{
    mangled_assert("?HighlightShips@NewTaskbar@UI@@QAEXAAV?$vector@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
    _sub_599700(this, arg);
}

_extern void _sub_59A3E0(UI::InterfaceElement *);
void UI::NewTaskbar::OnSubsystemSelect(UI::InterfaceElement *sender) // 0x59A3E0
{
    mangled_assert("?OnSubsystemSelect@NewTaskbar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59A3E0(sender);
}

_extern void _sub_599809(GameEventSys::Listener * const, GameEventSys::Event const &);
void UI::NewTaskbar::OnEvent(GameEventSys::Event const &) // 0x599809
{
    mangled_assert("?OnEvent@NewTaskbar@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::NewTaskbar, 412);
    todo("implement");
    _sub_599809(this, arg);
}

_extern void _sub_59A5E9(UI::NewTaskbar *const, UI::ProgressBar *, bool, bool);
void UI::NewTaskbar::SetHealthBarColors(UI::ProgressBar *, bool, bool) // 0x59A5E9
{
    mangled_assert("?SetHealthBarColors@NewTaskbar@UI@@AAEXPAVProgressBar@2@_N1@Z");
    todo("implement");
    _sub_59A5E9(this, arg, arg, arg);
}

_extern void _sub_59A680(UI::NewTaskbar *const, UI::NewTaskbar::TaskbarButton, bool);
void UI::NewTaskbar::SetMenuButtonPressed(UI::NewTaskbar::TaskbarButton, bool) // 0x59A680
{
    mangled_assert("?SetMenuButtonPressed@NewTaskbar@UI@@QAEXW4TaskbarButton@12@_N@Z");
    todo("implement");
    _sub_59A680(this, arg, arg);
}

_extern void _sub_59A57D(UI::NewTaskbar *const, float);
void UI::NewTaskbar::SetBlackBgAlpha(float) // 0x59A57D
{
    mangled_assert("?SetBlackBgAlpha@NewTaskbar@UI@@QAEXM@Z");
    todo("implement");
    _sub_59A57D(this, arg);
}

/* ---------- private code */

_extern void _sub_599300(std::vector<unsigned int,std::allocator<unsigned int> > &);
_static void UI::AddShipListToSelection(std::vector<unsigned int,std::allocator<unsigned int> > &shipList) // 0x599300
{
    mangled_assert("UI::AddShipListToSelection");
    todo("implement");
    _sub_599300(shipList);
}

_extern void _sub_59A4E1(std::vector<unsigned int,std::allocator<unsigned int> > &);
_static void UI::RemoveShipListFromSelection(std::vector<unsigned int,std::allocator<unsigned int> > &shipList) // 0x59A4E1
{
    mangled_assert("UI::RemoveShipListFromSelection");
    todo("implement");
    _sub_59A4E1(shipList);
}

_extern void _sub_5993F3(std::vector<unsigned int,std::allocator<unsigned int> > &);
_static void UI::FocusOnShipList(std::vector<unsigned int,std::allocator<unsigned int> > &shipList) // 0x5993F3
{
    mangled_assert("UI::FocusOnShipList");
    todo("implement");
    _sub_5993F3(shipList);
}

_extern float _sub_59963E(Sob *);
_static float UI::GetSquadHealth(Sob *sob) // 0x59963E
{
    mangled_assert("UI::GetSquadHealth");
    todo("implement");
    float __result = _sub_59963E(sob);
    return __result;
}

_extern float _sub_5996CC(Sob *);
_static float UI::GetSquadMaxHealthValue(Sob *sob) // 0x5996CC
{
    mangled_assert("UI::GetSquadMaxHealthValue");
    todo("implement");
    float __result = _sub_5996CC(sob);
    return __result;
}

_extern float _sub_599597(std::vector<unsigned int,std::allocator<unsigned int> > &);
_static float UI::GetShipListHealth(std::vector<unsigned int,std::allocator<unsigned int> > &shipList) // 0x599597
{
    mangled_assert("UI::GetShipListHealth");
    todo("implement");
    float __result = _sub_599597(shipList);
    return __result;
}

_extern bool _sub_599793(Sob *, bool);
_static bool UI::IsValidForSelection(Sob *sob, bool anyShip) // 0x599793
{
    mangled_assert("UI::IsValidForSelection");
    todo("implement");
    bool __result = _sub_599793(sob, anyShip);
    return __result;
}
#endif
