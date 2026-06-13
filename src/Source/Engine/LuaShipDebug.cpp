#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Player.h>
#include <xmemory0>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix4.h>
#include <SquadronList.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Mathlib\luamathbinding.h>
#include <Mathlib\matrix3.h>
#include <sobid.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <seInterface2\SampleID.h>
#include <new>
#include <seInterface2\SampleBase.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <weaponinfo.h>
#include <Race.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <playerresourcetype.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <SensorsManager.h>
#include <vector>
#include <Render\gl\r_types.h>
#include <xmemory>
#include <TeamColourRegistry.h>
#include <Mathlib\matvec.h>
#include <savegame.h>
#include <BuildManager.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMeshStatic.h>
#include <MainUI.h>
#include <SobWithMesh.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <SobRigidBody.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <sob.h>
#include <WeaponClassSpecificInfo.h>
#include <sobstatic.h>
#include <list>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <Mathlib\vector3.h>
#include <ShieldTypes.h>
#include <Mathlib\vector4.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <ITweak.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <command.h>
#include <ResearchManager.h>
#include <boost\cstdint.hpp>
#include <Interpolation.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\aabb.h>
#include <shipstatic.h>
#include <boost\scoped_array.hpp>
#include <Collision\Primitives\obb.h>
#include <commandtype.h>
#include <Mathlib\quat.h>
#include <abilities.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Camera\OrbitParameters.h>
#include <debug\db.h>
#include <Tactics.h>
#include <SelTarg.h>
#include <prim.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\capsule.h>
#include <bitset>
#include <Collision\Primitives\segment.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <LuaShipDebug.h>
#include <seInterface2\SoundParams.h>
#include <wchar.h>
#include <fixedpoint.h>
#include <luaconfig\luaconfig.h>
#include <util\fixed.h>
#include <platform\timer.h>
#include <lua.h>
#include <platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaShipDebugLib :
    public LuaLibrary
{
public:
    LuaShipDebugLib(`anonymous-namespace'::LuaShipDebugLib const &); /* compiler_generated() */
    LuaShipDebugLib();
    virtual ~LuaShipDebugLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaShipDebugLib &operator=(`anonymous-namespace'::LuaShipDebugLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaShipDebugLib) == 16, "Invalid `anonymous-namespace'::LuaShipDebugLib size");

typedef `anonymous-namespace'::LuaShipDebugLib ?A0x55123e07::LuaShipDebugLib;

/* ---------- prototypes */

/* ---------- globals */

extern char const *LUALIB_SHIPDEBUG; // 0x83B478

/* ---------- private variables */

/* ---------- public code */

/* ---------- private code */
#endif
