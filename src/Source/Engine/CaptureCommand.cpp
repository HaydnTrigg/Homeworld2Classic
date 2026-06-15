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

CaptureCommand::CaptureCommand(Squadron *, SobID const &, Command::CommandOrigin) // 0x6A9C1E
{
    mangled_assert("??0CaptureCommand@@QAE@PAVSquadron@@ABVSobID@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

CaptureCommand::~CaptureCommand() // 0x6A9CE6
{
    mangled_assert("??1CaptureCommand@@UAE@XZ");
    todo("implement");
}

bool CaptureCommand::canBeInterrupted(CommandType, Command *) // 0x6A9D6C
{
    mangled_assert("?canBeInterrupted@CaptureCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

ComResult CaptureCommand::update(float) // 0x6AA23B
{
    mangled_assert("?update@CaptureCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void CaptureCommand::setCaptureAnimation() // 0x6AA09D
{
    mangled_assert("?setCaptureAnimation@CaptureCommand@@AAEXXZ");
    todo("implement");
}

void CaptureCommand::closeDownCaptureAnimation() // 0x6A9DEF
{
    mangled_assert("?closeDownCaptureAnimation@CaptureCommand@@AAEXXZ");
    todo("implement");
}

WeaponActivate CaptureCommand::getWeaponActivation() const // 0x6A9EAE
{
    mangled_assert("?getWeaponActivation@CaptureCommand@@UBE?AW4WeaponActivate@@XZ");
    todo("implement");
}

bool CaptureCommand::tooFarAwayFromTarget(Ship *) // 0x6AA0DB
{
    mangled_assert("?tooFarAwayFromTarget@CaptureCommand@@AAE_NPAVShip@@@Z");
    todo("implement");
}

void CaptureCommand::unLatch() // 0x6AA134
{
    mangled_assert("?unLatch@CaptureCommand@@AAEXXZ");
    todo("implement");
}

void CaptureCommand::moveToTarget(Ship *) // 0x6A9F54
{
    mangled_assert("?moveToTarget@CaptureCommand@@AAEXPAVShip@@@Z");
    todo("implement");
}

void CaptureCommand::moveToLastKnownPosition() // 0x6A9EB5
{
    mangled_assert("?moveToLastKnownPosition@CaptureCommand@@AAEXXZ");
    todo("implement");
}

CommandType CaptureCommand::getCommandType() const // 0x6A9E2D
{
    mangled_assert("?getCommandType@CaptureCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

vector3 const &CaptureCommand::getDestinationDtrm() const // 0x6A9E31
{
    mangled_assert("?getDestinationDtrm@CaptureCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &CaptureCommand::getDestinationVis() const // 0x6A9E5B
{
    mangled_assert("?getDestinationVis@CaptureCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

void CaptureCommand::cleanUpCommand() // 0x6A9DAA
{
    mangled_assert("?cleanUpCommand@CaptureCommand@@UAEXXZ");
    todo("implement");
}

Sob *CaptureCommand::getSobToNotAvoid() const // 0x6A9E8C
{
    mangled_assert("?getSobToNotAvoid@CaptureCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *CaptureCommand::getSobToNotCollideWith() const // 0x6A9E9D
{
    mangled_assert("?getSobToNotCollideWith@CaptureCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

void CaptureCommand::resetCommand() // 0x6A9FF5
{
    mangled_assert("?resetCommand@CaptureCommand@@UAEXXZ");
    todo("implement");
}

char const *CaptureCommand::getName() const // 0x6A9E86
{
    mangled_assert("?getName@CaptureCommand@@UBEPBDXZ");
    todo("implement");
}

CaptureCommand::CaptureCommand(SaveGameData *) // 0x6A9BD5
{
    mangled_assert("??0CaptureCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void CaptureCommand::defaultSettings() // 0x6A9E18
{
    mangled_assert("?defaultSettings@CaptureCommand@@QAEXXZ");
    todo("implement");
}

void CaptureCommand::postRestore() // 0x6A9FF4
{
    mangled_assert("?postRestore@CaptureCommand@@UAEXXZ");
    todo("implement");
}

bool CaptureCommand::restore(SaveGameData *) // 0x6AA003
{
    mangled_assert("?restore@CaptureCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool CaptureCommand::save(SaveGameData *, SaveType) // 0x6AA050
{
    mangled_assert("?save@CaptureCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

CaptureCommandStaticInfo::CaptureCommandStaticInfo(ShipStatic *, float) // 0x6A9CA2
{
    mangled_assert("??0CaptureCommandStaticInfo@@QAE@PAVShipStatic@@M@Z");
    todo("implement");
}

CaptureCommandStaticInfo::~CaptureCommandStaticInfo() // 0x6A9D25
{
    mangled_assert("??1CaptureCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

_inline GameEvent_ShipCaptureFailed::~GameEvent_ShipCaptureFailed() // 0x6A9D2C
{
    mangled_assert("??1GameEvent_ShipCaptureFailed@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
