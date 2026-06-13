#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\util\smallobj.h>
#include <Avoidance\PathFinder.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Mathlib\matrix3.h>
#include <memory\memorysmall.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <memory\mmfixedpool.h>
#include <math.h>
#include <boost\static_assert.hpp>
#include <list>
#include <Mathlib\vector3.h>
#include <boost\config.hpp>
#include <assert.h>
#include <Mathlib\mathutil.h>
#include <debug\db.h>
#include <Collision\Primitives\obb.h>
#include <savegamedef.h>
#include <Avoidance\PathFinderObstacleOBB.h>
#include <Collision\primitivesfwd.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<PathFinderObstacleOBB *,std::allocator<PathFinderObstacleOBB *> > PathFinderObstacleVector;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > Vector3ListIterator;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned __int32 const OBB_Axis[6]; // 0x798334
    extern float const OBB_Signs[6]; // 0x79834C
    extern OBB_Face const OBB_OppositeFace[6]; // 0x798364
    extern FixedSizeObjAllocator<PathFinderObstacleOBB,500> s_PathFinderAllocator; // 0x8440C0
}

/* ---------- public code */

_extern void *_sub_4E6764(unsigned __int32);
void *PathFinderObstacleOBB::operator new(unsigned __int32 size) // 0x4E6764
{
    mangled_assert("??2PathFinderObstacleOBB@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_4E6764(size);
    return __result;
}

_extern void _sub_4E6771(void *, unsigned __int32);
void PathFinderObstacleOBB::operator delete(void *p, unsigned __int32 size) // 0x4E6771
{
    mangled_assert("??3PathFinderObstacleOBB@@SGXPAXI@Z");
    todo("implement");
    _sub_4E6771(p, size);
}

_extern _sub_4E632C(PathFinderObstacleOBB *const, Collision::OBB const &, vector3 const &, vector3 const &, float);
PathFinderObstacleOBB::PathFinderObstacleOBB(Collision::OBB const &, vector3 const &, vector3 const &, float) // 0x4E632C
{
    mangled_assert("??0PathFinderObstacleOBB@@QAE@ABVOBB@Collision@@ABVvector3@@1M@Z");
    todo("implement");
    _sub_4E632C(this, arg, arg, arg, arg);
}

_extern bool _sub_4E8D48(PathFinderObstacleOBB const *const, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, float *);
bool PathFinderObstacleOBB::isHitBySegment(std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, float *) const // 0x4E8D48
{
    mangled_assert("?isHitBySegment@PathFinderObstacleOBB@@QBE_NABV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Vvector3@@@std@@@std@@@std@@0PAM@Z");
    todo("implement");
    bool __result = _sub_4E8D48(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_4E8AC6(PathFinderObstacleOBB const *const, vector3 const &, vector3 const &, OBB_Face &, float *);
bool PathFinderObstacleOBB::getHitDist(vector3 const &, vector3 const &, OBB_Face &, float *) const // 0x4E8AC6
{
    mangled_assert("?getHitDist@PathFinderObstacleOBB@@IBE_NABVvector3@@0AAW4OBB_Face@@PAM@Z");
    todo("implement");
    bool __result = _sub_4E8AC6(this, arg, arg, arg, arg);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > _sub_4E77A4(PathFinderObstacleOBB const *const, std::list<vector3,std::allocator<vector3> > &, std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > &, float);
std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > PathFinderObstacleOBB::findPathAround(std::list<vector3,std::allocator<vector3> > &, std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > &, float) const // 0x4E77A4
{
    mangled_assert("?findPathAround@PathFinderObstacleOBB@@QBE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@Vvector3@@@std@@@std@@@std@@AAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@3@AAV23@M@Z");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<vector3> > > __result = _sub_4E77A4(this, arg, arg, arg);
    return __result;
}

_extern vector3 _sub_4E686C(PathFinderObstacleOBB const *const, vector3 const &, vector3 const &, float);
vector3 PathFinderObstacleOBB::findFirstEdgePoint(vector3 const &, vector3 const &, float) const // 0x4E686C
{
    mangled_assert("?findFirstEdgePoint@PathFinderObstacleOBB@@QBE?AVvector3@@ABV2@0M@Z");
    todo("implement");
    vector3 __result = _sub_4E686C(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_4E8E96(PathFinderObstacleOBB const *const, vector3 const &);
bool PathFinderObstacleOBB::isPointInside(vector3 const &) const // 0x4E8E96
{
    mangled_assert("?isPointInside@PathFinderObstacleOBB@@QBE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_4E8E96(this, arg);
    return __result;
}

_extern bool _sub_4E8F6F(PathFinderObstacleOBB const *const, vector3 const &);
bool PathFinderObstacleOBB::isPointInsideOrOnEdge(vector3 const &) const // 0x4E8F6F
{
    mangled_assert("?isPointInsideOrOnEdge@PathFinderObstacleOBB@@QBE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_4E8F6F(this, arg);
    return __result;
}

_extern vector3 _sub_4E8915(PathFinderObstacleOBB const *const, vector3 const &, float);
vector3 PathFinderObstacleOBB::getClosestPointOnEdge(vector3 const &, float) const // 0x4E8915
{
    mangled_assert("?getClosestPointOnEdge@PathFinderObstacleOBB@@QBE?AVvector3@@ABV2@M@Z");
    todo("implement");
    vector3 __result = _sub_4E8915(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
