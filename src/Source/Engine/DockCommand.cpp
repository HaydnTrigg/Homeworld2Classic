#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\dbdefines.h>
#include <profile\profile.h>
#include <xmemory0>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <iostream>
#include <Engine\config.h>
#include <Engine\fixedpoint.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\MoveCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <Mathlib\matrix3.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <exception>
#include <Engine\Squadron.h>
#include <Engine\Player.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\ResearchManager.h>
#include <Engine\GuardCommand.h>
#include <Engine\TrailTargetCommand.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Collision\Primitives\sphere.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\ITweak.h>
#include <xhash>
#include <Engine\SOBGroupManager.h>
#include <Engine\Tactics.h>
#include <Engine\DockLaunch.h>
#include <Engine\DockQueue.h>
#include <Engine\SquadronQueue.h>
#include <math.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <Engine\TeamColourRegistry.h>
#include <luaconfig\luaconfig.h>
#include <Engine\task.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\FormationCommands\FormationDockCommand.h>
#include <platform\timer.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <platform\platformexports.h>
#include <Engine\CoordSysUtilities.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Engine\alliance.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\DockCommand.h>
#include <Engine\Universe.h>
#include <Engine\scripting.h>
#include <Mathlib\vector2.h>
#include <Engine\Waypoint.h>
#include <Engine\scriptaccess.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\scripttypedef.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <lua\lua.h>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <Engine\Viewer.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Engine\HyperspaceManager.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\shipHold.h>
#include <Engine\Race.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\BuildManager.h>
#include <wchar.h>
#include <Engine\FamilyListMgr.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\FamilyList.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Family.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\sobid.h>
#include <set>
#include <deque>

/* ---------- constants */

/* ---------- definitions */

class CompareDockTargets :
    public Selection::MinElementCompare
{
public:
    CompareDockTargets(CompareDockTargets const &); /* compiler_generated() */
    _inline CompareDockTargets(Sob const *, bool);
    virtual bool Compare(Sob const &, Sob const &) const override;
private:
    Sob const *m_docker; // 0x4
    bool m_resourcing; // 0x8
public:
    CompareDockTargets &operator=(CompareDockTargets const &); /* compiler_generated() */
};
static_assert(sizeof(CompareDockTargets) == 12, "Invalid CompareDockTargets size");

/* ---------- prototypes */


_static vector3 predictIntersectionPointWithTarget(Sob const *one, Sob const *two);

/* ---------- globals */

extern char const DockCommand::m_saveToken[0]; // 0x7B6618
extern SaveData const DockCommand::m_saveData[14]; // 0x7B6628

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7B65F0
    extern float const ViewerUpdatePeriod; // 0x83EB1C
    extern float const CameraDistanceUpdateRate; // 0x7B65F4
    extern float const CameraDistanceUpdatePeriod; // 0x83EB20
    extern bool const dockCollideStates[15]; // 0x7B65F8
    extern bool const dockAvoidStates[15]; // 0x7B6608
}

/* ---------- public code */

bool DockCommand::shipsInCollideState() const // 0x69A814
{
    mangled_assert("?shipsInCollideState@DockCommand@@QBE_NXZ");
    todo("implement");
}

