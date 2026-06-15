#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Interpolation.h>
#include <Tactics.h>
#include <Collision\Primitives\aabb.h>
#include <abilities.h>
#include <WeaponFixed.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <Mathlib\matrix3.h>
#include <sob.h>
#include <sobid.h>
#include <WeaponGimble.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <fileio\filepath.h>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SelTarg.h>
#include <prim.h>
#include <math.h>
#include <Subsystems\Subsystem.h>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Subsystems\SubsystemStatic.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <weaponfiretypes.h>
#include <Mathlib\vector3.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Interface.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Modifiers\ModifierApplier.h>
#include <scripting.h>
#include <Mathlib\vector2.h>
#include <sctObjectLoad.h>
#include <scriptaccess.h>
#include <util\types.h>
#include <scripttypedef.h>
#include <lua.h>
#include <boost\cstdint.hpp>
#include <config.h>
#include <weaponstaticinfo.h>
#include <seInterface2\PatchID.h>
#include <GunBinding.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <weaponTargetInfo.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <MissileStatic.h>
#include <Mathlib\quat.h>
#include <WeaponAnimatedTurret.h>
#include <SoundManager\SoundEntityHandle.h>
#include <assist\typemagic.h>
#include <WeaponClassSpecificInfo.h>
#include <weaponinfo.h>
#include <Collision\Collision.h>
#include <playerresourcetype.h>
#include <debug\db.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SobWithMeshStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <ship.h>
#include <savegamedef.h>
#include <SobWithMesh.h>
#include <boost\detail\shared_count.hpp>
#include <SobRigidBody.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobRigidBodyStatic.h>
#include <SobZeroMassBody.h>
#include <ShieldTypes.h>
#include <Modifiers\ModifierAbility.h>
#include <sobzeromassbodystatic.h>
#include <MeshAnimation.h>
#include <platform\sysutilinterface.h>
#include <shipstatic.h>
#include <platform\platformexports.h>
#include <luaconfig\luaconfig.h>
#include <commandtype.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <WeaponStatic.h>
#include <Subsystems\HardPointStatic.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\SubSystemType.h>
#include <string>
#include <Collision\Primitives\sphere.h>
#include <Collision\BVH\span.h>
#include <FamilyListMgr.h>
#include <Collision\BVH\Internal\span_i.h>
#include <FamilyList.h>
#include <Collision\BVH\proxy.h>
#include <Family.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <luaconfig\luautils.h>

/* ---------- constants */

enum WeoponIndex
{
    WI_None = 0,
    WI_Normal,
    WI_Enhanced,
    WI_Bypass,
    WI_COUNT,
};

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 convertStringIntoShieldIndex(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);

/* ---------- globals */

extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > > WeaponStatic::m_weaponStatics; // 0x843E10

/* ---------- private variables */

_static
{
    extern float s_pentrationDefaultValuesMap[4]; // 0x835468
}

/* ---------- public code */

WeaponStatic::WeaponStatic() // 0x4A368B
{
    mangled_assert("??0WeaponStatic@@QAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > >() // 0x4A3898
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> >,0> >() // 0x4A38A1
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *> > >() // 0x4A38AA
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,WeaponStatic *>() // 0x4A38AF
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,WeaponStatic *>() // 0x4A38B4
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWeaponStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline WeaponResult::~WeaponResult() // 0x4A38BE
{
    mangled_assert("??1WeaponResult@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

WeaponStatic::~WeaponStatic() // 0x4A38C6
{
    mangled_assert("??1WeaponStatic@@QAE@XZ");
    todo("implement");
}

void WeaponStatic::Clear() // 0x4A3B9D
{
    mangled_assert("?Clear@WeaponStatic@@SGXXZ");
    todo("implement");
}

Weapon *WeaponStatic::CreateAndBindWeapon(Sob *, __int32) // 0x4A3D10
{
    mangled_assert("?CreateAndBindWeapon@WeaponStatic@@QAEPAVWeapon@@PAVSob@@H@Z");
    todo("implement");
}

WeaponStatic *WeaponStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, WeaponStatic *wst, bool forceReload) // 0x4A3BE4
{
    mangled_assert("?Create@WeaponStatic@@SGPAV1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV1@_N@Z");
    todo("implement");
}

void WeaponStatic::staticLoadChangedStatics() // 0x4A47D5
{
    mangled_assert("?staticLoadChangedStatics@WeaponStatic@@SGXXZ");
    todo("implement");
}

unsigned __int32 convertStringIntoShieldIndex(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4A410E
{
    mangled_assert("?convertStringIntoShieldIndex@@YGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void WeaponStatic::initialiseShieldPenetration(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4A461D
{
    mangled_assert("?initialiseShieldPenetration@WeaponStatic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool WeaponStatic::scriptInit() // 0x4A4676
{
    mangled_assert("?scriptInit@WeaponStatic@@SG_NXZ");
    todo("implement");
}

float WeaponStatic::calculatePentrationVs(unsigned __int32) const // 0x4A40DD
{
    mangled_assert("?calculatePentrationVs@WeaponStatic@@QBEMI@Z");
    todo("implement");
}

float WeaponStatic::getPerSecondDamageRating() const // 0x4A4483
{
    mangled_assert("?getPerSecondDamageRating@WeaponStatic@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */
#endif
