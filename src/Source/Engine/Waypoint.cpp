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

void wayRegisterTweaks() // 0x65503A
{
    mangled_assert("?wayRegisterTweaks@@YGXXZ");
    todo("implement");
}

Waypoint::Waypoint(vector3 const &) // 0x6533BA
{
    mangled_assert("??0Waypoint@@QAE@ABVvector3@@@Z");
    todo("implement");
}

Waypoint::~Waypoint() // 0x65361E
{
    mangled_assert("??1Waypoint@@UAE@XZ");
    todo("implement");
}

void Waypoint::render(matrix4 &) // 0x654BB0
{
    mangled_assert("?render@Waypoint@@UAEXAAVmatrix4@@@Z");
    todo("implement");
}

void Waypoint::postRestore() // 0x654B65
{
    mangled_assert("?postRestore@Waypoint@@UAEXXZ");
    todo("implement");
}

void Waypoint::defaultSettings() // 0x65397C
{
    mangled_assert("?defaultSettings@Waypoint@@UAEXXZ");
    todo("implement");
}

Waypoint::Waypoint(SaveGameData *) // 0x653405
{
    mangled_assert("??0Waypoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

bool Waypoint::restore(SaveGameData *) // 0x654E69
{
    mangled_assert("?restore@Waypoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Waypoint::save(SaveGameData *, SaveType) // 0x654F67
{
    mangled_assert("?save@Waypoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

WaypointPath::WaypointPath() // 0x653534
{
    mangled_assert("??0WaypointPath@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<WaypointPath *,std::allocator<WaypointPath *> >::~_List_buy<WaypointPath *,std::allocator<WaypointPath *> >() // 0x65359A
{
    mangled_assert("??1?$_List_buy@PAVWaypointPath@@V?$allocator@PAVWaypointPath@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

WaypointPath::WaypointPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x65347F
{
    mangled_assert("??0WaypointPath@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void WaypointPath::defaultSettings() // 0x65397D
{
    mangled_assert("?defaultSettings@WaypointPath@@UAEXXZ");
    todo("implement");
}

WaypointPath::~WaypointPath() // 0x6536AA
{
    mangled_assert("??1WaypointPath@@UAE@XZ");
    todo("implement");
}

void WaypointPath::setCurrentIndex(__int32) // 0x655030
{
    mangled_assert("?setCurrentIndex@WaypointPath@@QAEXH@Z");
    todo("implement");
}

void WaypointPath::insertAfter(Waypoint *) // 0x654363
{
    mangled_assert("?insertAfter@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
}

void WaypointPath::insertBefore(Waypoint *) // 0x6543AA
{
    mangled_assert("?insertBefore@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
}

void WaypointPath::append(Waypoint *) // 0x6538D9
{
    mangled_assert("?append@WaypointPath@@QAEXPAVWaypoint@@@Z");
    todo("implement");
}

std::vector<vector3,std::allocator<vector3> > &WaypointPath::getPathPoints() // 0x6542EE
{
    mangled_assert("?getPathPoints@WaypointPath@@QAEAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
}

float WaypointPath::findClosestPoint2D(vector3 const &, vector3 const &, vector3 *, vector3 *, vector3 *, __int32 *, float *) // 0x653FE4
{
    mangled_assert("?findClosestPoint2D@WaypointPath@@QAEMABVvector3@@0PAV2@11PAHPAM@Z");
    todo("implement");
}

unsigned __int32 WaypointPath::findClosestPointIndex(vector3 const &) const // 0x654122
{
    mangled_assert("?findClosestPointIndex@WaypointPath@@QBEIABVvector3@@@Z");
    todo("implement");
}

Selection const &WaypointPath::getSobs() const // 0x65435F
{
    mangled_assert("?getSobs@WaypointPath@@QBEABVSelection@@XZ");
    todo("implement");
}

void WaypointPath::render(float) // 0x654CDE
{
    mangled_assert("?render@WaypointPath@@QAEXM@Z");
    todo("implement");
}

void WaypointPath::render(float, vector4) // 0x654D04
{
    mangled_assert("?render@WaypointPath@@QAEXMVvector4@@@Z");
    todo("implement");
}

void WaypointPath::postRestore() // 0x654B67
{
    mangled_assert("?postRestore@WaypointPath@@UAEXXZ");
    todo("implement");
}

WaypointPath::WaypointPath(SaveGameData *) // 0x6534D5
{
    mangled_assert("??0WaypointPath@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

bool WaypointPath::restore(SaveGameData *) // 0x654EF4
{
    mangled_assert("?restore@WaypointPath@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WaypointPath::save(SaveGameData *, SaveType) // 0x654FE3
{
    mangled_assert("?save@WaypointPath@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PathList::PathList() // 0x653373
{
    mangled_assert("??0PathList@@QAE@XZ");
    todo("implement");
}

PathList::~PathList() // 0x6535B5
{
    mangled_assert("??1PathList@@UAE@XZ");
    todo("implement");
}

WaypointPath *PathList::getPathByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x6542BB
{
    mangled_assert("?getPathByName@PathList@@QAEPAVWaypointPath@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void PathList::addPath(WaypointPath *) // 0x653873
{
    mangled_assert("?addPath@PathList@@QAEXPAVWaypointPath@@@Z");
    todo("implement");
}

void PathList::defaultSettings() // 0x65397B
{
    mangled_assert("?defaultSettings@PathList@@UAEXXZ");
    todo("implement");
}

void PathList::postRestore() // 0x654B64
{
    mangled_assert("?postRestore@PathList@@UAEXXZ");
    todo("implement");
}

bool PathList::restore(SaveGameData *) // 0x654E2B
{
    mangled_assert("?restore@PathList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PathList::save(SaveGameData *, SaveType) // 0x654F32
{
    mangled_assert("?save@PathList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

WaypointManager::WaypointManager() // 0x65341F
{
    mangled_assert("??0WaypointManager@@QAE@XZ");
    todo("implement");
}

WaypointManager::~WaypointManager() // 0x653629
{
    mangled_assert("??1WaypointManager@@UAE@XZ");
    todo("implement");
}

Selection const &WaypointManager::getSobs() // 0x65432C
{
    mangled_assert("?getSobs@WaypointManager@@QAEABVSelection@@XZ");
    todo("implement");
}

std::vector<vector3,std::allocator<vector3> > &WaypointManager::getPath() // 0x65420A
{
    mangled_assert("?getPath@WaypointManager@@QAEAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
}

bool WaypointManager::getPath(std::vector<vector3,std::allocator<vector3> > **, vector3 *, __int32 *, bool *) // 0x65420E
{
    mangled_assert("?getPath@WaypointManager@@QAE_NPAPAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@PAVvector3@@PAHPA_N@Z");
    todo("implement");
}

bool WaypointManager::getJoinPosition(vector3 &) // 0x654190
{
    mangled_assert("?getJoinPosition@WaypointManager@@QAE_NAAVvector3@@@Z");
    todo("implement");
}

bool WaypointManager::newPath() // 0x654B16
{
    mangled_assert("?newPath@WaypointManager@@QAE_NXZ");
    todo("implement");
}

void WaypointManager::endPath() // 0x653F82
{
    mangled_assert("?endPath@WaypointManager@@QAEXXZ");
    todo("implement");
}

void WaypointManager::cancelPath() // 0x653915
{
    mangled_assert("?cancelPath@WaypointManager@@QAEXXZ");
    todo("implement");
}

void WaypointManager::appendPoint(vector3 const &) // 0x6538F5
{
    mangled_assert("?appendPoint@WaypointManager@@QAEXABVvector3@@@Z");
    todo("implement");
}

void WaypointManager::editPath(Sob *) // 0x653F24
{
    mangled_assert("?editPath@WaypointManager@@QAEXPAVSob@@@Z");
    todo("implement");
}

Selection const &WaypointManager::addPoint(vector3 const &) // 0x653885
{
    mangled_assert("?addPoint@WaypointManager@@QAEABVSelection@@ABVvector3@@@Z");
    todo("implement");
}

vector3 *WaypointManager::getLastEditPoint() // 0x6541A3
{
    mangled_assert("?getLastEditPoint@WaypointManager@@QAEPAVvector3@@XZ");
    todo("implement");
}

void WaypointManager::movePoints(Selection const &, vector3 const &) // 0x654AA2
{
    mangled_assert("?movePoints@WaypointManager@@QAEXABVSelection@@ABVvector3@@@Z");
    todo("implement");
}

void WaypointManager::deletePoints(Selection const &) // 0x653990
{
    mangled_assert("?deletePoints@WaypointManager@@QAEXABVSelection@@@Z");
    todo("implement");
}

bool WaypointManager::isPointNearPath2D(vector3 const &, vector3 const &, vector3 *) // 0x654783
{
    mangled_assert("?isPointNearPath2D@WaypointManager@@QAE_NABVvector3@@0PAV2@@Z");
    todo("implement");
}

void WaypointManager::postRestore() // 0x654B66
{
    mangled_assert("?postRestore@WaypointManager@@UAEXXZ");
    todo("implement");
}

bool WaypointManager::restore(SaveGameData *) // 0x654EB6
{
    mangled_assert("?restore@WaypointManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WaypointManager::save(SaveGameData *, SaveType) // 0x654FAE
{
    mangled_assert("?save@WaypointManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void WaypointManager::drawPaths(float) // 0x653C2E
{
    mangled_assert("?drawPaths@WaypointManager@@QAEXM@Z");
    todo("implement");
}

void drawWaypointArrow() // 0x653CFF
{
    mangled_assert("?drawWaypointArrow@@YGXXZ");
    todo("implement");
}

void WaypointManager::drawArrow(Camera const *) // 0x653ABF
{
    mangled_assert("?drawArrow@WaypointManager@@QAEXPBVCamera@@@Z");
    todo("implement");
}

float intersectionOfTwo3DLines(vector3 const &line1_p0, vector3 const &line1_p1, vector3 const &line2_p0, vector3 const &line2_p1, float *line1_t, float *line2_t, vector3 *closeP1, vector3 *closeP2) // 0x6543D0
{
    mangled_assert("?intersectionOfTwo3DLines@@YGMABVvector3@@000PAM1PAV1@2@Z");
    todo("implement");
}

/* ---------- private code */

_static float determinant3x3(vector3 const &r1, vector3 const &r2, vector3 const &r3) // 0x653A43
{
    mangled_assert("determinant3x3");
    todo("implement");
}
#endif
