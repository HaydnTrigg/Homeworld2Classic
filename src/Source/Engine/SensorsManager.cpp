#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\Internal\span_i.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\proxy.h>
#include <assist\stlexsmallvector.h>
#include <Collision\intersect.h>
#include <KeyBindings.h>
#include <xstring>
#include <Collision\primitivesfwd.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <Player.h>
#include <ResearchManager.h>
#include <crtdefs.h>
#include <Camera\OrbitParameters.h>
#include <MainUI.h>
#include <Interpolation.h>
#include <FocalPoint.h>
#include <Mathlib\matrix3.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <boost\checked_delete.hpp>
#include <seInterface2\seinterfacefunc.h>
#include <Collision\Primitives\aabb.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\gbitset.h>
#include <new>
#include <Render\objects\simplemesh.h>
#include <exception>
#include <xstddef>
#include <Collision\Primitives\obb.h>
#include <type_traits>
#include <mainuidefines.h>
#include <Menus\SMFiltersMenu.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Viewer.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <xutility>
#include <platform\inputinterface.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SOBGroupManager.h>
#include <mainScreen.h>
#include <luaconfig\luaconfig.h>
#include <hash_map>
#include <lua.h>
#include <xhash>
#include <compiler\compilerconfig.h>
#include <task.h>
#include <profile\profile.h>
#include <stack>
#include <HyperspaceManager.h>
#include <iostream>
#include <SquadronList.h>
#include <list>
#include <platform\timer.h>
#include <SelTarg.h>
#include <platform\platformexports.h>
#include <prim.h>
#include <gameRender.h>
#include <MainUIImpl.h>
#include <Cursor.h>
#include <Mathlib\vector3.h>
#include <Render\tristrip.h>
#include <abilities.h>
#include <Render\objects\texture.h>
#include <LevelDesc.h>
#include <Mathlib\vector4.h>
#include <seInterface2\PatchID.h>
#include <Render\objects\textureregistry.h>
#include <Hash.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <renderer.h>
#include <fileio\md5.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <Render\gl\types.h>
#include <Collision\Primitives\capsule.h>
#include <map>
#include <Render\gl\lotypes.h>
#include <Collision\Primitives\segment.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Collision\BVH\profiling.h>
#include <boost\scoped_ptr.hpp>
#include <fixedpoint.h>
#include <UIGraphic.h>
#include <gamestructimpl.h>
#include <util\fixed.h>
#include <UserInterface\StyleSheet.h>
#include <Badge.h>
#include <UserInterface\pch.h>
#include <playerresourcetype.h>
#include <SensorsManager.h>
#include <Mathlib\vector2.h>
#include <Render\gl\r_types.h>
#include <util\types.h>
#include <Mathlib\matvec.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Race.h>
#include <Render\gl\r_defines.h>
#include <cassert>
#include <Render\gl\glext.h>
#include <Pieplate.h>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <boost\static_assert.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <seInterface2\sedefinesshared.h>
#include <CameraCommand.h>
#include <GameObj.h>
#include <CameraHW.h>
#include <assist\typemagic.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Universe.h>
#include <util\statmonitor.h>
#include <Camera\Frustum.h>
#include <Waypoint.h>
#include <ATI.h>
#include <util\utilexports.h>
#include <Camera\Plane3.h>
#include <SobUnmoveable.h>
#include <Mathlib\mathlibdll.h>
#include <platform\osdef.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <sobid.h>
#include <pathpoints.h>
#include <SensorsBlobs.h>
#include <debug\db.h>
#include <region.h>
#include <platform\keydefines.h>
#include <TeamColourRegistry.h>
#include <deque>
#include <savegame.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Mathlib\mathutil.h>
#include <selection.h>
#include <Stars.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <bitset>
#include <BuildManager.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\Graphic.h>
#include <Render\objects\textureproxy.h>
#include <CameraTuning.h>
#include <UserInterface\signals.h>
#include <BTG.h>
#include <Graphics\SensorsOutlines.h>
#include <sob.h>
#include <Render\objects\core.h>
#include <sobstatic.h>
#include <Render\objects\objects.h>
#include <gameSettings.h>
#include <Collision\Primitives\sphere.h>
#include <config.h>
#include <wchar.h>
#include <syncChecking.h>
#include <Collision\BVH\octree.h>
#include <Selector.h>
#include <Collision\BVH\span.h>
#include <dbdefines.h>
#include <MetaSelTarg.h>

/* ---------- constants */

