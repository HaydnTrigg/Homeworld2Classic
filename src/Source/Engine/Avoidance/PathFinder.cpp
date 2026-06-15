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

PathFinder::PathFinder(float, bool, bool) // 0x4E4CF6
{
    mangled_assert("??0PathFinder@@QAE@M_N0@Z");
    todo("implement");
}

PathFinder::~PathFinder() // 0x4E4D54
{
    mangled_assert("??1PathFinder@@QAE@XZ");
    todo("implement");
}

void PathFinder::addObject(Collision::OBB const &, vector3 const &, vector3 const &, float) // 0x4E56DD
{
    mangled_assert("?addObject@PathFinder@@QAEXABVOBB@Collision@@ABVvector3@@1M@Z");
    todo("implement");
}

void PathFinder::clearObjects() // 0x4E57EE
{
    mangled_assert("?clearObjects@PathFinder@@QAEXXZ");
    todo("implement");
}

bool PathFinder::findPath(vector3 const &, vector3 const &, std::list<vector3,std::allocator<vector3> > &, bool *) // 0x4E5A17
{
    mangled_assert("?findPath@PathFinder@@QAE_NABVvector3@@0AAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@PA_N@Z");
    todo("implement");
}

void PathFinder::optimizePath(std::list<vector3,std::allocator<vector3> > &) // 0x4E606B
{
    mangled_assert("?optimizePath@PathFinder@@AAEXAAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
}

bool PathFinder::findPathForShipAvoidance(vector3 const &, vector3 const &, vector3 &) // 0x4E5D11
{
    mangled_assert("?findPathForShipAvoidance@PathFinder@@QAE_NABVvector3@@0AAV2@@Z");
    todo("implement");
}

bool PathFinder::isSegmentHittingAnything(std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<vector3> > > const &) const // 0x4E5FCC
{
    mangled_assert("?isSegmentHittingAnything@PathFinder@@ABE_NABV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Vvector3@@@std@@@std@@@std@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
