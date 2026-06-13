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

_extern _sub_6AB805(HyperSpaceViaGateCommand *const, Squadron *, SobID const &, Command::CommandOrigin);
HyperSpaceViaGateCommand::HyperSpaceViaGateCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6AB805
{
    mangled_assert("??0HyperSpaceViaGateCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6AB805(this, arg, arg, arg);
}

_extern void _sub_6AB87C(HyperSpaceViaGateCommand *const);
HyperSpaceViaGateCommand::~HyperSpaceViaGateCommand() // 0x6AB87C
{
    mangled_assert("??1HyperSpaceViaGateCommand@@UAE@XZ");
    todo("implement");
    _sub_6AB87C(this);
}

_extern bool _sub_6AB8FB(HyperSpaceViaGateCommand const *const);
bool HyperSpaceViaGateCommand::allowPassiveActions() const // 0x6AB8FB
{
    mangled_assert("?allowPassiveActions@HyperSpaceViaGateCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6AB8FB(this);
    return __result;
}

_extern bool _sub_6AB95B(HyperSpaceViaGateCommand const *const);
bool HyperSpaceViaGateCommand::canHyperspace() const // 0x6AB95B
{
    mangled_assert("?canHyperspace@HyperSpaceViaGateCommand@@ABE_NXZ");
    todo("implement");
    bool __result = _sub_6AB95B(this);
    return __result;
}

_extern ComResult _sub_6ABE37(HyperSpaceViaGateCommand *const, float);
ComResult HyperSpaceViaGateCommand::update(float) // 0x6ABE37
{
    mangled_assert("?update@HyperSpaceViaGateCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6ABE37(this, arg);
    return __result;
}

_extern Fixed<10> _sub_6ABC42(Squadron const *, Squadron const *);
Fixed<10> HyperSpaceViaGateCommand::getCostOfUsingGate(Squadron const *squadUsingTheGate, Squadron const *gate) // 0x6ABC42
{
    mangled_assert("?getCostOfUsingGate@HyperSpaceViaGateCommand@@SG?AV?$Fixed@$09@@PBVSquadron@@0@Z");
    todo("implement");
    Fixed<10> __result = _sub_6ABC42(squadUsingTheGate, gate);
    return __result;
}

_extern void _sub_6ABAFE(HyperSpaceViaGateCommand *const, Ship *);
void HyperSpaceViaGateCommand::flyToGate(Ship *) // 0x6ABAFE
{
    mangled_assert("?flyToGate@HyperSpaceViaGateCommand@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_6ABAFE(this, arg);
}

_extern void _sub_6ABB9E(HyperSpaceViaGateCommand *const, Ship *);
void HyperSpaceViaGateCommand::flyToNearGate(Ship *) // 0x6ABB9E
{
    mangled_assert("?flyToNearGate@HyperSpaceViaGateCommand@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_6ABB9E(this, arg);
}

_extern void _sub_6ABA43(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::exitHyperspace() // 0x6ABA43
{
    mangled_assert("?exitHyperspace@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
    _sub_6ABA43(this);
}

_extern void _sub_6AB9D5(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::dropOutOfHyperspace() // 0x6AB9D5
{
    mangled_assert("?dropOutOfHyperspace@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
    _sub_6AB9D5(this);
}

_extern CommandType _sub_6ABC3E(HyperSpaceViaGateCommand const *const);
CommandType HyperSpaceViaGateCommand::getCommandType() const // 0x6ABC3E
{
    mangled_assert("?getCommandType@HyperSpaceViaGateCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6ABC3E(this);
    return __result;
}

_extern void _sub_6ABD87(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::resetCommand() // 0x6ABD87
{
    mangled_assert("?resetCommand@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
    _sub_6ABD87(this);
}

_extern void _sub_6AB9BC(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::cleanUpCommand() // 0x6AB9BC
{
    mangled_assert("?cleanUpCommand@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
    _sub_6AB9BC(this);
}

_extern bool _sub_6AB90D(HyperSpaceViaGateCommand *const, CommandType, Command *);
bool HyperSpaceViaGateCommand::canBeInterrupted(CommandType, Command *) // 0x6AB90D
{
    mangled_assert("?canBeInterrupted@HyperSpaceViaGateCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AB90D(this, arg, arg);
    return __result;
}

_extern vector3 const &_sub_6ABCC7(HyperSpaceViaGateCommand const *const);
vector3 const &HyperSpaceViaGateCommand::getDestinationDtrm() const // 0x6ABCC7
{
    mangled_assert("?getDestinationDtrm@HyperSpaceViaGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6ABCC7(this);
    return __result;
}

_extern vector3 const &_sub_6ABCE0(HyperSpaceViaGateCommand const *const);
vector3 const &HyperSpaceViaGateCommand::getDestinationVis() const // 0x6ABCE0
{
    mangled_assert("?getDestinationVis@HyperSpaceViaGateCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6ABCE0(this);
    return __result;
}

_extern float _sub_6ABCFC(HyperSpaceViaGateCommand const *const);
float HyperSpaceViaGateCommand::getTransitTime() const // 0x6ABCFC
{
    mangled_assert("?getTransitTime@HyperSpaceViaGateCommand@@UBEMXZ");
    todo("implement");
    float __result = _sub_6ABCFC(this);
    return __result;
}

_extern char const *_sub_6ABCF6(HyperSpaceViaGateCommand const *const);
char const *HyperSpaceViaGateCommand::getName() const // 0x6ABCF6
{
    mangled_assert("?getName@HyperSpaceViaGateCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6ABCF6(this);
    return __result;
}

_extern void _sub_6ABD16(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::jumpEffectToEnd() // 0x6ABD16
{
    mangled_assert("?jumpEffectToEnd@HyperSpaceViaGateCommand@@MAEXXZ");
    todo("implement");
    _sub_6ABD16(this);
}

_extern _sub_6AB7B2(HyperSpaceViaGateCommand *const, SaveGameData *);
HyperSpaceViaGateCommand::HyperSpaceViaGateCommand(SaveGameData *) // 0x6AB7B2
{
    mangled_assert("??0HyperSpaceViaGateCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6AB7B2(this, arg);
}

_extern void _sub_6AB9BD(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::defaultSettings() // 0x6AB9BD
{
    mangled_assert("?defaultSettings@HyperSpaceViaGateCommand@@QAEXXZ");
    todo("implement");
    _sub_6AB9BD(this);
}

_extern void _sub_6ABD82(HyperSpaceViaGateCommand *const);
void HyperSpaceViaGateCommand::postRestore() // 0x6ABD82
{
    mangled_assert("?postRestore@HyperSpaceViaGateCommand@@UAEXXZ");
    todo("implement");
    _sub_6ABD82(this);
}

_extern bool _sub_6ABD9D(HyperSpaceViaGateCommand *const, SaveGameData *);
bool HyperSpaceViaGateCommand::restore(SaveGameData *) // 0x6ABD9D
{
    mangled_assert("?restore@HyperSpaceViaGateCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6ABD9D(this, arg);
    return __result;
}

_extern bool _sub_6ABDEA(HyperSpaceViaGateCommand *const, SaveGameData *, SaveType);
bool HyperSpaceViaGateCommand::save(SaveGameData *, SaveType) // 0x6ABDEA
{
    mangled_assert("?save@HyperSpaceViaGateCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6ABDEA(this, arg, arg);
    return __result;
}

_extern _sub_6AB862(HyperSpaceViaGateCommandStaticInfo *const, ShipStatic *);
HyperSpaceViaGateCommandStaticInfo::HyperSpaceViaGateCommandStaticInfo(ShipStatic *) // 0x6AB862
{
    mangled_assert("??0HyperSpaceViaGateCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
    _sub_6AB862(this, arg);
}

_extern void _sub_6AB8BB(HyperSpaceViaGateCommandStaticInfo *const);
HyperSpaceViaGateCommandStaticInfo::~HyperSpaceViaGateCommandStaticInfo() // 0x6AB8BB
{
    mangled_assert("??1HyperSpaceViaGateCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6AB8BB(this);
}

/* ---------- private code */
#endif
