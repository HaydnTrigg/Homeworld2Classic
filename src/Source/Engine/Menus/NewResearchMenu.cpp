#if 0
/* ---------- headers */

#include "decomp.h"
#include <GameEventSys.h>
#include <Player.h>
#include <assist\stlexsmallvector.h>
#include <platform\cmdline.h>
#include <BuildManager.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <LevelDesc.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <Hash.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <fileio\md5.h>
#include <Render\objects\cliprect.h>
#include <crtdefs.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Collision\Primitives\obb.h>
#include <gamestructimpl.h>
#include <HyperspaceManager.h>
#include <abilities.h>
#include <Badge.h>
#include <UserInterface\NewScrollBar.h>
#include <Mathlib\matrix3.h>
#include <localizer\localizer.h>
#include <Menus\MenuSupport.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <SelTarg.h>
#include <orders.h>
#include <orders_base.h>
#include <App\Hw2Identify.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <fixedpoint.h>
#include <luaconfig\luabinding.h>
#include <util\fixed.h>
#include <gamemsg.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <UserInterface\ListBoxItem.h>
#include <boost\static_assert.hpp>
#include <vector>
#include <UserInterface\TextButton.h>
#include <xmemory>
#include <UserInterface\NewButton.h>
#include <fileio\fileioexports.h>
#include <WeaponClassSpecificInfo.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Modifiers\ModifierEffect.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <Modifiers\ModifierApplier.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <Menus\FinalBuildMenu.h>
#include <shipstatic.h>
#include <prim.h>
#include <platform\osdef.h>
#include <SquadronList.h>
#include <Menus\QueueListBoxItem.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector3.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <Render\objects\texture.h>
#include <seInterface2\PatchBase.h>
#include <Render\objects\objects.h>
#include <Render\objects\compiledtext.h>
#include <seInterface2\SoundParams.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Collision\BVH\octree.h>
#include <App\AppObj.h>
#include <Mathlib\matvec.h>
#include <Collision\BVH\span.h>
#include <platform\appinterface.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\Internal\span_i.h>
#include <util\types.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <commandtype.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <FamilyListMgr.h>
#include <assert.h>
#include <SOBGroupManager.h>
#include <FamilyList.h>
#include <Family.h>
#include <Render\gl\r_types.h>
#include <UserInterface\NewText.h>
#include <Interpolation.h>
#include <Render\objects\fontsystem.h>
#include <gameSettings.h>
#include <Render\objects\bitmapfont.h>
#include <syncChecking.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <playerresourcetype.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Race.h>
#include <platform\timer.h>
#include <platform\keydefines.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Modifiers\ModifierAbility.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <Menus\ShipIcons.h>
#include <selection.h>
#include <savegamedef.h>
#include <sob.h>
#include <boost\detail\shared_count.hpp>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\lwm_win32.hpp>
#include <BuildData.h>
#include <DependencyData.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\NewListBox.h>
#include <Universe.h>
#include <TeamColourRegistry.h>
#include <ResearchData.h>
#include <Menus\NewResearchMenu.h>
#include <ResearchManager.h>
#include <Waypoint.h>
#include <savegame.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <SobUnmoveable.h>
#include <ShieldTypes.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <sobid.h>
#include <Menus\NewTaskbar.h>
#include <Tactics.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void UI::DeleteMap<int,UI::ListBoxItem *>(std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > &map);
extern void UI::DeleteMap<int,UI::NewButton *>(std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > > &map);

_static void UI::LoadFamilyIconMap(LuaConfig &lc, std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &iconMap);

/* ---------- globals */

extern UI::NewResearchMenu *UI::NewResearchMenu::ms_researchMenu; // 0x846D08
extern UI::ResearchInfoPopup *UI::ResearchInfoPopup::ms_screen; // 0x846D04

/* ---------- private variables */

/* ---------- public code */

