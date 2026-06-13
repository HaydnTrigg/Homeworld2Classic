#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\blobber\blobber.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\AutoFormation\GroupifySquadrons.h>
#include <Engine\SquadronList.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>

/* ---------- constants */

/* ---------- definitions */

struct GroupifySquadrons::SquadGetFunc
{
    void operator()(Squadron *, vector3 &, float &);
};
static_assert(sizeof(GroupifySquadrons::SquadGetFunc) == 1, "Invalid GroupifySquadrons::SquadGetFunc size");

/* ---------- prototypes */

extern void GroupifySquadrons::GenerateGroups(vector3 const &origin, SquadronList const &squadlist, std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &outGroups);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const SquadronRadiusMultiplier; // 0x7BA208
}

/* ---------- public code */

_extern void _sub_6BA00B(GroupifySquadrons::SquadGetFunc *const, Squadron *, vector3 &, float &);
_inline void GroupifySquadrons::SquadGetFunc::operator()(Squadron *, vector3 &, float &) // 0x6BA00B
{
    mangled_assert("??RSquadGetFunc@GroupifySquadrons@@QAEXPAVSquadron@@AAVvector3@@AAM@Z");
    todo("implement");
    _sub_6BA00B(this, arg, arg, arg);
}

_extern _sub_6B9C00(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const, BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &);
_inline BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > const &) // 0x6B9C00
{
    mangled_assert("??0?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_6B9C00(this, arg);
}

_extern _sub_6B9C12(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >() // 0x6B9C12
{
    mangled_assert("??0?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B9C12(this);
}

_extern void _sub_6B9E6A(BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > *const);
_inline BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >::~BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >() // 0x6B9E6A
{
    mangled_assert("??1?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B9E6A(this);
}

_extern void _sub_6B9E6F(Blobber<Squadron,GroupifySquadrons::SquadGetFunc> *const);
_inline Blobber<Squadron,GroupifySquadrons::SquadGetFunc>::~Blobber<Squadron,GroupifySquadrons::SquadGetFunc>() // 0x6B9E6F
{
    mangled_assert("??1?$Blobber@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B9E6F(this);
}

_extern void _sub_6B9E93(std::_List_buy<Blob<Squadron,GroupifySquadrons::SquadGetFunc>,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > *const);
_inline std::_List_buy<Blob<Squadron,GroupifySquadrons::SquadGetFunc>,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > >::~_List_buy<Blob<Squadron,GroupifySquadrons::SquadGetFunc>,std::allocator<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > >() // 0x6B9E93
{
    mangled_assert("??1?$_List_buy@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@V?$allocator@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B9E93(this);
}

_extern void _sub_6B9E9C(std::_List_buy<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >,std::allocator<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > > *const);
_inline std::_List_buy<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >,std::allocator<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > >::~_List_buy<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> >,std::allocator<BlobGroup<Blob<Squadron,GroupifySquadrons::SquadGetFunc> > > >() // 0x6B9E9C
{
    mangled_assert("??1?$_List_buy@V?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@V?$allocator@V?$BlobGroup@V?$Blob@VSquadron@@USquadGetFunc@GroupifySquadrons@@@@@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B9E9C(this);
}

_extern void _sub_6BA301(vector3 const &, SquadronList const &, std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &);
void GroupifySquadrons::GenerateGroups(vector3 const &origin, SquadronList const &squadlist, std::vector<std::vector<Squadron *,std::allocator<Squadron *> >,std::allocator<std::vector<Squadron *,std::allocator<Squadron *> > > > &outGroups) // 0x6BA301
{
    mangled_assert("?GenerateGroups@GroupifySquadrons@@YGXABVvector3@@ABVSquadronList@@AAV?$vector@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@V?$allocator@V?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6BA301(origin, squadlist, outGroups);
}

/* ---------- private code */
#endif
