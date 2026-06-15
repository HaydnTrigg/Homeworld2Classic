#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\fixedpoint.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\WeaponStatic.h>
#include <Engine\weaponfiretypes.h>
#include <list>
#include <Engine\playerresourcetype.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\Race.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\BuildManager.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <luaconfig\luaconfig.h>
#include <Engine\Tactics.h>
#include <lua\lua.h>
#include <Engine\command.h>
#include <Engine\sobtypes.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\commandtype.h>
#include <Engine\prim.h>
#include <Engine\pch.h>
#include <Engine\UIGraphic.h>
#include <Engine\FormationCommands\FormationCommand.h>
#include <Engine\Player.h>
#include <Engine\SquadronList.h>
#include <Engine\ResearchManager.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

struct CommandInfo
{
    UIGraphic2D *icon; // 0x0
    char *name; // 0x4
};
static_assert(sizeof(CommandInfo) == 8, "Invalid CommandInfo size");

/* ---------- prototypes */

extern bool commandIconsStartup();
extern bool commandIconsShutdown();
extern UIGraphic2D *commandIconGet(CommandType command);
extern char const *commandNameGet(CommandType command);
extern char const *orderNameGet(OrderType orderType);

/* ---------- globals */

extern char const Command::m_saveToken[8]; // 0x7B63D0
extern SaveData const Command::m_saveData[2]; // 0x7B63D8

/* ---------- private variables */

_static
{
    extern CommandInfo commandInfo[22]; // 0x83EA48
}

/* ---------- public code */

bool commandIconsStartup() // 0x6979A9
{
    mangled_assert("?commandIconsStartup@@YG_NXZ");
    todo("implement");
}

bool commandIconsShutdown() // 0x697980
{
    mangled_assert("?commandIconsShutdown@@YG_NXZ");
    todo("implement");
}

UIGraphic2D *commandIconGet(CommandType command) // 0x697972
{
    mangled_assert("?commandIconGet@@YGPAVUIGraphic2D@@W4CommandType@@@Z");
    todo("implement");
}

char const *commandNameGet(CommandType command) // 0x697AED
{
    mangled_assert("?commandNameGet@@YGPBDW4CommandType@@@Z");
    todo("implement");
}

char const *orderNameGet(OrderType orderType) // 0x697BEB
{
    mangled_assert("?orderNameGet@@YGPBDW4OrderType@@@Z");
    todo("implement");
}

Command::Command(Squadron *, Command::CommandOrigin) // 0x6978DC
{
    mangled_assert("??0Command@@QAE@PAVSquadron@@W4CommandOrigin@0@@Z");
    todo("implement");
}

Command::~Command() // 0x697900
{
    mangled_assert("??1Command@@UAE@XZ");
    todo("implement");
}

vector3 const &Command::getDestinationDtrm() const // 0x697B36
{
    mangled_assert("?getDestinationDtrm@Command@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &Command::getDestinationVis() const // 0x697B47
{
    mangled_assert("?getDestinationVis@Command@@UBEABVvector3@@XZ");
    todo("implement");
}

void Command::cleanUpCommand() // 0x697950
{
    mangled_assert("?cleanUpCommand@Command@@UAEXXZ");
    todo("implement");
}

void Command::emergencyCleanUp() // 0x697B00
{
    mangled_assert("?emergencyCleanUp@Command@@UAEXXZ");
    todo("implement");
}

WeaponActivate Command::getWeaponActivation() const // 0x697B9C
{
    mangled_assert("?getWeaponActivation@Command@@UBE?AW4WeaponActivate@@XZ");
    todo("implement");
}

unsigned __int32 Command::getPlayerIndex() const // 0x697B58
{
    mangled_assert("?getPlayerIndex@Command@@QBEIXZ");
    todo("implement");
}

bool Command::handleMoveRequest(vector3 const &) // 0x697BA0
{
    mangled_assert("?handleMoveRequest@Command@@QAE_NABVvector3@@@Z");
    todo("implement");
}

bool Command::canHandleMoveRequests() const // 0x69790E
{
    mangled_assert("?canHandleMoveRequests@Command@@QBE_NXZ");
    todo("implement");
}

BaseCommandStaticInfo *Command::getStaticInfo() const // 0x697B76
{
    mangled_assert("?getStaticInfo@Command@@IBEPAVBaseCommandStaticInfo@@XZ");
    todo("implement");
}

Command::Command(SaveGameData *) // 0x6978C2
{
    mangled_assert("??0Command@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void Command::defaultSettings() // 0x697AFB
{
    mangled_assert("?defaultSettings@Command@@QAEXXZ");
    todo("implement");
}

void Command::postRestore() // 0x697E6F
{
    mangled_assert("?postRestore@Command@@UAEXXZ");
    todo("implement");
}

bool Command::restore(SaveGameData *) // 0x697E71
{
    mangled_assert("?restore@Command@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Command::save(SaveGameData *, SaveType) // 0x697EAF
{
    mangled_assert("?save@Command@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
