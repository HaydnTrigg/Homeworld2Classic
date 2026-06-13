#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <MoveCommand.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <UserInterface\NewFrame.h>
#include <Interpolation.h>
#include <crtdefs.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <orders.h>
#include <orders_base.h>
#include <Mathlib\matrix3.h>
#include <Modifiers\ModifierTargetCache.h>
#include <new>
#include <gamemsg.h>
#include <exception>
#include <xstddef>
#include <seInterface2\sedefinesshared.h>
#include <type_traits>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <DynamicPoint.h>
#include <AttackCommand.h>
#include <vector>
#include <AttackStyle.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\textureregistry.h>
#include <weaponTargetInfo.h>
#include <hash_map>
#include <xhash>
#include <Parade.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewUIScreenManager.h>
#include <stack>
#include <gameSettings.h>
#include <syncChecking.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <list>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <mainuidefines.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\NewListBox.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <TacticalOverlay.h>
#include <Mathlib\vector2.h>
#include <Render\objects\cliprect.h>
#include <sob.h>
#include <util\types.h>
#include <sobstatic.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <localizer\localizer.h>
#include <assert.h>
#include <UserInterface\UICoord.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Subsystems\HardPointManager.h>
#include <boost\scoped_array.hpp>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <Camera\OrbitParameters.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <MainUI.h>
#include <task.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <SelTarg.h>
#include <ParadeCommand.h>
#include <UserInterface\Graphic.h>
#include <SensorsManager.h>
#include <commandtype.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <SoundManager\SoundManager.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <weaponinfo.h>
#include <Squadron.h>
#include <Render\objects\core.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <command.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <region.h>
#include <prim.h>
#include <Collision\Primitives\obb.h>
#include <debug\db.h>
#include <SoundManager\SoundEntityHandle.h>
#include <DockCommand.h>
#include <Render\gl\lotypes.h>
#include <LevelDesc.h>
#include <deque>
#include <Hash.h>
#include <fileio\md5.h>
#include <TeamColourRegistry.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <savegame.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <gamestructimpl.h>
#include <selection.h>
#include <Badge.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Menus\RightClickMenu.h>
#include <SobWithMeshStatic.h>
#include <bitset>
#include <UserInterface\NewUIScreen.h>
#include <boost\detail\lwm_win32.hpp>
#include <abilities.h>
#include <ship.h>
#include <Render\objects\compiledtext.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Tactics.h>
#include <platform\timer.h>
#include <KeyBindings.h>
#include <SobRigidBodyStatic.h>
#include <config.h>
#include <sobid.h>
#include <OrderFeedback.h>
#include <UserInterface\TextButton.h>
#include <seInterface2\SampleID.h>
#include <SquadronList.h>
#include <UserInterface\NewButton.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <seInterface2\SampleBase.h>
#include <UserInterface\InterfaceElement.h>
#include <Collision\BVH\span.h>
#include <UserInterface\uitypes.h>
#include <Collision\BVH\Internal\span_i.h>
#include <platform\inputinterface.h>
#include <Collision\BVH\proxy.h>
#include <queue>
#include <platform\platformexports.h>
#include <Collision\intersect.h>
#include <boost\static_assert.hpp>
#include <platform\keydefines.h>
#include <UserInterface\NewText.h>
#include <Collision\primitivesfwd.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5A4F52(UI::RightClickMenu *const, char const *);
UI::RightClickMenu::RightClickMenu(char const *) // 0x5A4F52
{
    mangled_assert("??0RightClickMenu@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5A4F52(this, arg);
}

_extern void _sub_5A4FCD(UI::RightClickMenu *const);
UI::RightClickMenu::~RightClickMenu() // 0x5A4FCD
{
    mangled_assert("??1RightClickMenu@UI@@UAE@XZ");
    todo("implement");
    _sub_5A4FCD(this);
}

_extern void _sub_5A6803(UI::RightClickMenu *const);
void UI::RightClickMenu::OnPostLoad() // 0x5A6803
{
    mangled_assert("?OnPostLoad@RightClickMenu@UI@@MAEXXZ");
    todo("implement");
    _sub_5A6803(this);
}

_extern void _sub_5A57D8(UI::RightClickMenu *const, bool);
void UI::RightClickMenu::OnActivate(bool) // 0x5A57D8
{
    mangled_assert("?OnActivate@RightClickMenu@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5A57D8(this, arg);
}

_extern UI::InterfaceElement *_sub_5A5026(UI::RightClickMenu *const, wchar_t const *, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32), __int32);
UI::InterfaceElement *UI::RightClickMenu::AddMenuItem(wchar_t const *, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32), __int32) // 0x5A5026
{
    mangled_assert("?AddMenuItem@RightClickMenu@UI@@AAEPAVInterfaceElement@2@PB_WP6GXPAV32@HHI@ZH@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_5A5026(this, arg, arg, arg);
    return __result;
}

_extern UI::InterfaceElement *_sub_5A50FD(UI::RightClickMenu *const, wchar_t const *);
UI::InterfaceElement *UI::RightClickMenu::AddMenuLabel(wchar_t const *) // 0x5A50FD
{
    mangled_assert("?AddMenuLabel@RightClickMenu@UI@@AAEPAVInterfaceElement@2@PB_W@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_5A50FD(this, arg);
    return __result;
}

_extern UI::InterfaceElement *_sub_5A688D(UI::RightClickMenu *const, wchar_t const *);
UI::InterfaceElement *UI::RightClickMenu::StartSubMenu(wchar_t const *) // 0x5A688D
{
    mangled_assert("?StartSubMenu@RightClickMenu@UI@@AAEPAVInterfaceElement@2@PB_W@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_5A688D(this, arg);
    return __result;
}

_extern void _sub_5A517E(UI::RightClickMenu *const);
void UI::RightClickMenu::EndSubMenu() // 0x5A517E
{
    mangled_assert("?EndSubMenu@RightClickMenu@UI@@AAEXXZ");
    todo("implement");
    _sub_5A517E(this);
}

_extern void _sub_5A5160(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::CloseMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5160
{
    mangled_assert("?CloseMenu@RightClickMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5160(sender, x, y, b);
}

_extern void _sub_5A670F(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::OnOpenSubMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A670F
{
    mangled_assert("?OnOpenSubMenu@RightClickMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A670F(sender, x, y, b);
}

_extern void _sub_5A667C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::OnCloseSubMenu(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A667C
{
    mangled_assert("?OnCloseSubMenu@RightClickMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A667C(sender, x, y, b);
}

_extern void _sub_5A5424(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Move(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5424
{
    mangled_assert("?Menu_Move@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5424(sender, x, y, b);
}

_extern void _sub_5A5216(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Attack(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5216
{
    mangled_assert("?Menu_Attack@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5216(sender, x, y, b);
}

_extern void _sub_5A5389(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Guard(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5389
{
    mangled_assert("?Menu_Guard@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5389(sender, x, y, b);
}

_extern void _sub_5A5331(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Dock(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5331
{
    mangled_assert("?Menu_Dock@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5331(sender, x, y, b);
}

_extern void _sub_5A57C3(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Waypoint(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A57C3
{
    mangled_assert("?Menu_Waypoint@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A57C3(sender, x, y, b);
}

_extern void _sub_5A5604(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Stop(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5604
{
    mangled_assert("?Menu_Stop@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5604(sender, x, y, b);
}

_extern void _sub_5A553A(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Retire(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A553A
{
    mangled_assert("?Menu_Retire@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A553A(sender, x, y, b);
}

_extern void _sub_5A53CC(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Harvest(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A53CC
{
    mangled_assert("?Menu_Harvest@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A53CC(sender, x, y, b);
}

_extern void _sub_5A54F7(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Repair(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A54F7
{
    mangled_assert("?Menu_Repair@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A54F7(sender, x, y, b);
}

_extern void _sub_5A5374(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Focus(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5374
{
    mangled_assert("?Menu_Focus@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5374(sender, x, y, b);
}

_extern void _sub_5A52B1(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_DefenseField(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A52B1
{
    mangled_assert("?Menu_DefenseField@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A52B1(sender, x, y, b);
}

_extern void _sub_5A529C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Cloak(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A529C
{
    mangled_assert("?Menu_Cloak@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A529C(sender, x, y, b);
}

_extern void _sub_5A5259(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Capture(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5259
{
    mangled_assert("?Menu_Capture@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5259(sender, x, y, b);
}

_extern void _sub_5A55A7(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_SpecialAttack(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A55A7
{
    mangled_assert("?Menu_SpecialAttack@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A55A7(sender, x, y, b);
}

_extern void _sub_5A5592(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_SensorPing(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5592
{
    mangled_assert("?Menu_SensorPing@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5592(sender, x, y, b);
}

_extern void _sub_5A540F(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Mines(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A540F
{
    mangled_assert("?Menu_Mines@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A540F(sender, x, y, b);
}

_extern void _sub_5A557D(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Scuttle(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A557D
{
    mangled_assert("?Menu_Scuttle@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A557D(sender, x, y, b);
}

_extern void _sub_5A51AB(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Aggressive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A51AB
{
    mangled_assert("?Menu_Aggressive@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A51AB(sender, x, y, b);
}

_extern void _sub_5A52C6(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Defensive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A52C6
{
    mangled_assert("?Menu_Defensive@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A52C6(sender, x, y, b);
}

_extern void _sub_5A548C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Passive(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A548C
{
    mangled_assert("?Menu_Passive@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A548C(sender, x, y, b);
}

_extern void _sub_5A5439(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Overlay1(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5439
{
    mangled_assert("?Menu_Overlay1@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5439(sender, x, y, b);
}

_extern void _sub_5A544A(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Overlay2(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A544A
{
    mangled_assert("?Menu_Overlay2@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A544A(sender, x, y, b);
}

_extern void _sub_5A545B(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Overlay3(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A545B
{
    mangled_assert("?Menu_Overlay3@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A545B(sender, x, y, b);
}

_extern void _sub_5A546C(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Overlay4(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A546C
{
    mangled_assert("?Menu_Overlay4@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A546C(sender, x, y, b);
}

_extern void _sub_5A547D(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_OverlayOff(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A547D
{
    mangled_assert("?Menu_OverlayOff@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A547D(sender, x, y, b);
}

_extern void _sub_5A5619(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Strike1(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5619
{
    mangled_assert("?Menu_Strike1@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5619(sender, x, y, b);
}

_extern void _sub_5A5684(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Strike2(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A5684
{
    mangled_assert("?Menu_Strike2@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A5684(sender, x, y, b);
}

_extern void _sub_5A56EF(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_Strike3(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A56EF
{
    mangled_assert("?Menu_Strike3@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A56EF(sender, x, y, b);
}

_extern void _sub_5A575A(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::RightClickMenu::Menu_StrikeLeave(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A575A
{
    mangled_assert("?Menu_StrikeLeave@RightClickMenu@UI@@SGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A575A(sender, x, y, b);
}

/* ---------- private code */
#endif
