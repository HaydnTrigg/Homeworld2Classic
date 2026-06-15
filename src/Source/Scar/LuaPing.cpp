#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\SobUnmoveable.h>
#include <Scar\Scar.h>
#include <Engine\sob.h>
#include <boost\utility.hpp>
#include <Scar\ScarEventSys.h>
#include <Engine\sobstatic.h>
#include <boost\utility\addressof.hpp>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Engine\MultiplierContainer.h>
#include <new>
#include <Engine\SOBGroup.h>
#include <exception>
#include <Engine\OrderFeedback.h>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix3.h>
#include <queue>
#include <Engine\weaponinfo.h>
#include <xutility>
#include <iosfwd>
#include <boost\config.hpp>
#include <boost\next_prior.hpp>
#include <Scar\LuaRuleSystem.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <xmemory>
#include <Engine\Ping.h>
#include <boost\noncopyable.hpp>
#include <Scar\LuaPing.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Scar\GameQuery.h>
#include <Engine\task.h>
#include <stack>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Squadron.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <vector>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\MeshAnimation.h>
#include <Engine\SquadronList.h>
#include <Engine\ShieldTypes.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\quat.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\DynamicPoint.h>
#include <util\colour.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\sobid.h>
#include <Engine\Parade.h>
#include <Engine\sobtypes.h>
#include <localizer\localizer.h>
#include <Engine\playerresourcetype.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <assist\stlexsmallvector.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Sphere.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <list>
#include <cstdarg>
#include <stdarg.h>
#include <Engine\abilities.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaPingLib :
    public LuaLibrary
{
public:
    LuaPingLib(`anonymous-namespace'::LuaPingLib const &); /* compiler_generated() */
    LuaPingLib();
    virtual ~LuaPingLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaPingLib &operator=(`anonymous-namespace'::LuaPingLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaPingLib) == 16, "Invalid `anonymous-namespace'::LuaPingLib size");

typedef `anonymous-namespace'::LuaPingLib ?A0xd1438ec0::LuaPingLib;

/* ---------- prototypes */

extern unsigned __int32 Ping_AddPoint(char const *pingName, char const *templateName, char const *volumeName);
extern unsigned __int32 Ping_AddSobGroup(char const *pingName, char const *templateName, char const *sobGroupName);
extern void Ping_Remove(unsigned __int32 pingID);
extern void Ping_LabelVisible(unsigned __int32 pingID, bool bVisible);
extern void Ping_AddDescription(unsigned __int32 pingID, unsigned __int32 lineNum, char const *description);

/* ---------- globals */

extern char const *LUALIB_PING; // 0x842650

/* ---------- private variables */

/* ---------- public code */

unsigned __int32 Ping_AddPoint(char const *pingName, char const *templateName, char const *volumeName) // 0x716A6A
{
    mangled_assert("?Ping_AddPoint@@YGIPBD00@Z");
    todo("implement");
}

unsigned __int32 Ping_AddSobGroup(char const *pingName, char const *templateName, char const *sobGroupName) // 0x716AE0
{
    mangled_assert("?Ping_AddSobGroup@@YGIPBD00@Z");
    todo("implement");
}

void Ping_Remove(unsigned __int32 pingID) // 0x716BF9
{
    mangled_assert("?Ping_Remove@@YGXI@Z");
    todo("implement");
}

void Ping_LabelVisible(unsigned __int32 pingID, bool bVisible) // 0x716BB8
{
    mangled_assert("?Ping_LabelVisible@@YGXI_N@Z");
    todo("implement");
}

void Ping_AddDescription(unsigned __int32 pingID, unsigned __int32 lineNum, char const *description) // 0x716A06
{
    mangled_assert("?Ping_AddDescription@@YGXIIPBD@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal3<unsigned int,unsigned int,char const *,void,LuaBinding::Functor3Free<unsigned int,unsigned int,char const *,void> >::~ObjInternal3<unsigned int,unsigned int,char const *,void,LuaBinding::Functor3Free<unsigned int,unsigned int,char const *,void> >() // 0x71682D
{
    mangled_assert("??1?$ObjInternal3@IIPBDXV?$Functor3Free@IIPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,char const *,char const *,unsigned int,LuaBinding::Functor3Free<char const *,char const *,char const *,unsigned int> >::~ObjInternal3<char const *,char const *,char const *,unsigned int,LuaBinding::Functor3Free<char const *,char const *,char const *,unsigned int> >() // 0x716833
{
    mangled_assert("??1?$ObjInternal3@PBDPBDPBDIV?$Functor3Free@PBDPBDPBDI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
