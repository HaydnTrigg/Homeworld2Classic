#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\sob.h>
#include <Engine\DockCommand.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\pch.h>
#include <Engine\RetireCommand.h>
#include <assist\stlexsmallvector.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const RetireCommand::m_saveToken[0]; // 0x7B8C18
extern SaveData const RetireCommand::m_saveData[1]; // 0x7B8C28

/* ---------- private variables */

/* ---------- public code */

RetireCommand::RetireCommand(Squadron *, Command::CommandOrigin) // 0x6AC27D
{
    mangled_assert("??0RetireCommand@@QAE@PAVSquadron@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

RetireCommand::~RetireCommand() // 0x6AC2B9
{
    mangled_assert("??1RetireCommand@@UAE@XZ");
    todo("implement");
}

ComResult RetireCommand::update(float) // 0x6AC3BC
{
    mangled_assert("?update@RetireCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

CommandType RetireCommand::getCommandType() const // 0x6AC310
{
    mangled_assert("?getCommandType@RetireCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

char const *RetireCommand::getName() const // 0x6AC314
{
    mangled_assert("?getName@RetireCommand@@UBEPBDXZ");
    todo("implement");
}

RetireCommand::RetireCommand(SaveGameData *) // 0x6AC265
{
    mangled_assert("??0RetireCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void RetireCommand::defaultSettings() // 0x6AC30F
{
    mangled_assert("?defaultSettings@RetireCommand@@QAEXXZ");
    todo("implement");
}

void RetireCommand::postRestore() // 0x6AC31D
{
    mangled_assert("?postRestore@RetireCommand@@UAEXXZ");
    todo("implement");
}

bool RetireCommand::restore(SaveGameData *) // 0x6AC322
{
    mangled_assert("?restore@RetireCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool RetireCommand::save(SaveGameData *, SaveType) // 0x6AC36F
{
    mangled_assert("?save@RetireCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

RetireCommandStaticInfo::RetireCommandStaticInfo(ShipStatic *, bool) // 0x6AC299
{
    mangled_assert("??0RetireCommandStaticInfo@@QAE@PAVShipStatic@@_N@Z");
    todo("implement");
}

_inline GameEvent_CommandCouldNotBeIssued::~GameEvent_CommandCouldNotBeIssued() // 0x6AC2B2
{
    mangled_assert("??1GameEvent_CommandCouldNotBeIssued@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

RetireCommandStaticInfo::~RetireCommandStaticInfo() // 0x6AC2C4
{
    mangled_assert("??1RetireCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