UI::ResearchInfoPopup::ResearchInfoPopup(char const *) // 0x596434
{
    mangled_assert("??0ResearchInfoPopup@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline std::_List_buy<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> >::~_List_buy<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> >() // 0x5964C0
{
    mangled_assert("??1?$_List_buy@PAVListBoxItem@UI@@V?$allocator@PAVListBoxItem@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,UI::NewButton *>,std::allocator<std::pair<int const ,UI::NewButton *> > >::~_Tree_buy<std::pair<int const ,UI::NewButton *>,std::allocator<std::pair<int const ,UI::NewButton *> > >() // 0x5964F0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHPAVNewButton@UI@@@std@@V?$allocator@U?$pair@$$CBHPAVNewButton@UI@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> >,0> >() // 0x5964F9
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HPAVNewButton@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVNewButton@UI@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > >::~map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > >() // 0x596514
{
    mangled_assert("??1?$map@HPAVNewButton@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVNewButton@UI@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::ResearchInfoPopup::~ResearchInfoPopup() // 0x5966A0
{
    mangled_assert("??1ResearchInfoPopup@UI@@UAE@XZ");
    todo("implement");
}

void UI::ResearchInfoPopup::Popup(__int32 right, __int32 top, __int32 h, unsigned __int32 researchId) // 0x5980AE
{
    mangled_assert("?Popup@ResearchInfoPopup@UI@@SGXHHHI@Z");
    todo("implement");
}

void UI::ResearchInfoPopup::Hide() // 0x596D14
{
    mangled_assert("?Hide@ResearchInfoPopup@UI@@SGXXZ");
    todo("implement");
}

void UI::ResearchInfoPopup::SetResearchInfo(ResearchData *) // 0x59837A
{
    mangled_assert("?SetResearchInfo@ResearchInfoPopup@UI@@AAEXPAVResearchData@@@Z");
    todo("implement");
}

void UI::ResearchInfoPopup::OnPostLoad() // 0x597E37
{
    mangled_assert("?OnPostLoad@ResearchInfoPopup@UI@@MAEXXZ");
    todo("implement");
}

UI::NewResearchMenu::NewResearchMenu(char const *) // 0x5962D6
{
    mangled_assert("??0NewResearchMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

void UI::DeleteMap<int,UI::ListBoxItem *>(std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > &map) // 0x59581F
{
    mangled_assert("??$DeleteMap@HPAVListBoxItem@UI@@@UI@@YGXAAV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@@Z");
    todo("implement");
}

void UI::DeleteMap<int,UI::NewButton *>(std::map<int,UI::NewButton *,std::less<int>,std::allocator<std::pair<int const ,UI::NewButton *> > > &map) // 0x595850
{
    mangled_assert("??$DeleteMap@HPAVNewButton@UI@@@UI@@YGXAAV?$map@HPAVNewButton@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVNewButton@UI@@@std@@@4@@std@@@Z");
    todo("implement");
}

UI::NewResearchMenu::~NewResearchMenu() // 0x596519
{
    mangled_assert("??1NewResearchMenu@UI@@UAE@XZ");
    todo("implement");
}

void UI::NewResearchMenu::FlushResearchListItems() // 0x596CC4
{
    mangled_assert("?FlushResearchListItems@NewResearchMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewResearchMenu::OnLoad(LuaConfig &) // 0x59713B
{
    mangled_assert("?OnLoad@NewResearchMenu@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnPostLoad() // 0x59737E
{
    mangled_assert("?OnPostLoad@NewResearchMenu@UI@@MAEXXZ");
    todo("implement");
}

void UI::NewResearchMenu::Update(unsigned __int32) // 0x598470
{
    mangled_assert("?Update@NewResearchMenu@UI@@UAEXI@Z");
    todo("implement");
}

void UI::NewResearchMenu::AddResearchItemsToList(std::map<int,UI::ListBoxItem *,std::less<int>,std::allocator<std::pair<int const ,UI::ListBoxItem *> > > const &, std::list<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > &) // 0x59691E
{
    mangled_assert("?AddResearchItemsToList@NewResearchMenu@UI@@AAEXABV?$map@HPAVListBoxItem@UI@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVListBoxItem@UI@@@std@@@4@@std@@AAV?$list@PAVListBoxItem@UI@@V?$allocator@PAVListBoxItem@UI@@@std@@@4@@Z");
    todo("implement");
}

void UI::NewResearchMenu::AddSingleResearchItemToList(UI::ListBoxItem *, std::list<UI::ListBoxItem *,std::allocator<UI::ListBoxItem *> > &) // 0x59695E
{
    mangled_assert("?AddSingleResearchItemToList@NewResearchMenu@UI@@AAEXPAVListBoxItem@2@AAV?$list@PAVListBoxItem@UI@@V?$allocator@PAVListBoxItem@UI@@@std@@@std@@@Z");
    todo("implement");
}

void UI::NewResearchMenu::FillResearchList(__int32) // 0x596993
{
    mangled_assert("?FillResearchList@NewResearchMenu@UI@@AAEXH@Z");
    todo("implement");
}

unsigned __int32 UI::NewResearchMenu::InsertItemUpgrades(unsigned __int32, UI::ListBoxItem *) // 0x596D2B
{
    mangled_assert("?InsertItemUpgrades@NewResearchMenu@UI@@AAEIIPAVListBoxItem@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::FlushItemUpgrades(UI::ListBoxItem *) // 0x596CAC
{
    mangled_assert("?FlushItemUpgrades@NewResearchMenu@UI@@AAEXPAVListBoxItem@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::FillResearchQueue() // 0x596B71
{
    mangled_assert("?FillResearchQueue@NewResearchMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewResearchMenu::OnActivate(bool) // 0x597056
{
    mangled_assert("?OnActivate@NewResearchMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::NewResearchMenu::Refresh() // 0x59815D
{
    mangled_assert("?Refresh@NewResearchMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewResearchMenu::Toggle() // 0x59841A
{
    mangled_assert("?Toggle@NewResearchMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::NewResearchMenu::OnUpgradeClicked(UI::InterfaceElement *sender) // 0x597FFC
{
    mangled_assert("?OnUpgradeClicked@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnUpgradeEnter(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x59805F
{
    mangled_assert("?OnUpgradeEnter@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnUpgradeExit(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5980A6
{
    mangled_assert("?OnUpgradeExit@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnFacilityClicked(UI::InterfaceElement *sender) // 0x597083
{
    mangled_assert("?OnFacilityClicked@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::SelectShowAll() // 0x59834D
{
    mangled_assert("?SelectShowAll@NewResearchMenu@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewResearchMenu::OnShowAllClicked(UI::InterfaceElement *sender) // 0x597F3C
{
    mangled_assert("?OnShowAllClicked@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::SelectFacility(unsigned __int32) // 0x59830D
{
    mangled_assert("?SelectFacility@NewResearchMenu@UI@@QAEXI@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnQueueExpand(UI::InterfaceElement *queue) // 0x597EAF
{
    mangled_assert("?OnQueueExpand@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewResearchMenu::OnPauseResearchQueue(UI::InterfaceElement *btn) // 0x597369
{
    mangled_assert("?OnPauseResearchQueue@NewResearchMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */

_static void UI::LoadFamilyIconMap(LuaConfig &lc, std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > &iconMap) // 0x596E65
{
    mangled_assert("UI::LoadFamilyIconMap");
    todo("implement");
}
#endif
