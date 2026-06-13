#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <savegame.h>
#include <fileio\bytestream.h>
#include <task.h>
#include <stack>
#include <debug\ctassert.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <savegamedata.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <BattleScar\BattleScarInternal.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <savestream.h>
#include <BattleScar\BattleScarStats.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > > ScarTimeMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_560F2F(BattleScarStats *const);
BattleScarStats::BattleScarStats() // 0x560F2F
{
    mangled_assert("??0BattleScarStats@@QAE@XZ");
    todo("implement");
    _sub_560F2F(this);
}

_extern _sub_560F8A(BattleScarStats::Data *const);
_inline BattleScarStats::Data::Data() // 0x560F8A
{
    mangled_assert("??0Data@BattleScarStats@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_560F8A(this);
}

_extern void _sub_560FCD(std::_Tree_buy<std::pair<BattleScarManager::Type const * const,float>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > > *const);
_inline std::_Tree_buy<std::pair<BattleScarManager::Type const * const,float>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >::~_Tree_buy<std::pair<BattleScarManager::Type const * const,float>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >() // 0x560FCD
{
    mangled_assert("??1?$_Tree_buy@U?$pair@QBVType@BattleScarManager@@M@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_560FCD(this);
}

_extern void _sub_560FD6(std::_Tree_comp<0,std::_Tmap_traits<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> >,0> >::~_Tree_comp<0,std::_Tmap_traits<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> >,0> >() // 0x560FD6
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@PBVType@BattleScarManager@@MU?$less@PBVType@BattleScarManager@@@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_560FD6(this);
}

_extern void _sub_560FDF(std::map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > > *const);
_inline std::map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >::~map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >() // 0x560FDF
{
    mangled_assert("??1?$map@PBVType@BattleScarManager@@MU?$less@PBVType@BattleScarManager@@@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_560FDF(this);
}

_extern void _sub_560FEC(BattleScarStats *const);
BattleScarStats::~BattleScarStats() // 0x560FEC
{
    mangled_assert("??1BattleScarStats@@QAE@XZ");
    todo("implement");
    _sub_560FEC(this);
}

_extern void _sub_560FF4(BattleScarStats::Data *const);
_inline BattleScarStats::Data::~Data() // 0x560FF4
{
    mangled_assert("??1Data@BattleScarStats@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_560FF4(this);
}

_extern void _sub_561A0E(BattleScarStats *const, float, __int32);
void BattleScarStats::setup(float, __int32) // 0x561A0E
{
    mangled_assert("?setup@BattleScarStats@@QAEXMH@Z");
    todo("implement");
    _sub_561A0E(this, arg, arg);
}

_extern void _sub_561882(BattleScarStats *const);
void BattleScarStats::reset() // 0x561882
{
    mangled_assert("?reset@BattleScarStats@@QAEXXZ");
    todo("implement");
    _sub_561882(this);
}

_extern void _sub_561377(BattleScarStats *const, BattleScarManager::Handle &);
void BattleScarStats::addScar(BattleScarManager::Handle &) // 0x561377
{
    mangled_assert("?addScar@BattleScarStats@@QAEXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
    _sub_561377(this, arg);
}

_extern void _sub_56190D(BattleScarStats *const, BattleScarManager::Handle &);
void BattleScarStats::rmvScar(BattleScarManager::Handle &) // 0x56190D
{
    mangled_assert("?rmvScar@BattleScarStats@@QAEXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
    _sub_56190D(this, arg);
}

_extern void _sub_5617EC(BattleScarStats *const, float, __int32, float, __int32);
void BattleScarStats::modifyScar(float, __int32, float, __int32) // 0x5617EC
{
    mangled_assert("?modifyScar@BattleScarStats@@QAEXMHMH@Z");
    todo("implement");
    _sub_5617EC(this, arg, arg, arg, arg);
}

_extern float _sub_56173D(BattleScarStats const *const);
float BattleScarStats::getDamage() const // 0x56173D
{
    mangled_assert("?getDamage@BattleScarStats@@QBEMXZ");
    todo("implement");
    float __result = _sub_56173D(this);
    return __result;
}

_extern __int32 _sub_56177F(BattleScarStats const *const);
__int32 BattleScarStats::getTriCount() const // 0x56177F
{
    mangled_assert("?getTriCount@BattleScarStats@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_56177F(this);
    return __result;
}

_extern float _sub_5617A2(BattleScarStats const *const);
float BattleScarStats::getTriEquivDamage() const // 0x5617A2
{
    mangled_assert("?getTriEquivDamage@BattleScarStats@@QBEMXZ");
    todo("implement");
    float __result = _sub_5617A2(this);
    return __result;
}

_extern float _sub_561785(BattleScarStats const *const, __int32);
float BattleScarStats::getTriEquivDamage(__int32) const // 0x561785
{
    mangled_assert("?getTriEquivDamage@BattleScarStats@@QBEMH@Z");
    todo("implement");
    float __result = _sub_561785(this, arg);
    return __result;
}

_extern bool _sub_56176E(BattleScarStats const *const, float &);
bool BattleScarStats::getMinDamage(float &) const // 0x56176E
{
    mangled_assert("?getMinDamage@BattleScarStats@@QBE_NAAM@Z");
    todo("implement");
    bool __result = _sub_56176E(this, arg);
    return __result;
}

_extern void _sub_561709(BattleScarStats *const);
void BattleScarStats::findMinDamageBegin() // 0x561709
{
    mangled_assert("?findMinDamageBegin@BattleScarStats@@QAEXXZ");
    todo("implement");
    _sub_561709(this);
}

_extern void _sub_561717(BattleScarStats *const, float);
void BattleScarStats::findMinDamageSample(float) // 0x561717
{
    mangled_assert("?findMinDamageSample@BattleScarStats@@QAEXM@Z");
    todo("implement");
    _sub_561717(this, arg);
}

_extern void _sub_561716(BattleScarStats *const);
void BattleScarStats::findMinDamageEnd() // 0x561716
{
    mangled_assert("?findMinDamageEnd@BattleScarStats@@QAEXXZ");
    todo("implement");
    _sub_561716(this);
}

_extern void _sub_561866(BattleScarStats *const, BattleScarManager::Type const *, float);
void BattleScarStats::recordScarTime(BattleScarManager::Type const *, float) // 0x561866
{
    mangled_assert("?recordScarTime@BattleScarStats@@QAEXPBVType@BattleScarManager@@M@Z");
    todo("implement");
    _sub_561866(this, arg, arg);
}

_extern float _sub_561743(BattleScarStats const *const, BattleScarManager::Type const *);
float BattleScarStats::getLastScarTime(BattleScarManager::Type const *) const // 0x561743
{
    mangled_assert("?getLastScarTime@BattleScarStats@@QBEMPBVType@BattleScarManager@@@Z");
    todo("implement");
    float __result = _sub_561743(this, arg);
    return __result;
}

_extern void _sub_5619A9(BattleScarStats const *const, SaveGameData *);
void BattleScarStats::save(SaveGameData *) const // 0x5619A9
{
    mangled_assert("?save@BattleScarStats@@QBEXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_5619A9(this, arg);
}

_extern void _sub_56189E(BattleScarStats *const, SaveGameData *);
void BattleScarStats::restore(SaveGameData *) // 0x56189E
{
    mangled_assert("?restore@BattleScarStats@@QAEXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_56189E(this, arg);
}

/* ---------- private code */
#endif
