#if 0
/* ---------- headers */

#include "decomp.h"
#include <Menus\NewTaskbar.h>
#include <commandtype.h>
#include <gamestructimpl.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <Render\objects\textureregistry.h>
#include <sob.h>
#include <Badge.h>
#include <hash_map>
#include <sobstatic.h>
#include <HyperspaceManager.h>
#include <xstring>
#include <xhash>
#include <Collision\Primitives\sphere.h>
#include <SquadronList.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <orders.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Camera\OrbitParameters.h>
#include <orders_base.h>
#include <UserInterface\NewDropDownListBox.h>
#include <crtdefs.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\RadioButton.h>
#include <UserInterface\RadioItem.h>
#include <GameEventSys.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Mathlib\matrix3.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <platform\timer.h>
#include <seInterface2\sedefinesshared.h>
#include <Race.h>
#include <Family.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Tactics.h>
#include <boost\static_assert.hpp>
#include <type_traits>
#include <SelTarg.h>
#include <UserInterface\NewButton.h>
#include <BuildManager.h>
#include <OrderFeedback.h>
#include <xutility>
#include <CameraCommand.h>
#include <Menus\Pointer.h>
#include <utility>
#include <iosfwd>
#include <CameraHW.h>
#include <vector>
#include <Camera\CameraOrbitTarget.h>
#include <xmemory>
#include <Camera\Camera.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\obb.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Menus\FinalBuildMenu.h>
#include <map>
#include <UserInterface\Graphic.h>
#include <BuildData.h>
#include <xtree>
#include <Render\objects\texture.h>
#include <MainUI.h>
#include <boost\smart_ptr.hpp>
#include <DependencyData.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\objects.h>
#include <localizer\localizer.h>
#include <Selector.h>
#include <Render\objects\core.h>
#include <MetaSelTarg.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <SOBGroupManager.h>
#include <FamilyListMgr.h>
#include <Modifiers\ModifierUIInfo.h>
#include <FamilyList.h>
#include <ITweak.h>
#include <Render\gl\lotypes.h>
#include <MeshAnimation.h>
#include <Modifiers\ModifierMultiplier.h>
#include <gameSettings.h>
#include <Collision\BVH\octree.h>
#include <UserInterface\TextButton.h>
#include <ShieldTypes.h>
#include <Modifiers\ModifierEffect.h>
#include <syncChecking.h>
#include <Collision\BVH\span.h>
#include <UserInterface\NewText.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <Render\objects\fontsystem.h>
#include <Collision\BVH\proxy.h>
#include <Render\objects\bitmapfont.h>
#include <boost\config.hpp>
#include <cassert>
#include <Collision\intersect.h>
#include <assert.h>
#include <Collision\primitivesfwd.h>
#include <Render\gl\r_types.h>
#include <Subsystems\HardPointManager.h>
#include <DynamicPoint.h>
#include <boost\scoped_array.hpp>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Subsystems\SubSystemType.h>
#include <KeyBindings.h>
#include <Mathlib\quat.h>
#include <config.h>
#include <UserInterface\NewScrollBar.h>
#include <ParadeCommand.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <Parade.h>
#include <seInterface2\PatchBase.h>
#include <assist\typemagic.h>
#include <seInterface2\SoundParams.h>
#include <SensorsManager.h>
#include <weaponstaticinfo.h>
#include <fixedpoint.h>
#include <SoundManager\SoundManager.h>
#include <GunBinding.h>
#include <Squadron.h>
#include <Collision\Primitives\aabb.h>
#include <UserInterface\ProgressBar.h>
#include <util\fixed.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <command.h>
#include <recorder.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\NewUIScreenManager.h>
#include <weaponinfo.h>
#include <gamemsg.h>
#include <platform\keydefines.h>
#include <Menus\ShipIcons.h>
#include <dbdefines.h>
#include <SoundManager\SoundEntityHandle.h>
#include <UnitCaps\UnitCaps.h>
#include <App\AppObj.h>
#include <pathpoints.h>
#include <platform\appinterface.h>
#include <debug\db.h>
#include <GameEventDefs.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <WeaponClassSpecificInfo.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <shipHold.h>
#include <deque>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <luaconfig\luabinding.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <savegame.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <abilities.h>
#include <playerresourcetype.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <SobWithMeshStatic.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <ship.h>
#include <SobWithMesh.h>
#include <Universe.h>
#include <SobRigidBody.h>
#include <Waypoint.h>
#include <UserInterface\NewListBox.h>
#include <SobUnmoveable.h>
#include <SobRigidBodyStatic.h>
#include <DockCommand.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <UserInterface\NewUIScreen.h>
#include <Collision\BVH\profiling.h>
#include <Menus\NewLaunchMenu.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\NewTextLabel.h>
#include <sobid.h>
#include <stack>
#include <UserInterface\pch.h>
#include <wchar.h>
#include <UserInterface\uiprimitives.h>
#include <string>
#include <LevelDesc.h>
#include <swprintf.inl>
#include <Hash.h>
#include <fileio\md5.h>
#include <queue>
#include <Modifiers\ModifierAbility.h>
#include <Render\objects\cliprect.h>
#include <Menus\MenuSupport.h>
#include <shipstatic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool UI::CanShipLaunch(Ship const *s);
_static void UI::AddShipsToLaunchShipList(UI::NewDropDownListBox *list, UI::TextListBoxItem const *itemToClone, Selection const &sel);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5938E9(Selection::Observer * const, Sob *);
void UI::NewLaunchMenu::Notify_Insertion(Sob *) // 0x5938E9
{
    mangled_assert("?Notify_Insertion@NewLaunchMenu@UI@@UAEXPAVSob@@@Z");
    // __shifted(UI::NewLaunchMenu, 416);
    todo("implement");
    _sub_5938E9(this, arg);
}

