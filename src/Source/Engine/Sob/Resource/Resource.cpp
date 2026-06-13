#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <resourceCommand.h>
#include <TeamColourRegistry.h>
#include <command.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Camera\Camera.h>
#include <SobWithMeshStatic.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Mathlib\matrix3.h>
#include <abilities.h>
#include <Render\objects\renderable.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <Render\objects\misctextures.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <debug\ctassert.h>
#include <math.h>
#include <Interpolation.h>
#include <list>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Collision\Primitives\aabb.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <ShaderVariables.h>
#include <Mathlib\vector3.h>
#include <weaponinfo.h>
#include <xhash>
#include <Mathlib\vector4.h>
#include <ITweak.h>
#include <Tactics.h>
#include <sobid.h>
#include <map>
#include <Modifiers\ModifierTargetCache.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\light.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <fog.h>
#include <boost\cstdint.hpp>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Render\objects\objects.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <ship.h>
#include <Render\gl\types.h>
#include <seInterface2\SoundParams.h>
#include <ShieldTypes.h>
#include <Mathlib\matvec.h>
#include <renderer.h>
#include <Mathlib\quat.h>
#include <Render\gl\lotypes.h>
#include <Collision\Primitives\capsule.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\Primitives\segment.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\profiling.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\r_types.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <debug\db.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Physics\RigidBody.h>
#include <playerresourcetype.h>
#include <util\dictionary.h>
#include <Physics\PhysicsObject.h>
#include <util\utilexports.h>
#include <Sob\Resource\ResourceController.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Physics\RigidBodyController.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\ResourceStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <commandtype.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Sob\Resource\Resource.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

typedef SaveObject *(*SaveGameRegisterObjectFunc)(SaveGameData *);
typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > SquadronInsideMap;
typedef std::list<PointMassController *,std::allocator<PointMassController *> > PointMassControllerList;

/* ---------- prototypes */

/* ---------- globals */

