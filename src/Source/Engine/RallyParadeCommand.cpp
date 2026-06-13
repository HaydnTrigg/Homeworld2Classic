#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\Ship\FormationTargetInfo.h>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\EffectCreate.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <new>
#include <Engine\Squadron.h>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\Parade.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <xhash>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <math.h>
#include <lua\lua.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\Universe.h>
#include <Engine\Waypoint.h>
#include <Engine\GameEventDefs.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\GameEventSys.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <Engine\savegameimpl.h>
#include <Engine\pathpoints.h>
#include <Engine\HyperspaceManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <profile\profile.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\MoveCommand.h>
#include <iostream>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Race.h>
#include <Engine\commandtype.h>
#include <Engine\CoordSysUtilities.h>
#include <Engine\pch.h>
#include <Engine\RallyParadeCommand.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <Mathlib\vector2.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <Engine\BuildManager.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <Engine\shipHold.h>
#include <Engine\DockCommand.h>
#include <Engine\Tactics.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\ITweak.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\GunBinding.h>
#include <Engine\sobid.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const RallyParadeCommand::m_saveToken[0]; // 0x7B7CC0
extern SaveData const RallyParadeCommand::m_saveData[7]; // 0x7B7CD8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6A6BF4(RallyParadeCommand *const, Squadron *, SobID const &, Command::CommandOrigin);
RallyParadeCommand::RallyParadeCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6A6BF4
{
    mangled_assert("??0RallyParadeCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6A6BF4(this, arg, arg, arg);
}

_extern void _sub_6A6C79(RallyParadeCommand *const);
RallyParadeCommand::~RallyParadeCommand() // 0x6A6C79
{
    mangled_assert("??1RallyParadeCommand@@UAE@XZ");
    todo("implement");
    _sub_6A6C79(this);
}

_extern SlotID &_sub_6A6CD1(SlotID *const, SlotID const &);
_inline SlotID &SlotID::operator=(SlotID const &) // 0x6A6CD1
{
    mangled_assert("??4SlotID@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SlotID & __result = _sub_6A6CD1(this, arg);
    return __result;
}

_extern bool _sub_6A7249(RallyParadeCommand *const, CommandType, Command *);
bool RallyParadeCommand::canBeInterrupted(CommandType, Command *) // 0x6A7249
{
    mangled_assert("?canBeInterrupted@RallyParadeCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A7249(this, arg, arg);
    return __result;
}

_extern vector3 const &_sub_6A72CB(RallyParadeCommand const *const);
vector3 const &RallyParadeCommand::getDestinationDtrm() const // 0x6A72CB
{
    mangled_assert("?getDestinationDtrm@RallyParadeCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A72CB(this);
    return __result;
}

_extern vector3 const &_sub_6A7304(RallyParadeCommand const *const);
vector3 const &RallyParadeCommand::getDestinationVis() const // 0x6A7304
{
    mangled_assert("?getDestinationVis@RallyParadeCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A7304(this);
    return __result;
}

_extern Ship *_sub_6A7347(RallyParadeCommand const *const);
Ship *RallyParadeCommand::getWhatWeAreParadingWith() const // 0x6A7347
{
    mangled_assert("?getWhatWeAreParadingWith@RallyParadeCommand@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_6A7347(this);
    return __result;
}

_extern bool _sub_6A734F(RallyParadeCommand const *const);
bool RallyParadeCommand::inParadePosition() const // 0x6A734F
{
    mangled_assert("?inParadePosition@RallyParadeCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6A734F(this);
    return __result;
}

_extern ComResult _sub_6A7482(RallyParadeCommand *const, float);
ComResult RallyParadeCommand::update(float) // 0x6A7482
{
    mangled_assert("?update@RallyParadeCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6A7482(this, arg);
    return __result;
}

_extern bool _sub_6A7152(RallyParadeCommand *const);
bool RallyParadeCommand::OrderGiven() // 0x6A7152
{
    mangled_assert("?OrderGiven@RallyParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A7152(this);
    return __result;
}

_extern bool _sub_6A7160(RallyParadeCommand *const);
bool RallyParadeCommand::RegisterForParade() // 0x6A7160
{
    mangled_assert("?RegisterForParade@RallyParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A7160(this);
    return __result;
}

_extern bool _sub_6A6D02(RallyParadeCommand *const);
bool RallyParadeCommand::FlyToParadePosition() // 0x6A6D02
{
    mangled_assert("?FlyToParadePosition@RallyParadeCommand@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_6A6D02(this);
    return __result;
}

_extern bool _sub_6A7244(RallyParadeCommand const *const, CommandType);
bool RallyParadeCommand::canBeInterrupted(CommandType) const // 0x6A7244
{
    mangled_assert("?canBeInterrupted@RallyParadeCommand@@QBE_NW4CommandType@@@Z");
    todo("implement");
    bool __result = _sub_6A7244(this, arg);
    return __result;
}

_extern void _sub_6A7449(RallyParadeCommand *const);
void RallyParadeCommand::unregisterParadeSpot() // 0x6A7449
{
    mangled_assert("?unregisterParadeSpot@RallyParadeCommand@@QAEXXZ");
    todo("implement");
    _sub_6A7449(this);
}

_extern void _sub_6A7287(RallyParadeCommand *const);
void RallyParadeCommand::cleanUpCommand() // 0x6A7287
{
    mangled_assert("?cleanUpCommand@RallyParadeCommand@@UAEXXZ");
    todo("implement");
    _sub_6A7287(this);
}

_extern void _sub_6A743B(RallyParadeCommand *const, RallyParadeCommand::ParadeState);
void RallyParadeCommand::setParadeState(RallyParadeCommand::ParadeState) // 0x6A743B
{
    mangled_assert("?setParadeState@RallyParadeCommand@@AAEXW4ParadeState@1@@Z");
    todo("implement");
    _sub_6A743B(this, arg);
}

_extern char const *_sub_6A733A(RallyParadeCommand const *const);
char const *RallyParadeCommand::getName() const // 0x6A733A
{
    mangled_assert("?getName@RallyParadeCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A733A(this);
    return __result;
}

_extern bool _sub_6A7241(RallyParadeCommand const *const);
bool RallyParadeCommand::allowPassiveActions() const // 0x6A7241
{
    mangled_assert("?allowPassiveActions@RallyParadeCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6A7241(this);
    return __result;
}

_extern _sub_6A6B87(RallyParadeCommand *const, SaveGameData *);
RallyParadeCommand::RallyParadeCommand(SaveGameData *) // 0x6A6B87
{
    mangled_assert("??0RallyParadeCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6A6B87(this, arg);
}

_extern void _sub_6A728C(RallyParadeCommand *const);
void RallyParadeCommand::defaultSettings() // 0x6A728C
{
    mangled_assert("?defaultSettings@RallyParadeCommand@@QAEXXZ");
    todo("implement");
    _sub_6A728C(this);
}

_extern void _sub_6A739C(RallyParadeCommand *const);
void RallyParadeCommand::postRestore() // 0x6A739C
{
    mangled_assert("?postRestore@RallyParadeCommand@@UAEXXZ");
    todo("implement");
    _sub_6A739C(this);
}

_extern bool _sub_6A73A1(RallyParadeCommand *const, SaveGameData *);
bool RallyParadeCommand::restore(SaveGameData *) // 0x6A73A1
{
    mangled_assert("?restore@RallyParadeCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6A73A1(this, arg);
    return __result;
}

_extern bool _sub_6A73EE(RallyParadeCommand *const, SaveGameData *, SaveType);
bool RallyParadeCommand::save(SaveGameData *, SaveType) // 0x6A73EE
{
    mangled_assert("?save@RallyParadeCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6A73EE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
