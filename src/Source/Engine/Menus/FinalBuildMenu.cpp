#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\intersect.h>
#include <assist\stlexsmallvector.h>
#include <Collision\primitivesfwd.h>
#include <UserInterface\UIDialog.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <crtdefs.h>
#include <Render\objects\bitmapfont.h>
#include <orders.h>
#include <orders_base.h>
#include <WeaponClassSpecificInfo.h>
#include <BuildJobType.h>
#include <SquadronList.h>
#include <Race.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <gamemsg.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <seInterface2\SampleID.h>
#include <new>
#include <Tactics.h>
#include <Camera\Plane3.h>
#include <seInterface2\SampleBase.h>
#include <Interpolation.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <dbdefines.h>
#include <OrderFeedback.h>
#include <seInterface2\SoundParams.h>
#include <BuildManager.h>
#include <UnitCaps\UnitCaps.h>
#include <Menus\ShipIcons.h>
#include <Family.h>
#include <gameSettings.h>
#include <xutility>
#include <Modifiers\ModifierTargetCache.h>
#include <syncChecking.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UIBuildJob.h>
#include <compiler\compilerconfig.h>
#include <Modifiers\ModifierAbility.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <MeshAnimation.h>
#include <prim.h>
#include <platform\osdef.h>
#include <ShieldTypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\capsule.h>
#include <seInterface2\sedefinesshared.h>
#include <Collision\Primitives\segment.h>
#include <UserInterface\NewDropDownListBox.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\NewListBox.h>
#include <ParadeCommand.h>
#include <map>
#include <Parade.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\ProgressBar.h>
#include <boost\smart_ptr.hpp>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Subsystems\HardPointManager.h>
#include <Render\objects\texture.h>
#include <Subsystems\HardPoint.h>
#include <Player.h>
#include <Squadron.h>
#include <Render\objects\objects.h>
#include <Subsystems\HardPointStatic.h>
#include <ResearchManager.h>
#include <command.h>
#include <Render\objects\core.h>
#include <fileio\filestream.h>
#include <Subsystems\SubSystemType.h>
#include <SOBGroupManager.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Menus\Pointer.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\NewScrollBar.h>
#include <Render\gl\lotypes.h>
#include <BuildQueueStatic.h>
#include <boost\cstdint.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <shipstatic.h>
#include <boost\config.hpp>
#include <cassert>
#include <Render\objects\cliprect.h>
#include <commandtype.h>
#include <DynamicPoint.h>
#include <assert.h>
#include <weaponinfo.h>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Render\gl\r_types.h>
#include <UserInterface\ListBoxItem.h>
#include <boost\scoped_array.hpp>
#include <UserInterface\TextButton.h>
#include <BuildData.h>
#include <Menus\QueueListBoxItem.h>
#include <UserInterface\NewButton.h>
#include <DependencyData.h>
#include <sob.h>
#include <sobstatic.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\bvh.h>
#include <localizer\localizer.h>
#include <Collision\Primitives\sphere.h>
#include <playerresourcetype.h>
#include <KeyBindings.h>
#include <platform\timer.h>
#include <config.h>
#include <assist\typemagic.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <TeamColourRegistry.h>
#include <SoundManager\SoundEntityHandle.h>
#include <MultiplierTypes.h>
#include <savegame.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <SobWithMeshStatic.h>
#include <fileio\md5.h>
#include <platform\keydefines.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <pathpoints.h>
#include <SelTarg.h>
#include <SobRigidBody.h>
#include <debug\db.h>
#include <gamestructimpl.h>
#include <SobRigidBodyStatic.h>
#include <Badge.h>
#include <Menus\NewTaskbar.h>
#include <ITweak.h>
#include <luaconfig\luaconfig.h>
#include <GameEventSys.h>
#include <Menus\MenuSupport.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <BuildQueue.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <App\Hw2Identify.h>
#include <UserInterface\uitypes.h>
#include <BuildJob.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <Modifiers\ModifierUIInfo.h>
#include <selection.h>
#include <Modifiers\ModifierMultiplier.h>
#include <savegamedef.h>
#include <Modifiers\ModifierEffect.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\obb.h>
#include <Universe.h>
#include <bitset>
#include <Waypoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobUnmoveable.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <Modifiers\ModifierApplier.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\static_assert.hpp>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Render\objects\compiledtext.h>
#include <Subsystems\Subsystem.h>
#include <Menus\FinalBuildMenu.h>
#include <sobid.h>
#include <Camera\OrbitParameters.h>
#include <MainUI.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <Subsystems\SubsystemStatic.h>
#include <Selector.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <weaponstaticinfo.h>
#include <MetaSelTarg.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\StringTable.h>
#include <GunBinding.h>
#include <Menus\NewLaunchMenu.h>
#include <abilities.h>
#include <queue>
#include <Collision\BVH\octree.h>
#include <algorithm>
#include <Collision\BVH\span.h>
#include <HyperspaceManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > ItemMap;
typedef std::map<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > > FamilyElementMap;
typedef std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > > FamilyItemMap;
typedef std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > > ButtonMap;
typedef std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > FamilyUpgradeIcons;
typedef `anonymous-namespace'::LuaGameMiscLib ?A0x6584d4f6::LuaGameMiscLib;

/* ---------- prototypes */

extern bool UI::CanShipBuild(Ship *ship);
extern void UI::DumpMap(std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > > &map);

_static bool UI::IsBuilderSquadron(Squadron const *s);
_static bool UI::IsDisplayFamilySquadron(Squadron const *s, __int32 displayFamilyIndex);
_static void UI::SetHardpointLabel(UI::NewTextLabel *label, unsigned __int32 free, unsigned __int32 total, wchar_t const *fstring);

/* ---------- globals */

extern UI::FinalBuildMenu *UI::FinalBuildMenu::ms_buildMenu; // 0x846CBC
extern UI::BuildInfoPopup *UI::BuildInfoPopup::ms_screen; // 0x846CC0

/* ---------- private variables */

/* ---------- public code */

bool UI::CanShipBuild(Ship *ship) // 0x57EC6E
{
    mangled_assert("?CanShipBuild@UI@@YG_NPAVShip@@@Z");
    todo("implement");
}

UI::BuildInfoPopup::BuildInfoPopup(char const *) // 0x57D508
{
    mangled_assert("??0BuildInfoPopup@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::BuildInfoPopup::~BuildInfoPopup() // 0x57DBD5
{
    mangled_assert("??1BuildInfoPopup@UI@@UAE@XZ");
    todo("implement");
}

void UI::BuildInfoPopup::Popup(__int32 right, __int32 top, __int32 h, unsigned __int32 typeId) // 0x581AFA
{
    mangled_assert("?Popup@BuildInfoPopup@UI@@SGXHHHI@Z");
    todo("implement");
}

void UI::BuildInfoPopup::Hide() // 0x57FA4D
{
    mangled_assert("?Hide@BuildInfoPopup@UI@@SGXXZ");
    todo("implement");
}

void UI::BuildInfoPopup::OnPostLoad() // 0x580A0A
{
    mangled_assert("?OnPostLoad@BuildInfoPopup@UI@@MAEXXZ");
    todo("implement");
}

UI::CollapsableQueue::CollapsableQueue(UI::InterfaceElement *, char const *, UI::NewFrame const &) // 0x57D540
{
    mangled_assert("??0CollapsableQueue@UI@@QAE@PAVInterfaceElement@1@PBDABVNewFrame@1@@Z");
    todo("implement");
}

UI::CollapsableQueue::~CollapsableQueue() // 0x57DBFC
{
    mangled_assert("??1CollapsableQueue@UI@@UAE@XZ");
    todo("implement");
}

void UI::CollapsableQueue::Expand(bool) // 0x57EF2E
{
    mangled_assert("?Expand@CollapsableQueue@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::CollapsableQueue::InsertQueueListBoxItem(UI::QueueListBoxItem *) // 0x57FEDD
{
    mangled_assert("?InsertQueueListBoxItem@CollapsableQueue@UI@@QAEXPAVQueueListBoxItem@2@@Z");
    todo("implement");
}

void UI::CollapsableQueue::UpdateExpandCollapseButtons(unsigned __int32) // 0x5823D9
{
    mangled_assert("?UpdateExpandCollapseButtons@CollapsableQueue@UI@@AAEXI@Z");
    todo("implement");
}

void UI::CollapsableQueue::ClearQueue() // 0x57ECDF
{
    mangled_assert("?ClearQueue@CollapsableQueue@UI@@QAEXXZ");
    todo("implement");
}

void UI::CollapsableQueue::OnExpandedClicked(UI::InterfaceElement *btn) // 0x5803C6
{
    mangled_assert("?OnExpandedClicked@CollapsableQueue@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::CollapsableQueue::SetTitle(wchar_t const *) // 0x5820AE
{
    mangled_assert("?SetTitle@CollapsableQueue@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::CollapsableQueue::ConnectOnPause(void (*)(UI::InterfaceElement *)) // 0x57EDF4
{
    mangled_assert("?ConnectOnPause@CollapsableQueue@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

void UI::CollapsableQueue::FlashPauseButton(bool) // 0x57F889
{
    mangled_assert("?FlashPauseButton@CollapsableQueue@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::CollapsableQueue::SetProgressColor(Color_4b const &) // 0x58205C
{
    mangled_assert("?SetProgressColor@CollapsableQueue@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::Notify_Insertion(Squadron *) // 0x58011E
{
    mangled_assert("?Notify_Insertion@FinalBuildMenu@UI@@UAEXPAVSquadron@@@Z");
    // __shifted(UI::FinalBuildMenu, 412);
    todo("implement");
}

void UI::FinalBuildMenu::Notify_Removal(Squadron *) // 0x58017C
{
    mangled_assert("?Notify_Removal@FinalBuildMenu@UI@@UAEXPAVSquadron@@@Z");
    // __shifted(UI::FinalBuildMenu, 412);
    todo("implement");
}

void UI::FinalBuildMenu::Notify_Insertion(Sob *) // 0x580114
{
    mangled_assert("?Notify_Insertion@FinalBuildMenu@UI@@UAEXPAVSob@@@Z");
    // __shifted(UI::FinalBuildMenu, 416);
    todo("implement");
}

void UI::FinalBuildMenu::Notify_Removal(Sob *) // 0x580172
{
    mangled_assert("?Notify_Removal@FinalBuildMenu@UI@@UAEXPAVSob@@@Z");
    // __shifted(UI::FinalBuildMenu, 416);
    todo("implement");
}

UI::FinalBuildMenu::FinalBuildMenu(char const *) // 0x57D75F
{
    mangled_assert("??0FinalBuildMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline std::_List_buy<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> >::~_List_buy<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> >() // 0x57D99C
{
    mangled_assert("??1?$_List_buy@PAVInterfaceElement@UI@@V?$allocator@PAVInterfaceElement@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<UI::NewButton *,std::allocator<UI::NewButton *> >::~_List_buy<UI::NewButton *,std::allocator<UI::NewButton *> >() // 0x57D9A5
{
    mangled_assert("??1?$_List_buy@PAVNewButton@UI@@V?$allocator@PAVNewButton@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<BuildData const *,std::allocator<BuildData const *> >::~_List_buy<BuildData const *,std::allocator<BuildData const *> >() // 0x57D9AE
{
    mangled_assert("??1?$_List_buy@PBVBuildData@@V?$allocator@PBVBuildData@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,UI::InterfaceElement *>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >::~_Tree_buy<std::pair<int const ,UI::InterfaceElement *>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >() // 0x57DAC8
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,UI::ListBoxItem *>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >::~_Tree_buy<std::pair<int const ,UI::ListBoxItem *>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >() // 0x57DAD1
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > >::~_Tree_buy<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > >() // 0x57DADA
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > >::~_Tree_buy<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > >() // 0x57DAE3
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,boost::shared_ptr<UI::Graphic> >,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > > >::~_Tree_buy<std::pair<int const ,boost::shared_ptr<UI::Graphic> >,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > > >() // 0x57DAEC
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$shared_ptr@VGraphic@UI@@@boost@@@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VGraphic@UI@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,UI::ListBoxItem *>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> > >::~_Tree_buy<std::pair<unsigned int const ,UI::ListBoxItem *>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> > >() // 0x57DAF5
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVListBoxItem@UI@@@std@@V?$allocator@U?$pair@$$CBIPAVListBoxItem@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::FinalBuildMenu::~FinalBuildMenu() // 0x57DC18
{
    mangled_assert("??1FinalBuildMenu@UI@@UAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,UI::NewButton *>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> > >::~_Tree_buy<std::pair<unsigned int const ,UI::NewButton *>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> > >() // 0x57DAFE
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVNewButton@UI@@@std@@V?$allocator@U?$pair@$$CBIPAVNewButton@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> >,0> >() // 0x57DB07
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> >,0> >() // 0x57DB10
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > >,0> >() // 0x57DB19
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > >,0> >() // 0x57DB22
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,boost::shared_ptr<UI::Graphic>,std::less<int>,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,boost::shared_ptr<UI::Graphic>,std::less<int>,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > >,0> >() // 0x57DB2B
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$shared_ptr@VGraphic@UI@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VGraphic@UI@@@boost@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,UI::ListBoxItem *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,UI::ListBoxItem *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> >,0> >() // 0x57DB34
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVListBoxItem@UI@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVListBoxItem@UI@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,UI::NewButton *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,UI::NewButton *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> >,0> >() // 0x57DB3D
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVNewButton@UI@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVNewButton@UI@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >::~map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >() // 0x57DB7C
{
    mangled_assert("??1?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >::~map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >() // 0x57DB81
{
    mangled_assert("??1?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > >::~map<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > > > >() // 0x57DB86
{
    mangled_assert("??1?$map@HV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > >::~map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > >() // 0x57DB8B
{
    mangled_assert("??1?$map@HV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,boost::shared_ptr<UI::Graphic>,std::less<int>,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > > >::~map<int,boost::shared_ptr<UI::Graphic>,std::less<int>,std::allocator<std::pair<int const ,boost::shared_ptr<UI::Graphic> > > >() // 0x57DB90
{
    mangled_assert("??1?$map@HV?$shared_ptr@VGraphic@UI@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VGraphic@UI@@@boost@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,UI::ListBoxItem *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> > >::~map<unsigned int,UI::ListBoxItem *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::ListBoxItem *> > >() // 0x57DB95
{
    mangled_assert("??1?$map@IPAVListBoxItem@UI@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVListBoxItem@UI@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,UI::NewButton *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> > >::~map<unsigned int,UI::NewButton *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,UI::NewButton *> > >() // 0x57DB9A
{
    mangled_assert("??1?$map@IPAVNewButton@UI@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVNewButton@UI@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >::~pair<int const ,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >() // 0x57DB9F
{
    mangled_assert("??1?$pair@$$CBHV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >::~pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >() // 0x57DBA7
{
    mangled_assert("??1?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,boost::shared_ptr<UI::Graphic> >::~pair<int const ,boost::shared_ptr<UI::Graphic> >() // 0x57DBAF
{
    mangled_assert("??1?$pair@$$CBHV?$shared_ptr@VGraphic@UI@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >::~pair<int,std::map<int,UI::InterfaceElement *,std::less<int>,std::allocator<std::pair<int const ,UI::InterfaceElement *> > > >() // 0x57DBBB
{
    mangled_assert("??1?$pair@HV?$map@HPAVInterfaceElement@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVInterfaceElement@UI@@@std@@@4@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >::~pair<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > >() // 0x57DBC3
{
    mangled_assert("??1?$pair@HV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::FinalBuildMenu::OnPostLoad() // 0x580A5B
{
    mangled_assert("?OnPostLoad@FinalBuildMenu@UI@@MAEXXZ");
    todo("implement");
}

bool UI::FinalBuildMenu::LoadBuildShipIcon(char const *) // 0x580054
{
    mangled_assert("?LoadBuildShipIcon@FinalBuildMenu@UI@@AAE_NPBD@Z");
    todo("implement");
}

void UI::FinalBuildMenu::InitQueueItem(UI::QueueListBoxItem *, UIBuildJob const *) // 0x57FB81
{
    mangled_assert("?InitQueueItem@FinalBuildMenu@UI@@AAEXPAVQueueListBoxItem@2@PBVUIBuildJob@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::InitShipItemIcon(UI::ListBoxItem *, BuildData const *) // 0x57FC3F
{
    mangled_assert("?InitShipItemIcon@FinalBuildMenu@UI@@AAEXPAVListBoxItem@2@PBVBuildData@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::InitShipItemText(UI::InterfaceElement *, BuildData const *) // 0x57FC79
{
    mangled_assert("?InitShipItemText@FinalBuildMenu@UI@@AAEXPAVInterfaceElement@2@PBVBuildData@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnLoad(LuaConfig &) // 0x580505
{
    mangled_assert("?OnLoad@FinalBuildMenu@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::SetBuildItemState(UI::ListBoxItem *, UI::FinalBuildMenu::BuildItemState) // 0x581CF4
{
    mangled_assert("?SetBuildItemState@FinalBuildMenu@UI@@AAEXPAVListBoxItem@2@W4BuildItemState@12@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::FillBuildList(__int32) // 0x57F069
{
    mangled_assert("?FillBuildList@FinalBuildMenu@UI@@AAEXH@Z");
    todo("implement");
}

Ship *UI::FinalBuildMenu::GetCurrentBuildShipPtr() // 0x57F977
{
    mangled_assert("?GetCurrentBuildShipPtr@FinalBuildMenu@UI@@QAEPAVShip@@XZ");
    todo("implement");
}

void UI::FinalBuildMenu::SetPointerInfo() // 0x581FF2
{
    mangled_assert("?SetPointerInfo@FinalBuildMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnPostActivate(bool) // 0x5809EE
{
    mangled_assert("?OnPostActivate@FinalBuildMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnActivate(bool) // 0x5802A0
{
    mangled_assert("?OnActivate@FinalBuildMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::FinalBuildMenu::ToggleNextShip() // 0x582174
{
    mangled_assert("?ToggleNextShip@FinalBuildMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::Toggle() // 0x5820CF
{
    mangled_assert("?Toggle@FinalBuildMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::NextShip() // 0x5800C3
{
    mangled_assert("?NextShip@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnAcceptReplaceSubSystem(UI::InterfaceElement *e) // 0x5801C1
{
    mangled_assert("?OnAcceptReplaceSubSystem@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnShipListItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x5817AC
{
    mangled_assert("?OnShipListItemClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::HotKeySendBuildOrder(unsigned __int32) // 0x57FAA0
{
    mangled_assert("?HotKeySendBuildOrder@FinalBuildMenu@UI@@QAEXI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::HotKeySendPauseShipOrder() // 0x57FB71
{
    mangled_assert("?HotKeySendPauseShipOrder@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::HotKeySendPauseSubSystemOrder() // 0x57FB79
{
    mangled_assert("?HotKeySendPauseSubSystemOrder@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::UpdateUnitCapsLabel(unsigned __int32, UI::NewTextLabel *) // 0x582556
{
    mangled_assert("?UpdateUnitCapsLabel@FinalBuildMenu@UI@@AAEXIPAVNewTextLabel@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::UpdateFamilyUnitCapsHeader(unsigned __int32) // 0x582451
{
    mangled_assert("?UpdateFamilyUnitCapsHeader@FinalBuildMenu@UI@@AAEXI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnFacilityClicked(UI::InterfaceElement *sender) // 0x580415
{
    mangled_assert("?OnFacilityClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnShowAllClicked(UI::InterfaceElement *sender) // 0x5819BD
{
    mangled_assert("?OnShowAllClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::ValidateFacilityButtons(Ship *) // 0x582686
{
    mangled_assert("?ValidateFacilityButtons@FinalBuildMenu@UI@@AAEXPAVShip@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::SetBuildShip(SobID const &, bool) // 0x581E4E
{
    mangled_assert("?SetBuildShip@FinalBuildMenu@UI@@QAEXABVSobID@@_N@Z");
    todo("implement");
}

void UI::FinalBuildMenu::SelectFacility(unsigned __int32) // 0x581C6D
{
    mangled_assert("?SelectFacility@FinalBuildMenu@UI@@QAEXI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::SelectShowAll() // 0x581CA7
{
    mangled_assert("?SelectShowAll@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnChooseBuildShipSelect(UI::InterfaceElement *sender, __int32 index) // 0x58033E
{
    mangled_assert("?OnChooseBuildShipSelect@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::FinalBuildMenu::Update(unsigned __int32) // 0x5821A0
{
    mangled_assert("?Update@FinalBuildMenu@UI@@UAEXI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::AddBuildShipsToDropDownList(Selection const &) // 0x57EB09
{
    mangled_assert("?AddBuildShipsToDropDownList@FinalBuildMenu@UI@@AAEXABVSelection@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::PurgeBuildShipsFromDropDownList() // 0x581C34
{
    mangled_assert("?PurgeBuildShipsFromDropDownList@FinalBuildMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnChooseBuildShipMouseReleased(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x58032F
{
    mangled_assert("?OnChooseBuildShipMouseReleased@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::FocusOnCurrentShip(bool, bool) // 0x57F8B6
{
    mangled_assert("?FocusOnCurrentShip@FinalBuildMenu@UI@@QAEX_N0@Z");
    todo("implement");
}

bool UI::FinalBuildMenu::FileDoesExist(char const *) // 0x57F003
{
    mangled_assert("?FileDoesExist@FinalBuildMenu@UI@@AAE_NPBD@Z");
    todo("implement");
}

void UI::FinalBuildMenu::Draw() // 0x57EDFF
{
    mangled_assert("?Draw@FinalBuildMenu@UI@@UAEXXZ");
    todo("implement");
}

UI::NewFrame *UI::FinalBuildMenu::GetCollapsableQueueToClone() // 0x57F931
{
    mangled_assert("?GetCollapsableQueueToClone@FinalBuildMenu@UI@@SGPAVNewFrame@2@XZ");
    todo("implement");
}

void UI::DumpMap(std::map<int,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > >,std::less<int>,std::allocator<std::pair<int const ,std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > > > > &map) // 0x57EE30
{
    mangled_assert("?DumpMap@UI@@YGXAAV?$map@HV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@std@@@2@@std@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnQueueExpand(UI::InterfaceElement *queue) // 0x58171F
{
    mangled_assert("?OnQueueExpand@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::FillQueueWithType(BuildType, UI::CollapsableQueue *, BuildQueue *) // 0x57F684
{
    mangled_assert("?FillQueueWithType@FinalBuildMenu@UI@@AAEXW4BuildType@@PAVCollapsableQueue@2@PAVBuildQueue@@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::FillQueues() // 0x57F7C1
{
    mangled_assert("?FillQueues@FinalBuildMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnPauseShipQueue(UI::InterfaceElement *btn) // 0x580978
{
    mangled_assert("?OnPauseShipQueue@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::HotKeyCancelBuildShip() // 0x57FA64
{
    mangled_assert("?HotKeyCancelBuildShip@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnPauseSubsystemQueue(UI::InterfaceElement *btn) // 0x5809B3
{
    mangled_assert("?OnPauseSubsystemQueue@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::HotKeyCancelBuildSubSystem() // 0x57FA82
{
    mangled_assert("?HotKeyCancelBuildSubSystem@FinalBuildMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnShowShipItemInfo(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b) // 0x581AB1
{
    mangled_assert("?OnShowShipItemInfo@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnHideShipItemInfo(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b) // 0x5804FD
{
    mangled_assert("?OnHideShipItemInfo@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

bool UI::FinalBuildMenu::IsBuildFamilyRestricted(unsigned __int32) // 0x57FF79
{
    mangled_assert("?IsBuildFamilyRestricted@FinalBuildMenu@UI@@AAE_NI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnNextShipClicked(UI::InterfaceElement *btn) // 0x58096A
{
    mangled_assert("?OnNextShipClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnPrevShipClicked(UI::InterfaceElement *btn) // 0x5816CD
{
    mangled_assert("?OnPrevShipClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::FinalBuildMenu::OnBuildShipIconClicked(UI::InterfaceElement *info, __int32 x, __int32 y, unsigned __int32 b) // 0x58031D
{
    mangled_assert("?OnBuildShipIconClicked@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::UpdateSubsystemHardpoints() // 0x582463
{
    mangled_assert("?UpdateSubsystemHardpoints@FinalBuildMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::FinalBuildMenu::OnShipListMousePressed(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 b) // 0x5819BA
{
    mangled_assert("?OnShipListMousePressed@FinalBuildMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::FinalBuildMenu::FillBuildShipList() // 0x57F609
{
    mangled_assert("?FillBuildShipList@FinalBuildMenu@UI@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static bool UI::IsBuilderSquadron(Squadron const *s) // 0x580024
{
    mangled_assert("UI::IsBuilderSquadron");
    todo("implement");
}

_static bool UI::IsDisplayFamilySquadron(Squadron const *s, __int32 displayFamilyIndex) // 0x580032
{
    mangled_assert("UI::IsDisplayFamilySquadron");
    todo("implement");
}

_static void UI::SetHardpointLabel(UI::NewTextLabel *label, unsigned __int32 free, unsigned __int32 total, wchar_t const *fstring) // 0x581F9F
{
    mangled_assert("UI::SetHardpointLabel");
    todo("implement");
}
#endif
