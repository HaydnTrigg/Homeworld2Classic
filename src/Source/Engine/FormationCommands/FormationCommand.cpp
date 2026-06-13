#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <Engine\Ship\FormationTargetInfo.h>
#include <xmemory0>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\Interpolation.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const FormationCommand::m_saveToken[17]; // 0x7BA278
extern SaveData const FormationCommand::m_saveData[1]; // 0x7BA28C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6BB1CA(FormationCommand *const, Formation *);
FormationCommand::FormationCommand(Formation *) // 0x6BB1CA
{
    mangled_assert("??0FormationCommand@@QAE@PAVFormation@@@Z");
    todo("implement");
    _sub_6BB1CA(this, arg);
}

_extern void _sub_6BB201(FormationCommand *const);
FormationCommand::~FormationCommand() // 0x6BB201
{
    mangled_assert("??1FormationCommand@@UAE@XZ");
    todo("implement");
    _sub_6BB201(this);
}

_extern Squadron *_sub_6BB23C(FormationCommand const *const);
Squadron *FormationCommand::getSquadron() const // 0x6BB23C
{
    mangled_assert("?getSquadron@FormationCommand@@QBEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_6BB23C(this);
    return __result;
}

_extern vector3 const &_sub_6BB211(FormationCommand const *const);
vector3 const &FormationCommand::getDestinationDtrm() const // 0x6BB211
{
    mangled_assert("?getDestinationDtrm@FormationCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6BB211(this);
    return __result;
}

_extern vector3 const &_sub_6BB222(FormationCommand const *const);
vector3 const &FormationCommand::getDestinationVis() const // 0x6BB222
{
    mangled_assert("?getDestinationVis@FormationCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6BB222(this);
    return __result;
}

_extern _sub_6BB1E7(FormationCommand *const, SaveGameData *);
FormationCommand::FormationCommand(SaveGameData *) // 0x6BB1E7
{
    mangled_assert("??0FormationCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6BB1E7(this, arg);
}

_extern void _sub_6BB20C(FormationCommand *const);
void FormationCommand::defaultSettings() // 0x6BB20C
{
    mangled_assert("?defaultSettings@FormationCommand@@QAEXXZ");
    todo("implement");
    _sub_6BB20C(this);
}

_extern void _sub_6BB250(FormationCommand *const);
void FormationCommand::postRestore() // 0x6BB250
{
    mangled_assert("?postRestore@FormationCommand@@UAEXXZ");
    todo("implement");
    _sub_6BB250(this);
}

_extern bool _sub_6BB251(FormationCommand *const, SaveGameData *);
bool FormationCommand::restore(SaveGameData *) // 0x6BB251
{
    mangled_assert("?restore@FormationCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6BB251(this, arg);
    return __result;
}

_extern bool _sub_6BB28F(FormationCommand *const, SaveGameData *, SaveType);
bool FormationCommand::save(SaveGameData *, SaveType) // 0x6BB28F
{
    mangled_assert("?save@FormationCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6BB28F(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
