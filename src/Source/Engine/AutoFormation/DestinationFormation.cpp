#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <exception>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobRigidBody.h>
#include <Engine\sobstatic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Collision\Primitives\obb.h>
#include <util\colour.h>
#include <Engine\ShieldTypes.h>
#include <boost\cstdint.hpp>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\commandtype.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\pch.h>
#include <Engine\AutoFormation\DestinationFormation.h>
#include <Mathlib\vector2.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <Engine\config.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\shipstatic.h>
#include <Engine\weaponstaticinfo.h>
#include <algorithm>
#include <Engine\GunBinding.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\CoordSysUtilities.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <wchar.h>
#include <Engine\FamilyListMgr.h>
#include <Engine\FamilyList.h>
#include <Engine\Family.h>

/* ---------- constants */

/* ---------- definitions */

struct DestinationFormation::Bucket
{
    __int32 familyID; // 0x0
    unsigned __int32 priority; // 0x4
    std::list<Squadron *,std::allocator<Squadron *> > m_squads; // 0x8
    Bucket(DestinationFormation::Bucket const &); /* compiler_generated() */
    _inline Bucket(); /* compiler_generated() */
    _inline ~Bucket(); /* compiler_generated() */
    DestinationFormation::Bucket &operator=(DestinationFormation::Bucket const &); /* compiler_generated() */
};
static_assert(sizeof(DestinationFormation::Bucket) == 16, "Invalid DestinationFormation::Bucket size");

struct DestinationFormation::Row
{
    std::list<Squadron *,std::allocator<Squadron *> > m_squads; // 0x0
    Row(DestinationFormation::Row const &); /* compiler_generated() */
    _inline Row(); /* compiler_generated() */
    _inline ~Row(); /* compiler_generated() */
    DestinationFormation::Row &operator=(DestinationFormation::Row const &); /* compiler_generated() */
};
static_assert(sizeof(DestinationFormation::Row) == 8, "Invalid DestinationFormation::Row size");

typedef boost::shared_ptr<DestinationFormation::Bucket> BucketPtr;
typedef std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > BucketContainer;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Bucket> > > > BucketContainerIterator;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Bucket> > > > BucketContainerConstIterator;
typedef boost::shared_ptr<DestinationFormation::Row> RowPtr;
typedef std::list<boost::shared_ptr<DestinationFormation::Row>,std::allocator<boost::shared_ptr<DestinationFormation::Row> > > RowContainer;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<boost::shared_ptr<DestinationFormation::Row> > > > RowContainerIterator;
typedef boost::shared_ptr<DestinationFormation::Wall> WallPtr;
typedef std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > WallContainer;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Wall> > > > WallContainerIterator;

struct DestinationFormation::Wall
{
    std::list<boost::shared_ptr<DestinationFormation::Row>,std::allocator<boost::shared_ptr<DestinationFormation::Row> > > m_rows; // 0x0
    float m_extentFront; // 0x8
    float m_extentBack; // 0xC
    float m_extentSide; // 0x10
    float m_extentUp; // 0x14
    float m_offset; // 0x18
    Wall(DestinationFormation::Wall const &); /* compiler_generated() */
    _inline Wall(); /* compiler_generated() */
    _inline ~Wall(); /* compiler_generated() */
    DestinationFormation::Wall &operator=(DestinationFormation::Wall const &); /* compiler_generated() */
};
static_assert(sizeof(DestinationFormation::Wall) == 28, "Invalid DestinationFormation::Wall size");

class DestinationFormation::SameFamilyBucketSearch
{
public:
    _inline SameFamilyBucketSearch(__int32 const);
    bool operator()(boost::shared_ptr<DestinationFormation::Bucket> const &);
private:
    __int32 const m_familyID; // 0x0
};
static_assert(sizeof(DestinationFormation::SameFamilyBucketSearch) == 4, "Invalid DestinationFormation::SameFamilyBucketSearch size");

/* ---------- prototypes */

extern void DestinationFormation::GenerateBuckets(SquadronList const &inSquads, std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > &buckets);
extern void DestinationFormation::GenerateWallsFromBucket(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Bucket> > > > bucket, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls);
extern void DestinationFormation::GenerateWalls(std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > const &buckets, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls);
extern void DestinationFormation::SpaceOutWalls(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls, DestinationFormation::Spacing spacing);
extern std::_List_iterator<std::_List_val<std::_List_simple_types<Squadron *> > > DestinationFormation::findClosestSquadron(std::list<Squadron *,std::allocator<Squadron *> > &squads, vector3 const &worldspace, vector3 const &sidevector);
extern void DestinationFormation::GenerateWallPositions(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Wall> > > > wall, vector3 const &position, matrix3 const &rotmat, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions);
extern void DestinationFormation::GenerateFinalPositions(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls, vector3 const &position, vector3 const &forward, vector3 const &up, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions);
extern void DestinationFormation::Generate(SquadronList const &inSquads, vector3 const &position, vector3 const &forward, vector3 const &up, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions, DestinationFormation::Spacing spacing);

