#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\fixedpoint.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <util\fixed.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\Tactics.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\HyperspaceManager.h>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <Engine\GameEventDefs.h>
#include <utility>
#include <iosfwd>
#include <Engine\GameEventSys.h>
#include <vector>
#include <xmemory>
#include <Mathlib\mathutil.h>
#include <Engine\Ship\Formation.h>
#include <xhash>
#include <Engine\Ship\FormationPattern.h>
#include <math.h>
#include <list>
#include <Engine\savegame.h>
#include <Mathlib\vector3.h>
#include <Engine\EngineTrailSystem.h>
#include <Engine\MADState.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <luaconfig\luabinding.h>
#include <map>
#include <Engine\dbdefines.h>
#include <luaconfig\luaconfig.h>
#include <xtree>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\Ship\FormationController.h>
#include <lua\lua.h>
#include <assist\typemagic.h>
#include <Engine\Interpolation.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Mathlib\quat.h>
#include <Engine\Physics\RigidBodyController.h>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luautils.h>
#include <Engine\DockCommand.h>
#include <util\types.h>
#include <Engine\gameRandom.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\LatchManager.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\commandtype.h>
#include <Engine\FormationCommands\FormationLatchCommand.h>
#include <Engine\pch.h>
#include <Engine\resourceCommand.h>
#include <Engine\SOBGroupManager.h>
#include <Mathlib\vector2.h>
#include <Engine\config.h>
#include <Engine\abilities.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\SquadronList.h>
#include <Engine\ITweak.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\random.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\Sob\Resource\Resource.h>
#include <Engine\Sob\Resource\ResourceStatic.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

class CompareResources :
    public Selection::MinElementCompare
{
public:
    CompareResources(CompareResources const &); /* compiler_generated() */
    _inline CompareResources(Ship *, Ship *, Sob const *);
    virtual bool Compare(Sob const &, Sob const &) const override;
private:
    bool CompareByDistanceAndBusyness(Resource const &, Resource const &) const;
    bool CompareByDistanceBand(Resource const &, Resource const &) const;
    bool CompareByRus(Resource const &, Resource const &) const;
    bool CompareByDirectionFromDockShip(Resource const &, Resource const &) const;
    bool RandomCompare(Resource const &, Resource const &) const;
    Ship *m_harvester; // 0x4
    Ship *m_closestDockShip; // 0x8
    Sob const *m_preferredResource; // 0xC
public:
    CompareResources &operator=(CompareResources const &); /* compiler_generated() */
};
static_assert(sizeof(CompareResources) == 16, "Invalid CompareResources size");

/* ---------- prototypes */

extern bool resourceEmpty(Sob const *s);

/* ---------- globals */

extern char const ResourceCommand::m_saveToken[0]; // 0x7B6BD0
extern SaveData const ResourceCommand::m_saveData[5]; // 0x7B6BE0

/* ---------- private variables */

/* ---------- public code */

