#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Mathlib\matrix4.h>
#include <Engine\MultiplierContainer.h>
#include <new>
#include <exception>
#include <Engine\OrderFeedback.h>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix3.h>
#include <queue>
#include <Engine\weaponinfo.h>
#include <xutility>
#include <boost\config.hpp>
#include <iosfwd>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <xmemory>
#include <Scar\GameQuery.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Engine\task.h>
#include <stack>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Squadron.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <vector>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\MeshAnimation.h>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Engine\ShieldTypes.h>
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
#include <boost\utility.hpp>
#include <boost\utility\addressof.hpp>
#include <Engine\sobtypes.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <Engine\playerresourcetype.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <boost\next_prior.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\noncopyable.hpp>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\SOBGroup.h>
#include <assist\stlexsmallvector.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <list>
#include <Engine\abilities.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Volume *GameQuery::FindVolumeByName(char const *volumeName, unsigned __int32 volumeType);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Volume *GameQuery::FindVolumeByName(char const *volumeName, unsigned __int32 volumeType) // 0x72781F
{
    mangled_assert("?FindVolumeByName@GameQuery@@YGPAVVolume@@PBDI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
