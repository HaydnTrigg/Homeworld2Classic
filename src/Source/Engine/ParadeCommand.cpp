#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Race.h>
#include <Engine\CoordSysUtilities.h>
#include <Engine\fixedpoint.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Engine\BuildManager.h>
#include <Engine\dbdefines.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\MultiplierTypes.h>
#include <Engine\HyperSpaceCommand.h>
#include <Engine\DockCommand.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <new>
#include <Engine\Squadron.h>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\Tactics.h>
#include <profile\profile.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <iostream>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <vector>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <xmemory>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\Parade.h>
#include <xhash>
#include <math.h>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\ITweak.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\SOBGroupManager.h>
#include <Mathlib\vector3.h>
#include <Engine\GunBinding.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\HyperSpaceViaGateCommand.h>
#include <Engine\Interpolation.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\EffectCreate.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Engine\sobtypes.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Mathlib\vector2.h>
#include <Engine\MADState.h>
#include <Engine\abilities.h>
#include <luaconfig\luabinding.h>
#include <Engine\SquadronList.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\GameEventDefs.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\GameEventSys.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\HyperspaceManager.h>
#include <Engine\sobid.h>
#include <Engine\MoveCommand.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const ParadeCommand::m_saveToken[0]; // 0x7B7F38
extern SaveData const ParadeCommand::m_saveData[8]; // 0x7B7F48

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6A756F(ParadeCommand *const, Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin);
ParadeCommand::ParadeCommand(Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin) // 0x6A756F
{
    mangled_assert("??0ParadeCommand@@QAE@PAVSquadron@@ABVSobID@@W4ParadeMode@0@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6A756F(this, arg, arg, arg, arg);
}

_extern void _sub_6A7652(ParadeCommand *const);
ParadeCommand::~ParadeCommand() // 0x6A7652
{
    mangled_assert("??1ParadeCommand@@UAE@XZ");
    todo("implement");
    _sub_6A7652(this);
}

_extern bool _sub_6A7D50(ParadeCommand *const, CommandType, Command *);
bool ParadeCommand::canBeInterrupted(CommandType, Command *) // 0x6A7D50
{
    mangled_assert("?canBeInterrupted@ParadeCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A7D50(this, arg, arg);
    return __result;
}

_extern vector3 const &_sub_6A7EFF(ParadeCommand const *const);
vector3 const &ParadeCommand::getDestinationDtrm() const // 0x6A7EFF
{
    mangled_assert("?getDestinationDtrm@ParadeCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A7EFF(this);
    return __result;
}

_extern vector3 const &_sub_6A7F38(ParadeCommand const *const);
vector3 const &ParadeCommand::getDestinationVis() const // 0x6A7F38
{
    mangled_assert("?getDestinationVis@ParadeCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A7F38(this);
    return __result;
}

_extern Ship *_sub_6A7F7C(ParadeCommand const *const);
Ship *ParadeCommand::getWhatWeAreParadingWith() const // 0x6A7F7C
{
    mangled_assert("?getWhatWeAreParadingWith@ParadeCommand@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_6A7F7C(this);
    return __result;
}

_extern bool _sub_6A7F84(ParadeCommand const *const);
bool ParadeCommand::inParadePosition() const // 0x6A7F84
{
    mangled_assert("?inParadePosition@ParadeCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A7F84(this);
    return __result;
}

_extern ComResult _sub_6A8062(ParadeCommand *const, float);
ComResult ParadeCommand::update(float) // 0x6A8062
{
    mangled_assert("?update@ParadeCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6A8062(this, arg);
    return __result;
}

_extern bool _sub_6A7C4F(ParadeCommand *const);
bool ParadeCommand::OrderGiven() // 0x6A7C4F
{
    mangled_assert("?OrderGiven@ParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A7C4F(this);
    return __result;
}

_extern bool _sub_6A8180(ParadeCommand *const, ParadeCommand::ParadeMode);
bool ParadeCommand::warpToParadeSpot(ParadeCommand::ParadeMode) // 0x6A8180
{
    mangled_assert("?warpToParadeSpot@ParadeCommand@@AAE_NW4ParadeMode@1@@Z");
    todo("implement");
    bool __result = _sub_6A8180(this, arg);
    return __result;
}

_extern bool _sub_6A7C5D(ParadeCommand *const);
bool ParadeCommand::RegisterForParade() // 0x6A7C5D
{
    mangled_assert("?RegisterForParade@ParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A7C5D(this);
    return __result;
}

_extern bool _sub_6A76EA(ParadeCommand *const);
bool ParadeCommand::FlyToParadePosition() // 0x6A76EA
{
    mangled_assert("?FlyToParadePosition@ParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A76EA(this);
    return __result;
}

_extern bool _sub_6A7D4B(ParadeCommand const *const, CommandType);
bool ParadeCommand::canBeInterrupted(CommandType) const // 0x6A7D4B
{
    mangled_assert("?canBeInterrupted@ParadeCommand@@QBE_NW4CommandType@@@Z");
    todo("implement");
    bool __result = _sub_6A7D4B(this, arg);
    return __result;
}

_extern void _sub_6A7D9C(ParadeCommand *const);
void ParadeCommand::cleanUpCommand() // 0x6A7D9C
{
    mangled_assert("?cleanUpCommand@ParadeCommand@@UAEXXZ");
    todo("implement");
    _sub_6A7D9C(this);
}

_extern void _sub_6A8054(ParadeCommand *const, ParadeCommand::ParadeState);
void ParadeCommand::setParadeState(ParadeCommand::ParadeState) // 0x6A8054
{
    mangled_assert("?setParadeState@ParadeCommand@@AAEXW4ParadeState@1@@Z");
    todo("implement");
    _sub_6A8054(this, arg);
}

_extern char const *_sub_6A7F76(ParadeCommand const *const);
char const *ParadeCommand::getName() const // 0x6A7F76
{
    mangled_assert("?getName@ParadeCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A7F76(this);
    return __result;
}

_extern Ship *_sub_6A7E16(Ship *);
Ship *ParadeCommand::getClosestShipToParadeWith(Ship *ship) // 0x6A7E16
{
    mangled_assert("?getClosestShipToParadeWith@ParadeCommand@@SGPAVShip@@PAV2@@Z");
    todo("implement");
    Ship * __result = _sub_6A7E16(ship);
    return __result;
}

_extern bool _sub_6A7D3E(ParadeCommand const *const);
bool ParadeCommand::allowPassiveActions() const // 0x6A7D3E
{
    mangled_assert("?allowPassiveActions@ParadeCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6A7D3E(this);
    return __result;
}

_extern _sub_6A7502(ParadeCommand *const, SaveGameData *);
ParadeCommand::ParadeCommand(SaveGameData *) // 0x6A7502
{
    mangled_assert("??0ParadeCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6A7502(this, arg);
}

_extern void _sub_6A7DCD(ParadeCommand *const);
void ParadeCommand::defaultSettings() // 0x6A7DCD
{
    mangled_assert("?defaultSettings@ParadeCommand@@QAEXXZ");
    todo("implement");
    _sub_6A7DCD(this);
}

_extern void _sub_6A7FB5(ParadeCommand *const);
void ParadeCommand::postRestore() // 0x6A7FB5
{
    mangled_assert("?postRestore@ParadeCommand@@UAEXXZ");
    todo("implement");
    _sub_6A7FB5(this);
}

_extern bool _sub_6A7FBA(ParadeCommand *const, SaveGameData *);
bool ParadeCommand::restore(SaveGameData *) // 0x6A7FBA
{
    mangled_assert("?restore@ParadeCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6A7FBA(this, arg);
    return __result;
}

_extern bool _sub_6A8007(ParadeCommand *const, SaveGameData *, SaveType);
bool ParadeCommand::save(SaveGameData *, SaveType) // 0x6A8007
{
    mangled_assert("?save@ParadeCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6A8007(this, arg, arg);
    return __result;
}

_extern _sub_6A7642(ParadeCommandStaticInfo *const);
ParadeCommandStaticInfo::ParadeCommandStaticInfo() // 0x6A7642
{
    mangled_assert("??0ParadeCommandStaticInfo@@QAE@XZ");
    todo("implement");
    _sub_6A7642(this);
}

_extern void _sub_6A76AA(ParadeCommandStaticInfo *const);
ParadeCommandStaticInfo::~ParadeCommandStaticInfo() // 0x6A76AA
{
    mangled_assert("??1ParadeCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6A76AA(this);
}

/* ---------- private code */
#endif