_static bool DestinationFormation::bucketOrderFunc(boost::shared_ptr<DestinationFormation::Bucket> const &x, boost::shared_ptr<DestinationFormation::Bucket> const &y);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6B7456(boost::shared_ptr<DestinationFormation::Bucket> *const, boost::shared_ptr<DestinationFormation::Bucket> const &);
_inline boost::shared_ptr<DestinationFormation::Bucket>::shared_ptr<DestinationFormation::Bucket>(boost::shared_ptr<DestinationFormation::Bucket> const &) // 0x6B7456
{
    mangled_assert("??0?$shared_ptr@UBucket@DestinationFormation@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6B7456(this, arg);
}

_extern _sub_6B7476(boost::shared_ptr<DestinationFormation::Row> *const, boost::shared_ptr<DestinationFormation::Row> const &);
_inline boost::shared_ptr<DestinationFormation::Row>::shared_ptr<DestinationFormation::Row>(boost::shared_ptr<DestinationFormation::Row> const &) // 0x6B7476
{
    mangled_assert("??0?$shared_ptr@URow@DestinationFormation@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6B7476(this, arg);
}

_extern _sub_6B7496(boost::shared_ptr<DestinationFormation::Wall> *const, boost::shared_ptr<DestinationFormation::Wall> const &);
_inline boost::shared_ptr<DestinationFormation::Wall>::shared_ptr<DestinationFormation::Wall>(boost::shared_ptr<DestinationFormation::Wall> const &) // 0x6B7496
{
    mangled_assert("??0?$shared_ptr@UWall@DestinationFormation@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6B7496(this, arg);
}

_extern _sub_6B752D(DestinationFormation::Bucket *const);
_inline DestinationFormation::Bucket::Bucket() // 0x6B752D
{
    mangled_assert("??0Bucket@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B752D(this);
}

_extern _sub_6B754B(DestinationFormation::Row *const);
_inline DestinationFormation::Row::Row() // 0x6B754B
{
    mangled_assert("??0Row@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B754B(this);
}

_extern _sub_6B7562(DestinationFormation::SameFamilyBucketSearch *const, __int32 const);
_inline DestinationFormation::SameFamilyBucketSearch::SameFamilyBucketSearch(__int32 const) // 0x6B7562
{
    mangled_assert("??0SameFamilyBucketSearch@DestinationFormation@@QAE@H@Z");
    todo("implement");
    _sub_6B7562(this, arg);
}

_extern _sub_6B756D(DestinationFormation::SquadronPosition *const);
_inline DestinationFormation::SquadronPosition::SquadronPosition() // 0x6B756D
{
    mangled_assert("??0SquadronPosition@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B756D(this);
}

_extern _sub_6B7570(DestinationFormation::Wall *const);
_inline DestinationFormation::Wall::Wall() // 0x6B7570
{
    mangled_assert("??0Wall@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B7570(this);
}

_extern void _sub_6B7590(std::_List_buy<boost::shared_ptr<DestinationFormation::Row>,std::allocator<boost::shared_ptr<DestinationFormation::Row> > > *const);
_inline std::_List_buy<boost::shared_ptr<DestinationFormation::Row>,std::allocator<boost::shared_ptr<DestinationFormation::Row> > >::~_List_buy<boost::shared_ptr<DestinationFormation::Row>,std::allocator<boost::shared_ptr<DestinationFormation::Row> > >() // 0x6B7590
{
    mangled_assert("??1?$_List_buy@V?$shared_ptr@URow@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@URow@DestinationFormation@@@boost@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B7590(this);
}

_extern bool _sub_6B772E(DestinationFormation::SameFamilyBucketSearch *const, boost::shared_ptr<DestinationFormation::Bucket> const &);
_inline bool DestinationFormation::SameFamilyBucketSearch::operator()(boost::shared_ptr<DestinationFormation::Bucket> const &) // 0x6B772E
{
    mangled_assert("??RSameFamilyBucketSearch@DestinationFormation@@QAE_NABV?$shared_ptr@UBucket@DestinationFormation@@@boost@@@Z");
    todo("implement");
    bool __result = _sub_6B772E(this, arg);
    return __result;
}

_extern void _sub_6B75AB(boost::shared_ptr<DestinationFormation::Bucket> *const);
_inline boost::shared_ptr<DestinationFormation::Bucket>::~shared_ptr<DestinationFormation::Bucket>() // 0x6B75AB
{
    mangled_assert("??1?$shared_ptr@UBucket@DestinationFormation@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75AB(this);
}

_extern void _sub_6B75B7(boost::shared_ptr<DestinationFormation::Row> *const);
_inline boost::shared_ptr<DestinationFormation::Row>::~shared_ptr<DestinationFormation::Row>() // 0x6B75B7
{
    mangled_assert("??1?$shared_ptr@URow@DestinationFormation@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75B7(this);
}

_extern void _sub_6B75C3(boost::shared_ptr<DestinationFormation::Wall> *const);
_inline boost::shared_ptr<DestinationFormation::Wall>::~shared_ptr<DestinationFormation::Wall>() // 0x6B75C3
{
    mangled_assert("??1?$shared_ptr@UWall@DestinationFormation@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75C3(this);
}

_extern void _sub_6B75CF(boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> > *const);
_inline boost::detail::sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >::~sp_counted_base_impl<DestinationFormation::Bucket *,boost::checked_deleter<DestinationFormation::Bucket> >() // 0x6B75CF
{
    mangled_assert("??1?$sp_counted_base_impl@PAUBucket@DestinationFormation@@U?$checked_deleter@UBucket@DestinationFormation@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75CF(this);
}

_extern void _sub_6B75D6(boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> > *const);
_inline boost::detail::sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >::~sp_counted_base_impl<DestinationFormation::Row *,boost::checked_deleter<DestinationFormation::Row> >() // 0x6B75D6
{
    mangled_assert("??1?$sp_counted_base_impl@PAURow@DestinationFormation@@U?$checked_deleter@URow@DestinationFormation@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75D6(this);
}

_extern void _sub_6B75DD(boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> > *const);
_inline boost::detail::sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >::~sp_counted_base_impl<DestinationFormation::Wall *,boost::checked_deleter<DestinationFormation::Wall> >() // 0x6B75DD
{
    mangled_assert("??1?$sp_counted_base_impl@PAUWall@DestinationFormation@@U?$checked_deleter@UWall@DestinationFormation@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75DD(this);
}

_extern void _sub_6B75EE(DestinationFormation::Bucket *const);
_inline DestinationFormation::Bucket::~Bucket() // 0x6B75EE
{
    mangled_assert("??1Bucket@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B75EE(this);
}

_extern void _sub_6B7603(DestinationFormation::Row *const);
_inline DestinationFormation::Row::~Row() // 0x6B7603
{
    mangled_assert("??1Row@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B7603(this);
}

_extern void _sub_6B7615(DestinationFormation::Wall *const);
_inline DestinationFormation::Wall::~Wall() // 0x6B7615
{
    mangled_assert("??1Wall@DestinationFormation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6B7615(this);
}

_extern boost::shared_ptr<DestinationFormation::Bucket> &_sub_6B7627(boost::shared_ptr<DestinationFormation::Bucket> *const, boost::shared_ptr<DestinationFormation::Bucket> const &);
_inline boost::shared_ptr<DestinationFormation::Bucket> &boost::shared_ptr<DestinationFormation::Bucket>::operator=(boost::shared_ptr<DestinationFormation::Bucket> const &) // 0x6B7627
{
    mangled_assert("??4?$shared_ptr@UBucket@DestinationFormation@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<DestinationFormation::Bucket> & __result = _sub_6B7627(this, arg);
    return __result;
}

_extern void _sub_6B7911(SquadronList const &, std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > &);
void DestinationFormation::GenerateBuckets(SquadronList const &inSquads, std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > &buckets) // 0x6B7911
{
    mangled_assert("?GenerateBuckets@DestinationFormation@@YGXABVSquadronList@@AAV?$vector@V?$shared_ptr@UBucket@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UBucket@DestinationFormation@@@boost@@@std@@@std@@@Z");
    todo("implement");
    _sub_6B7911(inSquads, buckets);
}

_extern void _sub_6B7DB2(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Bucket> > > >, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &);
void DestinationFormation::GenerateWallsFromBucket(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Bucket> > > > bucket, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls) // 0x6B7DB2
{
    mangled_assert("?GenerateWallsFromBucket@DestinationFormation@@YGXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UBucket@DestinationFormation@@@boost@@@std@@@std@@@std@@AAV?$vector@V?$shared_ptr@UWall@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UWall@DestinationFormation@@@boost@@@std@@@3@@Z");
    todo("implement");
    _sub_6B7DB2(bucket, walls);
}

_extern void _sub_6B7D7D(std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > const &, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &);
void DestinationFormation::GenerateWalls(std::vector<boost::shared_ptr<DestinationFormation::Bucket>,std::allocator<boost::shared_ptr<DestinationFormation::Bucket> > > const &buckets, std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls) // 0x6B7D7D
{
    mangled_assert("?GenerateWalls@DestinationFormation@@YGXABV?$vector@V?$shared_ptr@UBucket@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UBucket@DestinationFormation@@@boost@@@std@@@std@@AAV?$vector@V?$shared_ptr@UWall@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UWall@DestinationFormation@@@boost@@@std@@@3@@Z");
    todo("implement");
    _sub_6B7D7D(buckets, walls);
}

_extern void _sub_6B81CE(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &, DestinationFormation::Spacing);
void DestinationFormation::SpaceOutWalls(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls, DestinationFormation::Spacing spacing) // 0x6B81CE
{
    mangled_assert("?SpaceOutWalls@DestinationFormation@@YGXAAV?$vector@V?$shared_ptr@UWall@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UWall@DestinationFormation@@@boost@@@std@@@std@@W4Spacing@1@@Z");
    todo("implement");
    _sub_6B81CE(walls, spacing);
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<Squadron *> > > _sub_6B8A2A(std::list<Squadron *,std::allocator<Squadron *> > &, vector3 const &, vector3 const &);
std::_List_iterator<std::_List_val<std::_List_simple_types<Squadron *> > > DestinationFormation::findClosestSquadron(std::list<Squadron *,std::allocator<Squadron *> > &squads, vector3 const &worldspace, vector3 const &sidevector) // 0x6B8A2A
{
    mangled_assert("?findClosestSquadron@DestinationFormation@@YG?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVSquadron@@@std@@@std@@@std@@AAV?$list@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@3@ABVvector3@@1@Z");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<Squadron *> > > __result = _sub_6B8A2A(squads, worldspace, sidevector);
    return __result;
}

_extern void _sub_6B7AA2(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Wall> > > >, vector3 const &, matrix3 const &, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &);
void DestinationFormation::GenerateWallPositions(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<boost::shared_ptr<DestinationFormation::Wall> > > > wall, vector3 const &position, matrix3 const &rotmat, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions) // 0x6B7AA2
{
    mangled_assert("?GenerateWallPositions@DestinationFormation@@YGXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UWall@DestinationFormation@@@boost@@@std@@@std@@@std@@ABVvector3@@ABVmatrix3@@AAV?$vector@USquadronPosition@DestinationFormation@@V?$allocator@USquadronPosition@DestinationFormation@@@std@@@3@@Z");
    todo("implement");
    _sub_6B7AA2(wall, position, rotmat, outPositions);
}

_extern void _sub_6B7A64(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &, vector3 const &, vector3 const &, vector3 const &, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &);
void DestinationFormation::GenerateFinalPositions(std::vector<boost::shared_ptr<DestinationFormation::Wall>,std::allocator<boost::shared_ptr<DestinationFormation::Wall> > > &walls, vector3 const &position, vector3 const &forward, vector3 const &up, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions) // 0x6B7A64
{
    mangled_assert("?GenerateFinalPositions@DestinationFormation@@YGXAAV?$vector@V?$shared_ptr@UWall@DestinationFormation@@@boost@@V?$allocator@V?$shared_ptr@UWall@DestinationFormation@@@boost@@@std@@@std@@ABVvector3@@11AAV?$vector@USquadronPosition@DestinationFormation@@V?$allocator@USquadronPosition@DestinationFormation@@@std@@@3@@Z");
    todo("implement");
    _sub_6B7A64(walls, position, forward, up, outPositions);
}

_extern void _sub_6B7864(SquadronList const &, vector3 const &, vector3 const &, vector3 const &, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &, DestinationFormation::Spacing);
void DestinationFormation::Generate(SquadronList const &inSquads, vector3 const &position, vector3 const &forward, vector3 const &up, std::vector<DestinationFormation::SquadronPosition,std::allocator<DestinationFormation::SquadronPosition> > &outPositions, DestinationFormation::Spacing spacing) // 0x6B7864
{
    mangled_assert("?Generate@DestinationFormation@@YGXABVSquadronList@@ABVvector3@@11AAV?$vector@USquadronPosition@DestinationFormation@@V?$allocator@USquadronPosition@DestinationFormation@@@std@@@std@@W4Spacing@1@@Z");
    todo("implement");
    _sub_6B7864(inSquads, position, forward, up, outPositions, spacing);
}

/* ---------- private code */

_extern bool _sub_6B886B(boost::shared_ptr<DestinationFormation::Bucket> const &, boost::shared_ptr<DestinationFormation::Bucket> const &);
_static bool DestinationFormation::bucketOrderFunc(boost::shared_ptr<DestinationFormation::Bucket> const &x, boost::shared_ptr<DestinationFormation::Bucket> const &y) // 0x6B886B
{
    mangled_assert("DestinationFormation::bucketOrderFunc");
    todo("implement");
    bool __result = _sub_6B886B(x, y);
    return __result;
}
#endif
