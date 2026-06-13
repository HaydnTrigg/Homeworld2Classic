#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <SelTarg.h>
#include <new>
#include <prim.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <abilities.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <xutility>
#include <lua.h>
#include <Collision\BVH\profiling.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <Player.h>
#include <seInterface2\PatchBase.h>
#include <SquadronList.h>
#include <seInterface2\SoundParams.h>
#include <list>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\bvh.h>
#include <weaponinfo.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector2.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Race.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <boost\cstdint.hpp>
#include <App\Hw2Identify.h>
#include <stack>
#include <BuildManager.h>
#include <Mathlib\quat.h>
#include <playerresourcetype.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <SobWithMeshStatic.h>
#include <fixedpoint.h>
#include <ship.h>
#include <util\fixed.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPointManager.h>
#include <sob.h>
#include <Subsystems\HardPoint.h>
#include <savegameimpl.h>
#include <sobstatic.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <debug\db.h>
#include <ResearchManager.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\octree.h>
#include <selection.h>
#include <Collision\BVH\span.h>
#include <savegamedef.h>
#include <Collision\BVH\Internal\span_i.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\primitivesfwd.h>
#include <Interpolation.h>
#include <DependencyData.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > ReadString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &source, unsigned __int32 &nIndex);
extern Term *LoadTerm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &DependencyString, Term::TestType type);

/* ---------- globals */

extern char const Term::m_saveToken[0]; // 0x798530
extern bool DependencyData::s_dependenciesAlwaysTrue; // 0x8440E9
extern char const DependencyData::m_saveToken[15]; // 0x798480
extern SaveData const DependencyData::m_saveData[5]; // 0x798490
extern SaveData const Term::m_saveData[5]; // 0x798538

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4EC494(DependencyData *const);
DependencyData::DependencyData() // 0x4EC494
{
    mangled_assert("??0DependencyData@@QAE@XZ");
    todo("implement");
    _sub_4EC494(this);
}

_extern void _sub_4EC5FF(DependencyData *const);
DependencyData::~DependencyData() // 0x4EC5FF
{
    mangled_assert("??1DependencyData@@UAE@XZ");
    todo("implement");
    _sub_4EC5FF(this);
}