_extern void _sub_5938F0(Selection::Observer * const, Sob *);
void UI::NewLaunchMenu::Notify_Removal(Sob *) // 0x5938F0
{
    mangled_assert("?Notify_Removal@NewLaunchMenu@UI@@UAEXPAVSob@@@Z");
    // __shifted(UI::NewLaunchMenu, 416);
    todo("implement");
    _sub_5938F0(this, arg);
}

_extern _sub_592D1E(UI::NewLaunchMenu *const, char const *);
UI::NewLaunchMenu::NewLaunchMenu(char const *) // 0x592D1E
{
    mangled_assert("??0NewLaunchMenu@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_592D1E(this, arg);
}

_extern void _sub_592DF2(std::_List_buy<std::pair<unsigned int const ,UI::ProgressBar *>,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > > *const);
_inline std::_List_buy<std::pair<unsigned int const ,UI::ProgressBar *>,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > >::~_List_buy<std::pair<unsigned int const ,UI::ProgressBar *>,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > >() // 0x592DF2
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBIPAVProgressBar@UI@@@std@@V?$allocator@U?$pair@$$CBIPAVProgressBar@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_592DF2(this);
}

_extern void _sub_592DFB(stdext::hash_map<unsigned int,UI::ProgressBar *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > > *const);
_inline stdext::hash_map<unsigned int,UI::ProgressBar *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > >::~hash_map<unsigned int,UI::ProgressBar *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,UI::ProgressBar *> > >() // 0x592DFB
{
    mangled_assert("??1?$hash_map@IPAVProgressBar@UI@@V?$hash_compare@IU?$less@I@std@@@stdext@@V?$allocator@U?$pair@$$CBIPAVProgressBar@UI@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_592DFB(this);
}

_extern void _sub_592E17(UI::NewLaunchMenu *const);
UI::NewLaunchMenu::~NewLaunchMenu() // 0x592E17
{
    mangled_assert("??1NewLaunchMenu@UI@@UAE@XZ");
    todo("implement");
    _sub_592E17(this);
}

_extern void _sub_593AB3(UI::NewLaunchMenu *const, LuaConfig &);
void UI::NewLaunchMenu::OnLoad(LuaConfig &) // 0x593AB3
{
    mangled_assert("?OnLoad@NewLaunchMenu@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_593AB3(this, arg);
}

_extern void _sub_593C8E(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::OnPostLoad() // 0x593C8E
{
    mangled_assert("?OnPostLoad@NewLaunchMenu@UI@@MAEXXZ");
    todo("implement");
    _sub_593C8E(this);
}

_extern void _sub_594185(UI::NewLaunchMenu *const, unsigned __int32);
void UI::NewLaunchMenu::Update(unsigned __int32) // 0x594185
{
    mangled_assert("?Update@NewLaunchMenu@UI@@UAEXI@Z");
    todo("implement");
    _sub_594185(this, arg);
}

_extern void _sub_593651(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::FillLaunchShipList() // 0x593651
{
    mangled_assert("?FillLaunchShipList@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_593651(this);
}

_extern void _sub_593237(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::FillDockedShipList() // 0x593237
{
    mangled_assert("?FillDockedShipList@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_593237(this);
}

_extern void _sub_59405F(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::SetPointerInfo() // 0x59405F
{
    mangled_assert("?SetPointerInfo@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_59405F(this);
}

_extern void _sub_593C72(UI::NewLaunchMenu *const, bool);
void UI::NewLaunchMenu::OnPostActivate(bool) // 0x593C72
{
    mangled_assert("?OnPostActivate@NewLaunchMenu@UI@@MAEX_N@Z");
    todo("implement");
    _sub_593C72(this, arg);
}

_extern void _sub_5938F7(UI::NewLaunchMenu *const, bool);
void UI::NewLaunchMenu::OnActivate(bool) // 0x5938F7
{
    mangled_assert("?OnActivate@NewLaunchMenu@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5938F7(this, arg);
}

_extern void _sub_5940D6();
void UI::NewLaunchMenu::Toggle() // 0x5940D6
{
    mangled_assert("?Toggle@NewLaunchMenu@UI@@SGXXZ");
    todo("implement");
    _sub_5940D6();
}

_extern void _sub_59410D();
void UI::NewLaunchMenu::ToggleNextShip() // 0x59410D
{
    mangled_assert("?ToggleNextShip@NewLaunchMenu@UI@@SGXXZ");
    todo("implement");
    _sub_59410D();
}

_extern void _sub_593898(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::NextShip() // 0x593898
{
    mangled_assert("?NextShip@NewLaunchMenu@UI@@QAEXXZ");
    todo("implement");
    _sub_593898(this);
}

_extern void _sub_593F9E(UI::NewLaunchMenu *const, SobID const &);
void UI::NewLaunchMenu::SetLaunchShip(SobID const &) // 0x593F9E
{
    mangled_assert("?SetLaunchShip@NewLaunchMenu@UI@@AAEXABVSobID@@@Z");
    todo("implement");
    _sub_593F9E(this, arg);
}

_extern void _sub_593206(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::Draw() // 0x593206
{
    mangled_assert("?Draw@NewLaunchMenu@UI@@UAEXXZ");
    todo("implement");
    _sub_593206(this);
}

_extern void _sub_594132(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::ToggleStayDocked() // 0x594132
{
    mangled_assert("?ToggleStayDocked@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_594132(this);
}

_extern void _sub_5939A1(UI::InterfaceElement *, __int32);
void UI::NewLaunchMenu::OnChooseLaunchShip(UI::InterfaceElement *sender, __int32 index) // 0x5939A1
{
    mangled_assert("?OnChooseLaunchShip@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_5939A1(sender, index);
}

_extern void _sub_593F4E(UI::InterfaceElement *);
void UI::NewLaunchMenu::OnStayDockedButton(UI::InterfaceElement *sender) // 0x593F4E
{
    mangled_assert("?OnStayDockedButton@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_593F4E(sender);
}

_extern void _sub_593A8F(UI::InterfaceElement *);
void UI::NewLaunchMenu::OnLaunchAllButton(UI::InterfaceElement *sender) // 0x593A8F
{
    mangled_assert("?OnLaunchAllButton@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_593A8F(sender);
}

_extern void _sub_593AA1(UI::InterfaceElement *);
void UI::NewLaunchMenu::OnLaunchButton(UI::InterfaceElement *sender) // 0x593AA1
{
    mangled_assert("?OnLaunchButton@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_593AA1(sender);
}

_extern void _sub_59375D(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::LaunchAll() // 0x59375D
{
    mangled_assert("?LaunchAll@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_59375D(this);
}

_extern void _sub_5937B7(UI::NewLaunchMenu *const);
void UI::NewLaunchMenu::LaunchSelected() // 0x5937B7
{
    mangled_assert("?LaunchSelected@NewLaunchMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_5937B7(this);
}

_extern void _sub_593A41(GameEventSys::Listener * const, GameEventSys::Event const &);
void UI::NewLaunchMenu::OnEvent(GameEventSys::Event const &) // 0x593A41
{
    mangled_assert("?OnEvent@NewLaunchMenu@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::NewLaunchMenu, 412);
    todo("implement");
    _sub_593A41(this, arg);
}

_extern void _sub_593C44(UI::InterfaceElement *);
void UI::NewLaunchMenu::OnNextShipClicked(UI::InterfaceElement *btn) // 0x593C44
{
    mangled_assert("?OnNextShipClicked@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_593C44(btn);
}

_extern void _sub_593EE3(UI::InterfaceElement *);
void UI::NewLaunchMenu::OnPrevShipClicked(UI::InterfaceElement *btn) // 0x593EE3
{
    mangled_assert("?OnPrevShipClicked@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_593EE3(btn);
}

_extern void _sub_593973(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::NewLaunchMenu::OnBuildShipIconClicked(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b) // 0x593973
{
    mangled_assert("?OnBuildShipIconClicked@NewLaunchMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_593973(info, x, y, b);
}

_extern void _sub_5936E0(UI::NewLaunchMenu *const, bool, bool);
void UI::NewLaunchMenu::FocusOnCurrentShip(bool, bool) // 0x5936E0
{
    mangled_assert("?FocusOnCurrentShip@NewLaunchMenu@UI@@AAEX_N0@Z");
    todo("implement");
    _sub_5936E0(this, arg, arg);
}

/* ---------- private code */

_extern bool _sub_5931B6(Ship const *);
_static bool UI::CanShipLaunch(Ship const *s) // 0x5931B6
{
    mangled_assert("UI::CanShipLaunch");
    todo("implement");
    bool __result = _sub_5931B6(s);
    return __result;
}

_extern void _sub_593098(UI::NewDropDownListBox *, UI::TextListBoxItem const *, Selection const &);
_static void UI::AddShipsToLaunchShipList(UI::NewDropDownListBox *list, UI::TextListBoxItem const *itemToClone, Selection const &sel) // 0x593098
{
    mangled_assert("UI::AddShipsToLaunchShipList");
    todo("implement");
    _sub_593098(list, itemToClone, sel);
}
#endif
