#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix3.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <new>
#include <Engine\Squadron.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <profile\profile.h>
#include <iostream>
#include <Engine\savegameimpl.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\MoveCommand.h>
#include <Engine\Ship\FormationTargetInfoUtil.h>
#include <assist\stlexsmallvector.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const MoveCommand::m_saveToken[0]; // 0x7B8238
extern SaveData const MoveCommand::m_saveData[6]; // 0x7B8248

/* ---------- private variables */

/* ---------- public code */

MoveCommand::MoveCommand(Squadron *, vector3 const &, Command::CommandOrigin) // 0x6A87DE
{
    mangled_assert("??0MoveCommand@@QAE@PAVSquadron@@ABVvector3@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

void MoveCommand::useHeading(vector3 const &) // 0x6A8C69
{
    mangled_assert("?useHeading@MoveCommand@@QAEXABVvector3@@@Z");
    todo("implement");
}

void MoveCommand::useSubDestination(vector3 const &) // 0x6A8C7E
{
    mangled_assert("?useSubDestination@MoveCommand@@QAEXABVvector3@@@Z");
    todo("implement");
}

MoveCommand::~MoveCommand() // 0x6A8823
{
    mangled_assert("??1MoveCommand@@UAE@XZ");
    todo("implement");
}

char const *MoveCommand::getName() const // 0x6A88B7
{
    mangled_assert("?getName@MoveCommand@@UBEPBDXZ");
    todo("implement");
}

CommandType MoveCommand::getCommandType() const // 0x6A88AB
{
    mangled_assert("?getCommandType@MoveCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

ComResult MoveCommand::update(float) // 0x6A8970
{
    mangled_assert("?update@MoveCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void MoveCommand::resetCommand() // 0x6A88C5
{
    mangled_assert("?resetCommand@MoveCommand@@UAEXXZ");
    todo("implement");
}

MoveCommand::MoveCommand(SaveGameData *) // 0x6A87BF
{
    mangled_assert("??0MoveCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void MoveCommand::defaultSettings() // 0x6A887A
{
    mangled_assert("?defaultSettings@MoveCommand@@QAEXXZ");
    todo("implement");
}

void MoveCommand::postRestore() // 0x6A88C0
{
    mangled_assert("?postRestore@MoveCommand@@UAEXXZ");
    todo("implement");
}

bool MoveCommand::restore(SaveGameData *) // 0x6A88D6
{
    mangled_assert("?restore@MoveCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool MoveCommand::save(SaveGameData *, SaveType) // 0x6A8923
{
    mangled_assert("?save@MoveCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

MoveCommandStaticInfo::MoveCommandStaticInfo() // 0x6A880F
{
    mangled_assert("??0MoveCommandStaticInfo@@QAE@XZ");
    todo("implement");
}

MoveCommandStaticInfo::~MoveCommandStaticInfo() // 0x6A882E
{
    mangled_assert("??1MoveCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
