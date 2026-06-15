#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\triangle.h>
#include <Collision\pch.h>
#include <new>
#include <math.h>
#include <xstddef>
#include <xmemory>
#include <xmemory0>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\mesh.h>
#include <vector>
#include <stdexcept>
#include <debug\db.h>
#include <xstring>
#include <xutility>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\obb.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\vector3.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <type_traits>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Collision::Mesh::Mesh(std::vector<vector3,std::allocator<vector3> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, Collision::OBB const &) // 0x661E64
{
    mangled_assert("??0Mesh@Collision@@QAE@ABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@3@ABVOBB@1@@Z");
    todo("implement");
}

bool Collision::Mesh::FindIntersection(Collision::Segment const &, Collision::Point &) const // 0x661FAB
{
    mangled_assert("?FindIntersection@Mesh@Collision@@QBE_NABVSegment@2@AAUPoint@2@@Z");
    todo("implement");
}

bool Collision::Mesh::FindIntersection(Collision::Segment const &, Collision::PointPair &) const // 0x6620F4
{
    mangled_assert("?FindIntersection@Mesh@Collision@@QBE_NABVSegment@2@AAUPointPair@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
