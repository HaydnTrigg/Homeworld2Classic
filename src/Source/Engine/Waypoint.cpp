#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <malloc.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <Pieplate.h>
#include <abilities.h>
#include <TacticalOverlay.h>
#include <Camera\OrbitParameters.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <xmemory>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <lua.h>
#include <math.h>
#include <Interpolation.h>
#include <CameraCommand.h>
#include <list>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Collision\Primitives\aabb.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\cstdint.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Universe.h>
#include <seInterface2\SoundParams.h>
#include <SOBGroupManager.h>
#include <SobFactory.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <platform\osdef.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <debug\db.h>
#include <Mathlib\matvec.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <Render\gl\lotypes.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <Render\gl\r_types.h>
#include <boost\detail\lwm_win32.hpp>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <task.h>
#include <stack>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <wchar.h>
#include <string>
#include <sob.h>
#include <sobstatic.h>
#include <platform\timer.h>
#include <Collision\Primitives\sphere.h>
#include <platform\platformexports.h>
#include <Mathlib\mathutil.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void wayRegisterTweaks();
extern void drawWaypointArrow();
extern float intersectionOfTwo3DLines(vector3 const &line1_p0, vector3 const &line1_p1, vector3 const &line2_p0, vector3 const &line2_p1, float *line1_t, float *line2_t, vector3 *closeP1, vector3 *closeP2);

_static float determinant3x3(vector3 const &r1, vector3 const &r2, vector3 const &r3);

/* ---------- globals */

extern float wayTwkSnapDistance; // 0x83D924
extern float wayTwkHitTestDistance; // 0x83D928
extern float wayTwkArrowLength; // 0x83D92C
extern float wayTwkArrowRadius; // 0x83D930
extern unsigned __int32 wayTwkArrowSides; // 0x83D934
extern float wayTwkArrowNlips; // 0x84B868
extern float wayTwkDirectionChangeEpsilon; // 0x83D938
extern vector4 wayTwkPathArrowColour; // 0x83D93C
extern vector4 wayTwkWaypointNodeColour; // 0x83D94C
extern vector4 wayTwkWaypointPathColour; // 0x83D95C
extern SaveData const PathList::m_saveData[1]; // 0x7B1F8C
extern char const PathList::m_saveToken[9]; // 0x7B1FAC
extern SaveData const WaypointManager::m_saveData[11]; // 0x7B1FB8
extern char const WaypointManager::m_saveToken[16]; // 0x7B2118
extern SaveData const Waypoint::m_saveData[1]; // 0x7B2128
extern char const Waypoint::m_saveToken[9]; // 0x7B2148
extern char const WaypointPath::m_saveToken[13]; // 0x7B2154
extern SaveData const WaypointPath::m_saveData[4]; // 0x7B2168

/* ---------- private variables */

_static
{
    extern float const twkSelectedWaypointScale; // 0x7B1F80
    extern float const twkSelectedWaypointFrequency; // 0x7B1F84
    extern float const twkWaypointNodeSize; // 0x7B1F88
}

/* ---------- public code */

