#if 0
/* ---------- headers */

#include "decomp.h"
#include <weaponinfo.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <playerresourcetype.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <WeaponClassSpecificInfo.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <RepairByLatchingCommand.h>
#include <stack>
#include <Family.h>
#include <Mathlib\matrix3.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <resourceCommand.h>
#include <ITweak.h>
#include <SobWithMesh.h>
#include <LayMinesCommand.h>
#include <Pieplate.h>
#include <SobRigidBody.h>
#include <xfunctional>
#include <sob.h>
#include <RallyParadeCommand.h>
#include <sobstatic.h>
#include <new>
#include <AttackMoveCommand.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <exception>
#include <xstddef>
#include <ATITemplate.h>
#include <Race.h>
#include <type_traits>
#include <LaunchCommand.h>
#include <ATI.h>
#include <StrikeGroupFormationNode.h>
#include <MeshAnimation.h>
#include <StrikeGroup.h>
#include <ShieldTypes.h>
#include <MoveCommand.h>
#include <xutility>
#include <gamemsg.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Collision\BVH\octree.h>
#include <xmemory>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <BuildManager.h>
#include <fileio\fileioexports.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <shipHold.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <Ship\FormationTargetInfo.h>
#include <Modifiers\ModifierAbility.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <HyperSpaceViaGateCommand.h>
#include <math.h>
#include <Camera\OrbitParameters.h>
#include <list>
#include <ParadeCommand.h>
#include <SOBGroupManager.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <waypointMoveCommand.h>
#include <platform\osdef.h>
#include <OrderFeedback.h>
#include <Mathlib\vector3.h>
#include <SquadronList.h>
#include <Mathlib\vector4.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <map>
#include <xtree>
#include <abilities.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\debugrender.h>
#include <GameEventDefs.h>
#include <Render\objects\core.h>
#include <GameEventSys.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <SalvageCommand.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <platform\timer.h>
#include <util\types.h>
#include <assist\stlexvector.h>
#include <platform\platformexports.h>
#include <Tactics.h>
#include <Player.h>
#include <ResearchManager.h>
#include <alliance.h>
#include <CameraCommand.h>
#include <LevelDesc.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <DeSpawnCommand.h>
#include <CameraHW.h>
#include <Hash.h>
#include <Camera\CameraOrbitTarget.h>
#include <fileio\md5.h>
#include <boost\config.hpp>
#include <Ship\Formation.h>
#include <App\Hw2Identify.h>
#include <Camera\Camera.h>
#include <Ship\FormationPattern.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <DockCommand.h>
#include <gamestructimpl.h>
#include <Render\gl\r_types.h>
#include <Badge.h>
#include <SelTarg.h>
#include <Mathlib\quat.h>
#include <orders.h>
#include <prim.h>
#include <FormHyperspaceGateCommand.h>
#include <orders_base.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <CaptureManager.h>
#include <Collision\Primitives\capsule.h>
#include <HyperSpaceCommand.h>
#include <LatchPointManager.h>
#include <Collision\Primitives\segment.h>
#include <HyperSpaceBaseCommand.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\mathlibdll.h>
#include <DynamicPoint.h>
#include <Mathlib\fastmath.h>
#include <Modifiers\ModifierTargetCache.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <boost\static_assert.hpp>
#include <debug\db.h>
#include <Universe.h>
#include <seInterface2\PatchID.h>
#include <GuardCommand.h>
#include <Waypoint.h>
#include <seInterface2\PatchBase.h>
#include <idlecommand.h>
#include <TrailTargetCommand.h>
#include <SobUnmoveable.h>
#include <seInterface2\SoundParams.h>
#include <deque>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Modifiers\ModifierUIInfo.h>
#include <selection.h>
#include <Modifiers\ModifierMultiplier.h>
#include <savegamedef.h>
#include <Modifiers\ModifierEffect.h>
#include <boost\detail\shared_count.hpp>
#include <profile\profile.h>
#include <iostream>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <config.h>
#include <HyperspaceManager.h>
#include <Modifiers\ModifierApplier.h>
#include <FormationCommands\FormationCommand.h>
#include <CaptureCommand.h>
#include <AttackCommand.h>
#include <Squadron.h>
#include <shipstatic.h>
#include <AttackStyle.h>
#include <command.h>
#include <wchar.h>
#include <weaponstaticinfo.h>
#include <string>
#include <sobid.h>
#include <GunBinding.h>
#include <MoveToSobCommand.h>
#include <weaponTargetInfo.h>
#include <queue>
#include <RetireCommand.h>
#include <algorithm>
#include <Parade.h>
#include <hash_map>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool isEnemy(Sob *sob, void *vPlayer);

_static bool badRetaliationTarget(Sob const *sob, void *vPlayer);

/* ---------- globals */

extern char const Squadron::m_saveToken[0]; // 0x791828
extern SaveData const Squadron::m_saveData[17]; // 0x791608

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B758B(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > const &) // 0x4B758B
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UOrderFeedbackInfo@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4B758B(this, arg);
}

_extern _sub_4B75CD(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > const &) // 0x4B75CD
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UOrderFeedbackInfo@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4B75CD(this, arg);
}

_extern _sub_4B784C(Squadron *const, Selection const &, char const *);
Squadron::Squadron(Selection const &, char const *) // 0x4B784C
{
    mangled_assert("??0Squadron@@QAE@ABVSelection@@PBD@Z");
    todo("implement");
    _sub_4B784C(this, arg, arg);
}

