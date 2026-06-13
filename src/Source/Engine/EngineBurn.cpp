#if 0
/* ---------- headers */

#include "decomp.h"
#include <playerresourcetype.h>
#include <assist\stlexsmallvector.h>
#include <Render\objects\textureregistry.h>
#include <xstring>
#include <hash_map>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <xhash>
#include <pch.h>
#include <memory\memorylib.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <BuildManager.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\mathutil.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\osdef.h>
#include <gameRandom.h>
#include <random.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <SobWithMesh.h>
#include <vector>
#include <SobRigidBody.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <ITweak.h>
#include <Mathlib\matvec.h>
#include <Tactics.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <ResearchManager.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <list>
#include <Render\gl\lotypes.h>
#include <Collision\primitivesfwd.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_types.h>
#include <map>
#include <Interpolation.h>
#include <scripting.h>
#include <Graphics\TeamColour.h>
#include <xtree>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <lua.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <fileio\iff.h>
#include <sob.h>
#include <seInterface2\PatchID.h>
#include <sobid.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\cstdint.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Mathlib\quat.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Race.h>
#include <debug\db.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <Player.h>
#include <boost\detail\shared_count.hpp>
#include <MeshAnimation.h>
#include <SquadronList.h>
#include <boost\detail\lwm_win32.hpp>
#include <stack>
#include <EngineTrailSystem.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Collision\Primitives\sphere.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <EngineBurn.h>
#include <wchar.h>
#include <Render\objects\hls.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

class SpriteBatch
{
public:
    SpriteBatch(unsigned __int32);
    ~SpriteBatch();
    void batchSprite(vector3 const &, vector4 const &, float);
    void flushSpriteBatch();
    void renderSpriteBatch();
private:
    FatVertex *m_spriteBatch; // 0x0
    unsigned __int32 const m_batchSize; // 0x4
    unsigned __int32 m_numSpritesBatched; // 0x8
};
static_assert(sizeof(SpriteBatch) == 12, "Invalid SpriteBatch size");

/* ---------- prototypes */

extern bool engineBurnDrawToggle(bool tf);

_static void spriteSetup(Camera const *pCamera, bool start);
_static void renderSprite(Camera const *pCamera, vector3 const &wPos, vector4 const &col, float scale);
_static __int32 ebSetEngineBurn(lua_State *lstate);

/* ---------- globals */

extern EngineBurnManager *EngineBurnManager::s_instance; // 0x8438C8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_43F91D(SpriteBatch *const, unsigned __int32);
SpriteBatch::SpriteBatch(unsigned __int32) // 0x43F91D
{
    mangled_assert("??0SpriteBatch@@QAE@I@Z");
    todo("implement");
    _sub_43F91D(this, arg);
}

_extern void _sub_43FB8E(SpriteBatch *const);
SpriteBatch::~SpriteBatch() // 0x43FB8E
{
    mangled_assert("??1SpriteBatch@@QAE@XZ");
    todo("implement");
    _sub_43FB8E(this);
}

_extern void _sub_440B35(SpriteBatch *const, vector3 const &, vector4 const &, float);
void SpriteBatch::batchSprite(vector3 const &, vector4 const &, float) // 0x440B35
{
    mangled_assert("?batchSprite@SpriteBatch@@QAEXABVvector3@@ABVvector4@@M@Z");
    todo("implement");
    _sub_440B35(this, arg, arg, arg);
}

_extern void _sub_441B72(SpriteBatch *const);
void SpriteBatch::flushSpriteBatch() // 0x441B72
{
    mangled_assert("?flushSpriteBatch@SpriteBatch@@QAEXXZ");
    todo("implement");
    _sub_441B72(this);
}

_extern void _sub_44241C(SpriteBatch *const);
void SpriteBatch::renderSpriteBatch() // 0x44241C
{
    mangled_assert("?renderSpriteBatch@SpriteBatch@@QAEXXZ");
    todo("implement");
    _sub_44241C(this);
}

