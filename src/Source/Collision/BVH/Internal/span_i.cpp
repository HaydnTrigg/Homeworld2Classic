#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\profiling.h>
#include <string>
#include <iterator>
#include <istream>
#include <ostream>
#include <Collision\pch.h>
#include <ios>
#include <xlocnum>
#include <xatomic0.h>
#include <streambuf>
#include <crtdefs.h>
#include <xiosbase>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <new>
#include <math.h>
#include <xstddef>
#include <xmemory>
#include <xmemory0>
#include <boost\cstdint.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <locale.h>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <wchar.h>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <xlocinfo>
#include <xlocinfo.h>
#include <ctype.h>
#include <Mathlib\matrix3.h>
#include <vector>
#include <share.h>
#include <Collision\Primitives\segment.h>
#include <xdebug>
#include <Mathlib\vector3.h>
#include <typeinfo>
#include <xfacet>
#include <Collision\Primitives\sphere.h>
#include <type_traits>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_661444(Collision::Internal::Span *const);
Collision::Internal::Span::Span() // 0x661444
{
    mangled_assert("??0Span@Internal@Collision@@QAE@XZ");
    todo("implement");
    _sub_661444(this);
}

_extern void _sub_66148A(Collision::Internal::Span *const);
Collision::Internal::Span::~Span() // 0x66148A
{
    mangled_assert("??1Span@Internal@Collision@@QAE@XZ");
    todo("implement");
    _sub_66148A(this);
}

_extern Collision::Internal::Span::Proxy *_sub_6614A7(Collision::Internal::Span *const, Collision::AABB const &, void *);
Collision::Internal::Span::Proxy *Collision::Internal::Span::CreateProxy(Collision::AABB const &, void *) // 0x6614A7
{
    mangled_assert("?CreateProxy@Span@Internal@Collision@@QAEPAVProxy@123@ABVAABB@3@PAX@Z");
    todo("implement");
    Collision::Internal::Span::Proxy * __result = _sub_6614A7(this, arg, arg);
    return __result;
}

_extern void _sub_661601(Collision::Internal::Span *const, Collision::Internal::Span::Proxy *);
void Collision::Internal::Span::InsertObjectX(Collision::Internal::Span::Proxy *) // 0x661601
{
    mangled_assert("?InsertObjectX@Span@Internal@Collision@@AAEXPAVProxy@123@@Z");
    todo("implement");
    _sub_661601(this, arg);
}

_extern void _sub_661656(Collision::Internal::Span *const, Collision::Internal::Span::Proxy *);
void Collision::Internal::Span::InsertObjectZ(Collision::Internal::Span::Proxy *) // 0x661656
{
    mangled_assert("?InsertObjectZ@Span@Internal@Collision@@AAEXPAVProxy@123@@Z");
    todo("implement");
    _sub_661656(this, arg);
}

_extern void _sub_6617A3(Collision::Internal::Span *const, Collision::Internal::Span::Proxy *);
void Collision::Internal::Span::RemoveObjectX(Collision::Internal::Span::Proxy *) // 0x6617A3
{
    mangled_assert("?RemoveObjectX@Span@Internal@Collision@@AAEXPAVProxy@123@@Z");
    todo("implement");
    _sub_6617A3(this, arg);
}

_extern void _sub_6617CA(Collision::Internal::Span *const, Collision::Internal::Span::Proxy *);
void Collision::Internal::Span::RemoveObjectZ(Collision::Internal::Span::Proxy *) // 0x6617CA
{
    mangled_assert("?RemoveObjectZ@Span@Internal@Collision@@AAEXPAVProxy@123@@Z");
    todo("implement");
    _sub_6617CA(this, arg);
}

_extern void _sub_6615E8(Collision::Internal::Span *const);
void Collision::Internal::Span::GarbageCollect() // 0x6615E8
{
    mangled_assert("?GarbageCollect@Span@Internal@Collision@@QAEXXZ");
    todo("implement");
    _sub_6615E8(this);
}

