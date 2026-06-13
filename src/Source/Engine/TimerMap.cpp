#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <Collision\BVH\octree.h>
#include <SobUnmoveable.h>
#include <Collision\BVH\span.h>
#include <sob.h>
#include <Collision\BVH\Internal\span_i.h>
#include <sobstatic.h>
#include <Collision\BVH\proxy.h>
#include <Collision\Primitives\sphere.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <Interpolation.h>
#include <type_traits>
#include <Collision\Primitives\aabb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <sobid.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <list>
#include <Mathlib\vector3.h>
#include <SelTarg.h>
#include <map>
#include <prim.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\capsule.h>
#include <util\types.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <boost\cstdint.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <Mathlib\quat.h>
#include <xhash>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <seInterface2\PatchID.h>
#include <MultiplierTypes.h>
#include <seInterface2\PatchBase.h>
#include <Collision\BVH\bvh.h>
#include <seInterface2\SoundParams.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <savestream.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <TimerMap.h>
#include <platform\timer.h>
#include <wchar.h>
#include <platform\platformexports.h>
#include <fixedpoint.h>
#include <util\fixed.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > timerMapI;

/* ---------- prototypes */

/* ---------- globals */

extern TimerMap *TimerMap::ms_instance; // 0x84AFD4
extern char const TimerMap::m_saveToken[9]; // 0x7B0E60
extern SaveData const TimerMap::m_saveData[4]; // 0x7B0E70

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6480C3(TimerMap *const);
TimerMap::TimerMap() // 0x6480C3
{
    mangled_assert("??0TimerMap@@AAE@XZ");
    todo("implement");
    _sub_6480C3(this);
}

_extern void _sub_648144(TimerMap *const);
_inline TimerMap::~TimerMap() // 0x648144
{
    mangled_assert("??1TimerMap@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_648144(this);
}

_extern TimerMap &_sub_648220();
TimerMap &TimerMap::Instance() // 0x648220
{
    mangled_assert("?Instance@TimerMap@@SGAAV1@XZ");
    todo("implement");
    TimerMap & __result = _sub_648220();
    return __result;
}

_extern bool _sub_648226();
bool TimerMap::IsInitialized() // 0x648226
{
    mangled_assert("?IsInitialized@TimerMap@@SG_NXZ");
    todo("implement");
    bool __result = _sub_648226();
    return __result;
}

_extern bool _sub_6481E4();
bool TimerMap::Initialize() // 0x6481E4
{
    mangled_assert("?Initialize@TimerMap@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6481E4();
    return __result;
}

_extern bool _sub_648293();
bool TimerMap::Shutdown() // 0x648293
{
    mangled_assert("?Shutdown@TimerMap@@SG_NXZ");
    todo("implement");
    bool __result = _sub_648293();
    return __result;
}

_extern void _sub_648232(TimerMap *const, bool);
void TimerMap::Pause(bool) // 0x648232
{
    mangled_assert("?Pause@TimerMap@@QAEX_N@Z");
    todo("implement");
    _sub_648232(this, arg);
}

_extern unsigned __int32 _sub_6482AD(TimerMap *const, float);
unsigned __int32 TimerMap::StartTimer(float) // 0x6482AD
{
    mangled_assert("?StartTimer@TimerMap@@QAEIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6482AD(this, arg);
    return __result;
}

_extern void _sub_6482E6(TimerMap *const);
void TimerMap::Update() // 0x6482E6
{
    mangled_assert("?Update@TimerMap@@QAEXXZ");
    todo("implement");
    _sub_6482E6(this);
}

_extern float _sub_64819F(TimerMap *const, unsigned __int32);
float TimerMap::GetRemainingTime(unsigned __int32) // 0x64819F
{
    mangled_assert("?GetRemainingTime@TimerMap@@QAEMI@Z");
    todo("implement");
    float __result = _sub_64819F(this, arg);
    return __result;
}

_extern bool _sub_64817C(TimerMap *const, unsigned __int32);
bool TimerMap::CheckTimer(unsigned __int32) // 0x64817C
{
    mangled_assert("?CheckTimer@TimerMap@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_64817C(this, arg);
    return __result;
}

_extern void _sub_648385(TimerMap *const);
void TimerMap::postRestore() // 0x648385
{
    mangled_assert("?postRestore@TimerMap@@UAEXXZ");
    todo("implement");
    _sub_648385(this);
}

_extern void _sub_64800F(void *, SaveGameData *, SaveType);
void TimerMap::saveTimerMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x64800F
{
    mangled_assert("?saveTimerMap@TimerMap@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_64800F(objectPtr, saveGameData, savetype);
}

_extern void _sub_648065(void *, SaveGameData *);
void TimerMap::loadTimerMap(void *objectPtr, SaveGameData *saveGameData) // 0x648065
{
    mangled_assert("?loadTimerMap@TimerMap@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_648065(objectPtr, saveGameData);
}

_extern bool _sub_6483AC(TimerMap *const, SaveGameData *);
bool TimerMap::restore(SaveGameData *) // 0x6483AC
{
    mangled_assert("?restore@TimerMap@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_6483AC(this, arg);
    return __result;
}

_extern bool _sub_6483EA(TimerMap *const, SaveGameData *, SaveType);
bool TimerMap::save(SaveGameData *, SaveType) // 0x6483EA
{
    mangled_assert("?save@TimerMap@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6483EA(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