Sob *DockCommand::getSobToNotAvoid() const // 0x69A382
{
    mangled_assert("?getSobToNotAvoid@DockCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *DockCommand::getSobToNotCollideWith() const // 0x69A399
{
    mangled_assert("?getSobToNotCollideWith@DockCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

vector3 const &DockCommand::getDestinationDtrm() const // 0x69A19C
{
    mangled_assert("?getDestinationDtrm@DockCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &DockCommand::getDestinationVis() const // 0x69A1BB
{
    mangled_assert("?getDestinationVis@DockCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

bool DockCommand::shipsInAvoidState() const // 0x69A80A
{
    mangled_assert("?shipsInAvoidState@DockCommand@@QBE_NXZ");
    todo("implement");
}

void DockCommand::setAsDocked() // 0x69A784
{
    mangled_assert("?setAsDocked@DockCommand@@QAEXXZ");
    todo("implement");
}

DockCommand::DockCommand(Squadron *, SobID const &, bool, Command::CommandOrigin) // 0x6980F2
{
    mangled_assert("??0DockCommand@@QAE@PAVSquadron@@ABVSobID@@_NW4CommandOrigin@Command@@@Z");
    todo("implement");
}

DockCommand::~DockCommand() // 0x6981B9
{
    mangled_assert("??1DockCommand@@UAE@XZ");
    todo("implement");
}

void DockCommand::setDockState(DockCommand::DockState) // 0x69A7C6
{
    mangled_assert("?setDockState@DockCommand@@AAEXW4DockState@1@@Z");
    todo("implement");
}

ComResult DockCommand::update(float) // 0x69A81E
{
    mangled_assert("?update@DockCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

bool DockCommand::OrderGiven() // 0x69956A
{
    mangled_assert("?OrderGiven@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::FindBestDockShip() // 0x698B0D
{
    mangled_assert("?FindBestDockShip@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::FlyToDockShip() // 0x698F53
{
    mangled_assert("?FlyToDockShip@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::FindBestPathOnShip() // 0x698C0B
{
    mangled_assert("?FindBestPathOnShip@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::RegisterForQueue() // 0x69972A
{
    mangled_assert("?RegisterForQueue@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::FlyToBehindQueue() // 0x698C41
{
    mangled_assert("?FlyToBehindQueue@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::Queue() // 0x6995FE
{
    mangled_assert("?Queue@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::BookPath() // 0x698290
{
    mangled_assert("?BookPath@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::FlyToDockPathStartPoint() // 0x698E0F
{
    mangled_assert("?FlyToDockPathStartPoint@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::OpenDoor() // 0x6994F3
{
    mangled_assert("?OpenDoor@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::SplitSquadronIntoFormations() // 0x699799
{
    mangled_assert("?SplitSquadronIntoFormations@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::DockFormations() // 0x698906
{
    mangled_assert("?DockFormations@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::PutSquadronInShip() // 0x69958A
{
    mangled_assert("?PutSquadronInShip@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::Docked() // 0x698B0A
{
    mangled_assert("?Docked@DockCommand@@AAE_NXZ");
    todo("implement");
}

void DockCommand::flyFormationToStartOfPath(Formation *) // 0x699E8E
{
    mangled_assert("?flyFormationToStartOfPath@DockCommand@@AAEXPAVFormation@@@Z");
    todo("implement");
}

void DockCommand::GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **) // 0x6994A9
{
    mangled_assert("?GetPathPoint@DockCommand@@AAEXPAVShip@@IIPAPAVDockPathPointStatic@@PAPAVDockPathPoint@@@Z");
    todo("implement");
}

bool DockCommand::GetAndReserveBestDockingPath() // 0x6990FC
{
    mangled_assert("?GetAndReserveBestDockingPath@DockCommand@@AAE_NXZ");
    todo("implement");
}

bool DockCommand::preferPath(DockPathStatic const *, ShipHoldStatic const *) // 0x69A661
{
    mangled_assert("?preferPath@DockCommand@@AAE_NPBVDockPathStatic@@PBVShipHoldStatic@@@Z");
    todo("implement");
}

bool DockCommand::canBeInterrupted(CommandType, Command *) // 0x699A7E
{
    mangled_assert("?canBeInterrupted@DockCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

bool DockCommand::allowPassiveActions() const // 0x6998A2
{
    mangled_assert("?allowPassiveActions@DockCommand@@UBE_NXZ");
    todo("implement");
}

void DockCommand::resetCommand() // 0x69A6C6
{
    mangled_assert("?resetCommand@DockCommand@@UAEXXZ");
    todo("implement");
}

void DockCommand::emergencyCleanUp() // 0x699D51
{
    mangled_assert("?emergencyCleanUp@DockCommand@@UAEXXZ");
    todo("implement");
}

void DockCommand::cleanUpCommand() // 0x699C26
{
    mangled_assert("?cleanUpCommand@DockCommand@@UAEXXZ");
    todo("implement");
}

bool DockCommand::canReceiveShip(Ship const *dockee, Sob const *docker, DockCommand::DockQueryOption option) // 0x699AFC
{
    mangled_assert("?canReceiveShip@DockCommand@@SG_NPBVShip@@PBVSob@@W4DockQueryOption@1@@Z");
    todo("implement");
}

_inline CompareDockTargets::CompareDockTargets(Sob const *, bool) // 0x698090
{
    mangled_assert("??0CompareDockTargets@@QAE@PBVSob@@_N@Z");
    todo("implement");
}

bool CompareDockTargets::Compare(Sob const &, Sob const &) const // 0x6982D5
{
    mangled_assert("?Compare@CompareDockTargets@@UBE_NABVSob@@0@Z");
    todo("implement");
}

Ship *DockCommand::getClosestShipToDockWith(Ship *ship, DockCommand::DockQueryOption option) // 0x69A002
{
    mangled_assert("?getClosestShipToDockWith@DockCommand@@SGPAVShip@@PAV2@W4DockQueryOption@1@@Z");
    todo("implement");
}

void DockCommand::getQueuePosition(vector3 &, vector3 &, vector3 &) // 0x69A204
{
    mangled_assert("?getQueuePosition@DockCommand@@AAEXAAVvector3@@00@Z");
    todo("implement");
}

char const *DockCommand::getName() const // 0x69A1FE
{
    mangled_assert("?getName@DockCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType DockCommand::getCommandType() const // 0x69A190
{
    mangled_assert("?getCommandType@DockCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

float DockCommand::calculateApproachDistance() // 0x6998C1
{
    mangled_assert("?calculateApproachDistance@DockCommand@@AAEMXZ");
    todo("implement");
}

void DockCommand::setDockWithShip(SobID const &) // 0x69A7D4
{
    mangled_assert("?setDockWithShip@DockCommand@@AAEXABVSobID@@@Z");
    todo("implement");
}

DockPath *DockCommand::getDockPath() const // 0x69A1D7
{
    mangled_assert("?getDockPath@DockCommand@@QBEPAVDockPath@@XZ");
    todo("implement");
}

DockCommand::DockCommand(SaveGameData *) // 0x6980A9
{
    mangled_assert("??0DockCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void DockCommand::defaultSettings() // 0x699D15
{
    mangled_assert("?defaultSettings@DockCommand@@AAEXXZ");
    todo("implement");
}

void DockCommand::postRestore() // 0x69A3D5
{
    mangled_assert("?postRestore@DockCommand@@UAEXXZ");
    todo("implement");
}

bool DockCommand::restore(SaveGameData *) // 0x69A6EA
{
    mangled_assert("?restore@DockCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DockCommand::save(SaveGameData *, SaveType) // 0x69A737
{
    mangled_assert("?save@DockCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

DockCommandStaticInfo::DockCommandStaticInfo(ShipStatic *) // 0x698178
{
    mangled_assert("??0DockCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
}

_inline std::_List_buy<DockPathStatic *,std::allocator<DockPathStatic *> >::~_List_buy<DockPathStatic *,std::allocator<DockPathStatic *> >() // 0x698197
{
    mangled_assert("??1?$_List_buy@PAVDockPathStatic@@V?$allocator@PAVDockPathStatic@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DockCommandStaticInfo::~DockCommandStaticInfo() // 0x6981F8
{
    mangled_assert("??1DockCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

_static vector3 predictIntersectionPointWithTarget(Sob const *one, Sob const *two) // 0x69A3DA
{
    mangled_assert("predictIntersectionPointWithTarget");
    todo("implement");
}
#endif