_extern bool _sub_4ECC5A(DependencyData const *const, Ship *);
bool DependencyData::allDependenciesMet(Ship *) const // 0x4ECC5A
{
    mangled_assert("?allDependenciesMet@DependencyData@@UBE_NPAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4ECC5A(this, arg);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_4ECA09(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, unsigned __int32 &);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > ReadString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &source, unsigned __int32 &nIndex) // 0x4ECA09
{
    mangled_assert("?ReadString@@YG?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV12@AAI@Z");
    todo("implement");
    std::string __result = _sub_4ECA09(source, nIndex);
    return __result;
}

_extern Term *_sub_4EC784(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Term::TestType);
Term *LoadTerm(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &DependencyString, Term::TestType type) // 0x4EC784
{
    mangled_assert("?LoadTerm@@YGPAVTerm@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4TestType@1@@Z");
    todo("implement");
    Term * __result = _sub_4EC784(DependencyString, type);
    return __result;
}

_extern void _sub_4ECAB7(DependencyData *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void DependencyData::SetDependencies(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4ECAB7
{
    mangled_assert("?SetDependencies@DependencyData@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z");
    todo("implement");
    _sub_4ECAB7(this, arg, arg, arg);
}

_extern _sub_4EC463(DependencyData *const, SaveGameData *);
DependencyData::DependencyData(SaveGameData *) // 0x4EC463
{
    mangled_assert("??0DependencyData@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4EC463(this, arg);
}

_extern void _sub_4ECD6B(DependencyData *const);
void DependencyData::defaultSettings() // 0x4ECD6B
{
    mangled_assert("?defaultSettings@DependencyData@@QAEXXZ");
    todo("implement");
    _sub_4ECD6B(this);
}

_extern void _sub_4ECEF5(DependencyData *const);
void DependencyData::postRestore() // 0x4ECEF5
{
    mangled_assert("?postRestore@DependencyData@@UAEXXZ");
    todo("implement");
    _sub_4ECEF5(this);
}

_extern bool _sub_4ECF38(DependencyData *const, SaveGameData *);
bool DependencyData::restore(SaveGameData *) // 0x4ECF38
{
    mangled_assert("?restore@DependencyData@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4ECF38(this, arg);
    return __result;
}

_extern bool _sub_4ECFB4(DependencyData *const, SaveGameData *, SaveType);
bool DependencyData::save(SaveGameData *, SaveType) // 0x4ECFB4
{
    mangled_assert("?save@DependencyData@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4ECFB4(this, arg, arg);
    return __result;
}

_extern _sub_4EC586(Term *const);
Term::Term() // 0x4EC586
{
    mangled_assert("??0Term@@QAE@XZ");
    todo("implement");
    _sub_4EC586(this);
}

_extern void _sub_4EC5E4(std::_List_buy<Term *,std::allocator<Term *> > *const);
_inline std::_List_buy<Term *,std::allocator<Term *> >::~_List_buy<Term *,std::allocator<Term *> >() // 0x4EC5E4
{
    mangled_assert("??1?$_List_buy@PAVTerm@@V?$allocator@PAVTerm@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EC5E4(this);
}

_extern _sub_4EC514(Term *const, Term::TestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
Term::Term(Term::TestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x4EC514
{
    mangled_assert("??0Term@@QAE@W4TestType@0@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_4EC514(this, arg, arg);
}

_extern void _sub_4EC66E(Term *const);
Term::~Term() // 0x4EC66E
{
    mangled_assert("??1Term@@UAE@XZ");
    todo("implement");
    _sub_4EC66E(this);
}

_extern bool _sub_4ECAF2(Term const *const, Player *, Ship *);
bool Term::Test(Player *, Ship *) const // 0x4ECAF2
{
    mangled_assert("?Test@Term@@QBE_NPAVPlayer@@PAVShip@@@Z");
    todo("implement");
    bool __result = _sub_4ECAF2(this, arg, arg);
    return __result;
}

_extern void _sub_4EC772(Term *const, Term *);
void Term::AddTerm(Term *) // 0x4EC772
{
    mangled_assert("?AddTerm@Term@@QAEXPAV1@@Z");
    todo("implement");
    _sub_4EC772(this, arg);
}

_extern void _sub_4EC759(Term *const, Term::JoinType);
void Term::AddJoin(Term::JoinType) // 0x4EC759
{
    mangled_assert("?AddJoin@Term@@QAEXW4JoinType@1@@Z");
    todo("implement");
    _sub_4EC759(this, arg);
}

_extern _sub_4EC4C3(Term *const, SaveGameData *);
Term::Term(SaveGameData *) // 0x4EC4C3
{
    mangled_assert("??0Term@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4EC4C3(this, arg);
}

_extern void _sub_4ECD7A(Term *const);
void Term::defaultSettings() // 0x4ECD7A
{
    mangled_assert("?defaultSettings@Term@@QAEXXZ");
    todo("implement");
    _sub_4ECD7A(this);
}

_extern void _sub_4ECEF6(Term *const);
void Term::postRestore() // 0x4ECEF6
{
    mangled_assert("?postRestore@Term@@UAEXXZ");
    todo("implement");
    _sub_4ECEF6(this);
}

_extern bool _sub_4ECF76(Term *const, SaveGameData *);
bool Term::restore(SaveGameData *) // 0x4ECF76
{
    mangled_assert("?restore@Term@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4ECF76(this, arg);
    return __result;
}

_extern bool _sub_4ECFE9(Term *const, SaveGameData *, SaveType);
bool Term::save(SaveGameData *, SaveType) // 0x4ECFE9
{
    mangled_assert("?save@Term@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4ECFE9(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
