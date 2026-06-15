#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <seInterface2\SampleID.h>
#include <NIS\NIS.h>
#include <xstring>
#include <seInterface2\SampleBase.h>
#include <hash_map>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <NIS\NISDebug.h>
#include <assist\array2d.h>
#include <SOBGroupManager.h>
#include <Mathlib\matrix3.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <new>
#include <NavLightManager.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\gl\r_defines.h>
#include <Graphics\AutoLOD.h>
#include <Render\gl\glext.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Mathlib\mathutil.h>
#include <xmemory>
#include <seInterface2\sedefinesshared.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <abilities.h>
#include <UserInterface\Graphic.h>
#include <Scar\Scar.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\StyleSheet.h>
#include <compiler\compilerconfig.h>
#include <Scar\ScarEventSys.h>
#include <UserInterface\pch.h>
#include <luaconfig\luabinding.h>
#include <sobid.h>
#include <dbdefines.h>
#include <UserInterface\signals.h>
#include <list>
#include <stack>
#include <UnitCaps\UnitCaps.h>
#include <Render\objects\textureregistry.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\Internal\span_i.h>
#include <task.h>
#include <Collision\BVH\proxy.h>
#include <Cursor.h>
#include <map>
#include <Collision\intersect.h>
#include <Render\objects\texture.h>
#include <xtree>
#include <Collision\primitivesfwd.h>
#include <boost\smart_ptr.hpp>
#include <Render\objects\objects.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <cstdarg>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <stdarg.h>
#include <seInterface2\PatchBase.h>
#include <Universe.h>
#include <KeyBindings.h>
#include <seInterface2\SoundParams.h>
#include <mainuidefines.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <NURBSCurve.h>
#include <curve.h>
#include <cassert>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <subtitle.h>
#include <Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <Mathlib\quat.h>
#include <region.h>
#include <Menus\MenuSupport.h>
#include <platform\keydefines.h>
#include <assist\typemagic.h>
#include <HyperspaceManager.h>
#include <UserInterface\NewFrame.h>
#include <SquadronList.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <Mathlib\mathlibdll.h>
#include <platform\inputinterface.h>
#include <Mathlib\fastmath.h>
#include <renderer.h>
#include <Camera\OrbitParameters.h>
#include <GameObj.h>
#include <luaconfig\luaconfig.h>
#include <platform\osdef.h>
#include <CameraCommand.h>
#include <config.h>
#include <MainUI.h>
#include <CameraHW.h>
#include <Selector.h>
#include <Camera\CameraOrbitTarget.h>
#include <pathpoints.h>
#include <prim.h>
#include <Camera\Camera.h>
#include <util\statmonitor.h>
#include <debug\db.h>
#include <Camera\Frustum.h>
#include <util\utilexports.h>
#include <Camera\Plane3.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Scar\LuaRuleSystem.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\profiling.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <profile\profile.h>
#include <iostream>
#include <scripting.h>
#include <scriptaccess.h>
#include <sob.h>
#include <scripttypedef.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <NIS\NISCard.h>
#include <lua.h>
#include <NIS\NISManager.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <string>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <SimVis\FogOfWarVis.h>
#include <algorithm>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::DELETESECOND
{
};
static_assert(sizeof(`anonymous-namespace'::DELETESECOND) == 1, "Invalid `anonymous-namespace'::DELETESECOND size");

class `anonymous-namespace'::NISCardMatch
{
public:
    NISCardMatch(char const *);
    bool operator()(NISCard const *) const;
private:
    char const *m_cardName; // 0x0
};
static_assert(sizeof(`anonymous-namespace'::NISCardMatch) == 4, "Invalid `anonymous-namespace'::NISCardMatch size");

class `anonymous-namespace'::NISCardState
{
public:
    NISCardState();
    ~NISCardState();
private:
    bool const m_oldTexture0; // 0x0
    bool const m_oldBlend; // 0x1
    unsigned __int32 const m_oldSrc; // 0x4
    unsigned __int32 const m_oldDest; // 0x8
    vector4 const m_oldColour; // 0xC
};
static_assert(sizeof(`anonymous-namespace'::NISCardState) == 28, "Invalid `anonymous-namespace'::NISCardState size");

typedef std::vector<NISCard *,std::allocator<NISCard *> > NISCardList;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > > NISList;
typedef `anonymous-namespace'::DELETESECOND ?A0x8d24d8dd::DELETESECOND;
typedef `anonymous-namespace'::NISCardMatch ?A0x8d24d8dd::NISCardMatch;
typedef `anonymous-namespace'::NISCardState ?A0x8d24d8dd::NISCardState;

/* ---------- prototypes */

/* ---------- globals */

extern NISManager *NISManager::s_instance; // 0x84498C

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x8395C8
    extern float subtitleTwkScrollDwellEnd; // 0x8395CC
    extern float subtitleTwkScrollShortest; // 0x8395D0
    extern float subtitleTwkTitleShortest; // 0x8395D4
    extern float const NISUpdateRate; // 0x79F294
    extern float const NISUpdatePeriod; // 0x8395D8
}

/* ---------- public code */

NISManager::NISManager() // 0x5518FA
{
    mangled_assert("??0NISManager@@AAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > >() // 0x5519D0
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> >,0> >() // 0x5519D9
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *> > >() // 0x5519E2
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NIS *>() // 0x5519E7
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NIS *>() // 0x5519EC
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNIS@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NISManager::Data::~Data() // 0x5519F6
{
    mangled_assert("??1Data@NISManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NISManager::~NISManager() // 0x551A5D
{
    mangled_assert("??1NISManager@@AAE@XZ");
    todo("implement");
}

void NISManager::deleteNISs() // 0x55219C
{
    mangled_assert("?deleteNISs@NISManager@@AAEXXZ");
    todo("implement");
}

void NISManager::deleteNISCards() // 0x552163
{
    mangled_assert("?deleteNISCards@NISManager@@AAEXXZ");
    todo("implement");
}

NISManager *NISManager::i() // 0x55299B
{
    mangled_assert("?i@NISManager@@SGPAV1@XZ");
    todo("implement");
}

bool NISManager::startup() // 0x5532FB
{
    mangled_assert("?startup@NISManager@@SG_NXZ");
    todo("implement");
}

bool NISManager::shutdown() // 0x5532A3
{
    mangled_assert("?shutdown@NISManager@@SG_NXZ");
    todo("implement");
}

bool NISManager::isActive() // 0x5529A1
{
    mangled_assert("?isActive@NISManager@@QAE_NXZ");
    todo("implement");
}

bool NISManager::isCameraFree() // 0x5529B4
{
    mangled_assert("?isCameraFree@NISManager@@QAE_NXZ");
    todo("implement");
}

void NISManager::setTestFile(char const *) // 0x553282
{
    mangled_assert("?setTestFile@NISManager@@QAEXPBD@Z");
    todo("implement");
}

char const *NISManager::getTestFile() const // 0x55298B
{
    mangled_assert("?getTestFile@NISManager@@QBEPBDXZ");
    todo("implement");
}

void NISManager::freeCamera(bool) // 0x5527D7
{
    mangled_assert("?freeCamera@NISManager@@QAEX_N@Z");
    todo("implement");
}

unsigned __int32 NISManager::load(char const *) // 0x5529D2
{
    mangled_assert("?load@NISManager@@QAEIPBD@Z");
    todo("implement");
}

bool NISManager::unload(char const *) // 0x553477
{
    mangled_assert("?unload@NISManager@@QAE_NPBD@Z");
    todo("implement");
}

void NISManager::exitMovieMode(bool, bool) // 0x55259D
{
    mangled_assert("?exitMovieMode@NISManager@@AAEX_N0@Z");
    todo("implement");
}

void NISManager::movieMode(bool, bool, bool, bool) // 0x552B36
{
    mangled_assert("?movieMode@NISManager@@AAEX_N000@Z");
    todo("implement");
}

bool NISManager::isPlaying(unsigned __int32) const // 0x5529BE
{
    mangled_assert("?isPlaying@NISManager@@QBE_NI@Z");
    todo("implement");
}

bool NISManager::isAnyPlaying() const // 0x5529A6
{
    mangled_assert("?isAnyPlaying@NISManager@@QBE_NXZ");
    todo("implement");
}

unsigned __int32 NISManager::getPlayingHandle(char const *) const // 0x552932
{
    mangled_assert("?getPlayingHandle@NISManager@@QBEIPBD@Z");
    todo("implement");
}

unsigned __int32 NISManager::play(char const *, vector3 const &, matrix3 const &) // 0x552DCE
{
    mangled_assert("?play@NISManager@@QAEIPBDABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void NISManager::play(unsigned __int32, bool) // 0x552E71
{
    mangled_assert("?play@NISManager@@QAEXI_N@Z");
    todo("implement");
}

bool NISManager::stop() // 0x553341
{
    mangled_assert("?stop@NISManager@@QAE_NXZ");
    todo("implement");
}

bool NISManager::skip() // 0x5532D4
{
    mangled_assert("?skip@NISManager@@QAE_NXZ");
    todo("implement");
}

bool NISManager::pause(bool) // 0x552D88
{
    mangled_assert("?pause@NISManager@@QAE_N_N@Z");
    todo("implement");
}

bool NISManager::pauseToggle() // 0x552DA2
{
    mangled_assert("?pauseToggle@NISManager@@QAE_NXZ");
    todo("implement");
}

void NISManager::disableInterface(bool) // 0x5521C6
{
    mangled_assert("?disableInterface@NISManager@@QAEX_N@Z");
    todo("implement");
}

void NISManager::seek(float) // 0x55321B
{
    mangled_assert("?seek@NISManager@@QAEXM@Z");
    todo("implement");
}

void NISManager::seekForward(float) // 0x55323B
{
    mangled_assert("?seekForward@NISManager@@QAEXM@Z");
    todo("implement");
}

NISCard *NISManager::findCard(char const *) // 0x5527A9
{
    mangled_assert("?findCard@NISManager@@AAEPAVNISCard@@PBD@Z");
    todo("implement");
}

bool NISManager::displayCard(char const *, vector2 const &, vector2 const &, float, float, float, float) // 0x5521D9
{
    mangled_assert("?displayCard@NISManager@@QAE_NPBDABVvector2@@1MMMM@Z");
    todo("implement");
}

void NISManager::setEndFocus(Selection const &) // 0x55325B
{
    mangled_assert("?setEndFocus@NISManager@@QAEXABVSelection@@@Z");
    todo("implement");
}

void NISManager::setSkippable(bool) // 0x553273
{
    mangled_assert("?setSkippable@NISManager@@QAEX_N@Z");
    todo("implement");
}

void NISManager::visualize3D() // 0x5535FB
{
    mangled_assert("?visualize3D@NISManager@@QAEXXZ");
    todo("implement");
}

void NISManager::visualize2D() // 0x5535E8
{
    mangled_assert("?visualize2D@NISManager@@QAEXXZ");
    todo("implement");
}

void NISManager::updateCamera() // 0x553536
{
    mangled_assert("?updateCamera@NISManager@@AAEXXZ");
    todo("implement");
}

void NISManager::renderTimeUpdate(float) // 0x5531CD
{
    mangled_assert("?renderTimeUpdate@NISManager@@QAEXM@Z");
    todo("implement");
}

void NISManager::update(float) // 0x55350D
{
    mangled_assert("?update@NISManager@@QAEXM@Z");
    todo("implement");
}

void NISManager::render2D(float) // 0x552F4D
{
    mangled_assert("?render2D@NISManager@@QAEXM@Z");
    todo("implement");
}

_inline NISManager::Data::Data() // 0x551802
{
    mangled_assert("??0Data@NISManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
