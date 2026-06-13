#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\memtracker.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <platform\osdef.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Mathlib\matrix3.h>
#include <renderer.h>
#include <new>
#include <Render\gl\types.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\matvec.h>
#include <exception>
#include <seInterface2\PatchBase.h>
#include <xstddef>
#include <seInterface2\SoundParams.h>
#include <type_traits>
#include <HyperspaceManager.h>
#include <Render\objects\textureregistry.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <SquadronList.h>
#include <MultiplierTypes.h>
#include <Render\gl\lotypes.h>
#include <Collision\BVH\bvh.h>
#include <weaponinfo.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\gl\r_types.h>
#include <playerresourcetype.h>
#include <debug\ctassert.h>
#include <profile\profile.h>
#include <Universe.h>
#include <platform\timer.h>
#include <iostream>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <SobUnmoveable.h>
#include <savegame.h>
#include <math.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <list>
#include <random.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <ShieldTypes.h>
#include <MeshAnimation.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Subsystems\HardPointManager.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Subsystems\HardPoint.h>
#include <Render\objects\cubemap.h>
#include <Render\gl\glext.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <boost\cstdint.hpp>
#include <EngineTrailSystem.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <ITweak.h>
#include <Collision\BVH\proxy.h>
#include <Tactics.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <abilities.h>
#include <Render\objects\varymesh.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\vertexarray.h>
#include <Render\objects\vertexarrayinternal.h>
#include <Interpolation.h>
#include <fileio\iff.h>
#include <pathpoints.h>
#include <Render\objects\texture.h>
#include <Collision\Primitives\aabb.h>
#include <Render\objects\objects.h>
#include <debug\db.h>
#include <Render\objects\core.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Render\objects\basicmesh.h>
#include <SobRigidBody.h>
#include <Render\objects\mesh.h>
#include <sob.h>
#include <Render\objects\renderable.h>
#include <sobid.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <scripting.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <scriptaccess.h>
#include <Collision\Primitives\obb.h>
#include <scripttypedef.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <lua.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <xhash>
#include <Camera\Camera.h>
#include <EngineGlow.h>
#include <SelTarg.h>
#include <Camera\Frustum.h>
#include <wchar.h>
#include <prim.h>
#include <Camera\Plane3.h>
#include <gameRandom.h>
#include <algorithm>
#include <fixedpoint.h>
#include <Render\objects\stateblock\stateblock.h>
#include <util\fixed.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Collision\Primitives\capsule.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::EngineGlowState
{
public:
    EngineGlowState(rndTable &, Texture *);
    ~EngineGlowState();
private:
    rndTable &m_gl; // 0x0
    CapChanges m_changes; // 0x4
    TextureMode m_oldTextureUnitMode; // 0x264
    BlendFunc m_oldSrc; // 0x268
    BlendFunc m_oldDest; // 0x26C
    bool m_oldDepthWrite; // 0x270
    vector4 m_oldVertexColour; // 0x274
};
static_assert(sizeof(`anonymous-namespace'::EngineGlowState) == 644, "Invalid `anonymous-namespace'::EngineGlowState size");

typedef `anonymous-namespace'::EngineGlowState ?A0x486c87e9::EngineGlowState;

/* ---------- prototypes */


_static void getScaledJointPosition(SobWithMesh const *pSobWithMesh, char const *jointName, float scale, vector3 &jointPosition);
_static bool IsShipVisible(SobWithMesh const &sob, __int32 currentPlayerIndex);
_static __int32 handle_GLOW_INFO_Chunk(IFF *iff, IFFChunk *chunk, void *pVoidEngineGlowBinding, void *name);
_static __int32 handle_GLOW_BMSH_Chunk(IFF *iff, IFFChunk *chunk, void *user1, void *nLOD);

/* ---------- globals */

extern EngineGlowManager *EngineGlowManager::s_instance; // 0x8438CC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_44285D(EngineGlowBinding *const);
EngineGlowBinding::EngineGlowBinding() // 0x44285D
{
    mangled_assert("??0EngineGlowBinding@@QAE@XZ");
    todo("implement");
    _sub_44285D(this);
}

_extern void _sub_442A16(EngineGlowBinding *const);
EngineGlowBinding::~EngineGlowBinding() // 0x442A16
{
    mangled_assert("??1EngineGlowBinding@@QAE@XZ");
    todo("implement");
    _sub_442A16(this);
}

_extern _sub_4429A9(EngineGlowStatic *const);
EngineGlowStatic::EngineGlowStatic() // 0x4429A9
{
    mangled_assert("??0EngineGlowStatic@@QAE@XZ");
    todo("implement");
    _sub_4429A9(this);
}

_extern void _sub_442AC5(EngineGlowStatic *const);
EngineGlowStatic::~EngineGlowStatic() // 0x442AC5
{
    mangled_assert("??1EngineGlowStatic@@QAE@XZ");
    todo("implement");
    _sub_442AC5(this);
}

_extern bool _sub_443B76();
bool EngineGlowManager::startup() // 0x443B76
{
    mangled_assert("?startup@EngineGlowManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_443B76();
    return __result;
}

_extern bool _sub_443B49();
bool EngineGlowManager::shutdown() // 0x443B49
{
    mangled_assert("?shutdown@EngineGlowManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_443B49();
    return __result;
}

_extern EngineGlowManager *_sub_443851();
EngineGlowManager *EngineGlowManager::i() // 0x443851
{
    mangled_assert("?i@EngineGlowManager@@SGPAV1@XZ");
    todo("implement");
    EngineGlowManager * __result = _sub_443851();
    return __result;
}

_extern _sub_442874(EngineGlowManager *const);
EngineGlowManager::EngineGlowManager() // 0x442874
{
    mangled_assert("??0EngineGlowManager@@IAE@XZ");
    todo("implement");
    _sub_442874(this);
}

_extern void _sub_442A4E(EngineGlowManager *const);
EngineGlowManager::~EngineGlowManager() // 0x442A4E
{
    mangled_assert("??1EngineGlowManager@@IAE@XZ");
    todo("implement");
    _sub_442A4E(this);
}

_extern void _sub_442EC5(EngineGlowManager *const, vector3 const &, vector3 const &, vector3 const &, float, SobWithMesh const *, unsigned __int32, float);
void EngineGlowManager::doDrawEngineGlows(vector3 const &, vector3 const &, vector3 const &, float, SobWithMesh const *, unsigned __int32, float) // 0x442EC5
{
    mangled_assert("?doDrawEngineGlows@EngineGlowManager@@AAEXABVvector3@@00MPBVSobWithMesh@@IM@Z");
    todo("implement");
    _sub_442EC5(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_443437(EngineGlowManager *const, Camera const *, float, Selection const &, __int32);
void EngineGlowManager::drawEngineGlows(Camera const *, float, Selection const &, __int32) // 0x443437
{
    mangled_assert("?drawEngineGlows@EngineGlowManager@@QAEXPBVCamera@@MABVSelection@@H@Z");
    todo("implement");
    _sub_443437(this, arg, arg, arg, arg);
}

_extern __int32 _sub_4436DB(IFF *, IFFChunk *, void *, void *);
__int32 EngineGlowManager::handle_EngineGlow_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x4436DB
{
    mangled_assert("?handle_EngineGlow_Chunk@EngineGlowManager@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_4436DB(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_44390F(lua_State *);
__int32 EngineGlowManager::setEngineGlowStatic(lua_State *lstate) // 0x44390F
{
    mangled_assert("?setEngineGlowStatic@EngineGlowManager@@SGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_44390F(lstate);
    return __result;
}

/* ---------- private code */

_extern void _sub_4435A1(SobWithMesh const *, char const *, float, vector3 &);
_static void getScaledJointPosition(SobWithMesh const *pSobWithMesh, char const *jointName, float scale, vector3 &jointPosition) // 0x4435A1
{
    mangled_assert("getScaledJointPosition");
    todo("implement");
    _sub_4435A1(pSobWithMesh, jointName, scale, jointPosition);
}

_extern bool _sub_442CAE(SobWithMesh const &, __int32);
_static bool IsShipVisible(SobWithMesh const &sob, __int32 currentPlayerIndex) // 0x442CAE
{
    mangled_assert("IsShipVisible");
    todo("implement");
    bool __result = _sub_442CAE(sob, currentPlayerIndex);
    return __result;
}

_extern __int32 _sub_4437BD(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_GLOW_INFO_Chunk(IFF *iff, IFFChunk *chunk, void *pVoidEngineGlowBinding, void *name) // 0x4437BD
{
    mangled_assert("handle_GLOW_INFO_Chunk");
    todo("implement");
    __int32 __result = _sub_4437BD(iff, chunk, pVoidEngineGlowBinding, name);
    return __result;
}

_extern __int32 _sub_443768(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_GLOW_BMSH_Chunk(IFF *iff, IFFChunk *chunk, void *user1, void *nLOD) // 0x443768
{
    mangled_assert("handle_GLOW_BMSH_Chunk");
    todo("implement");
    __int32 __result = _sub_443768(iff, chunk, user1, nLOD);
    return __result;
}
#endif