/* ---------- definitions */

struct PiecewiseLinearSegment
{
    _inline PiecewiseLinearSegment(float, float, float, float);
    PiecewiseLinearSegment();
    float tMin; // 0x0
    float tMax; // 0x4
    float vStart; // 0x8
    float vEnd; // 0xC
};
static_assert(sizeof(PiecewiseLinearSegment) == 16, "Invalid PiecewiseLinearSegment size");

class SMCameraZoomProxy
{
public:
    SMCameraZoomProxy();
    void EnableFreeZoom(bool);
    bool IsFreeZoom() const;
    float GetDistance() const;
    float GetMinDistance() const;
    float GetMaxDistance() const;
    void SetDistance(float);
    void SetMinDistance(float);
    void SetMaxDistance(float);
    bool SetDistanceAngleDeclination(vector3 const &, vector3 const &);
private:
    bool m_bFree; // 0x0
    float m_dist; // 0x4
    float m_minDist; // 0x8
    float m_maxDist; // 0xC
};
static_assert(sizeof(SMCameraZoomProxy) == 16, "Invalid SMCameraZoomProxy size");

typedef std::map<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> > > Images;
typedef float (*sensorsblobcallback)(Sob *);

/* ---------- prototypes */

extern void smSetMinCameraDistance(float min);
extern void smSetMaxCameraDistance(float max);
extern void updateBlinkFunction();
extern float smGetHighlightMaxAlpha();
extern bool smStartup();
extern bool smShutdown();

_static float blinkAlpha(float t);

/* ---------- globals */

extern vector4 smWorldPlaneColour; // 0x83D218
extern vector4 smWorldLineColour; // 0x83D228
extern float smWorldPlaneToWorldBoundSize; // 0x83D128
extern float smHorizonToCameraZoom; // 0x83D12C
extern float smLetterboxAspect; // 0x83D130
extern float smWorldplaneFlashOnTime; // 0x83D134
extern float smWorldplaneFlashOffTime; // 0x83D138
extern vector4 SensorsManager::DotInfo::friendlyPixelColour; // 0x83D170
extern vector4 SensorsManager::DotInfo::alliedPixelColour; // 0x83D180
extern vector4 SensorsManager::DotInfo::enemyPixelColour; // 0x83D190
extern vector4 SensorsManager::DotInfo::neutralPixelColour; // 0x83D1A0
extern float SensorsManager::DotInfo::friendlyPixelSize; // 0x83D15C
extern float SensorsManager::DotInfo::alliedPixelSize; // 0x83D160
extern float SensorsManager::DotInfo::enemyPixelSize; // 0x83D164
extern float SensorsManager::DotInfo::missilePixelSize; // 0x83D168
extern vector4 SensorsManager::DotInfo::missilePixelColour; // 0x83D1B0
extern vector4 SensorsManager::DotInfo::miscPixelColour; // 0x83D1C0
extern float SensorsManager::DotInfo::miscPixelSize; // 0x83D16C
extern SensorsManager::DotInfo SensorsManager::s_dotInfo; // 0x84AF68

/* ---------- private variables */

_static
{
    extern float smTwkBlinkTime; // 0x83D0F0
    extern float smTwkZoomTime; // 0x83D0F4
    extern float smTwkZoomMainView; // 0x83D0F8
    extern float smTwkZoomOutDistance; // 0x83D0FC
    extern float smTwkMinZoomOutDistance; // 0x83D100
    extern float smTwkMaxZoomOutDistance; // 0x83D104
    extern float smTwkNearClipPlane; // 0x83D108
    extern float smTwkFarClipPlane; // 0x83D10C
    extern float smTwkFocusCull; // 0x83D110
    extern float smTwkMaxMovementDistance; // 0x83D114
    extern bool smTwkWidescreen; // 0x83D118
    extern float smTwkHighlightMaxAlpha; // 0x83D11C
    extern float smTwkBlinkOnFraction; // 0x83D120
    extern float smTwkBlinkTransitionTime; // 0x83D124
    extern PiecewiseLinearSegment s_blinkFunc[4]; // 0x83D1D8
    extern ATIPossibleVisFlag smVisibilityFlags[4]; // 0x83D13C
    extern ATITemplate *smWorldGraphics; // 0x84AF6C
    extern float const ViewerUpdateRate; // 0x7AF7A8
    extern float const ViewerUpdatePeriod; // 0x83D1D0
    extern float const CameraDistanceUpdateRate; // 0x7AF7AC
    extern float const CameraDistanceUpdatePeriod; // 0x83D1D4
}