_extern void _sub_65503A();
void wayRegisterTweaks() // 0x65503A
{
    mangled_assert("?wayRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_65503A();
}

_extern _sub_6533BA(Waypoint *const, vector3 const &);
Waypoint::Waypoint(vector3 const &) // 0x6533BA
{
    mangled_assert("??0Waypoint@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_6533BA(this, arg);
}

_extern void _sub_65361E(Waypoint *const);
Waypoint::~Waypoint() // 0x65361E
{
    mangled_assert("??1Waypoint@@UAE@XZ");
    todo("implement");
    _sub_65361E(this);
}

_extern void _sub_654BB0(Waypoint *const, matrix4 &);
void Waypoint::render(matrix4 &) // 0x654BB0
{
    mangled_assert("?render@Waypoint@@UAEXAAVmatrix4@@@Z");
    todo("implement");
    _sub_654BB0(this, arg);
}

_extern void _sub_654B65(Waypoint *const);
void Waypoint::postRestore() // 0x654B65
{
    mangled_assert("?postRestore@Waypoint@@UAEXXZ");
    todo("implement");
    _sub_654B65(this);
}

_extern void _sub_65397C(Waypoint *const);
void Waypoint::defaultSettings() // 0x65397C
{
    mangled_assert("?defaultSettings@Waypoint@@UAEXXZ");
    todo("implement");
    _sub_65397C(this);
}

_extern _sub_653405(Waypoint *const, SaveGameData *);
Waypoint::Waypoint(SaveGameData *) // 0x653405
{
    mangled_assert("??0Waypoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_653405(this, arg);
}

_extern bool _sub_654E69(Waypoint *const, SaveGameData *);
bool Waypoint::restore(SaveGameData *) // 0x654E69
{
    mangled_assert("?restore@Waypoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_654E69(this, arg);
    return __result;
}

_extern bool _sub_654F67(Waypoint *const, SaveGameData *, SaveType);
bool Waypoint::save(SaveGameData *, SaveType) // 0x654F67
{
    mangled_assert("?save@Waypoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_654F67(this, arg, arg);
    return __result;
}

_extern _sub_653534(WaypointPath *const);
WaypointPath::WaypointPath() // 0x653534
{
    mangled_assert("??0WaypointPath@@QAE@XZ");
    todo("implement");
    _sub_653534(this);
}

_extern void _sub_65359A(std::_List_buy<WaypointPath *,std::allocator<WaypointPath *> > *const);
_inline std::_List_buy<WaypointPath *,std::allocator<WaypointPath *> >::~_List_buy<WaypointPath *,std::allocator<WaypointPath *> >() // 0x65359A
{
    mangled_assert("??1?$_List_buy@PAVWaypointPath@@V?$allocator@PAVWaypointPath@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_65359A(this);
}

_extern _sub_65347F(WaypointPath *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
WaypointPath::WaypointPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x65347F
{
    mangled_assert("??0WaypointPath@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_65347F(this, arg);
}

_extern void _sub_65397D(WaypointPath *const);
void WaypointPath::defaultSettings() // 0x65397D
{
    mangled_assert("?defaultSettings@WaypointPath@@UAEXXZ");
    todo("implement");
    _sub_65397D(this);
}

_extern void _sub_6536AA(WaypointPath *const);
WaypointPath::~WaypointPath() // 0x6536AA
{
    mangled_assert("??1WaypointPath@@UAE@XZ");
    todo("implement");
    _sub_6536AA(this);
}

_extern void _sub_655030(WaypointPath *const, __int32);
void WaypointPath::setCurrentIndex(__int32) // 0x655030
{
    mangled_assert("?setCurrentIndex@WaypointPath@@QAEXH@Z");
    todo("implement");
    _sub_655030(this, arg);
}

_extern void _sub_654363(WaypointPath *const, Waypoint *);
void WaypointPath::insertAfter(Waypoint *) // 0x654363
{
    mangled_assert("?insertAfter@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
    _sub_654363(this, arg);
}

_extern void _sub_6543AA(WaypointPath *const, Waypoint *);
void WaypointPath::insertBefore(Waypoint *) // 0x6543AA
{
    mangled_assert("?insertBefore@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
    _sub_6543AA(this, arg);
}

_extern void _sub_6538D9(WaypointPath *const, Waypoint *);
void WaypointPath::append(Waypoint *) // 0x6538D9
{
    mangled_assert("?append@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
    _sub_6538D9(this, arg);
}

_extern std::vector<vector3,std::allocator<vector3> > &_sub_6542EE(WaypointPath *const);
std::vector<vector3,std::allocator<vector3> > &WaypointPath::getPathPoints() // 0x6542EE
{
    mangled_assert("?getPathPoints@WaypointPath@@QAEAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::vector<vector3,std::allocator<vector3> > & __result = _sub_6542EE(this);
    return __result;
}

_extern float _sub_653FE4(WaypointPath *const, vector3 const &, vector3 const &, vector3 *, vector3 *, vector3 *, __int32 *, float *);
float WaypointPath::findClosestPoint2D(vector3 const &, vector3 const &, vector3 *, vector3 *, vector3 *, __int32 *, float *) // 0x653FE4
{
    mangled_assert("?findClosestPoint2D@WaypointPath@@QAEMABVvector3@@0PAV2@11PAHPAM@Z");
    todo("implement");
    float __result = _sub_653FE4(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_654122(WaypointPath const *const, vector3 const &);
unsigned __int32 WaypointPath::findClosestPointIndex(vector3 const &) const // 0x654122
{
    mangled_assert("?findClosestPointIndex@WaypointPath@@QBEIABVvector3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_654122(this, arg);
    return __result;
}

_extern Selection const &_sub_65435F(WaypointPath const *const);
Selection const &WaypointPath::getSobs() const // 0x65435F
{
    mangled_assert("?getSobs@WaypointPath@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_65435F(this);
    return __result;
}

_extern void _sub_654CDE(WaypointPath *const, float);
void WaypointPath::render(float) // 0x654CDE
{
    mangled_assert("?render@WaypointPath@@QAEXM@Z");
    todo("implement");
    _sub_654CDE(this, arg);
}

_extern void _sub_654D04(WaypointPath *const, float, vector4);
void WaypointPath::render(float, vector4) // 0x654D04
{
    mangled_assert("?render@WaypointPath@@QAEXMVvector4@@@Z");
    todo("implement");
    _sub_654D04(this, arg, arg);
}

_extern void _sub_654B67(WaypointPath *const);
void WaypointPath::postRestore() // 0x654B67
{
    mangled_assert("?postRestore@WaypointPath@@UAEXXZ");
    todo("implement");
    _sub_654B67(this);
}

_extern _sub_6534D5(WaypointPath *const, SaveGameData *);
WaypointPath::WaypointPath(SaveGameData *) // 0x6534D5
{
    mangled_assert("??0WaypointPath@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_6534D5(this, arg);
}

_extern bool _sub_654EF4(WaypointPath *const, SaveGameData *);
bool WaypointPath::restore(SaveGameData *) // 0x654EF4
{
    mangled_assert("?restore@WaypointPath@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_654EF4(this, arg);
    return __result;
}

_extern bool _sub_654FE3(WaypointPath *const, SaveGameData *, SaveType);
bool WaypointPath::save(SaveGameData *, SaveType) // 0x654FE3
{
    mangled_assert("?save@WaypointPath@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_654FE3(this, arg, arg);
    return __result;
}

_extern _sub_653373(PathList *const);
PathList::PathList() // 0x653373
{
    mangled_assert("??0PathList@@QAE@XZ");
    todo("implement");
    _sub_653373(this);
}

_extern void _sub_6535B5(PathList *const);
PathList::~PathList() // 0x6535B5
{
    mangled_assert("??1PathList@@UAE@XZ");
    todo("implement");
    _sub_6535B5(this);
}

_extern WaypointPath *_sub_6542BB(PathList *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
WaypointPath *PathList::getPathByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x6542BB
{
    mangled_assert("?getPathByName@PathList@@QAEPAVWaypointPath@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    WaypointPath * __result = _sub_6542BB(this, arg);
    return __result;
}

_extern void _sub_653873(PathList *const, WaypointPath *);
void PathList::addPath(WaypointPath *) // 0x653873
{
    mangled_assert("?addPath@PathList@@QAEXPAVWaypointPath@@@Z");
    todo("implement");
    _sub_653873(this, arg);
}

_extern void _sub_65397B(PathList *const);
void PathList::defaultSettings() // 0x65397B
{
    mangled_assert("?defaultSettings@PathList@@UAEXXZ");
    todo("implement");
    _sub_65397B(this);
}

_extern void _sub_654B64(PathList *const);
void PathList::postRestore() // 0x654B64
{
    mangled_assert("?postRestore@PathList@@UAEXXZ");
    todo("implement");
    _sub_654B64(this);
}

_extern bool _sub_654E2B(PathList *const, SaveGameData *);
bool PathList::restore(SaveGameData *) // 0x654E2B
{
    mangled_assert("?restore@PathList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_654E2B(this, arg);
    return __result;
}

_extern bool _sub_654F32(PathList *const, SaveGameData *, SaveType);
bool PathList::save(SaveGameData *, SaveType) // 0x654F32
{
    mangled_assert("?save@PathList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_654F32(this, arg, arg);
    return __result;
}

_extern _sub_65341F(WaypointManager *const);
WaypointManager::WaypointManager() // 0x65341F
{
    mangled_assert("??0WaypointManager@@QAE@XZ");
    todo("implement");
    _sub_65341F(this);
}

_extern void _sub_653629(WaypointManager *const);
WaypointManager::~WaypointManager() // 0x653629
{
    mangled_assert("??1WaypointManager@@UAE@XZ");
    todo("implement");
    _sub_653629(this);
}

_extern Selection const &_sub_65432C(WaypointManager *const);
Selection const &WaypointManager::getSobs() // 0x65432C
{
    mangled_assert("?getSobs@WaypointManager@@QAEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_65432C(this);
    return __result;
}

_extern std::vector<vector3,std::allocator<vector3> > &_sub_65420A(WaypointManager *const);
std::vector<vector3,std::allocator<vector3> > &WaypointManager::getPath() // 0x65420A
{
    mangled_assert("?getPath@WaypointManager@@QAEAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::vector<vector3,std::allocator<vector3> > & __result = _sub_65420A(this);
    return __result;
}

_extern bool _sub_65420E(WaypointManager *const, std::vector<vector3,std::allocator<vector3> > **, vector3 *, __int32 *, bool *);
bool WaypointManager::getPath(std::vector<vector3,std::allocator<vector3> > **, vector3 *, __int32 *, bool *) // 0x65420E
{
    mangled_assert("?getPath@WaypointManager@@QAE_NPAPAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@PAVvector3@@PAHPA_N@Z");
    todo("implement");
    bool __result = _sub_65420E(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_654190(WaypointManager *const, vector3 &);
bool WaypointManager::getJoinPosition(vector3 &) // 0x654190
{
    mangled_assert("?getJoinPosition@WaypointManager@@QAE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_654190(this, arg);
    return __result;
}

_extern bool _sub_654B16(WaypointManager *const);
bool WaypointManager::newPath() // 0x654B16
{
    mangled_assert("?newPath@WaypointManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_654B16(this);
    return __result;
}

_extern void _sub_653F82(WaypointManager *const);
void WaypointManager::endPath() // 0x653F82
{
    mangled_assert("?endPath@WaypointManager@@QAEXXZ");
    todo("implement");
    _sub_653F82(this);
}

_extern void _sub_653915(WaypointManager *const);
void WaypointManager::cancelPath() // 0x653915
{
    mangled_assert("?cancelPath@WaypointManager@@QAEXXZ");
    todo("implement");
    _sub_653915(this);
}

_extern void _sub_6538F5(WaypointManager *const, vector3 const &);
void WaypointManager::appendPoint(vector3 const &) // 0x6538F5
{
    mangled_assert("?appendPoint@WaypointManager@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6538F5(this, arg);
}

_extern void _sub_653F24(WaypointManager *const, Sob *);
void WaypointManager::editPath(Sob *) // 0x653F24
{
    mangled_assert("?editPath@WaypointManager@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_653F24(this, arg);
}

_extern Selection const &_sub_653885(WaypointManager *const, vector3 const &);
Selection const &WaypointManager::addPoint(vector3 const &) // 0x653885
{
    mangled_assert("?addPoint@WaypointManager@@QAEABVSelection@@ABVvector3@@@Z");
    todo("implement");
    Selection const & __result = _sub_653885(this, arg);
    return __result;
}

_extern vector3 *_sub_6541A3(WaypointManager *const);
vector3 *WaypointManager::getLastEditPoint() // 0x6541A3
{
    mangled_assert("?getLastEditPoint@WaypointManager@@QAEPAVvector3@@XZ");
    todo("implement");
    vector3 * __result = _sub_6541A3(this);
    return __result;
}

_extern void _sub_654AA2(WaypointManager *const, Selection const &, vector3 const &);
void WaypointManager::movePoints(Selection const &, vector3 const &) // 0x654AA2
{
    mangled_assert("?movePoints@WaypointManager@@QAEXABVSelection@@ABVvector3@@@Z");
    todo("implement");
    _sub_654AA2(this, arg, arg);
}

_extern void _sub_653990(WaypointManager *const, Selection const &);
void WaypointManager::deletePoints(Selection const &) // 0x653990
{
    mangled_assert("?deletePoints@WaypointManager@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_653990(this, arg);
}

_extern bool _sub_654783(WaypointManager *const, vector3 const &, vector3 const &, vector3 *);
bool WaypointManager::isPointNearPath2D(vector3 const &, vector3 const &, vector3 *) // 0x654783
{
    mangled_assert("?isPointNearPath2D@WaypointManager@@QAE_NABVvector3@@0PAV2@@Z");
    todo("implement");
    bool __result = _sub_654783(this, arg, arg, arg);
    return __result;
}

_extern void _sub_654B66(WaypointManager *const);
void WaypointManager::postRestore() // 0x654B66
{
    mangled_assert("?postRestore@WaypointManager@@UAEXXZ");
    todo("implement");
    _sub_654B66(this);
}

_extern bool _sub_654EB6(WaypointManager *const, SaveGameData *);
bool WaypointManager::restore(SaveGameData *) // 0x654EB6
{
    mangled_assert("?restore@WaypointManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_654EB6(this, arg);
    return __result;
}

_extern bool _sub_654FAE(WaypointManager *const, SaveGameData *, SaveType);
bool WaypointManager::save(SaveGameData *, SaveType) // 0x654FAE
{
    mangled_assert("?save@WaypointManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_654FAE(this, arg, arg);
    return __result;
}

_extern void _sub_653C2E(WaypointManager *const, float);
void WaypointManager::drawPaths(float) // 0x653C2E
{
    mangled_assert("?drawPaths@WaypointManager@@QAEXM@Z");
    todo("implement");
    _sub_653C2E(this, arg);
}

_extern void _sub_653CFF();
void drawWaypointArrow() // 0x653CFF
{
    mangled_assert("?drawWaypointArrow@@YGXXZ");
    todo("implement");
    _sub_653CFF();
}

_extern void _sub_653ABF(WaypointManager *const, Camera const *);
void WaypointManager::drawArrow(Camera const *) // 0x653ABF
{
    mangled_assert("?drawArrow@WaypointManager@@QAEXPBVCamera@@@Z");
    todo("implement");
    _sub_653ABF(this, arg);
}

_extern float _sub_6543D0(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float *, float *, vector3 *, vector3 *);
float intersectionOfTwo3DLines(vector3 const &line1_p0, vector3 const &line1_p1, vector3 const &line2_p0, vector3 const &line2_p1, float *line1_t, float *line2_t, vector3 *closeP1, vector3 *closeP2) // 0x6543D0
{
    mangled_assert("?intersectionOfTwo3DLines@@YGMABVvector3@@000PAM1PAV1@2@Z");
    todo("implement");
    float __result = _sub_6543D0(line1_p0, line1_p1, line2_p0, line2_p1, line1_t, line2_t, closeP1, closeP2);
    return __result;
}

/* ---------- private code */

_extern float _sub_653A43(vector3 const &, vector3 const &, vector3 const &);
_static float determinant3x3(vector3 const &r1, vector3 const &r2, vector3 const &r3) // 0x653A43
{
    mangled_assert("determinant3x3");
    todo("implement");
    float __result = _sub_653A43(r1, r2, r3);
    return __result;
}
#endif
