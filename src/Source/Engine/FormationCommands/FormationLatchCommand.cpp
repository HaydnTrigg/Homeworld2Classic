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

_extern _sub_69DBFD(FormationLatchCommand *const, Formation *, SobID const &, vector3 const &, matrix3 const &, bool);
FormationLatchCommand::FormationLatchCommand(Formation *, SobID const &, vector3 const &, matrix3 const &, bool) // 0x69DBFD
{
    mangled_assert("??0FormationLatchCommand@@QAE@PAVFormation@@ABVSobID@@ABVvector3@@ABVmatrix3@@_N@Z");
    todo("implement");
    _sub_69DBFD(this, arg, arg, arg, arg, arg);
}

_extern void _sub_69DCB4(FormationLatchCommand *const);
FormationLatchCommand::~FormationLatchCommand() // 0x69DCB4
{
    mangled_assert("??1FormationLatchCommand@@UAE@XZ");
    todo("implement");
    _sub_69DCB4(this);
}

_extern void _sub_69DD39(FormationLatchCommand *const);
void FormationLatchCommand::emergencyCleanUp() // 0x69DD39
{
    mangled_assert("?emergencyCleanUp@FormationLatchCommand@@UAEXXZ");
    todo("implement");
    _sub_69DD39(this);
}

_extern FormationCommand::CommandResult _sub_69E4B6(FormationLatchCommand *const, float);
FormationCommand::CommandResult FormationLatchCommand::update(float) // 0x69E4B6
{
    mangled_assert("?update@FormationLatchCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
    FormationCommand::CommandResult __result = _sub_69E4B6(this, arg);
    return __result;
}

_extern Sob *_sub_69E2B7(FormationLatchCommand const *const);
Sob *FormationLatchCommand::getSobToNotAvoid() const // 0x69E2B7
{
    mangled_assert("?getSobToNotAvoid@FormationLatchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_69E2B7(this);
    return __result;
}

_extern Sob *_sub_69E2D3(FormationLatchCommand const *const);
Sob *FormationLatchCommand::getSobToNotCollideWith() const // 0x69E2D3
{
    mangled_assert("?getSobToNotCollideWith@FormationLatchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_69E2D3(this);
    return __result;
}

_extern bool _sub_69E2FB(FormationLatchCommand const *const);
bool FormationLatchCommand::isLatched() const // 0x69E2FB
{
    mangled_assert("?isLatched@FormationLatchCommand@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_69E2FB(this);
    return __result;
}

_extern Sob *_sub_69E2AF(FormationLatchCommand const *const);
Sob *FormationLatchCommand::getSobTarget() const // 0x69E2AF
{
    mangled_assert("?getSobTarget@FormationLatchCommand@@QBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_69E2AF(this);
    return __result;
}

_extern vector3 const &_sub_69E269(FormationLatchCommand const *const, Ship const *);
vector3 const &FormationLatchCommand::getShipOffset(Ship const *) const // 0x69E269
{
    mangled_assert("?getShipOffset@FormationLatchCommand@@ABEABVvector3@@PBVShip@@@Z");
    todo("implement");
    vector3 const & __result = _sub_69E269(this, arg);
    return __result;
}

_extern matrix3 const &_sub_69E28C(FormationLatchCommand const *const, Ship const *);
matrix3 const &FormationLatchCommand::getShipRotation(Ship const *) const // 0x69E28C
{
    mangled_assert("?getShipRotation@FormationLatchCommand@@ABEABVmatrix3@@PBVShip@@@Z");
    todo("implement");
    matrix3 const & __result = _sub_69E28C(this, arg);
    return __result;
}

_extern void _sub_69DFD4(FormationLatchCommand *const, SobWithMesh *);
void FormationLatchCommand::flyToAboveLatchPoint(SobWithMesh *) // 0x69DFD4
{
    mangled_assert("?flyToAboveLatchPoint@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
    _sub_69DFD4(this, arg);
}

_extern void _sub_69DD84(FormationLatchCommand *const, SobWithMesh *);
void FormationLatchCommand::flyDownToLatchPoint(SobWithMesh *) // 0x69DD84
{
    mangled_assert("?flyDownToLatchPoint@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
    _sub_69DD84(this, arg);
}

_extern void _sub_69E305(FormationLatchCommand *const, SobWithMesh *);
void FormationLatchCommand::latch(SobWithMesh *) // 0x69E305
{
    mangled_assert("?latch@FormationLatchCommand@@AAEXPAVSobWithMesh@@@Z");
    todo("implement");
    _sub_69E305(this, arg);
}

_extern FormationCommand::FormationCommandType _sub_69E2EF(FormationLatchCommand const *const);
FormationCommand::FormationCommandType FormationLatchCommand::getType() const // 0x69E2EF
{
    mangled_assert("?getType@FormationLatchCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
    FormationCommand::FormationCommandType __result = _sub_69E2EF(this);
    return __result;
}

_extern vector3 const &_sub_69E236(FormationLatchCommand const *const);
vector3 const &FormationLatchCommand::getDestinationDtrm() const // 0x69E236
{
    mangled_assert("?getDestinationDtrm@FormationLatchCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_69E236(this);
    return __result;
}

_extern vector3 const &_sub_69E24F(FormationLatchCommand const *const);
vector3 const &FormationLatchCommand::getDestinationVis() const // 0x69E24F
{
    mangled_assert("?getDestinationVis@FormationLatchCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_69E24F(this);
    return __result;
}

_extern _sub_69DC6F(FormationLatchCommand *const, SaveGameData *);
FormationLatchCommand::FormationLatchCommand(SaveGameData *) // 0x69DC6F
{
    mangled_assert("??0FormationLatchCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_69DC6F(this, arg);
}

_extern void _sub_69DD12(FormationLatchCommand *const);
void FormationLatchCommand::defaultSettings() // 0x69DD12
{
    mangled_assert("?defaultSettings@FormationLatchCommand@@QAEXXZ");
    todo("implement");
    _sub_69DD12(this);
}

_extern void _sub_69E417(FormationLatchCommand *const);
void FormationLatchCommand::postRestore() // 0x69E417
{
    mangled_assert("?postRestore@FormationLatchCommand@@UAEXXZ");
    todo("implement");
    _sub_69E417(this);
}

_extern bool _sub_69E41C(FormationLatchCommand *const, SaveGameData *);
bool FormationLatchCommand::restore(SaveGameData *) // 0x69E41C
{
    mangled_assert("?restore@FormationLatchCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_69E41C(this, arg);
    return __result;
}

_extern bool _sub_69E469(FormationLatchCommand *const, SaveGameData *, SaveType);
bool FormationLatchCommand::save(SaveGameData *, SaveType) // 0x69E469
{
    mangled_assert("?save@FormationLatchCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_69E469(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
