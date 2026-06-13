#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\MADState.h>
#include <Engine\fixedpoint.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\visibility.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Engine\EffectCreate.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Engine\CaptureManager.h>
#include <vector>
#include <Engine\LatchPointManager.h>
#include <xmemory>
#include <math.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Mathlib\vector3.h>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <map>
#include <xtree>
#include <Engine\Ship\Formation.h>
#include <Engine\Interpolation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Ship\FormationController.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <util\types.h>
#include <Engine\MeshAnimation.h>
#include <util\colour.h>
#include <Engine\Race.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\BuildManager.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\alliance.h>
#include <Engine\WeaponStatic.h>
#include <Engine\weaponfiretypes.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\CaptureCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\SquadronList.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <Engine\Player.h>
#include <boost\throw_exception.hpp>
#include <Engine\ResearchManager.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <Engine\sobid.h>
#include <deque>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const CaptureCommand::m_saveToken[0]; // 0x7B8678
extern SaveData const CaptureCommand::m_saveData[3]; // 0x7B8688

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6A9C1E(CaptureCommand *const, Squadron *, SobID const &, Command::CommandOrigin);
CaptureCommand::CaptureCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6A9C1E
{
    mangled_assert("??0CaptureCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
    _sub_6A9C1E(this, arg, arg, arg);
}

_extern void _sub_6A9CE6(CaptureCommand *const);
CaptureCommand::~CaptureCommand() // 0x6A9CE6
{
    mangled_assert("??1CaptureCommand@@UAE@XZ");
    todo("implement");
    _sub_6A9CE6(this);
}

_extern bool _sub_6A9D6C(CaptureCommand *const, CommandType, Command *);
bool CaptureCommand::canBeInterrupted(CommandType, Command *) // 0x6A9D6C
{
    mangled_assert("?canBeInterrupted@CaptureCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A9D6C(this, arg, arg);
    return __result;
}

_extern ComResult _sub_6AA23B(CaptureCommand *const, float);
ComResult CaptureCommand::update(float) // 0x6AA23B
{
    mangled_assert("?update@CaptureCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
    ComResult __result = _sub_6AA23B(this, arg);
    return __result;
}

_extern void _sub_6AA09D(CaptureCommand *const);
void CaptureCommand::setCaptureAnimation() // 0x6AA09D
{
    mangled_assert("?setCaptureAnimation@CaptureCommand@@AAEXXZ");
    todo("implement");
    _sub_6AA09D(this);
}

_extern void _sub_6A9DEF(CaptureCommand *const);
void CaptureCommand::closeDownCaptureAnimation() // 0x6A9DEF
{
    mangled_assert("?closeDownCaptureAnimation@CaptureCommand@@AAEXXZ");
    todo("implement");
    _sub_6A9DEF(this);
}

_extern WeaponActivate _sub_6A9EAE(CaptureCommand const *const);
WeaponActivate CaptureCommand::getWeaponActivation() const // 0x6A9EAE
{
    mangled_assert("?getWeaponActivation@CaptureCommand@@UBE?AW4WeaponActivate@@XZ");
    todo("implement");
    WeaponActivate __result = _sub_6A9EAE(this);
    return __result;
}

_extern bool _sub_6AA0DB(CaptureCommand *const, Ship *);
bool CaptureCommand::tooFarAwayFromTarget(Ship *) // 0x6AA0DB
{
    mangled_assert("?tooFarAwayFromTarget@CaptureCommand@@AAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_6AA0DB(this, arg);
    return __result;
}

_extern void _sub_6AA134(CaptureCommand *const);
void CaptureCommand::unLatch() // 0x6AA134
{
    mangled_assert("?unLatch@CaptureCommand@@AAEXXZ");
    todo("implement");
    _sub_6AA134(this);
}

_extern void _sub_6A9F54(CaptureCommand *const, Ship *);
void CaptureCommand::moveToTarget(Ship *) // 0x6A9F54
{
    mangled_assert("?moveToTarget@CaptureCommand@@AAEXPAVShip@@@Z");
    todo("implement");
    _sub_6A9F54(this, arg);
}

_extern void _sub_6A9EB5(CaptureCommand *const);
void CaptureCommand::moveToLastKnownPosition() // 0x6A9EB5
{
    mangled_assert("?moveToLastKnownPosition@CaptureCommand@@AAEXXZ");
    todo("implement");
    _sub_6A9EB5(this);
}

_extern CommandType _sub_6A9E2D(CaptureCommand const *const);
CommandType CaptureCommand::getCommandType() const // 0x6A9E2D
{
    mangled_assert("?getCommandType@CaptureCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_6A9E2D(this);
    return __result;
}

_extern vector3 const &_sub_6A9E31(CaptureCommand const *const);
vector3 const &CaptureCommand::getDestinationDtrm() const // 0x6A9E31
{
    mangled_assert("?getDestinationDtrm@CaptureCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A9E31(this);
    return __result;
}

_extern vector3 const &_sub_6A9E5B(CaptureCommand const *const);
vector3 const &CaptureCommand::getDestinationVis() const // 0x6A9E5B
{
    mangled_assert("?getDestinationVis@CaptureCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A9E5B(this);
    return __result;
}

_extern void _sub_6A9DAA(CaptureCommand *const);
void CaptureCommand::cleanUpCommand() // 0x6A9DAA
{
    mangled_assert("?cleanUpCommand@CaptureCommand@@UAEXXZ");
    todo("implement");
    _sub_6A9DAA(this);
}

_extern Sob *_sub_6A9E8C(CaptureCommand const *const);
Sob *CaptureCommand::getSobToNotAvoid() const // 0x6A9E8C
{
    mangled_assert("?getSobToNotAvoid@CaptureCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A9E8C(this);
    return __result;
}

_extern Sob *_sub_6A9E9D(CaptureCommand const *const);
Sob *CaptureCommand::getSobToNotCollideWith() const // 0x6A9E9D
{
    mangled_assert("?getSobToNotCollideWith@CaptureCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6A9E9D(this);
    return __result;
}

_extern void _sub_6A9FF5(CaptureCommand *const);
void CaptureCommand::resetCommand() // 0x6A9FF5
{
    mangled_assert("?resetCommand@CaptureCommand@@UAEXXZ");
    todo("implement");
    _sub_6A9FF5(this);
}

_extern char const *_sub_6A9E86(CaptureCommand const *const);
char const *CaptureCommand::getName() const // 0x6A9E86
{
    mangled_assert("?getName@CaptureCommand@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A9E86(this);
    return __result;
}

_extern _sub_6A9BD5(CaptureCommand *const, SaveGameData *);
CaptureCommand::CaptureCommand(SaveGameData *) // 0x6A9BD5
{
    mangled_assert("??0CaptureCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6A9BD5(this, arg);
}

_extern void _sub_6A9E18(CaptureCommand *const);
void CaptureCommand::defaultSettings() // 0x6A9E18
{
    mangled_assert("?defaultSettings@CaptureCommand@@QAEXXZ");
    todo("implement");
    _sub_6A9E18(this);
}

_extern void _sub_6A9FF4(CaptureCommand *const);
void CaptureCommand::postRestore() // 0x6A9FF4
{
    mangled_assert("?postRestore@CaptureCommand@@UAEXXZ");
    todo("implement");
    _sub_6A9FF4(this);
}

_extern bool _sub_6AA003(CaptureCommand *const, SaveGameData *);
bool CaptureCommand::restore(SaveGameData *) // 0x6AA003
{
    mangled_assert("?restore@CaptureCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6AA003(this, arg);
    return __result;
}

_extern bool _sub_6AA050(CaptureCommand *const, SaveGameData *, SaveType);
bool CaptureCommand::save(SaveGameData *, SaveType) // 0x6AA050
{
    mangled_assert("?save@CaptureCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6AA050(this, arg, arg);
    return __result;
}

_extern _sub_6A9CA2(CaptureCommandStaticInfo *const, ShipStatic *, float);
CaptureCommandStaticInfo::CaptureCommandStaticInfo(ShipStatic *, float) // 0x6A9CA2
{
    mangled_assert("??0CaptureCommandStaticInfo@@QAE@PAVShipStatic@@M@Z");
    todo("implement");
    _sub_6A9CA2(this, arg, arg);
}

_extern void _sub_6A9D25(CaptureCommandStaticInfo *const);
CaptureCommandStaticInfo::~CaptureCommandStaticInfo() // 0x6A9D25
{
    mangled_assert("??1CaptureCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6A9D25(this);
}

_extern void _sub_6A9D2C(GameEvent_ShipCaptureFailed *const);
_inline GameEvent_ShipCaptureFailed::~GameEvent_ShipCaptureFailed() // 0x6A9D2C
{
    mangled_assert("??1GameEvent_ShipCaptureFailed@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6A9D2C(this);
}

/* ---------- private code */
#endif
