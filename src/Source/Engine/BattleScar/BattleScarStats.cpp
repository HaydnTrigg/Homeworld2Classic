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

BattleScarStats::BattleScarStats() // 0x560F2F
{
    mangled_assert("??0BattleScarStats@@QAE@XZ");
    todo("implement");
}

_inline BattleScarStats::Data::Data() // 0x560F8A
{
    mangled_assert("??0Data@BattleScarStats@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<BattleScarManager::Type const * const,float>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >::~_Tree_buy<std::pair<BattleScarManager::Type const * const,float>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >() // 0x560FCD
{
    mangled_assert("??1?$_Tree_buy@U?$pair@QBVType@BattleScarManager@@M@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> >,0> >::~_Tree_comp<0,std::_Tmap_traits<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> >,0> >() // 0x560FD6
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@PBVType@BattleScarManager@@MU?$less@PBVType@BattleScarManager@@@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >::~map<BattleScarManager::Type const *,float,std::less<BattleScarManager::Type const *>,std::allocator<std::pair<BattleScarManager::Type const * const,float> > >() // 0x560FDF
{
    mangled_assert("??1?$map@PBVType@BattleScarManager@@MU?$less@PBVType@BattleScarManager@@@std@@V?$allocator@U?$pair@QBVType@BattleScarManager@@M@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

BattleScarStats::~BattleScarStats() // 0x560FEC
{
    mangled_assert("??1BattleScarStats@@QAE@XZ");
    todo("implement");
}

_inline BattleScarStats::Data::~Data() // 0x560FF4
{
    mangled_assert("??1Data@BattleScarStats@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void BattleScarStats::setup(float, __int32) // 0x561A0E
{
    mangled_assert("?setup@BattleScarStats@@QAEXMH@Z");
    todo("implement");
}

void BattleScarStats::reset() // 0x561882
{
    mangled_assert("?reset@BattleScarStats@@QAEXXZ");
    todo("implement");
}

void BattleScarStats::addScar(BattleScarManager::Handle &) // 0x561377
{
    mangled_assert("?addScar@BattleScarStats@@QAEXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarStats::rmvScar(BattleScarManager::Handle &) // 0x56190D
{
    mangled_assert("?rmvScar@BattleScarStats@@QAEXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarStats::modifyScar(float, __int32, float, __int32) // 0x5617EC
{
    mangled_assert("?modifyScar@BattleScarStats@@QAEXMHMH@Z");
    todo("implement");
}

float BattleScarStats::getDamage() const // 0x56173D
{
    mangled_assert("?getDamage@BattleScarStats@@QBEMXZ");
    todo("implement");
}

__int32 BattleScarStats::getTriCount() const // 0x56177F
{
    mangled_assert("?getTriCount@BattleScarStats@@QBEHXZ");
    todo("implement");
}

float BattleScarStats::getTriEquivDamage() const // 0x5617A2
{
    mangled_assert("?getTriEquivDamage@BattleScarStats@@QBEMXZ");
    todo("implement");
}

float BattleScarStats::getTriEquivDamage(__int32) const // 0x561785
{
    mangled_assert("?getTriEquivDamage@BattleScarStats@@QBEMH@Z");
    todo("implement");
}

bool BattleScarStats::getMinDamage(float &) const // 0x56176E
{
    mangled_assert("?getMinDamage@BattleScarStats@@QBE_NAAM@Z");
    todo("implement");
}

void BattleScarStats::findMinDamageBegin() // 0x561709
{
    mangled_assert("?findMinDamageBegin@BattleScarStats@@QAEXXZ");
    todo("implement");
}

void BattleScarStats::findMinDamageSample(float) // 0x561717
{
    mangled_assert("?findMinDamageSample@BattleScarStats@@QAEXM@Z");
    todo("implement");
}

void BattleScarStats::findMinDamageEnd() // 0x561716
{
    mangled_assert("?findMinDamageEnd@BattleScarStats@@QAEXXZ");
    todo("implement");
}

void BattleScarStats::recordScarTime(BattleScarManager::Type const *, float) // 0x561866
{
    mangled_assert("?recordScarTime@BattleScarStats@@QAEXPBVType@BattleScarManager@@M@Z");
    todo("implement");
}

float BattleScarStats::getLastScarTime(BattleScarManager::Type const *) const // 0x561743
{
    mangled_assert("?getLastScarTime@BattleScarStats@@QBEMPBVType@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarStats::save(SaveGameData *) const // 0x5619A9
{
    mangled_assert("?save@BattleScarStats@@QBEXPAVSaveGameData@@@Z");
    todo("implement");
}

void BattleScarStats::restore(SaveGameData *) // 0x56189E
{
    mangled_assert("?restore@BattleScarStats@@QAEXPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
