#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\obb.h>
#include <profile\profile.h>
#include <iostream>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Avoidance\PathFinderObstacleOBB.h>
#include <Collision\util\smallobj.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <savegamedef.h>
#include <Avoidance\PathFinder.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathutil.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PathFinderObstacleOBB *> > > PathFinderObstacleVectorIterator;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4E4CF6(PathFinder *const, float, bool, bool);
PathFinder::PathFinder(float, bool, bool) // 0x4E4CF6
{
    mangled_assert("??0PathFinder@@QAE@M_N0@Z");
    todo("implement");
    _sub_4E4CF6(this, arg, arg, arg);
}

_extern void _sub_4E4D54(PathFinder *const);
PathFinder::~PathFinder() // 0x4E4D54
{
    mangled_assert("??1PathFinder@@QAE@XZ");
    todo("implement");
    _sub_4E4D54(this);
}

_extern void _sub_4E56DD(PathFinder *const, Collision::OBB const &, vector3 const &, vector3 const &, float);
void PathFinder::addObject(Collision::OBB const &, vector3 const &, vector3 const &, float) // 0x4E56DD
{
    mangled_assert("?addObject@PathFinder@@QAEXABVOBB@Collision@@ABVvector3@@1M@Z");
    todo("implement");
    _sub_4E56DD(this, arg, arg, arg, arg);
}

_extern void _sub_4E57EE(PathFinder *const);
void PathFinder::clearObjects() // 0x4E57EE
{
    mangled_assert("?clearObjects@PathFinder@@QAEXXZ");
    todo("implement");
    _sub_4E57EE(this);
}

_extern bool _sub_4E5A17(PathFinder *const, vector3 const &, vector3 const &, std::list<vector3,std::allocator<vector3> > &, bool *);
bool PathFinder::findPath(vector3 const &, vector3 const &, std::list<vector3,std::allocator<vector3> > &, bool *) // 0x4E5A17
{
    mangled_assert("?findPath@PathFinder@@QAE_NABVvector3@@0AAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@PA_N@Z");
    todo("implement");
    bool __result = _sub_4E5A17(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_4E606B(PathFinder *const, std::list<vector3,std::allocator<vector3> > &);
void PathFinder::optimizePath(std::list<vector3,std::allocator<vector3> > &) // 0x4E606B
{
    mangled_assert("?optimizePath@PathFinder@@AAEXAAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
    _sub_4E606B(this, arg);
}

_extern bool _sub_4E5D11(PathFinder *const, vector3 const &, vector3 const &, vector3 &);
bool PathFinder::findPathForShipAvoidance(vector3 const &, vector3 const &, vector3 &) // 0x4E5D11
{
    mangled_assert("?findPathForShipAvoidance@PathFinder@@QAE_NABVvector3@@0AAV2@@Z");
    todo("implement");
    bool __result = _sub_4E5D11(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_4E5FCC(PathFinder const *const, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &);
bool PathFinder::isSegmentHittingAnything(std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &) const // 0x4E5FCC
{
    mangled_assert("?isSegmentHittingAnything@PathFinder@@ABE_NABV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Vvector3@@@std@@@std@@@std@@0@Z");
    todo("implement");
    bool __result = _sub_4E5FCC(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
