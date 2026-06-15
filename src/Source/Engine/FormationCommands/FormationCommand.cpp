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

FormationCommand::FormationCommand(Formation *) // 0x6BB1CA
{
    mangled_assert("??0FormationCommand@@QAE@PAVFormation@@@Z");
    todo("implement");
}

FormationCommand::~FormationCommand() // 0x6BB201
{
    mangled_assert("??1FormationCommand@@UAE@XZ");
    todo("implement");
}

Squadron *FormationCommand::getSquadron() const // 0x6BB23C
{
    mangled_assert("?getSquadron@FormationCommand@@QBEPAVSquadron@@XZ");
    todo("implement");
}

vector3 const &FormationCommand::getDestinationDtrm() const // 0x6BB211
{
    mangled_assert("?getDestinationDtrm@FormationCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &FormationCommand::getDestinationVis() const // 0x6BB222
{
    mangled_assert("?getDestinationVis@FormationCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

FormationCommand::FormationCommand(SaveGameData *) // 0x6BB1E7
{
    mangled_assert("??0FormationCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void FormationCommand::defaultSettings() // 0x6BB20C
{
    mangled_assert("?defaultSettings@FormationCommand@@QAEXXZ");
    todo("implement");
}

void FormationCommand::postRestore() // 0x6BB250
{
    mangled_assert("?postRestore@FormationCommand@@UAEXXZ");
    todo("implement");
}

bool FormationCommand::restore(SaveGameData *) // 0x6BB251
{
    mangled_assert("?restore@FormationCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool FormationCommand::save(SaveGameData *, SaveType) // 0x6BB28F
{
    mangled_assert("?save@FormationCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