extern char const Resource::m_saveToken[0]; // 0x78FCC8
extern SaveData const Resource::m_saveData[6]; // 0x78FC08

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B05B4(Resource *const, SobType, char const *, bool);
Resource::Resource(SobType, char const *, bool) // 0x4B05B4
{
    mangled_assert("??0Resource@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
    _sub_4B05B4(this, arg, arg, arg);
}

_extern void _sub_4B0716(Resource *const);
Resource::~Resource() // 0x4B0716
{
    mangled_assert("??1Resource@@UAE@XZ");
    todo("implement");
    _sub_4B0716(this);
}

_extern void _sub_4B083A(Resource *const);
void Resource::UpdateController() // 0x4B083A
{
    mangled_assert("?UpdateController@Resource@@IAEXXZ");
    todo("implement");
    _sub_4B083A(this);
}

_extern void _sub_4B082A(Resource *const);
void Resource::RemoveFromSimulation() // 0x4B082A
{
    mangled_assert("?RemoveFromSimulation@Resource@@MAEXXZ");
    todo("implement");
    _sub_4B082A(this);
}

_extern void _sub_4B07DE(Resource *const);
void Resource::RemoveAllSimData() // 0x4B07DE
{
    mangled_assert("?RemoveAllSimData@Resource@@IAEXXZ");
    todo("implement");
    _sub_4B07DE(this);
}

_extern void _sub_4B07BC(Selection::Observer * const, Sob *);
void Resource::Notify_Insertion(Sob *) // 0x4B07BC
{
    mangled_assert("?Notify_Insertion@Resource@@EAEXPAVSob@@@Z");
    // __shifted(Resource, 588);
    todo("implement");
    _sub_4B07BC(this, arg);
}

_extern void _sub_4B07BF(Selection::Observer * const, Sob *);
void Resource::Notify_Removal(Sob *) // 0x4B07BF
{
    mangled_assert("?Notify_Removal@Resource@@EAEXPAVSob@@@Z");
    // __shifted(Resource, 588);
    todo("implement");
    _sub_4B07BF(this, arg);
}

_extern void _sub_4B0AD4(Resource *const);
void Resource::defaultSettings() // 0x4B0AD4
{
    mangled_assert("?defaultSettings@Resource@@QAEXXZ");
    todo("implement");
    _sub_4B0AD4(this);
}

_extern _sub_4B0511(Resource *const, SobType, SaveGameData *);
Resource::Resource(SobType, SaveGameData *) // 0x4B0511
{
    mangled_assert("??0Resource@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4B0511(this, arg, arg);
}

_extern void _sub_4B0BE9(Resource *const);
void Resource::postRestore() // 0x4B0BE9
{
    mangled_assert("?postRestore@Resource@@UAEXXZ");
    todo("implement");
    _sub_4B0BE9(this);
}

_extern void _sub_4B0E53(Resource *const, Selection *);
void Resource::setGroup(Selection *) // 0x4B0E53
{
    mangled_assert("?setGroup@Resource@@QAEXPAVSelection@@@Z");
    todo("implement");
    _sub_4B0E53(this, arg);
}

_extern Selection const *_sub_4B0B55(Resource const *const);
Selection const *Resource::getGroup() const // 0x4B0B55
{
    mangled_assert("?getGroup@Resource@@QBEPBVSelection@@XZ");
    todo("implement");
    Selection const * __result = _sub_4B0B55(this);
    return __result;
}

_extern void _sub_4B0E8A(Resource *const, Fixed<10> const &);
void Resource::setResourceValue(Fixed<10> const &) // 0x4B0E8A
{
    mangled_assert("?setResourceValue@Resource@@UAEXABV?$Fixed@$09@@@Z");
    todo("implement");
    _sub_4B0E8A(this, arg);
}

_extern Fixed<10> const &_sub_4B0B7B(Resource const *const);
Fixed<10> const &Resource::getResourceValue() const // 0x4B0B7B
{
    mangled_assert("?getResourceValue@Resource@@UBEABV?$Fixed@$09@@XZ");
    todo("implement");
    Fixed<10> const & __result = _sub_4B0B7B(this);
    return __result;
}

_extern bool _sub_4B0BDD(Resource const *const);
bool Resource::isEmpty() const // 0x4B0BDD
{
    mangled_assert("?isEmpty@Resource@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_4B0BDD(this);
    return __result;
}

_extern Fixed<10> const &_sub_4B086B(Resource *const, Fixed<10> const &);
Fixed<10> const &Resource::adjustResourceValue(Fixed<10> const &) // 0x4B086B
{
    mangled_assert("?adjustResourceValue@Resource@@UAEABV?$Fixed@$09@@ABV2@@Z");
    todo("implement");
    Fixed<10> const & __result = _sub_4B086B(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4B0B5F(Resource const *const);
unsigned __int32 Resource::getNumberOfFreeResourcingSpaces() const // 0x4B0B5F
{
    mangled_assert("?getNumberOfFreeResourcingSpaces@Resource@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4B0B5F(this);
    return __result;
}

_extern void _sub_4B087C(Resource *const, Camera const *);
void Resource::adjustShader(Camera const *) // 0x4B087C
{
    mangled_assert("?adjustShader@Resource@@IAEXPBVCamera@@@Z");
    todo("implement");
    _sub_4B087C(this, arg);
}

_extern void _sub_4B0CFC(Resource *const, Camera const *, MeshRenderProxy &);
void Resource::render(Camera const *, MeshRenderProxy &) // 0x4B0CFC
{
    mangled_assert("?render@Resource@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
    _sub_4B0CFC(this, arg, arg);
}

_extern bool _sub_4B0F1F(Resource *const, float);
bool Resource::update(float) // 0x4B0F1F
{
    mangled_assert("?update@Resource@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B0F1F(this, arg);
    return __result;
}

_extern float _sub_4B0B06(Resource const *const);
float Resource::getFadeValue() const // 0x4B0B06
{
    mangled_assert("?getFadeValue@Resource@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B0B06(this);
    return __result;
}

_extern bool _sub_4B0BF9(Resource *const, Ship *);
bool Resource::registerShip(Ship *) // 0x4B0BF9
{
    mangled_assert("?registerShip@Resource@@QAE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4B0BF9(this, arg);
    return __result;
}

_extern void _sub_4B0EB7(Resource *const, Ship *);
void Resource::unRegisterShip(Ship *) // 0x4B0EB7
{
    mangled_assert("?unRegisterShip@Resource@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B0EB7(this, arg);
}

_extern float _sub_4B0AF9(Resource *const);
float Resource::getBlobRadius() // 0x4B0AF9
{
    mangled_assert("?getBlobRadius@Resource@@QAEMXZ");
    todo("implement");
    float __result = _sub_4B0AF9(this);
    return __result;
}

_extern std::pair<vector3,matrix3> const *_sub_4B0B82(Resource const *const, Ship *);
std::pair<vector3,matrix3> const *Resource::getResourcingSpaceFor(Ship *) const // 0x4B0B82
{
    mangled_assert("?getResourcingSpaceFor@Resource@@QBEPBU?$pair@Vvector3@@Vmatrix3@@@std@@PAVShip@@@Z");
    todo("implement");
    std::pair<vector3,matrix3> const * __result = _sub_4B0B82(this, arg);
    return __result;
}

_extern void _sub_4B0BEE(Resource *const, Ship *);
void Resource::registerInterest(Ship *) // 0x4B0BEE
{
    mangled_assert("?registerInterest@Resource@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B0BEE(this, arg);
}

_extern void _sub_4B0EA2(Resource *const, Ship *);
void Resource::unRegisterInterest(Ship *) // 0x4B0EA2
{
    mangled_assert("?unRegisterInterest@Resource@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4B0EA2(this, arg);
}

_extern unsigned __int32 _sub_4B0BCA(Resource const *const);
unsigned __int32 Resource::getTotalNumberOfResourcingSpaces() const // 0x4B0BCA
{
    mangled_assert("?getTotalNumberOfResourcingSpaces@Resource@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4B0BCA(this);
    return __result;
}

_extern bool _sub_4B0DAB(Resource *const, SaveGameData *);
bool Resource::restore(SaveGameData *) // 0x4B0DAB
{
    mangled_assert("?restore@Resource@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4B0DAB(this, arg);
    return __result;
}

_extern bool _sub_4B0DF8(Resource *const, SaveGameData *, SaveType);
bool Resource::save(SaveGameData *, SaveType) // 0x4B0DF8
{
    mangled_assert("?save@Resource@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4B0DF8(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