_extern void _sub_4B8385(Selection::Observer * const, Sob *);
void Squadron::Notify_Insertion(Sob *) // 0x4B8385
{
    mangled_assert("?Notify_Insertion@Squadron@@EAEXPAVSob@@@Z");
    // __shifted(Squadron, 12);
    todo("implement");
    _sub_4B8385(this, arg);
}

_extern void _sub_4B8388(Selection::Observer * const, Sob *);
void Squadron::Notify_Removal(Sob *) // 0x4B8388
{
    mangled_assert("?Notify_Removal@Squadron@@EAEXPAVSob@@@Z");
    // __shifted(Squadron, 12);
    todo("implement");
    _sub_4B8388(this, arg);
}

_extern void _sub_4BB2D8(Squadron *const, unsigned __int32);
void Squadron::setID(unsigned __int32) // 0x4BB2D8
{
    mangled_assert("?setID@Squadron@@QAEXI@Z");
    todo("implement");
    _sub_4BB2D8(this, arg);
}

_extern void _sub_4B8C1C(Squadron *const);
void Squadron::anesthetize() // 0x4B8C1C
{
    mangled_assert("?anesthetize@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8C1C(this);
}

_extern void _sub_4BB07D(Squadron *const);
void Squadron::rouse() // 0x4BB07D
{
    mangled_assert("?rouse@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BB07D(this);
}

_extern void _sub_4B8CA6(Squadron *const);
void Squadron::anesthetizeSquadronOnly() // 0x4B8CA6
{
    mangled_assert("?anesthetizeSquadronOnly@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8CA6(this);
}

_extern void _sub_4BB140(Squadron *const);
void Squadron::rouseSquadronOnly() // 0x4BB140
{
    mangled_assert("?rouseSquadronOnly@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BB140(this);
}

_extern void _sub_4B8C8B(Squadron *const, Ship *);
void Squadron::anesthetizeSingleShip(Ship *) // 0x4B8C8B
{
    mangled_assert("?anesthetizeSingleShip@Squadron@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B8C8B(this, arg);
}

_extern void _sub_4BB0EC(Squadron *const, Ship *);
void Squadron::rouseSingleShip(Ship *) // 0x4BB0EC
{
    mangled_assert("?rouseSingleShip@Squadron@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_4BB0EC(this, arg);
}

_extern void _sub_4B8C4D(Squadron *const, Formation *);
void Squadron::anesthetizeFormation(Formation *) // 0x4B8C4D
{
    mangled_assert("?anesthetizeFormation@Squadron@@QAEXPAVFormation@@@Z");
    todo("implement");
    _sub_4B8C4D(this, arg);
}

_extern void _sub_4BB0AE(Squadron *const, Formation *);
void Squadron::rouseFormation(Formation *) // 0x4BB0AE
{
    mangled_assert("?rouseFormation@Squadron@@QAEXPAVFormation@@@Z");
    todo("implement");
    _sub_4BB0AE(this, arg);
}

_extern void _sub_4B8AE1(Squadron *const, Ship *);
void Squadron::addShip(Ship *) // 0x4B8AE1
{
    mangled_assert("?addShip@Squadron@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B8AE1(this, arg);
}

_extern bool _sub_4B9A98(Squadron const *const);
bool Squadron::isInHyperspace() const // 0x4B9A98
{
    mangled_assert("?isInHyperspace@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B9A98(this);
    return __result;
}

_extern void _sub_4BB2E5(Squadron *const, bool);
void Squadron::setInHyperspace(bool) // 0x4BB2E5
{
    mangled_assert("?setInHyperspace@Squadron@@QAEX_N@Z");
    todo("implement");
    _sub_4BB2E5(this, arg);
}

_extern bool _sub_4B99F5(Squadron const *const);
bool Squadron::isAttacking() const // 0x4B99F5
{
    mangled_assert("?isAttacking@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B99F5(this);
    return __result;
}

_extern bool _sub_4B9A1D(Squadron const *const);
bool Squadron::isBeingAttacked() const // 0x4B9A1D
{
    mangled_assert("?isBeingAttacked@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B9A1D(this);
    return __result;
}

_extern void _sub_4B9798(Squadron const *const, Selection &, unsigned __int32);
void Squadron::getShipsInRetaliationRange(Selection &, unsigned __int32) const // 0x4B9798
{
    mangled_assert("?getShipsInRetaliationRange@Squadron@@QBEXAAVSelection@@I@Z");
    todo("implement");
    _sub_4B9798(this, arg, arg);
}

_extern void _sub_4B8EE1(Squadron *const);
void Squadron::cleanUpSquadron() // 0x4B8EE1
{
    mangled_assert("?cleanUpSquadron@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8EE1(this);
}

_extern void _sub_4B7B3B(Squadron *const);
Squadron::~Squadron() // 0x4B7B3B
{
    mangled_assert("??1Squadron@@UAE@XZ");
    todo("implement");
    _sub_4B7B3B(this);
}

_extern OrderFeedbackInfo &_sub_4B7C82(OrderFeedbackInfo *const, OrderFeedbackInfo const &);
_inline OrderFeedbackInfo &OrderFeedbackInfo::operator=(OrderFeedbackInfo const &) // 0x4B7C82
{
    mangled_assert("??4OrderFeedbackInfo@@QAEAAU0@ABU0@@Z");
    compiler_generated();
    todo("implement");
    OrderFeedbackInfo & __result = _sub_4B7C82(this, arg);
    return __result;
}

_extern void _sub_4BAEB3(std::list<Squadron *,std::allocator<Squadron *> > const &);
void Squadron::removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons) // 0x4BAEB3
{
    mangled_assert("?removeAllFromTheirStrikeGroup@Squadron@@SGXABV?$list@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@Z");
    todo("implement");
    _sub_4BAEB3(squadrons);
}

_extern void _sub_4BB4E3(Squadron *const, StrikeGroup *);
void Squadron::unsetStrikeGroupPointer(StrikeGroup *) // 0x4BB4E3
{
    mangled_assert("?unsetStrikeGroupPointer@Squadron@@QAEXPAVStrikeGroup@@@Z");
    todo("implement");
    _sub_4BB4E3(this, arg);
}

_extern void _sub_4BAED2(Squadron *const);
void Squadron::removeFromStrikeGroup() // 0x4BAED2
{
    mangled_assert("?removeFromStrikeGroup@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BAED2(this);
}

_extern void _sub_4B8B8E(Squadron *const, StrikeGroup *);
void Squadron::addToStrikeGroup(StrikeGroup *) // 0x4B8B8E
{
    mangled_assert("?addToStrikeGroup@Squadron@@QAEXPAVStrikeGroup@@@Z");
    todo("implement");
    _sub_4B8B8E(this, arg);
}

_extern void _sub_4BB343(Squadron *const, Player *);
void Squadron::setPlayerOwner(Player *) // 0x4BB343
{
    mangled_assert("?setPlayerOwner@Squadron@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_4BB343(this, arg);
}

_extern Player *_sub_4B94FC(Squadron const *const);
Player *Squadron::getPlayerOwner() const // 0x4B94FC
{
    mangled_assert("?getPlayerOwner@Squadron@@QBEPAVPlayer@@XZ");
    todo("implement");
    Player * __result = _sub_4B94FC(this);
    return __result;
}

_extern void _sub_4BAF68(Squadron *const);
void Squadron::retire() // 0x4BAF68
{
    mangled_assert("?retire@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BAF68(this);
}

_extern void _sub_4BB6BE(Squadron *const, float);
void Squadron::updateCommand(float) // 0x4BB6BE
{
    mangled_assert("?updateCommand@Squadron@@AAEXM@Z");
    todo("implement");
    _sub_4BB6BE(this, arg);
}

_extern void _sub_4BB4F3(Squadron *const, float);
void Squadron::update(float) // 0x4BB4F3
{
    mangled_assert("?update@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB4F3(this, arg);
}

_extern bool _sub_4B82AF(Squadron const *const, bool, float);
bool Squadron::FormationsFinishedMovementGoals(bool, float) const // 0x4B82AF
{
    mangled_assert("?FormationsFinishedMovementGoals@Squadron@@QBE_N_NM@Z");
    todo("implement");
    bool __result = _sub_4B82AF(this, arg, arg);
    return __result;
}

_extern void _sub_4BAF1D(Squadron *const);
void Squadron::resetCommand() // 0x4BAF1D
{
    mangled_assert("?resetCommand@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BAF1D(this);
}

_extern void _sub_4B9AE5(Squadron *const);
void Squadron::killAllCommands() // 0x4B9AE5
{
    mangled_assert("?killAllCommands@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B9AE5(this);
}

_extern bool _sub_4B8A0C(Squadron *const, Command *);
bool Squadron::addCommand(Command *) // 0x4B8A0C
{
    mangled_assert("?addCommand@Squadron@@AAE_NPAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_4B8A0C(this, arg);
    return __result;
}

_extern void _sub_4B9B65(Squadron *const);
void Squadron::makeCurrentCommandInactive() // 0x4B9B65
{
    mangled_assert("?makeCurrentCommandInactive@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B9B65(this);
}

_extern void _sub_4B9B35(Squadron *const, Command *);
void Squadron::makeCurrentCommandInactive(Command *) // 0x4B9B35
{
    mangled_assert("?makeCurrentCommandInactive@Squadron@@QAEXPAVCommand@@@Z");
    todo("implement");
    _sub_4B9B35(this, arg);
}

_extern void _sub_4BAEE8(Squadron *const);
void Squadron::removeInactiveCommand() // 0x4BAEE8
{
    mangled_assert("?removeInactiveCommand@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BAEE8(this);
}

_extern Command *_sub_4BB4AC(Squadron const *const, CommandType);
Command *Squadron::tryToGetCommand(CommandType) const // 0x4BB4AC
{
    mangled_assert("?tryToGetCommand@Squadron@@QBEPAVCommand@@W4CommandType@@@Z");
    todo("implement");
    Command * __result = _sub_4BB4AC(this, arg);
    return __result;
}

_extern bool _sub_4B9A74(Squadron *const, Formation *);
bool Squadron::isFormationInFormationsList(Formation *) // 0x4B9A74
{
    mangled_assert("?isFormationInFormationsList@Squadron@@AAE_NPAVFormation@@@Z");
    todo("implement");
    bool __result = _sub_4B9A74(this, arg);
    return __result;
}

_extern bool _sub_4B8DFB(Squadron const *const, CommandType, Command *);
bool Squadron::canBeInterrupted(CommandType, Command *) const // 0x4B8DFB
{
    mangled_assert("?canBeInterrupted@Squadron@@QBE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_4B8DFB(this, arg, arg);
    return __result;
}

_extern bool _sub_4B8E0C(Squadron const *const, OrderType);
bool Squadron::canExecuteOrder(OrderType) const // 0x4B8E0C
{
    mangled_assert("?canExecuteOrder@Squadron@@QBE_NW4OrderType@@@Z");
    todo("implement");
    bool __result = _sub_4B8E0C(this, arg);
    return __result;
}

_extern Formation *_sub_4B8443(Squadron *const, Formation *, unsigned __int32, Squadron::PeelOffType);
Formation *Squadron::PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType) // 0x4B8443
{
    mangled_assert("?PeelOffShips@Squadron@@QAEPAVFormation@@PAV2@IW4PeelOffType@1@@Z");
    todo("implement");
    Formation * __result = _sub_4B8443(this, arg, arg, arg);
    return __result;
}

_extern void _sub_4BB460(Squadron *const);
void Squadron::stopFormations() // 0x4BB460
{
    mangled_assert("?stopFormations@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4BB460(this);
}

_extern void _sub_4B7EC2(Squadron *const, unsigned __int32 const);
void Squadron::FormFormations(unsigned __int32 const) // 0x4B7EC2
{
    mangled_assert("?FormFormations@Squadron@@QAEXI@Z");
    todo("implement");
    _sub_4B7EC2(this, arg);
}

_extern void _sub_4B8652(Squadron *const, Ship *);
void Squadron::ReformFormation(Ship *) // 0x4B8652
{
    mangled_assert("?ReformFormation@Squadron@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B8652(this, arg);
}

_extern void _sub_4B8F66(Squadron *const);
void Squadron::clearAttackingMeList() // 0x4B8F66
{
    mangled_assert("?clearAttackingMeList@Squadron@@AAEXXZ");
    todo("implement");
    _sub_4B8F66(this);
}

_extern void _sub_4BA229(Squadron *const, unsigned __int32, Command::CommandOrigin);
void Squadron::orderIdleCommand(unsigned __int32, Command::CommandOrigin) // 0x4BA229
{
    mangled_assert("?orderIdleCommand@Squadron@@QAEXIW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA229(this, arg, arg);
}

_extern void _sub_4BA5BF(Squadron *const, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
void Squadron::orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin) // 0x4BA5BF
{
    mangled_assert("?orderMoveCommand@Squadron@@QAEXABVvector3@@I_NW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA5BF(this, arg, arg, arg, arg);
}

_extern void _sub_4BA57C(Squadron *const, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
void Squadron::orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin) // 0x4BA57C
{
    mangled_assert("?orderMoveCommand@Squadron@@QAEXABVvector3@@0I_NW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA57C(this, arg, arg, arg, arg, arg);
}

_extern void _sub_4BA52D(Squadron *const, vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
void Squadron::orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin) // 0x4BA52D
{
    mangled_assert("?orderMoveCommand@Squadron@@QAEXABVvector3@@00I_NW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA52D(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4BAA76(Squadron *const, Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
void Squadron::orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &) // 0x4BAA76
{
    mangled_assert("?orderRepairCommand@Squadron@@QAEXABVSelection@@IW4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
    _sub_4BAA76(this, arg, arg, arg, arg);
}

_extern void _sub_4BABFE(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin) // 0x4BABFE
{
    mangled_assert("?orderSalvageCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BABFE(this, arg, arg, arg);
}

_extern void _sub_4BA768(Squadron *const, SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin) // 0x4BA768
{
    mangled_assert("?orderMoveToSobCommand@Squadron@@QAEXABVSobID@@ABVvector3@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA768(this, arg, arg, arg, arg);
}

_extern void _sub_4BA725(Squadron *const, SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin) // 0x4BA725
{
    mangled_assert("?orderMoveToSobCommand@Squadron@@QAEXABVSobID@@ABVvector3@@1IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA725(this, arg, arg, arg, arg, arg);
}

_extern void _sub_4BA09B(Squadron *const, vector3 const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin) // 0x4BA09B
{
    mangled_assert("?orderHyperspaceCommand@Squadron@@QAEXABVvector3@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA09B(this, arg, arg, arg);
}

_extern void _sub_4B9FDB(Squadron *const, vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin) // 0x4B9FDB
{
    mangled_assert("?orderHyperspaceCommand@Squadron@@QAEXABVvector3@@00IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4B9FDB(this, arg, arg, arg, arg, arg);
}

_extern void _sub_4BA155(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin) // 0x4BA155
{
    mangled_assert("?orderHyperspaceViaGateCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA155(this, arg, arg, arg);
}

_extern void _sub_4BA83F(Squadron *const, unsigned __int32, Command::CommandOrigin, bool);
void Squadron::orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool) // 0x4BA83F
{
    mangled_assert("?orderOffMapHyperspaceCommand@Squadron@@QAEXIW4CommandOrigin@Command@@_N@Z");
    todo("implement");
    _sub_4BA83F(this, arg, arg, arg);
}

_extern void _sub_4B9E85(Squadron *const, Squadron *, unsigned __int32, Command::CommandOrigin);
void Squadron::orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin) // 0x4B9E85
{
    mangled_assert("?orderFormHyperspaceGateCommand@Squadron@@QAEXPAV1@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4B9E85(this, arg, arg, arg);
}

_extern void _sub_4B9BD8(Squadron *const, Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
void Squadron::orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &) // 0x4B9BD8
{
    mangled_assert("?orderAttackCommand@Squadron@@QAEXABVSelection@@IW4CommandOrigin@Command@@_N2ABVvector3@@@Z");
    todo("implement");
    _sub_4B9BD8(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4B9F3F(Squadron *const, Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
void Squadron::orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &) // 0x4B9F3F
{
    mangled_assert("?orderGuardCommand@Squadron@@QAEXABVSelection@@IW4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
    _sub_4B9F3F(this, arg, arg, arg, arg);
}

_extern void _sub_4B9C91(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin) // 0x4B9C91
{
    mangled_assert("?orderCaptureCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4B9C91(this, arg, arg, arg);
}

_extern void _sub_4BABAB(Squadron *const, unsigned __int32, Command::CommandOrigin);
void Squadron::orderRetireCommand(unsigned __int32, Command::CommandOrigin) // 0x4BABAB
{
    mangled_assert("?orderRetireCommand@Squadron@@QAEXIW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BABAB(this, arg, arg);
}

_extern void _sub_4B9D65(Squadron *const, unsigned __int32, Command::CommandOrigin);
void Squadron::orderDespawnCommand(unsigned __int32, Command::CommandOrigin) // 0x4B9D65
{
    mangled_assert("?orderDespawnCommand@Squadron@@QAEXIW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4B9D65(this, arg, arg);
}

_extern void _sub_4BA471(Squadron *const, std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin) // 0x4BA471
{
    mangled_assert("?orderLayMinesCommand@Squadron@@QAEXABV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA471(this, arg, arg, arg);
}

_extern void _sub_4B9E2C(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin, bool);
void Squadron::orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool) // 0x4B9E2C
{
    mangled_assert("?orderDockCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@_N@Z");
    todo("implement");
    _sub_4B9E2C(this, arg, arg, arg, arg);
}

_extern void _sub_4B9966(Squadron *const, SobID const &, bool);
void Squadron::instantDockWith(SobID const &, bool) // 0x4B9966
{
    mangled_assert("?instantDockWith@Squadron@@QAEXABVSobID@@_N@Z");
    todo("implement");
    _sub_4B9966(this, arg, arg);
}

_extern void _sub_4BA34F(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin) // 0x4BA34F
{
    mangled_assert("?orderLaunchCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA34F(this, arg, arg, arg);
}

_extern void _sub_4BAB12(Squadron *const, Selection const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin) // 0x4BAB12
{
    mangled_assert("?orderResourceCommand@Squadron@@QAEXABVSelection@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BAB12(this, arg, arg, arg);
}

_extern void _sub_4BACD2(Squadron *const, unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
void Squadron::orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin) // 0x4BACD2
{
    mangled_assert("?orderWaypointMoveCommand@Squadron@@QAEXIABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@_NI11ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BACD2(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4BA8F9(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
void Squadron::orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode) // 0x4BA8F9
{
    mangled_assert("?orderParadeCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@W4ParadeMode@ParadeCommand@@@Z");
    todo("implement");
    _sub_4BA8F9(this, arg, arg, arg, arg);
}

_extern void _sub_4BA9B9(Squadron *const, SobID const &, unsigned __int32, Command::CommandOrigin);
void Squadron::orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin) // 0x4BA9B9
{
    mangled_assert("?orderRallyParadeCommand@Squadron@@QAEXABVSobID@@IW4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_4BA9B9(this, arg, arg, arg);
}

_extern __int32 _sub_4B93EB(Squadron *const);
__int32 Squadron::getDockFamilyID() // 0x4B93EB
{
    mangled_assert("?getDockFamilyID@Squadron@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_4B93EB(this);
    return __result;
}

_extern void _sub_4B7E8C(Squadron *const);
void Squadron::AnalCheck() // 0x4B7E8C
{
    mangled_assert("?AnalCheck@Squadron@@AAEXXZ");
    todo("implement");
    _sub_4B7E8C(this);
}

_extern void _sub_4B8F89(Squadron *const);
void Squadron::clearRectangle() // 0x4B8F89
{
    mangled_assert("?clearRectangle@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8F89(this);
}

_extern void _sub_4B8B32(Squadron *const, Ship *);
void Squadron::addShipToSelection(Ship *) // 0x4B8B32
{
    mangled_assert("?addShipToSelection@Squadron@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B8B32(this, arg);
}

_extern void _sub_4B8FB9(Squadron *const);
void Squadron::computeBounds() // 0x4B8FB9
{
    mangled_assert("?computeBounds@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8FB9(this);
}

_extern void _sub_4B9235(Squadron *const, OrderFeedbackValue const *, unsigned __int32);
void Squadron::displayATI(OrderFeedbackValue const *, unsigned __int32) // 0x4B9235
{
    mangled_assert("?displayATI@Squadron@@QAEXPBUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_4B9235(this, arg, arg);
}

_extern bool _sub_4B8BF9(Squadron *const);
bool Squadron::alreadyDisplayedATI() // 0x4B8BF9
{
    mangled_assert("?alreadyDisplayedATI@Squadron@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4B8BF9(this);
    return __result;
}

_extern float _sub_4B9840(Squadron const *const);
float Squadron::getTotalHealth() const // 0x4B9840
{
    mangled_assert("?getTotalHealth@Squadron@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B9840(this);
    return __result;
}

_extern float _sub_4B9885(Squadron const *const);
float Squadron::getTotalMaxHealth() const // 0x4B9885
{
    mangled_assert("?getTotalMaxHealth@Squadron@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B9885(this);
    return __result;
}

_extern bool _sub_4B99C5(Squadron *const, unsigned __int32);
bool Squadron::instantlyBuildSubSystem(unsigned __int32) // 0x4B99C5
{
    mangled_assert("?instantlyBuildSubSystem@Squadron@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4B99C5(this, arg);
    return __result;
}

_extern SubSystem *_sub_4B9812(Squadron const *const, char const *);
SubSystem *Squadron::getSubSystem(char const *) const // 0x4B9812
{
    mangled_assert("?getSubSystem@Squadron@@QBEPAVSubSystem@@PBD@Z");
    todo("implement");
    SubSystem * __result = _sub_4B9812(this, arg);
    return __result;
}

_extern void _sub_4BB261(Squadron *const, float);
void Squadron::setHealth(float) // 0x4BB261
{
    mangled_assert("?setHealth@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB261(this, arg);
}

_extern void _sub_4BB2B0(Squadron *const, bool);
void Squadron::setHidden(bool) // 0x4BB2B0
{
    mangled_assert("?setHidden@Squadron@@QAEX_N@Z");
    todo("implement");
    _sub_4BB2B0(this, arg);
}

_extern void _sub_4BB47A(Squadron *const, float);
void Squadron::takeDamage(float) // 0x4BB47A
{
    mangled_assert("?takeDamage@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB47A(this, arg);
}

_extern void _sub_4BB1DE(Squadron *const, AutoLaunchSetting);
void Squadron::setAutoLaunch(AutoLaunchSetting) // 0x4BB1DE
{
    mangled_assert("?setAutoLaunch@Squadron@@QAEXW4AutoLaunchSetting@@@Z");
    todo("implement");
    _sub_4BB1DE(this, arg);
}

_extern void _sub_4BB20D(Squadron *const, char const *, bool);
void Squadron::setEnableDisableWeapon(char const *, bool) // 0x4BB20D
{
    mangled_assert("?setEnableDisableWeapon@Squadron@@QAEXPBD_N@Z");
    todo("implement");
    _sub_4BB20D(this, arg, arg);
}

_extern void _sub_4BB239(Squadron *const, bool);
void Squadron::setFOWVisible(bool) // 0x4BB239
{
    mangled_assert("?setFOWVisible@Squadron@@QAEX_N@Z");
    todo("implement");
    _sub_4BB239(this, arg);
}

_extern float _sub_4B97EF(Squadron const *const);
float Squadron::getSpeedMultiplier() const // 0x4B97EF
{
    mangled_assert("?getSpeedMultiplier@Squadron@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B97EF(this);
    return __result;
}

_extern void _sub_4BB371(Squadron *const, float const);
void Squadron::setSpeedMultiplier(float const) // 0x4BB371
{
    mangled_assert("?setSpeedMultiplier@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB371(this, arg);
}

_extern void _sub_4BB309(Squadron *const, float const);
void Squadron::setMaxSpeedMultiplier(float const) // 0x4BB309
{
    mangled_assert("?setMaxSpeedMultiplier@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB309(this, arg);
}

_extern float _sub_4B94CB(Squadron const *const);
float Squadron::getMaxHealth() const // 0x4B94CB
{
    mangled_assert("?getMaxHealth@Squadron@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B94CB(this);
    return __result;
}

_extern bool _sub_4B8281(Squadron const *const);
bool Squadron::FormationFinishedMovementCommands() const // 0x4B8281
{
    mangled_assert("?FormationFinishedMovementCommands@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B8281(this);
    return __result;
}

_extern vector3 const &_sub_4B9511(Squadron const *const);
vector3 const &Squadron::getPositionDtrm() const // 0x4B9511
{
    mangled_assert("?getPositionDtrm@Squadron@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B9511(this);
    return __result;
}

_extern vector3 const &_sub_4B952A(Squadron const *const);
vector3 const &Squadron::getPositionVis() const // 0x4B952A
{
    mangled_assert("?getPositionVis@Squadron@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B952A(this);
    return __result;
}

_extern matrix3 const &_sub_4B94D8(Squadron const *const);
matrix3 const &Squadron::getOrientationDtrm() const // 0x4B94D8
{
    mangled_assert("?getOrientationDtrm@Squadron@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_4B94D8(this);
    return __result;
}

_extern vector3 const &_sub_4B93C7(Squadron const *const);
vector3 const &Squadron::getDestinationDtrm() const // 0x4B93C7
{
    mangled_assert("?getDestinationDtrm@Squadron@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B93C7(this);
    return __result;
}

_extern vector3 const &_sub_4B93D9(Squadron const *const);
vector3 const &Squadron::getDestinationVis() const // 0x4B93D9
{
    mangled_assert("?getDestinationVis@Squadron@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4B93D9(this);
    return __result;
}

_extern Ship *_sub_4B948F(Squadron const *const);
Ship *Squadron::getLeadShip() const // 0x4B948F
{
    mangled_assert("?getLeadShip@Squadron@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_4B948F(this);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_4B93FF(Squadron *const);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Squadron::getFormationType() // 0x4B93FF
{
    mangled_assert("?getFormationType@Squadron@@QAEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_4B93FF(this);
    return __result;
}

_extern void _sub_4BB3B4(Squadron *const, SquadronTactics const);
void Squadron::setTactics(SquadronTactics const) // 0x4BB3B4
{
    mangled_assert("?setTactics@Squadron@@QAEXW4SquadronTactics@@@Z");
    todo("implement");
    _sub_4BB3B4(this, arg);
}

_extern void _sub_4B873B(Squadron *const, SquadronList *);
void Squadron::RemoveObserver(SquadronList *) // 0x4B873B
{
    mangled_assert("?RemoveObserver@Squadron@@QAEXPAVSquadronList@@@Z");
    todo("implement");
    _sub_4B873B(this, arg);
}

_extern void _sub_4B8AD9(Squadron *const, Selection::Observer *);
void Squadron::addObserver(Selection::Observer *) // 0x4B8AD9
{
    mangled_assert("?addObserver@Squadron@@QAEXPAVObserver@Selection@@@Z");
    todo("implement");
    _sub_4B8AD9(this, arg);
}

_extern void _sub_4BAF0A(Squadron *const, Selection::Observer *);
void Squadron::removeObserver(Selection::Observer *) // 0x4BAF0A
{
    mangled_assert("?removeObserver@Squadron@@QAEXPAVObserver@Selection@@@Z");
    todo("implement");
    _sub_4BAF0A(this, arg);
}

_extern bool _sub_4B9A48(Sob *, void *);
bool isEnemy(Sob *sob, void *vPlayer) // 0x4B9A48
{
    mangled_assert("?isEnemy@@YG_NPAVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_4B9A48(sob, vPlayer);
    return __result;
}

_extern void _sub_4B95A7(Squadron const *const, Selection &, SquadronTactics);
void Squadron::getRetaliationTargets(Selection &, SquadronTactics) const // 0x4B95A7
{
    mangled_assert("?getRetaliationTargets@Squadron@@QBEXAAVSelection@@W4SquadronTactics@@@Z");
    todo("implement");
    _sub_4B95A7(this, arg, arg);
}

_extern void _sub_4B9598(Squadron const *const, Selection &);
void Squadron::getRetaliationTargets(Selection &) const // 0x4B9598
{
    mangled_assert("?getRetaliationTargets@Squadron@@QBEXAAVSelection@@@Z");
    todo("implement");
    _sub_4B9598(this, arg);
}

_extern bool _sub_4B8BD9(Squadron const *const);
bool Squadron::allowPassiveActions() const // 0x4B8BD9
{
    mangled_assert("?allowPassiveActions@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B8BD9(this);
    return __result;
}

_extern void _sub_4B8E36(Squadron *const);
void Squadron::checkAgainstWorldBounds() // 0x4B8E36
{
    mangled_assert("?checkAgainstWorldBounds@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B8E36(this);
}

_extern bool _sub_4B990A(Squadron const *const);
bool Squadron::inWorldBoundInner() const // 0x4B990A
{
    mangled_assert("?inWorldBoundInner@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B990A(this);
    return __result;
}

_extern bool _sub_4B9938(Squadron const *const);
bool Squadron::inWorldBoundOuter() const // 0x4B9938
{
    mangled_assert("?inWorldBoundOuter@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B9938(this);
    return __result;
}

_extern void _sub_4B9070(Selection const &, std::vector<Squadron *,std::allocator<Squadron *> > &);
void Squadron::convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList) // 0x4B9070
{
    mangled_assert("?convertSelectionIntoSquadrons@Squadron@@SGXABVSelection@@AAV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@Z");
    todo("implement");
    _sub_4B9070(selection, squadronList);
}

_extern void _sub_4B94B5(Squadron *const, std::list<ResearchData *,std::allocator<ResearchData *> > &);
void Squadron::getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &) // 0x4B94B5
{
    mangled_assert("?getListOfAllUpgrades@Squadron@@QAEXAAV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@@Z");
    todo("implement");
    _sub_4B94B5(this, arg);
}

_extern void _sub_4B82F5(Squadron const *const, OrderFeedbackInfo &);
void Squadron::GetUIFeedback(OrderFeedbackInfo &) const // 0x4B82F5
{
    mangled_assert("?GetUIFeedback@Squadron@@QBEXAAUOrderFeedbackInfo@@@Z");
    todo("implement");
    _sub_4B82F5(this, arg);
}

_extern float _sub_4B9558(Squadron const *const);
float Squadron::getResources() const // 0x4B9558
{
    mangled_assert("?getResources@Squadron@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B9558(this);
    return __result;
}

_extern bool _sub_4B9ABE(Squadron const *const);
bool Squadron::isNISSquad() const // 0x4B9ABE
{
    mangled_assert("?isNISSquad@Squadron@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4B9ABE(this);
    return __result;
}

_extern void _sub_4B919A(Squadron *const);
void Squadron::disableCommands() // 0x4B919A
{
    mangled_assert("?disableCommands@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B919A(this);
}

_extern _sub_4B79D6(Squadron *const, SaveGameData *);
Squadron::Squadron(SaveGameData *) // 0x4B79D6
{
    mangled_assert("??0Squadron@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B79D6(this, arg);
}

_extern void _sub_4B7AB8(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >() // 0x4B7AB8
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UOrderFeedbackInfo@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7AB8(this);
}

_extern void _sub_4B7AB9(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > >() // 0x4B7AB9
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UOrderFeedbackInfo@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7AB9(this);
}

_extern void _sub_4B7ABA(std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> >::~_Deque_val<std::_Deque_simple_types<OrderFeedbackInfo> >() // 0x4B7ABA
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@UOrderFeedbackInfo@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7ABA(this);
}

_extern void _sub_4B7AC9(std::_List_buy<Formation *,std::allocator<Formation *> > *const);
_inline std::_List_buy<Formation *,std::allocator<Formation *> >::~_List_buy<Formation *,std::allocator<Formation *> >() // 0x4B7AC9
{
    mangled_assert("??1?$_List_buy@PAVFormation@@V?$allocator@PAVFormation@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7AC9(this);
}

_extern void _sub_4B7AF4(std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > *const);
_inline std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > >::~queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > >() // 0x4B7AF4
{
    mangled_assert("??1?$queue@UOrderFeedbackInfo@@V?$deque@UOrderFeedbackInfo@@V?$allocator@UOrderFeedbackInfo@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7AF4(this);
}

_extern void _sub_4B7B09(GameEvent_CommandCancelled *const);
_inline GameEvent_CommandCancelled::~GameEvent_CommandCancelled() // 0x4B7B09
{
    mangled_assert("??1GameEvent_CommandCancelled@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B09(this);
}

_extern void _sub_4B7B10(GameEvent_CommandCompelete *const);
_inline GameEvent_CommandCompelete::~GameEvent_CommandCompelete() // 0x4B7B10
{
    mangled_assert("??1GameEvent_CommandCompelete@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B10(this);
}

_extern void _sub_4B7B17(GameEvent_CommandGiven *const);
_inline GameEvent_CommandGiven::~GameEvent_CommandGiven() // 0x4B7B17
{
    mangled_assert("??1GameEvent_CommandGiven@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B17(this);
}

_extern void _sub_4B914B(Squadron *const);
void Squadron::defaultSettings() // 0x4B914B
{
    mangled_assert("?defaultSettings@Squadron@@QAEXXZ");
    todo("implement");
    _sub_4B914B(this);
}

_extern void _sub_4B7B1E(GameEvent_HyperspaceStatus *const);
_inline GameEvent_HyperspaceStatus::~GameEvent_HyperspaceStatus() // 0x4B7B1E
{
    mangled_assert("??1GameEvent_HyperspaceStatus@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B1E(this);
}

_extern void _sub_4B7B25(GameEvent_SquadronSpotted *const);
_inline GameEvent_SquadronSpotted::~GameEvent_SquadronSpotted() // 0x4B7B25
{
    mangled_assert("??1GameEvent_SquadronSpotted@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B25(this);
}

_extern void _sub_4B7B2C(GameEvent_TacticsSet *const);
_inline GameEvent_TacticsSet::~GameEvent_TacticsSet() // 0x4B7B2C
{
    mangled_assert("??1GameEvent_TacticsSet@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B2C(this);
}

_extern void _sub_4B7B33(OrderFeedbackInfo *const);
_inline OrderFeedbackInfo::~OrderFeedbackInfo() // 0x4B7B33
{
    mangled_assert("??1OrderFeedbackInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4B7B33(this);
}

_extern void _sub_4BADD8(Squadron *const);
void Squadron::postRestore() // 0x4BADD8
{
    mangled_assert("?postRestore@Squadron@@UAEXXZ");
    todo("implement");
    _sub_4BADD8(this);
}

_extern bool _sub_4BAF2A(Squadron *const, SaveGameData *);
bool Squadron::restore(SaveGameData *) // 0x4BAF2A
{
    mangled_assert("?restore@Squadron@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4BAF2A(this, arg);
    return __result;
}

_extern bool _sub_4BB15C(Squadron *const, SaveGameData *, SaveType);
bool Squadron::save(SaveGameData *, SaveType) // 0x4BB15C
{
    mangled_assert("?save@Squadron@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4BB15C(this, arg, arg);
    return __result;
}

_extern bool _sub_4B98D9(Squadron const *const, unsigned __int32);
bool Squadron::haveWeEverBeenSpottedByPlayer(unsigned __int32) const // 0x4B98D9
{
    mangled_assert("?haveWeEverBeenSpottedByPlayer@Squadron@@ABE_NI@Z");
    todo("implement");
    bool __result = _sub_4B98D9(this, arg);
    return __result;
}

_extern void _sub_4BB197(Squadron *const, unsigned __int32);
void Squadron::setAsSpotted(unsigned __int32) // 0x4BB197
{
    mangled_assert("?setAsSpotted@Squadron@@AAEXI@Z");
    todo("implement");
    _sub_4BB197(this, arg);
}

_extern void _sub_4BB88F(Squadron *const, float);
void Squadron::updateHyperspace(float) // 0x4BB88F
{
    mangled_assert("?updateHyperspace@Squadron@@QAEXM@Z");
    todo("implement");
    _sub_4BB88F(this, arg);
}

/* ---------- private code */

_extern bool _sub_4B8CF3(Sob const *, void *);
_static bool badRetaliationTarget(Sob const *sob, void *vPlayer) // 0x4B8CF3
{
    mangled_assert("badRetaliationTarget");
    todo("implement");
    bool __result = _sub_4B8CF3(sob, vPlayer);
    return __result;
}
#endif
