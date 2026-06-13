#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\savegame.h>
#include <Engine\sob.h>
#include <Engine\task.h>
#include <Engine\sobstatic.h>
#include <stack>
#include <luaconfig\luabinding.h>
#include <boost\utility.hpp>
#include <Engine\BuildManager.h>
#include <boost\utility\addressof.hpp>
#include <boost\utility\base_from_member.hpp>
#include <xstddef>
#include <Engine\playerresourcetype.h>
#include <boost\utility_fwd.hpp>
#include <xutility>
#include <Engine\Race.h>
#include <boost\config.hpp>
#include <Scar\LuaHyperspace.h>
#include <boost\next_prior.hpp>
#include <Scar\GameQuery.h>
#include <boost\noncopyable.hpp>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <vector>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <Engine\sobtypes.h>
#include <Engine\savegamedef.h>
#include <Engine\selection.h>
#include <Engine\fixedpoint.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <list>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaHyperspaceLib :
    public LuaLibrary
{
public:
    LuaHyperspaceLib(`anonymous-namespace'::LuaHyperspaceLib const &); /* compiler_generated() */
    LuaHyperspaceLib();
    virtual ~LuaHyperspaceLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaHyperspaceLib &operator=(`anonymous-namespace'::LuaHyperspaceLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaHyperspaceLib) == 16, "Invalid `anonymous-namespace'::LuaHyperspaceLib size");

typedef `anonymous-namespace'::LuaHyperspaceLib ?A0xaff737e1::LuaHyperspaceLib;

/* ---------- prototypes */

extern void Hyperspace_SetStateForPlayer(unsigned __int32 playerID, bool hyperspaceState);
extern void Hyperspace_SetStateForVolume(char const *volumeName, bool hyperspaceState);

/* ---------- globals */

extern char const *LUALIB_HYPERSPACE; // 0x842F3C

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_72400E(unsigned __int32, bool);
void Hyperspace_SetStateForPlayer(unsigned __int32 playerID, bool hyperspaceState) // 0x72400E
{
    mangled_assert("?Hyperspace_SetStateForPlayer@@YGXI_N@Z");
    todo("implement");
    _sub_72400E(playerID, hyperspaceState);
}

_extern void _sub_72402A(char const *, bool);
void Hyperspace_SetStateForVolume(char const *volumeName, bool hyperspaceState) // 0x72402A
{
    mangled_assert("?Hyperspace_SetStateForVolume@@YGXPBD_N@Z");
    todo("implement");
    _sub_72402A(volumeName, hyperspaceState);
}

/* ---------- private code */
#endif