_extern void _sub_6614FC(Collision::Internal::Span const *const, std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &);
void Collision::Internal::Span::DetectCollisions(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const // 0x6614FC
{
    mangled_assert("?DetectCollisions@Span@Internal@Collision@@QBEXAAV?$vector@U?$pair@PAXPAX@std@@V?$allocator@U?$pair@PAXPAX@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6614FC(this, arg);
}

_extern void _sub_661521(Collision::Internal::Span const *const, std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &);
void Collision::Internal::Span::DetectCollisionsX(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const // 0x661521
{
    mangled_assert("?DetectCollisionsX@Span@Internal@Collision@@ABEXAAV?$vector@U?$pair@PAXPAX@std@@V?$allocator@U?$pair@PAXPAX@std@@@2@@std@@@Z");
    todo("implement");
    _sub_661521(this, arg);
}

_extern void _sub_661584(Collision::Internal::Span const *const, std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &);
void Collision::Internal::Span::DetectCollisionsZ(std::vector<std::pair<void *,void *>,std::allocator<std::pair<void *,void *> > > &) const // 0x661584
{
    mangled_assert("?DetectCollisionsZ@Span@Internal@Collision@@ABEXAAV?$vector@U?$pair@PAXPAX@std@@V?$allocator@U?$pair@PAXPAX@std@@@2@@std@@@Z");
    todo("implement");
    _sub_661584(this, arg);
}

_extern void _sub_6616AF(Collision::Internal::Span *const, Collision::Segment const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &);
void Collision::Internal::Span::Query(Collision::Segment const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &) // 0x6616AF
{
    mangled_assert("?Query@Span@Internal@Collision@@QAEXABVSegment@3@IAAV?$vector@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
    _sub_6616AF(this, arg, arg, arg);
}

_extern void _sub_661733(Collision::Internal::Span *const, Collision::Sphere const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &);
void Collision::Internal::Span::Query(Collision::Sphere const &, unsigned __int32, std::vector<void *,std::allocator<void *> > &) // 0x661733
{
    mangled_assert("?Query@Span@Internal@Collision@@QAEXABVSphere@3@IAAV?$vector@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
    _sub_661733(this, arg, arg, arg);
}

_extern _sub_661413(Collision::Internal::Span::Proxy *const, Collision::Internal::Span *, Collision::AABB const &, void *);
Collision::Internal::Span::Proxy::Proxy(Collision::Internal::Span *, Collision::AABB const &, void *) // 0x661413
{
    mangled_assert("??0Proxy@Span@Internal@Collision@@QAE@PAV123@ABVAABB@3@PAX@Z");
    todo("implement");
    _sub_661413(this, arg, arg, arg);
}

_extern void _sub_661467(Collision::Internal::Span::Proxy *const);
Collision::Internal::Span::Proxy::~Proxy() // 0x661467
{
    mangled_assert("??1Proxy@Span@Internal@Collision@@UAE@XZ");
    todo("implement");
    _sub_661467(this);
}

_extern void _sub_661810(Collision::Internal::Span::Proxy *const);
void Collision::Internal::Span::Proxy::UpdateX() // 0x661810
{
    mangled_assert("?UpdateX@Proxy@Span@Internal@Collision@@QAEXXZ");
    todo("implement");
    _sub_661810(this);
}

_extern void _sub_6618B8(Collision::Internal::Span::Proxy *const);
void Collision::Internal::Span::Proxy::UpdateZ() // 0x6618B8
{
    mangled_assert("?UpdateZ@Proxy@Span@Internal@Collision@@QAEXXZ");
    todo("implement");
    _sub_6618B8(this);
}

_extern void _sub_6617F2(Collision::Internal::Span::Proxy *const, Collision::AABB const &);
void Collision::Internal::Span::Proxy::Update(Collision::AABB const &) // 0x6617F2
{
    mangled_assert("?Update@Proxy@Span@Internal@Collision@@UAEXABVAABB@4@@Z");
    todo("implement");
    _sub_6617F2(this, arg);
}

/* ---------- private code */
#endif
