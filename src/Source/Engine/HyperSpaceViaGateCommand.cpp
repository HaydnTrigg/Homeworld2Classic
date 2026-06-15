#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\GameEventDefs.h>
#include <xmemory0>
#include <Engine\GameEventSys.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\ITweak.h>
#include <profile\profile.h>
#include <iostream>
#include <xhash>
#include <Engine\FormHyperspaceGateCommand.h>
#include <Engine\Tactics.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\EngineTrailSystem.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <Engine\SOBGroupManager.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\EffectCreate.h>
#include <util\types.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Engine\MoveCommand.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\commandtype.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\pch.h>
#include <Engine\HyperSpaceViaGateCommand.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\abilities.h>
#include <Engine\config.h>
#include <Engine\SquadronList.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\shipstatic.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Universe.h>
#include <boost\throw_exception.hpp>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Race.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\HyperspaceManager.h>
#include <Engine\BuildManager.h>
#include <Engine\sobid.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const HyperSpaceViaGateCommand::m_saveToken[0]; // 0x7B8AF0
extern SaveData const HyperSpaceViaGateCommand::m_saveData[4]; // 0x7B8B10

/* ---------- private variables */

/* ---------- public code */

HyperSpaceViaGateCommand::HyperSpaceViaGateCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6AB805
{
    mangled_assert("??0HyperSpaceViaGateCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

HyperSpaceViaGateCommand::~HyperSpaceViaGateCommand() // 0x6AB87C
{
    mangled_assert("??1HyperSpaceViaGateCommand@@UAE@XZ");
    todo("implement");
}

bool HyperSpaceViaGateCommand::allowPassiveActions() const // 0x6AB8FB
{
    mangled_assert("?allowPassiveActions@HyperSpaceViaGateCommand@@UBE_NXZ");
    todo("implement");
}

bool HyperSpaceViaGateCommand::canHyperspace() const // 0x6AB95B
{
    mangled_assert("?canHyperspace@HyperSpaceViaGateCommand@@ABE_NXZ");
    todo("implement");
}

ComResult HyperSpaceViaGateCommand::update(float) // 0x6ABE37
{
    mangled_assert("?update@HyperSpaceViaGateCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

Fixed<10> HyperSpaceViaGateCommand::getCostOfUsingGate(Squadron const *squadUsingTheGate, Squadron const *gate) // 0x6ABC42
{
    mangled_assert("?getCostOfUsingGate@HyperSpaceViaGateCommand@@SG?AV?$Fixed@$09@@PBVSquadron@@0@Z");
    todo("implement");
}

void HyperSpaceViaGateCommand::flyToGate(Ship *) // 0x6ABAFE
{
    mangled_assert("?flyToGate@HyperSpaceViaGateCommand@@AAEXPAVShip@@@Z");
    todo("implement");
}

void HyperSpaceViaGateCommand::flyToNearGate(Ship *) // 0x6ABB9E
{
    mangled_assert("?flyToNearGate@HyperSpaceViaGateCommand@@AAEXPAVShip@@@Z");
    todo("implement");
}

void HyperSpaceViaGateCommand::exitHyperspace() // 0x6ABA43
{
    mangled_assert("?exitHyperspace@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
}

void HyperSpaceViaGateCommand::dropOutOfHyperspace() // 0x6AB9D5
{
    mangled_assert("?dropOutOfHyperspace@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
}

CommandType HyperSpaceViaGateCommand::getCommandType() const // 0x6ABC3E
{
    mangled_assert("?getCommandType@HyperSpaceViaGateCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void HyperSpaceViaGateCommand::resetCommand() // 0x6ABD87
{
    mangled_assert("?resetCommand@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
}

void HyperSpaceViaGateCommand::cleanUpCommand() // 0x6AB9BC
{
    mangled_assert("?cleanUpCommand@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
}

bool HyperSpaceViaGateCommand::canBeInterrupted(CommandType, Command *) // 0x6AB90D
{
    mangled_assert("?canBeInterrupted@HyperSpaceViaGateCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

vector3 const &HyperSpaceViaGateCommand::getDestinationDtrm() const // 0x6ABCC7
{
    mangled_assert("?getDestinationDtrm@HyperSpaceViaGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &HyperSpaceViaGateCommand::getDestinationVis() const // 0x6ABCE0
{
    mangled_assert("?getDestinationVis@HyperSpaceViaGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

float HyperSpaceViaGateCommand::getTransitTime() const // 0x6ABCFC
{
    mangled_assert("?getTransitTime@HyperSpaceViaGateCommand@@UBEMXZ");
    todo("implement");
}

char const *HyperSpaceViaGateCommand::getName() const // 0x6ABCF6
{
    mangled_assert("?getName@HyperSpaceViaGateCommand@@UBEPBDXZ");
    todo("implement");
}

void HyperSpaceViaGateCommand::jumpEffectToEnd() // 0x6ABD16
{
    mangled_assert("?jumpEffectToEnd@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
}

HyperSpaceViaGateCommand::HyperSpaceViaGateCommand(SaveGameData *) // 0x6AB7B2
{
    mangled_assert("??0HyperSpaceViaGateCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void HyperSpaceViaGateCommand::defaultSettings() // 0x6AB9BD
{
    mangled_assert("?defaultSettings@HyperSpaceViaGateCommand@@QAEXXZ");
    todo("implement");
}

void HyperSpaceViaGateCommand::postRestore() // 0x6ABD82
{
    mangled_assert("?postRestore@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
}

bool HyperSpaceViaGateCommand::restore(SaveGameData *) // 0x6ABD9D
{
    mangled_assert("?restore@HyperSpaceViaGateCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool HyperSpaceViaGateCommand::save(SaveGameData *, SaveType) // 0x6ABDEA
{
    mangled_assert("?save@HyperSpaceViaGateCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

HyperSpaceViaGateCommandStaticInfo::HyperSpaceViaGateCommandStaticInfo(ShipStatic *) // 0x6AB862
{
    mangled_assert("??0HyperSpaceViaGateCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
}

HyperSpaceViaGateCommandStaticInfo::~HyperSpaceViaGateCommandStaticInfo() // 0x6AB8BB
{
    mangled_assert("??1HyperSpaceViaGateCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