ResourceCommand::ResourceCommand(Squadron *, Selection const &, Command::CommandOrigin) // 0x69B1D2
{
    mangled_assert("??0ResourceCommand@@QAE@PAVSquadron@@ABVSelection@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

ResourceCommand::~ResourceCommand() // 0x69B295
{
    mangled_assert("??1ResourceCommand@@UAE@XZ");
    todo("implement");
}

_inline CompareResources::CompareResources(Ship *, Ship *, Sob const *) // 0x69B15D
{
    mangled_assert("??0CompareResources@@QAE@PAVShip@@0PBVSob@@@Z");
    todo("implement");
}

bool CompareResources::Compare(Sob const &, Sob const &) const // 0x69B323
{
    mangled_assert("?Compare@CompareResources@@UBE_NABVSob@@0@Z");
    todo("implement");
}

bool CompareResources::CompareByDistanceAndBusyness(Resource const &, Resource const &) const // 0x69B631
{
    mangled_assert("?CompareByDistanceAndBusyness@CompareResources@@ABE_NABVResource@@0@Z");
    todo("implement");
}

bool CompareResources::CompareByRus(Resource const &, Resource const &) const // 0x69B82A
{
    mangled_assert("?CompareByRus@CompareResources@@ABE_NABVResource@@0@Z");
    todo("implement");
}

bool CompareResources::CompareByDirectionFromDockShip(Resource const &, Resource const &) const // 0x69B385
{
    mangled_assert("?CompareByDirectionFromDockShip@CompareResources@@ABE_NABVResource@@0@Z");
    todo("implement");
}

bool CompareResources::RandomCompare(Resource const &, Resource const &) const // 0x69B89E
{
    mangled_assert("?RandomCompare@CompareResources@@ABE_NABVResource@@0@Z");
    todo("implement");
}

void ResourceCommand::findInterestingResources(Selection &resources, SobType type, bool useMaxDistance, Ship *ship, vector3 const &centrePosForScan, float maxDistance) // 0x69BCDD
{
    mangled_assert("?findInterestingResources@ResourceCommand@@CGXAAVSelection@@W4SobType@@_NPAVShip@@ABVvector3@@M@Z");
    todo("implement");
}

bool resourceEmpty(Sob const *s) // 0x69C68D
{
    mangled_assert("?resourceEmpty@@YG_NPBVSob@@@Z");
    todo("implement");
}

void ResourceCommand::getAndSetClosestResource(bool) // 0x69BD77
{
    mangled_assert("?getAndSetClosestResource@ResourceCommand@@AAEX_N@Z");
    todo("implement");
}

Resource *ResourceCommand::getClosestResource(bool) // 0x69BE8C
{
    mangled_assert("?getClosestResource@ResourceCommand@@AAEPAVResource@@_N@Z");
    todo("implement");
}

Resource *ResourceCommand::getBestTarget(bool useMaxDistance, Ship *ship, Ship *closestDockShip) // 0x69BDC1
{
    mangled_assert("?getBestTarget@ResourceCommand@@CGPAVResource@@_NPAVShip@@1@Z");
    todo("implement");
}

Resource *ResourceCommand::getBestTarget(Squadron const *forSquad) // 0x69BE6D
{
    mangled_assert("?getBestTarget@ResourceCommand@@SGPAVResource@@PBVSquadron@@@Z");
    todo("implement");
}

bool ResourceCommand::canBeInterrupted(CommandType, Command *) // 0x69B8E4
{
    mangled_assert("?canBeInterrupted@ResourceCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

Sob *ResourceCommand::getSobToNotAvoid() const // 0x69BFE5
{
    mangled_assert("?getSobToNotAvoid@ResourceCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *ResourceCommand::getSobToNotCollideWith() const // 0x69C025
{
    mangled_assert("?getSobToNotCollideWith@ResourceCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

vector3 const &ResourceCommand::getDestinationDtrm() const // 0x69BF1F
{
    mangled_assert("?getDestinationDtrm@ResourceCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &ResourceCommand::getDestinationVis() const // 0x69BF49
{
    mangled_assert("?getDestinationVis@ResourceCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

ComResult ResourceCommand::update(float) // 0x69C91B
{
    mangled_assert("?update@ResourceCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void ResourceCommand::moveToLatchPoint(Resource *) // 0x69C0A5
{
    mangled_assert("?moveToLatchPoint@ResourceCommand@@AAEXPAVResource@@@Z");
    todo("implement");
}

void ResourceCommand::moveUpFromResourcePoint(Resource *) // 0x69C309
{
    mangled_assert("?moveUpFromResourcePoint@ResourceCommand@@AAEXPAVResource@@@Z");
    todo("implement");
}

void ResourceCommand::moveToResourcePoint(Resource *) // 0x69C229
{
    mangled_assert("?moveToResourcePoint@ResourceCommand@@AAEXPAVResource@@@Z");
    todo("implement");
}

bool ResourceCommand::latchWithResource(Resource *) // 0x69C079
{
    mangled_assert("?latchWithResource@ResourceCommand@@AAE_NPAVResource@@@Z");
    todo("implement");
}

bool ResourceCommand::dock() // 0x69BA80
{
    mangled_assert("?dock@ResourceCommand@@QAE_NXZ");
    todo("implement");
}

void ResourceCommand::parade() // 0x69C5AC
{
    mangled_assert("?parade@ResourceCommand@@AAEXXZ");
    todo("implement");
}

bool ResourceCommand::earlyDock() // 0x69BAEC
{
    mangled_assert("?earlyDock@ResourceCommand@@AAE_NXZ");
    todo("implement");
}

void ResourceCommand::moveToResource(Resource *) // 0x69C0FF
{
    mangled_assert("?moveToResource@ResourceCommand@@AAEXPAVResource@@@Z");
    todo("implement");
}

void ResourceCommand::setState(ResourceCommand::ResourcingState const) // 0x69C905
{
    mangled_assert("?setState@ResourceCommand@@AAEXW4ResourcingState@1@@Z");
    todo("implement");
}

void ResourceCommand::updateEngineTrail(ResourceCommand::ResourcingState const) // 0x69CD9F
{
    mangled_assert("?updateEngineTrail@ResourceCommand@@AAEXW4ResourcingState@1@@Z");
    todo("implement");
}

void ResourceCommand::resetCommand() // 0x69C5EC
{
    mangled_assert("?resetCommand@ResourceCommand@@UAEXXZ");
    todo("implement");
}

void ResourceCommand::cleanUpCommand() // 0x69B989
{
    mangled_assert("?cleanUpCommand@ResourceCommand@@UAEXXZ");
    todo("implement");
}

void ResourceCommand::resourcingDone() // 0x69C6AE
{
    mangled_assert("?resourcingDone@ResourceCommand@@QAEXXZ");
    todo("implement");
}

void ResourceCommand::resetTarget() // 0x69C655
{
    mangled_assert("?resetTarget@ResourceCommand@@AAEXXZ");
    todo("implement");
}

void ResourceCommand::getExtraResources(Selection &currentResources, Ship *resourcer) // 0x69BF70
{
    mangled_assert("?getExtraResources@ResourceCommand@@SGXAAVSelection@@PAVShip@@@Z");
    todo("implement");
}

char const *ResourceCommand::getName() const // 0x69BFDF
{
    mangled_assert("?getName@ResourceCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType ResourceCommand::getCommandType() const // 0x69BF1B
{
    mangled_assert("?getCommandType@ResourceCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

ResourceCommand::ResourceCommand(SaveGameData *) // 0x69B17D
{
    mangled_assert("??0ResourceCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void ResourceCommand::defaultSettings() // 0x69BA65
{
    mangled_assert("?defaultSettings@ResourceCommand@@QAEXXZ");
    todo("implement");
}

void ResourceCommand::postRestore() // 0x69C5E7
{
    mangled_assert("?postRestore@ResourceCommand@@UAEXXZ");
    todo("implement");
}

bool ResourceCommand::restore(SaveGameData *) // 0x69C861
{
    mangled_assert("?restore@ResourceCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ResourceCommand::save(SaveGameData *, SaveType) // 0x69C8AE
{
    mangled_assert("?save@ResourceCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

ResourceCommandStaticInfo::ResourceCommandStaticInfo(__int32, float, float) // 0x69B266
{
    mangled_assert("??0ResourceCommandStaticInfo@@QAE@HMM@Z");
    todo("implement");
}

ResourceCommandStaticInfo::~ResourceCommandStaticInfo() // 0x69B2E3
{
    mangled_assert("??1ResourceCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
