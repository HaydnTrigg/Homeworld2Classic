#if 0
/* ---------- headers */

#include "decomp.h"
#include <savegame.h>
#include <task.h>
#include <stack>
#include <xstring>
#include <pch.h>
#include <BuildManager.h>
#include <playerresourcetype.h>
#include <xstddef>
#include <fixedpoint.h>
#include <type_traits>
#include <util\fixed.h>
#include <xutility>
#include <utility>
#include <vector>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <ResearchManager.h>
#include <list>
#include <assist\fixedstring.h>
#include <boost\scoped_ptr.hpp>
#include <assist\zeroed.h>
#include <App\Hw2Identify.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Player.h>
#include <sobtypes.h>
#include <selection.h>
#include <SquadronList.h>
#include <savegamedef.h>
#include <sobid.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Stats\StatLoggingDump.h>
#include <fileio\logfile.h>
#include <Stats\StatLoggingInternal.h>
#include <GameEventSys.h>
#include <Race.h>
#include <TeamColourRegistry.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void DumpStats(char const *fname, StatLoggingInternal const *stats);

_static void DumpPlayer(LogFile &lf, StatLoggingInternal const *stats, unsigned long const idplayer);
_static void DumpShip(LogFile &lf, StatLoggingInternal const *stats, unsigned long const idplayer, unsigned __int32 staticId);
_static void DumpGame(LogFile &lf, StatLoggingInternal const *stats);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void DumpStats(char const *fname, StatLoggingInternal const *stats) // 0x50F772
{
    mangled_assert("?DumpStats@@YGXPBDPBVStatLoggingInternal@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void DumpPlayer(LogFile &lf, StatLoggingInternal const *stats, unsigned long const idplayer) // 0x50F482
{
    mangled_assert("DumpPlayer");
    todo("implement");
}

_static void DumpShip(LogFile &lf, StatLoggingInternal const *stats, unsigned long const idplayer, unsigned __int32 staticId) // 0x50F6AC
{
    mangled_assert("DumpShip");
    todo("implement");
}

_static void DumpGame(LogFile &lf, StatLoggingInternal const *stats) // 0x50F383
{
    mangled_assert("DumpGame");
    todo("implement");
}
#endif