/* ---------- public code */

_extern _sub_6363E4(PiecewiseLinearSegment *const, float, float, float, float);
_inline PiecewiseLinearSegment::PiecewiseLinearSegment(float, float, float, float) // 0x6363E4
{
    mangled_assert("??0PiecewiseLinearSegment@@QAE@MMMM@Z");
    todo("implement");
    _sub_6363E4(this, arg, arg, arg, arg);
}

_extern _sub_636414(SMCameraZoomProxy *const);
SMCameraZoomProxy::SMCameraZoomProxy() // 0x636414
{
    mangled_assert("??0SMCameraZoomProxy@@QAE@XZ");
    todo("implement");
    _sub_636414(this);
}

_extern float _sub_636643(SMCameraZoomProxy const *const);
float SMCameraZoomProxy::GetDistance() const // 0x636643
{
    mangled_assert("?GetDistance@SMCameraZoomProxy@@QBEMXZ");
    todo("implement");
    float __result = _sub_636643(this);
    return __result;
}

_extern float _sub_636671(SMCameraZoomProxy const *const);
float SMCameraZoomProxy::GetMinDistance() const // 0x636671
{
    mangled_assert("?GetMinDistance@SMCameraZoomProxy@@QBEMXZ");
    todo("implement");
    float __result = _sub_636671(this);
    return __result;
}

_extern float _sub_63665A(SMCameraZoomProxy const *const);
float SMCameraZoomProxy::GetMaxDistance() const // 0x63665A
{
    mangled_assert("?GetMaxDistance@SMCameraZoomProxy@@QBEMXZ");
    todo("implement");
    float __result = _sub_63665A(this);
    return __result;
}

_extern void _sub_63668B(SMCameraZoomProxy *const, float);
void SMCameraZoomProxy::SetDistance(float) // 0x63668B
{
    mangled_assert("?SetDistance@SMCameraZoomProxy@@QAEXM@Z");
    todo("implement");
    _sub_63668B(this, arg);
}

_extern void _sub_636709(SMCameraZoomProxy *const, float);
void SMCameraZoomProxy::SetMinDistance(float) // 0x636709
{
    mangled_assert("?SetMinDistance@SMCameraZoomProxy@@QAEXM@Z");
    todo("implement");
    _sub_636709(this, arg);
}

_extern void _sub_6366E0(SMCameraZoomProxy *const, float);
void SMCameraZoomProxy::SetMaxDistance(float) // 0x6366E0
{
    mangled_assert("?SetMaxDistance@SMCameraZoomProxy@@QAEXM@Z");
    todo("implement");
    _sub_6366E0(this, arg);
}

_extern bool _sub_6366BA(SMCameraZoomProxy *const, vector3 const &, vector3 const &);
bool SMCameraZoomProxy::SetDistanceAngleDeclination(vector3 const &, vector3 const &) // 0x6366BA
{
    mangled_assert("?SetDistanceAngleDeclination@SMCameraZoomProxy@@QAE_NABVvector3@@0@Z");
    todo("implement");
    bool __result = _sub_6366BA(this, arg, arg);
    return __result;
}

_extern void _sub_63659B(SMCameraZoomProxy *const, bool);
void SMCameraZoomProxy::EnableFreeZoom(bool) // 0x63659B
{
    mangled_assert("?EnableFreeZoom@SMCameraZoomProxy@@QAEX_N@Z");
    todo("implement");
    _sub_63659B(this, arg);
}

