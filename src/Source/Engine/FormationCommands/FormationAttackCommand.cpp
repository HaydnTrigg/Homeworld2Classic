#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <new>
#include <Engine\AttackStyle.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <list>
#include <iostream>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <Engine\savegameimpl.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationAttackCommand.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\JustShootAttackStyle.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <assist\stlexsmallvector.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationAttackCommand::m_saveToken[0]; // 0x7B96C0
extern SaveData const FormationAttackCommand::m_saveData[3]; // 0x7B96D8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6B0DF5(FormationAttackCommand *const, Formation *, Selection const &);
FormationAttackCommand::FormationAttackCommand(Formation *, Selection const &) // 0x6B0DF5
{
    mangled_assert("??0FormationAttackCommand@@QAE@PAVFormation@@ABVSelection@@@Z");
    todo("implement");
    _sub_6B0DF5(this, arg, arg);
}

_extern void _sub_6B0E96(FormationAttackCommand *const);
FormationAttackCommand::~FormationAttackCommand() // 0x6B0E96
{
    mangled_assert("??1FormationAttackCommand@@UAE@XZ");
    todo("implement");
    _sub_6B0E96(this);
}

_extern Sob *_sub_6B0F50(FormationAttackCommand const *const);
Sob *FormationAttackCommand::getSobToNotAvoid() const // 0x6B0F50
{
    mangled_assert("?getSobToNotAvoid@FormationAttackCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B0F50(this);
    return __result;
}

_extern Sob *_sub_6B0F65(FormationAttackCommand const *const);
Sob *FormationAttackCommand::getSobToNotCollideWith() const // 0x6B0F65
{
    mangled_assert("?getSobToNotCollideWith@FormationAttackCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B0F65(this);
    return __result;
}

_extern Sob *_sub_6B0F74(FormationAttackCommand const *const);
Sob *FormationAttackCommand::getTargetNonDeterministicSafe() const // 0x6B0F74
{
    mangled_assert("?getTargetNonDeterministicSafe@FormationAttackCommand@@QBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B0F74(this);
    return __result;
}

_extern vector3 const &_sub_6B0F1B(FormationAttackCommand const *const);
vector3 const &FormationAttackCommand::getDestinationDtrm() const // 0x6B0F1B
{
    mangled_assert("?getDestinationDtrm@FormationAttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6B0F1B(this);
    return __result;
}

_extern vector3 const &_sub_6B0F37(FormationAttackCommand const *const);
vector3 const &FormationAttackCommand::getDestinationVis() const // 0x6B0F37
{
    mangled_assert("?getDestinationVis@FormationAttackCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6B0F37(this);
    return __result;
}

_extern bool _sub_6B0F9B(FormationAttackCommand *const, Selection const &);
bool FormationAttackCommand::handleNewTargets(Selection const &) // 0x6B0F9B
{
    mangled_assert("?handleNewTargets@FormationAttackCommand@@QAE_NABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_6B0F9B(this, arg);
    return __result;
}

_extern FormationCommand::CommandResult _sub_6B106A(FormationAttackCommand *const, float);
FormationCommand::CommandResult FormationAttackCommand::update(float) // 0x6B106A
{
    mangled_assert("?update@FormationAttackCommand@@UAE?AW4CommandResult@FormationCommand@@M@Z");
    todo("implement");
    FormationCommand::CommandResult __result = _sub_6B106A(this, arg);
    return __result;
}

_extern FormationCommand::FormationCommandType _sub_6B0F86(FormationAttackCommand const *const);
FormationCommand::FormationCommandType FormationAttackCommand::getType() const // 0x6B0F86
{
    mangled_assert("?getType@FormationAttackCommand@@UBE?AW4FormationCommandType@FormationCommand@@XZ");
    todo("implement");
    FormationCommand::FormationCommandType __result = _sub_6B0F86(this);
    return __result;
}

_extern bool _sub_6B0F8A(FormationAttackCommand *const, vector3 const &);
bool FormationAttackCommand::handleMoveRequest(vector3 const &) // 0x6B0F8A
{
    mangled_assert("?handleMoveRequest@FormationAttackCommand@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6B0F8A(this, arg);
    return __result;
}

_extern bool _sub_6B0F03(FormationAttackCommand const *const);
bool FormationAttackCommand::canHandleMoveRequests() const // 0x6B0F03
{
    mangled_assert("?canHandleMoveRequests@FormationAttackCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6B0F03(this);
    return __result;
}

_extern _sub_6B0E52(FormationAttackCommand *const, SaveGameData *);
FormationAttackCommand::FormationAttackCommand(SaveGameData *) // 0x6B0E52
{
    mangled_assert("??0FormationAttackCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6B0E52(this, arg);
}

_extern void _sub_6B0F12(FormationAttackCommand *const);
void FormationAttackCommand::defaultSettings() // 0x6B0F12
{
    mangled_assert("?defaultSettings@FormationAttackCommand@@QAEXXZ");
    todo("implement");
    _sub_6B0F12(this);
}

_extern void _sub_6B0FCB(FormationAttackCommand *const);
void FormationAttackCommand::postRestore() // 0x6B0FCB
{
    mangled_assert("?postRestore@FormationAttackCommand@@UAEXXZ");
    todo("implement");
    _sub_6B0FCB(this);
}

_extern bool _sub_6B0FD0(FormationAttackCommand *const, SaveGameData *);
bool FormationAttackCommand::restore(SaveGameData *) // 0x6B0FD0
{
    mangled_assert("?restore@FormationAttackCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6B0FD0(this, arg);
    return __result;
}

_extern bool _sub_6B101D(FormationAttackCommand *const, SaveGameData *, SaveType);
bool FormationAttackCommand::save(SaveGameData *, SaveType) // 0x6B101D
{
    mangled_assert("?save@FormationAttackCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6B101D(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
