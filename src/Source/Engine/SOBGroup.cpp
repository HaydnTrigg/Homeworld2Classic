#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <platform\timer.h>
#include <xstring>
#include <platform\platformexports.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\matrix3.h>
#include <seInterface2\PatchID.h>
#include <Race.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <new>
#include <exception>
#include <fixedpoint.h>
#include <xstddef>
#include <util\fixed.h>
#include <type_traits>
#include <BuildManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xmemory>
#include <MultiplierTypes.h>
#include <Universe.h>
#include <Collision\BVH\bvh.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <list>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Parade.h>
#include <Mathlib\vector4.h>
#include <hash_map>
#include <xhash>
#include <HyperspaceManager.h>
#include <weaponinfo.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <playerresourcetype.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\vector2.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <util\types.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <boost\cstdint.hpp>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\quat.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <ParadeCommand.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <deque>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <abilities.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SOBGroupManager.h>
#include <SOBGroup.h>
#include <SquadronList.h>
#include <wchar.h>
#include <queue>
#include <SelTarg.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const SOBGroup::m_saveData[4]; // 0x7AFDC8
extern char const SOBGroup::m_saveToken[9]; // 0x7AFE48

/* ---------- private variables */

/* ---------- public code */

_extern _sub_639046(SOBGroup *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
SOBGroup::SOBGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x639046
{
    mangled_assert("??0SOBGroup@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_639046(this, arg);
}

_extern _sub_63909F(SOBGroup *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SquadronList &, unsigned __int32);
SOBGroup::SOBGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SquadronList &, unsigned __int32) // 0x63909F
{
    mangled_assert("??0SOBGroup@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVSquadronList@@I@Z");
    todo("implement");
    _sub_63909F(this, arg, arg, arg);
}

_extern _sub_6390F9(SOBGroup *const, SaveGameData *);
SOBGroup::SOBGroup(SaveGameData *) // 0x6390F9
{
    mangled_assert("??0SOBGroup@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6390F9(this, arg);
}

_extern void _sub_639155(SOBGroup *const);
SOBGroup::~SOBGroup() // 0x639155
{
    mangled_assert("??1SOBGroup@@EAE@XZ");
    todo("implement");
    _sub_639155(this);
}

_extern Squadron *_sub_6391C9(char const *);
Squadron *SOBGroup::FindSquadronByName(char const *squadronName) // 0x6391C9
{
    mangled_assert("?FindSquadronByName@SOBGroup@@SGPAVSquadron@@PBD@Z");
    todo("implement");
    Squadron * __result = _sub_6391C9(squadronName);
    return __result;
}

_extern void _sub_63922D(SOBGroup *const, char const *);
void SOBGroup::addSquadronToSOBGroup(char const *) // 0x63922D
{
    mangled_assert("?addSquadronToSOBGroup@SOBGroup@@QAEXPBD@Z");
    todo("implement");
    _sub_63922D(this, arg);
}

_extern void _sub_63921B(SOBGroup *const, Squadron *);
void SOBGroup::addSquadronToSOBGroup(Squadron *) // 0x63921B
{
    mangled_assert("?addSquadronToSOBGroup@SOBGroup@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_63921B(this, arg);
}

_extern Squadron *_sub_6393BD(SOBGroup *const, __int32);
Squadron *SOBGroup::getSquadronFromSOBGroup(__int32) // 0x6393BD
{
    mangled_assert("?getSquadronFromSOBGroup@SOBGroup@@QAEPAVSquadron@@H@Z");
    todo("implement");
    Squadron * __result = _sub_6393BD(this, arg);
    return __result;
}

_extern __int32 _sub_6392EB(SOBGroup const *const);
__int32 SOBGroup::getPlayerIndex() const // 0x6392EB
{
    mangled_assert("?getPlayerIndex@SOBGroup@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_6392EB(this);
    return __result;
}

_extern void _sub_63941F(SOBGroup *const, char const *);
void SOBGroup::removeSquadronFromSOBGroup(char const *) // 0x63941F
{
    mangled_assert("?removeSquadronFromSOBGroup@SOBGroup@@QAEXPBD@Z");
    todo("implement");
    _sub_63941F(this, arg);
}

_extern void _sub_639458(SOBGroup *const, Squadron *);
void SOBGroup::removeSwitchOwnerSquadron(Squadron *) // 0x639458
{
    mangled_assert("?removeSwitchOwnerSquadron@SOBGroup@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_639458(this, arg);
}

_extern vector3 const _sub_639315(SOBGroup const *const);
vector3 const SOBGroup::getPosition() const // 0x639315
{
    mangled_assert("?getPosition@SOBGroup@@QBE?BVvector3@@XZ");
    todo("implement");
    vector3 const __result = _sub_639315(this);
    return __result;
}

_extern void _sub_6392AA(SOBGroup const *const, matrix3 &);
void SOBGroup::getOrientation(matrix3 &) const // 0x6392AA
{
    mangled_assert("?getOrientation@SOBGroup@@QBEXAAVmatrix3@@@Z");
    todo("implement");
    _sub_6392AA(this, arg);
}

_extern void _sub_6393F4(SOBGroup *const, SOBGroup *);
void SOBGroup::push_back_no_find(SOBGroup *) // 0x6393F4
{
    mangled_assert("?push_back_no_find@SOBGroup@@QAEXPAV1@@Z");
    todo("implement");
    _sub_6393F4(this, arg);
}

_extern void _sub_6393C9(SOBGroup *const, SOBGroup *);
void SOBGroup::push_back(SOBGroup *) // 0x6393C9
{
    mangled_assert("?push_back@SOBGroup@@QAEXPAV1@@Z");
    todo("implement");
    _sub_6393C9(this, arg);
}

_extern bool _sub_63927B(SOBGroup *const, Squadron *);
bool SOBGroup::findSquadron(Squadron *) // 0x63927B
{
    mangled_assert("?findSquadron@SOBGroup@@QAE_NPAVSquadron@@@Z");
    todo("implement");
    bool __result = _sub_63927B(this, arg);
    return __result;
}

_extern void _sub_6393C8(SOBGroup *const);
void SOBGroup::postRestore() // 0x6393C8
{
    mangled_assert("?postRestore@SOBGroup@@UAEXXZ");
    todo("implement");
    _sub_6393C8(this);
}

_extern bool _sub_639490(SOBGroup *const, SaveGameData *);
bool SOBGroup::restore(SaveGameData *) // 0x639490
{
    mangled_assert("?restore@SOBGroup@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_639490(this, arg);
    return __result;
}

_extern bool _sub_6394CE(SOBGroup *const, SaveGameData *, SaveType);
bool SOBGroup::save(SaveGameData *, SaveType) // 0x6394CE
{
    mangled_assert("?save@SOBGroup@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6394CE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
