#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <HyperspaceManager.h>
#include <xstring>
#include <SquadronList.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <blobber\blobber.h>
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
#include <math.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Mathlib\vector4.h>
#include <task.h>
#include <sobid.h>
#include <stack>
#include <xtree>
#include <SobWithMeshStatic.h>
#include <Sob\Resource\Asteroid.h>
#include <boost\scoped_ptr.hpp>
#include <Sob\Resource\Resource.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <MeshAnimation.h>
#include <Sob\Resource\ResourceStatic.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <pathpoints.h>
#include <SOBGroupManager.h>
#include <debug\db.h>
#include <hash_map>
#include <xhash>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Universe.h>
#include <Waypoint.h>
#include <wchar.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Avoidance\AvoidanceBoxes.h>

/* ---------- constants */

/* ---------- definitions */

struct AsteroidGetFunc
{
    void operator()(Asteroid *, vector3 &, float &);
};
static_assert(sizeof(AsteroidGetFunc) == 1, "Invalid AsteroidGetFunc size");

typedef std::vector<Asteroid *,std::allocator<Asteroid *> > AsteroidVector;
typedef std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > AsteroidGroups;
typedef std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > UserTypeGroups;
typedef std::list<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > > BlobContainer;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > > BlobGroupContainerIterator;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<Blob<Asteroid,AsteroidGetFunc> > > > BlobContainerIterator;
typedef std::vector<Asteroid *,std::allocator<Asteroid *> > UserTypeVector;
typedef std::list<BlobGroup<Blob<Asteroid,AsteroidGetFunc> >,std::allocator<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > BlobGroupContainer;

/* ---------- prototypes */

extern void GenerateAsteroidGroups(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &outGroups);
extern void GenerateAsteroidGroupOBB(std::vector<Asteroid *,std::allocator<Asteroid *> > const &inGroup);
extern void GenerateAsteroidOBBs(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > const &inGroups);
extern void GenerateAsteroidAvoidance();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const AsteroidRadiusMultiplier; // 0x798384
}

/* ---------- public code */

_extern void _sub_4EA762(AsteroidGetFunc *const, Asteroid *, vector3 &, float &);
_inline void AsteroidGetFunc::operator()(Asteroid *, vector3 &, float &) // 0x4EA762
{
    mangled_assert("??RAsteroidGetFunc@@QAEXPAVAsteroid@@AAVvector3@@AAM@Z");
    todo("implement");
    _sub_4EA762(this, arg, arg, arg);
}

_extern _sub_4EA243(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const, BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &);
_inline BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::BlobGroup<Blob<Asteroid,AsteroidGetFunc> >(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > const &) // 0x4EA243
{
    mangled_assert("??0?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_4EA243(this, arg);
}

_extern _sub_4EA255(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::BlobGroup<Blob<Asteroid,AsteroidGetFunc> >() // 0x4EA255
{
    mangled_assert("??0?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EA255(this);
}

_extern void _sub_4EA537(BlobGroup<Blob<Asteroid,AsteroidGetFunc> > *const);
_inline BlobGroup<Blob<Asteroid,AsteroidGetFunc> >::~BlobGroup<Blob<Asteroid,AsteroidGetFunc> >() // 0x4EA537
{
    mangled_assert("??1?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EA537(this);
}

_extern void _sub_4EA53C(Blobber<Asteroid,AsteroidGetFunc> *const);
_inline Blobber<Asteroid,AsteroidGetFunc>::~Blobber<Asteroid,AsteroidGetFunc>() // 0x4EA53C
{
    mangled_assert("??1?$Blobber@VAsteroid@@UAsteroidGetFunc@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EA53C(this);
}

_extern void _sub_4EA9D4(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &);
void GenerateAsteroidGroups(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > &outGroups) // 0x4EA9D4
{
    mangled_assert("?GenerateAsteroidGroups@@YGXAAV?$vector@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@V?$allocator@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_4EA9D4(outGroups);
}

_extern void _sub_4EA560(std::_List_buy<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > > *const);
_inline std::_List_buy<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > >::~_List_buy<Blob<Asteroid,AsteroidGetFunc>,std::allocator<Blob<Asteroid,AsteroidGetFunc> > >() // 0x4EA560
{
    mangled_assert("??1?$_List_buy@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@V?$allocator@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EA560(this);
}

_extern void _sub_4EA569(std::_List_buy<BlobGroup<Blob<Asteroid,AsteroidGetFunc> >,std::allocator<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > > *const);
_inline std::_List_buy<BlobGroup<Blob<Asteroid,AsteroidGetFunc> >,std::allocator<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > >::~_List_buy<BlobGroup<Blob<Asteroid,AsteroidGetFunc> >,std::allocator<BlobGroup<Blob<Asteroid,AsteroidGetFunc> > > >() // 0x4EA569
{
    mangled_assert("??1?$_List_buy@V?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@V?$allocator@V?$BlobGroup@V?$Blob@VAsteroid@@UAsteroidGetFunc@@@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EA569(this);
}

_extern void _sub_4EA88D(std::vector<Asteroid *,std::allocator<Asteroid *> > const &);
void GenerateAsteroidGroupOBB(std::vector<Asteroid *,std::allocator<Asteroid *> > const &inGroup) // 0x4EA88D
{
    mangled_assert("?GenerateAsteroidGroupOBB@@YGXABV?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@@Z");
    todo("implement");
    _sub_4EA88D(inGroup);
}

_extern void _sub_4EAA51(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > const &);
void GenerateAsteroidOBBs(std::vector<std::vector<Asteroid *,std::allocator<Asteroid *> >,std::allocator<std::vector<Asteroid *,std::allocator<Asteroid *> > > > const &inGroups) // 0x4EAA51
{
    mangled_assert("?GenerateAsteroidOBBs@@YGXABV?$vector@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@V?$allocator@V?$vector@PAVAsteroid@@V?$allocator@PAVAsteroid@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_4EAA51(inGroups);
}

_extern void _sub_4EA848();
void GenerateAsteroidAvoidance() // 0x4EA848
{
    mangled_assert("?GenerateAsteroidAvoidance@@YGXXZ");
    todo("implement");
    _sub_4EA848();
}

/* ---------- private code */
#endif
