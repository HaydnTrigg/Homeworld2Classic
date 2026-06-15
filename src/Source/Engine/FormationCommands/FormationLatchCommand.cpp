#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix3.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <Engine\Ship\FormationController.h>
#include <utility>
#include <iosfwd>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <vector>
#include <Engine\Physics\RigidBodyController.h>
#include <xmemory>
#include <list>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\shipstatic.h>
#include <util\colour.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\ShieldTypes.h>
#include <Engine\GunBinding.h>
#include <Engine\selection.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\savegamedef.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\commandtype.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationLatchCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Mathlib\vector2.h>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <Engine\abilities.h>
#include <assist\stlexsmallvector.h>
#include <boost\throw_exception.hpp>
#include <Engine\Ship\Formation.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\Ship\FormationPattern.h>
#include <boost\detail\lwm_win32.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationLatchCommand::m_saveToken[0]; // 0x7B6D78
extern SaveData const FormationLatchCommand::m_saveData[5]; // 0x7B6D90

/* ---------- private variables */

/* ---------- public code */

FormationLatchCommand::FormationLatchCommand(Formation *, SobID const &, vector3 const &, matrix3 const &, bool) // 0x69DBFD
{
    mangled_assert("??0FormationLatchCommand@@QAE@PAVFormation@@ABVSobID@@ABVvector3@@ABVmatrix3@@_N@Z");
    todo("implement");
}

FormationLatchCommand::~FormationLatchCommand() // 0x69DCB4
{
    mangled_assert("??1FormationLatchCommand@@UAE@XZ");
    todo("implement");
}

void FormationLatchCommand::emergencyCleanUp() // 0x69DD39
{
    mangled_assert("?emergencyCleanUp@FormationLatchCommand@@UAEXXZ");
    todo("implement");
}

FormationCommand::CommandResult FormationLatchCommand::update(float) // 0x69E4B6
{
    mangled_assert("?update@FormationLatchCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
}

Sob *FormationLatchCommand::getSobToNotAvoid() const // 0x69E2B7
{
    mangled_assert("?getSobToNotAvoid@FormationLatchCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *FormationLatchCommand::getSobToNotCollideWith() const // 0x69E2D3
{
    mangled_assert("?getSobToNotCollideWith@FormationLatchCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

bool FormationLatchCommand::isLatched() const // 0x69E2FB
{
    mangled_assert("?isLatched@FormationLatchCommand@@QBE_NXZ");
    todo("implement");
}

Sob *FormationLatchCommand::getSobTarget() const // 0x69E2AF
{
    mangled_assert("?getSobTarget@FormationLatchCommand@@QBEPAVSob@@XZ");
    todo("implement");
}

vector3 const &FormationLatchCommand::getShipOffset(Ship const *) const // 0x69E269
{
    mangled_assert("?getShipOffset@FormationLatchCommand@@ABEABVvector3@@PBVShip@@@Z");
    todo("implement");
}

matrix3 const &FormationLatchCommand::getShipRotation(Ship const *) const // 0x69E28C
{
    mangled_assert("?getShipRotation@FormationLatchCommand@@ABEABVmatrix3@@PBVShip@@@Z");
    todo("implement");
}

void FormationLatchCommand::flyToAboveLatchPoint(SobWithMesh *) // 0x69DFD4
{
    mangled_assert("?flyToAboveLatchPoint@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
}

void FormationLatchCommand::flyDownToLatchPoint(SobWithMesh *) // 0x69DD84
{
    mangled_assert("?flyDownToLatchPoint@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
}

void FormationLatchCommand::latch(SobWithMesh *) // 0x69E305
{
    mangled_assert("?latch@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
}

FormationCommand::FormationCommandType FormationLatchCommand::getType() const // 0x69E2EF
{
    mangled_assert("?getType@FormationLatchCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
}

vector3 const &FormationLatchCommand::getDestinationDtrm() const // 0x69E236
{
    mangled_assert("?getDestinationDtrm@FormationLatchCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &FormationLatchCommand::getDestinationVis() const // 0x69E24F
{
    mangled_assert("?getDestinationVis@FormationLatchCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

FormationLatchCommand::FormationLatchCommand(SaveGameData *) // 0x69DC6F
{
    mangled_assert("??0FormationLatchCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void FormationLatchCommand::defaultSettings() // 0x69DD12
{
    mangled_assert("?defaultSettings@FormationLatchCommand@@QAEXXZ");
    todo("implement");
}

void FormationLatchCommand::postRestore() // 0x69E417
{
    mangled_assert("?postRestore@FormationLatchCommand@@UAEXXZ");
    todo("implement");
}

bool FormationLatchCommand::restore(SaveGameData *) // 0x69E41C
{
    mangled_assert("?restore@FormationLatchCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool FormationLatchCommand::save(SaveGameData *, SaveType) // 0x69E469
{
    mangled_assert("?save@FormationLatchCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
