#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <SobIDShared.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Interpolation.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\bvh.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <sobid.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > > IDtoSharedPtrMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::map<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > > idtoSharedPtrMap; // 0x843BA4
    extern unsigned __int32 l_nextID[15]; // 0x843B68
}

/* ---------- public code */

_inline boost::shared_ptr<SobIDShared>::shared_ptr<SobIDShared>(boost::shared_ptr<SobIDShared> const &) // 0x479FE8
{
    mangled_assert("??0?$shared_ptr@VSobIDShared@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

SobID::SobID(unsigned __int32) // 0x47A077
{
    mangled_assert("??0SobID@@QAE@I@Z");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> >,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > >::~_Tree_buy<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> >,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > >() // 0x47A111
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIV?$shared_ptr@VSobIDShared@@@boost@@@std@@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VSobIDShared@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > >,0> >() // 0x47A11A
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IV?$shared_ptr@VSobIDShared@@@boost@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VSobIDShared@@@boost@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > >::~map<unsigned int,boost::shared_ptr<SobIDShared>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> > > >() // 0x47A123
{
    mangled_assert("??1?$map@IV?$shared_ptr@VSobIDShared@@@boost@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VSobIDShared@@@boost@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned int const ,boost::shared_ptr<SobIDShared> >::~pair<unsigned int const ,boost::shared_ptr<SobIDShared> >() // 0x47A128
{
    mangled_assert("??1?$pair@$$CBIV?$shared_ptr@VSobIDShared@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned int,boost::shared_ptr<SobIDShared> >::~pair<unsigned int,boost::shared_ptr<SobIDShared> >() // 0x47A134
{
    mangled_assert("??1?$pair@IV?$shared_ptr@VSobIDShared@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >::~sp_counted_base_impl<SobIDShared *,boost::checked_deleter<SobIDShared> >() // 0x47A140
{
    mangled_assert("??1?$sp_counted_base_impl@PAVSobIDShared@@U?$checked_deleter@VSobIDShared@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

SobID::SobID(SobID const &) // 0x47A031
{
    mangled_assert("??0SobID@@QAE@ABV0@@Z");
    todo("implement");
}

unsigned __int32 SobID::getID() const // 0x47AAF9
{
    mangled_assert("?getID@SobID@@QBEIXZ");
    todo("implement");
}

Sob *SobID::getSobPtr() const // 0x47AB2D
{
    mangled_assert("?getSobPtr@SobID@@QBEPAVSob@@XZ");
    todo("implement");
}

Ship *SobID::getShipPtr() const // 0x47AB04
{
    mangled_assert("?getShipPtr@SobID@@QBEPAVShip@@XZ");
    todo("implement");
}

SobWithMesh *SobID::getSobMeshPtr() const // 0x47AB1A
{
    mangled_assert("?getSobMeshPtr@SobID@@QBEPAVSobWithMesh@@XZ");
    todo("implement");
}

Sob *SobID::getAliveSobPtr() const // 0x47AAE4
{
    mangled_assert("?getAliveSobPtr@SobID@@QBEPAVSob@@XZ");
    todo("implement");
}

void SobID::AssignID(Sob *) // 0x47A304
{
    mangled_assert("?AssignID@SobID@@QAEXPAVSob@@@Z");
    todo("implement");
}

void SobID::explicitlySetID(unsigned __int32, Sob *) // 0x47AA32
{
    mangled_assert("?explicitlySetID@SobID@@QAEXIPAVSob@@@Z");
    todo("implement");
}

void SobID::CreateShared(unsigned __int32, Sob *) // 0x47A330
{
    mangled_assert("?CreateShared@SobID@@AAEXIPAVSob@@@Z");
    todo("implement");
}

void SobID::SetLoadID(unsigned __int32) // 0x47A3C4
{
    mangled_assert("?SetLoadID@SobID@@QAEXI@Z");
    todo("implement");
}

unsigned __int32 SobID::getNumberPartOfID() const // 0x47AAFD
{
    mangled_assert("?getNumberPartOfID@SobID@@QBEIXZ");
    todo("implement");
}

void SobID::IDSobDied() // 0x47A396
{
    mangled_assert("?IDSobDied@SobID@@QAEXXZ");
    todo("implement");
}

bool SobID::Initialize() // 0x47A3B3
{
    mangled_assert("?Initialize@SobID@@SG_NXZ");
    todo("implement");
}

bool SobID::Shutdown() // 0x47A412
{
    mangled_assert("?Shutdown@SobID@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