_extern bool _sub_441AB1(bool);
bool engineBurnDrawToggle(bool tf) // 0x441AB1
{
    mangled_assert("?engineBurnDrawToggle@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_441AB1(tf);
    return __result;
}

_extern _sub_43F819(EngineBurnInfo *const);
EngineBurnInfo::EngineBurnInfo() // 0x43F819
{
    mangled_assert("??0EngineBurnInfo@@QAE@XZ");
    todo("implement");
    _sub_43F819(this);
}

_extern void _sub_43FAA0(EngineBurnInfo *const);
EngineBurnInfo::~EngineBurnInfo() // 0x43FAA0
{
    mangled_assert("??1EngineBurnInfo@@QAE@XZ");
    todo("implement");
    _sub_43FAA0(this);
}

_extern _sub_43F90D(EngineBurnStatic *const);
EngineBurnStatic::EngineBurnStatic() // 0x43F90D
{
    mangled_assert("??0EngineBurnStatic@@QAE@XZ");
    todo("implement");
    _sub_43F90D(this);
}

_extern _sub_43F91A(FatVertex *const);
_inline FatVertex::FatVertex() // 0x43F91A
{
    mangled_assert("??0FatVertex@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_43F91A(this);
}

_extern void _sub_43FB45(EngineBurnStatic *const);
EngineBurnStatic::~EngineBurnStatic() // 0x43FB45
{
    mangled_assert("??1EngineBurnStatic@@QAE@XZ");
    todo("implement");
    _sub_43FB45(this);
}

_extern _sub_43F900(EngineBurnPath *const);
EngineBurnPath::EngineBurnPath() // 0x43F900
{
    mangled_assert("??0EngineBurnPath@@QAE@XZ");
    todo("implement");
    _sub_43F900(this);
}

_extern _sub_43F90A(EngineBurnSpark *const);
_inline EngineBurnSpark::EngineBurnSpark() // 0x43F90A
{
    mangled_assert("??0EngineBurnSpark@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_43F90A(this);
}

_extern void _sub_43FB33(EngineBurnPath *const);
EngineBurnPath::~EngineBurnPath() // 0x43FB33
{
    mangled_assert("??1EngineBurnPath@@QAE@XZ");
    todo("implement");
    _sub_43FB33(this);
}

_extern void _sub_441BE4(EngineBurnPath *const, float, vector3 &);
void EngineBurnPath::getPosition(float, vector3 &) // 0x441BE4
{
    mangled_assert("?getPosition@EngineBurnPath@@QAEXMAAVvector3@@@Z");
    todo("implement");
    _sub_441BE4(this, arg, arg);
}

_extern _sub_43F80C(EngineBurn *const);
EngineBurn::EngineBurn() // 0x43F80C
{
    mangled_assert("??0EngineBurn@@QAE@XZ");
    todo("implement");
    _sub_43F80C(this);
}

_extern void _sub_43FA8A(EngineBurn *const);
EngineBurn::~EngineBurn() // 0x43FA8A
{
    mangled_assert("??1EngineBurn@@QAE@XZ");
    todo("implement");
    _sub_43FA8A(this);
}

_extern void _sub_442591(EngineBurn *const, float, EngineBurnInfo *);
void EngineBurn::update(float, EngineBurnInfo *) // 0x442591
{
    mangled_assert("?update@EngineBurn@@QAEXMPAVEngineBurnInfo@@@Z");
    todo("implement");
    _sub_442591(this, arg, arg);
}

_extern void _sub_44206C(EngineBurn *const, EngineBurnSpark const &);
void EngineBurn::renderSpark(EngineBurnSpark const &) // 0x44206C
{
    mangled_assert("?renderSpark@EngineBurn@@AAEXABVEngineBurnSpark@@@Z");
    todo("implement");
    _sub_44206C(this, arg);
}

_extern void _sub_44209B(EngineBurn *const, Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &);
void EngineBurn::renderSparks(Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &) // 0x44209B
{
    mangled_assert("?renderSparks@EngineBurn@@AAEXPBVCamera@@PBVEngineBurnInfo@@PAVSpriteBatch@@ABVmatrix4@@MMABVvector4@@@Z");
    todo("implement");
    _sub_44209B(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_44201B(EngineBurn *const, Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &);
void EngineBurn::render(Camera const *, EngineBurnInfo const *, SpriteBatch *, matrix4 const &, float, float, vector4 const &) // 0x44201B
{
    mangled_assert("?render@EngineBurn@@QAEXPBVCamera@@PBVEngineBurnInfo@@PAVSpriteBatch@@ABVmatrix4@@MMABVvector4@@@Z");
    todo("implement");
    _sub_44201B(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern _sub_43F867(EngineBurnManager *const);
EngineBurnManager::EngineBurnManager() // 0x43F867
{
    mangled_assert("??0EngineBurnManager@@AAE@XZ");
    todo("implement");
    _sub_43F867(this);
}

_extern void _sub_43FAE0(EngineBurnManager *const);
EngineBurnManager::~EngineBurnManager() // 0x43FAE0
{
    mangled_assert("??1EngineBurnManager@@AAE@XZ");
    todo("implement");
    _sub_43FAE0(this);
}

_extern bool _sub_44254B();
bool EngineBurnManager::startup() // 0x44254B
{
    mangled_assert("?startup@EngineBurnManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_44254B();
    return __result;
}

_extern bool _sub_4424D6();
bool EngineBurnManager::shutdown() // 0x4424D6
{
    mangled_assert("?shutdown@EngineBurnManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4424D6();
    return __result;
}

_extern EngineBurnManager *_sub_441E4E();
EngineBurnManager *EngineBurnManager::i() // 0x441E4E
{
    mangled_assert("?i@EngineBurnManager@@SGPAV1@XZ");
    todo("implement");
    EngineBurnManager * __result = _sub_441E4E();
    return __result;
}

_extern void _sub_440F50(EngineBurnManager *const, Camera const *, float, SobWithMesh *);
void EngineBurnManager::drawShipEngineBurns(Camera const *, float, SobWithMesh *) // 0x440F50
{
    mangled_assert("?drawShipEngineBurns@EngineBurnManager@@AAEXPBVCamera@@MPAVSobWithMesh@@@Z");
    todo("implement");
    _sub_440F50(this, arg, arg, arg);
}

_extern bool _sub_441A54(EngineBurnManager *const, bool);
bool EngineBurnManager::enable(bool) // 0x441A54
{
    mangled_assert("?enable@EngineBurnManager@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_441A54(this, arg);
    return __result;
}

_extern void _sub_440E0B(EngineBurnManager *const, Camera const *, float, Selection const &);
void EngineBurnManager::drawAllEngineBurns(Camera const *, float, Selection const &) // 0x440E0B
{
    mangled_assert("?drawAllEngineBurns@EngineBurnManager@@QAEXPBVCamera@@MABVSelection@@@Z");
    todo("implement");
    _sub_440E0B(this, arg, arg, arg);
}

_extern __int32 _sub_441CB5(IFF *, IFFChunk *, void *, void *);
__int32 EngineBurnManager::handle_EngineBurn_Chunk(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x441CB5
{
    mangled_assert("?handle_EngineBurn_Chunk@EngineBurnManager@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_441CB5(iff, chunk, user0, user1);
    return __result;
}

_extern void _sub_442463();
void EngineBurnManager::scriptingInit() // 0x442463
{
    mangled_assert("?scriptingInit@EngineBurnManager@@SGXXZ");
    todo("implement");
    _sub_442463();
}

/* ---------- private code */

_extern void _sub_442520(Camera const *, bool);
_static void spriteSetup(Camera const *pCamera, bool start) // 0x442520
{
    mangled_assert("spriteSetup");
    todo("implement");
    _sub_442520(pCamera, start);
}

_extern void _sub_4422C4(Camera const *, vector3 const &, vector4 const &, float);
_static void renderSprite(Camera const *pCamera, vector3 const &wPos, vector4 const &col, float scale) // 0x4422C4
{
    mangled_assert("renderSprite");
    todo("implement");
    _sub_4422C4(pCamera, wPos, col, scale);
}

_extern __int32 _sub_44176E(lua_State *);
_static __int32 ebSetEngineBurn(lua_State *lstate) // 0x44176E
{
    mangled_assert("ebSetEngineBurn");
    todo("implement");
    __int32 __result = _sub_44176E(lstate);
    return __result;
}
#endif