_extern bool _sub_636688(SMCameraZoomProxy const *const);
bool SMCameraZoomProxy::IsFreeZoom() const // 0x636688
{
    mangled_assert("?IsFreeZoom@SMCameraZoomProxy@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_636688(this);
    return __result;
}

_extern void _sub_637170(float);
void smSetMinCameraDistance(float min) // 0x637170
{
    mangled_assert("?smSetMinCameraDistance@@YGXM@Z");
    todo("implement");
    _sub_637170(min);
}

_extern void _sub_6370F6(float);
void smSetMaxCameraDistance(float max) // 0x6370F6
{
    mangled_assert("?smSetMaxCameraDistance@@YGXM@Z");
    todo("implement");
    _sub_6370F6(max);
}

_extern void _sub_637793();
void updateBlinkFunction() // 0x637793
{
    mangled_assert("?updateBlinkFunction@@YGXXZ");
    todo("implement");
    _sub_637793();
}

_extern _sub_6363DE(SensorsManager::Data *const);
_inline SensorsManager::Data::Data() // 0x6363DE
{
    mangled_assert("??0Data@SensorsManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6363DE(this);
}

_extern float _sub_6370EF();
float smGetHighlightMaxAlpha() // 0x6370EF
{
    mangled_assert("?smGetHighlightMaxAlpha@@YGMXZ");
    todo("implement");
    float __result = _sub_6370EF();
    return __result;
}

_extern bool _sub_637219();
bool smStartup() // 0x637219
{
    mangled_assert("?smStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_637219();
    return __result;
}

_extern bool _sub_6371EB();
bool smShutdown() // 0x6371EB
{
    mangled_assert("?smShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6371EB();
    return __result;
}

_extern _sub_63641A(SensorsManager *const, MainUI *);
SensorsManager::SensorsManager(MainUI *) // 0x63641A
{
    mangled_assert("??0SensorsManager@@QAE@PAVMainUI@@@Z");
    todo("implement");
    _sub_63641A(this, arg);
}

_extern void _sub_6364E7(SensorsManager *const);
SensorsManager::~SensorsManager() // 0x6364E7
{
    mangled_assert("??1SensorsManager@@QAE@XZ");
    todo("implement");
    _sub_6364E7(this);
}

_extern void _sub_637083(SensorsManager *const, MainUIImpl *);
void SensorsManager::setMainUIImpl(MainUIImpl *) // 0x637083
{
    mangled_assert("?setMainUIImpl@SensorsManager@@QAEXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_637083(this, arg);
}

_extern void _sub_636847(SensorsManager *const);
void SensorsManager::cancelCommand() // 0x636847
{
    mangled_assert("?cancelCommand@SensorsManager@@QAEXXZ");
    todo("implement");
    _sub_636847(this);
}

_extern void _sub_636F29(SensorsManager *const);
void SensorsManager::initialize() // 0x636F29
{
    mangled_assert("?initialize@SensorsManager@@QAEXXZ");
    todo("implement");
    _sub_636F29(this);
}

_extern void _sub_637053(SensorsManager *const, float);
void SensorsManager::setInitialZoomOutDistance(float) // 0x637053
{
    mangled_assert("?setInitialZoomOutDistance@SensorsManager@@QAEXM@Z");
    todo("implement");
    _sub_637053(this, arg);
}

_extern void _sub_6367B5(SensorsManager *const, float);
void SensorsManager::blinkUpdate(float) // 0x6367B5
{
    mangled_assert("?blinkUpdate@SensorsManager@@AAEXM@Z");
    todo("implement");
    _sub_6367B5(this, arg);
}

_extern bool _sub_636F7D(SensorsManager const *const);
bool SensorsManager::isBlinkOn() const // 0x636F7D
{
    mangled_assert("?isBlinkOn@SensorsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_636F7D(this);
    return __result;
}

_extern float _sub_636F1E(SensorsManager const *const);
float SensorsManager::getBlinkAlpha() const // 0x636F1E
{
    mangled_assert("?getBlinkAlpha@SensorsManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_636F1E(this);
    return __result;
}

_extern void _sub_6375C6(SensorsManager *const);
void SensorsManager::switchTo() // 0x6375C6
{
    mangled_assert("?switchTo@SensorsManager@@QAEXXZ");
    todo("implement");
    _sub_6375C6(this);
}

_extern void _sub_6374C4(SensorsManager *const);
void SensorsManager::switchFrom() // 0x6374C4
{
    mangled_assert("?switchFrom@SensorsManager@@QAEXXZ");
    todo("implement");
    _sub_6374C4(this);
}

_extern void _sub_637763(SensorsManager *const);
void SensorsManager::toggleOn() // 0x637763
{
    mangled_assert("?toggleOn@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_637763(this);
}

_extern void _sub_63775E(SensorsManager *const);
void SensorsManager::toggleOff() // 0x63775E
{
    mangled_assert("?toggleOff@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_63775E(this);
}

_extern void _sub_637743(SensorsManager *const);
void SensorsManager::toggle() // 0x637743
{
    mangled_assert("?toggle@SensorsManager@@QAEXXZ");
    todo("implement");
    _sub_637743(this);
}

_extern void _sub_636B29(SensorsManager *const, Selection const &);
void SensorsManager::dragFocus(Selection const &) // 0x636B29
{
    mangled_assert("?dragFocus@SensorsManager@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_636B29(this, arg);
}

_extern void _sub_636FE0(SensorsManager *const);
void SensorsManager::setFarView() // 0x636FE0
{
    mangled_assert("?setFarView@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_636FE0(this);
}

_extern void _sub_63708D(SensorsManager *const);
void SensorsManager::setNearView() // 0x63708D
{
    mangled_assert("?setNearView@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_63708D(this);
}

_extern void _sub_6378F9(SensorsManager *const);
void SensorsManager::updateOrbitStart() // 0x6378F9
{
    mangled_assert("?updateOrbitStart@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_6378F9(this);
}

_extern void _sub_637838(SensorsManager *const);
void SensorsManager::updateCamera() // 0x637838
{
    mangled_assert("?updateCamera@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_637838(this);
}

_extern float _sub_637960(SensorsManager *const, float, float);
float SensorsManager::zoomUpdate(float, float) // 0x637960
{
    mangled_assert("?zoomUpdate@SensorsManager@@QAEMMM@Z");
    todo("implement");
    float __result = _sub_637960(this, arg, arg);
    return __result;
}

_extern void _sub_636997(SensorsManager *const, float);
void SensorsManager::doZoom(float) // 0x636997
{
    mangled_assert("?doZoom@SensorsManager@@AAEXM@Z");
    todo("implement");
    _sub_636997(this, arg);
}

_extern float _sub_636FA9(SensorsManager *const, float, float);
float SensorsManager::scrollFactorGet(float, float) // 0x636FA9
{
    mangled_assert("?scrollFactorGet@SensorsManager@@AAEMMM@Z");
    todo("implement");
    float __result = _sub_636FA9(this, arg, arg);
    return __result;
}

_extern void _sub_6368C3(SensorsManager *const);
void SensorsManager::closeForGood() // 0x6368C3
{
    mangled_assert("?closeForGood@SensorsManager@@AAEXXZ");
    todo("implement");
    _sub_6368C3(this);
}

_extern void _sub_63693B(SensorsManager *const, Selection &);
void SensorsManager::cullAndFocus(Selection &) // 0x63693B
{
    mangled_assert("?cullAndFocus@SensorsManager@@QAEXAAVSelection@@@Z");
    todo("implement");
    _sub_63693B(this, arg);
}

_extern void _sub_636BA6(SensorsManager *const, float);
void SensorsManager::drawHUD(float) // 0x636BA6
{
    mangled_assert("?drawHUD@SensorsManager@@QAEXM@Z");
    todo("implement");
    _sub_636BA6(this, arg);
}

_extern void _sub_636ED2(SensorsManager *const, float);
void SensorsManager::drawOutlines(float) // 0x636ED2
{
    mangled_assert("?drawOutlines@SensorsManager@@QAEXM@Z");
    todo("implement");
    _sub_636ED2(this, arg);
}

_extern bool _sub_636F9C(SensorsManager *const);
bool SensorsManager::isEnabled() // 0x636F9C
{
    mangled_assert("?isEnabled@SensorsManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_636F9C(this);
    return __result;
}

_extern void _sub_637768(SensorsManager *const, float);
void SensorsManager::update(float) // 0x637768
{
    mangled_assert("?update@SensorsManager@@QAEXM@Z");
    todo("implement");
    _sub_637768(this, arg);
}

_extern void _sub_636EF7(SensorsManager *const, bool);
void SensorsManager::enableCameraZoom(bool) // 0x636EF7
{
    mangled_assert("?enableCameraZoom@SensorsManager@@QAEX_N@Z");
    todo("implement");
    _sub_636EF7(this, arg);
}

_extern bool _sub_636F8F(SensorsManager const *const);
bool SensorsManager::isCameraZoomEnabled() const // 0x636F8F
{
    mangled_assert("?isCameraZoomEnabled@SensorsManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_636F8F(this);
    return __result;
}

_extern void _sub_636F11(SensorsManager *const, bool);
void SensorsManager::enableWorldplaneFlash(bool) // 0x636F11
{
    mangled_assert("?enableWorldplaneFlash@SensorsManager@@QAEX_N@Z");
    todo("implement");
    _sub_636F11(this, arg);
}

/* ---------- private code */

_extern float _sub_636732(float);
_static float blinkAlpha(float t) // 0x636732
{
    mangled_assert("blinkAlpha");
    todo("implement");
    float __result = _sub_636732(t);
    return __result;
}
#endif
