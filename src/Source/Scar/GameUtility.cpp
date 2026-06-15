#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Mathlib\matrix4.h>
#include <Engine\MultiplierContainer.h>
#include <Engine\OrderFeedback.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\weaponinfo.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <xutility>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <iosfwd>
#include <xmemory>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Engine\task.h>
#include <Scar\GameUtility.h>
#include <stack>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\SobRigidBodyStatic.h>
#include <vector>
#include <Engine\MeshAnimation.h>
#include <Engine\ShieldTypes.h>
#include <Engine\SquadronList.h>
#include <Mathlib\quat.h>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\DynamicPoint.h>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <Engine\Race.h>
#include <Engine\Parade.h>
#include <Engine\sobtypes.h>
#include <Engine\playerresourcetype.h>
#include <Engine\BuildManager.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <Engine\Squadron.h>
#include <Engine\command.h>
#include <list>
#include <Engine\abilities.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void GameUtility::SwitchPlayer(Squadron *squadron, unsigned __int32 playerIndex);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void GameUtility::SwitchPlayer(Squadron *squadron, unsigned __int32 playerIndex) // 0x727882
{
    mangled_assert("?SwitchPlayer@GameUtility@@YGXPAVSquadron@@I@Z");
    todo("implement");
}

/* ---------- private code */
#endif
