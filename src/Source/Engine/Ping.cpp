#if 0
/* ---------- headers */

#include "decomp.h"
#include <ATITemplate.h>
#include <ATI.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\gl\lotypes.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <profile\profile.h>
#include <iostream>
#include <luaconfig\luaconfig.h>
#include <savestream.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <new>
#include <MainUI.h>
#include <exception>
#include <xstddef>
#include <Render\objects\core.h>
#include <Selector.h>
#include <type_traits>
#include <MetaSelTarg.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <Render\objects\cliprect.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <platform\sysinputinterface.h>
#include <Interpolation.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Interface.h>
#include <AxisAlignBox.h>
#include <math.h>
#include <SoundManager\SoundEntityHandle.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <platform\windowinterface.h>
#include <Pieplate.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <fixedpoint.h>
#include <SensorsManager.h>
#include <Mathlib\vector4.h>
#include <util\fixed.h>
#include <Sphere.h>
#include <SoundManager\SoundManager.h>
#include <Volume.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <VolumeStatic.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <map>
#include <SobUnmoveableStatic.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\vector2.h>
#include <scripting.h>
#include <util\types.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <Mathlib\mathutil.h>
#include <boost\cstdint.hpp>
#include <lua.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <abilities.h>
#include <Render\objects\fontsystem.h>
#include <boost\scoped_array.hpp>
#include <CameraCommand.h>
#include <Render\objects\objects.h>
#include <CameraHW.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\quat.h>
#include <Camera\CameraOrbitTarget.h>
#include <hash_map>
#include <UserInterface\signals.h>
#include <Camera\OrbitParameters.h>
#include <xhash>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <SobUnmoveable.h>
#include <Collision\BVH\profiling.h>
#include <Render\objects\compiledtext.h>
#include <assist\typemagic.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <savegamedata.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Menus\MenuSupport.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\keydefines.h>
#include <Render\objects\debugrender.h>
#include <seInterface2\sedefinesshared.h>
#include <platform\osdef.h>
#include <Ping.h>
#include <task.h>
#include <stack>
#include <sob.h>
#include <localizer\localizer.h>
#include <sobstatic.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\sphere.h>
#include <renderer.h>
#include <Point.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

class ATITemplatePing :
    public ATITemplate
{
public:
    ATITemplatePing(ATITemplatePing const &); /* compiler_generated() */
    ATITemplatePing(LuaConfig &, char const *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x18
    float m_minGrowSize; // 0x30
    float m_maxGrowSize; // 0x34
    float m_minWorldSize; // 0x38
    float m_growTime; // 0x3C
    float m_pauseTime; // 0x40
    float m_lifespan; // 0x44
    vector4 m_footColour; // 0x48
    vector4 m_mouseOverFootColour; // 0x58
    float m_metaSelPriority; // 0x68
    float m_metaSelPrioritySM; // 0x6C
    float m_minScreenWidth; // 0x70
    float m_minScreenHeight; // 0x74
    float m_maxScreenWidth; // 0x78
    float m_maxScreenHeight; // 0x7C
    PatchID m_pingPatch; // 0x80
    PatchID m_emitterPatch; // 0x84
    float m_battleStatusBad; // 0x88
    float m_battleStatusGood; // 0x8C
    PatchID m_battleGoodPatch; // 0x90
    PatchID m_battleBadPatch; // 0x94
    _inline ~ATITemplatePing(); /* compiler_generated() */
    ATITemplatePing &operator=(ATITemplatePing const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplatePing) == 152, "Invalid ATITemplatePing size");

typedef void (*KeyDownFunc)(unsigned __int32);
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,PingBase *> > > > PingMapI;

/* ---------- prototypes */

/* ---------- globals */

extern char const PingPoint::m_saveToken[0]; // 0x7ADFE8
extern char const PingOwner::m_saveToken[0]; // 0x7AE038
extern char const PingSelection::m_saveToken[0]; // 0x7AE088
extern char const PingSelectionList::m_saveToken[0]; // 0x7AE0B8
extern float PingManagerUpdateRate; // 0x83C850
extern float PingManagerUpdatePeriod; // 0x84A884
extern char const PingManager::m_saveToken[12]; // 0x7ADE50
extern SaveData const PingManager::m_saveData[2]; // 0x7ADE68
extern char const PingBase::m_saveToken[9]; // 0x7ADE5C
extern SaveData const PingBase::m_saveData[10]; // 0x7ADEA8
extern SaveData const PingPoint::m_saveData[2]; // 0x7ADFF8
extern SaveData const PingOwner::m_saveData[2]; // 0x7AE048
extern SaveData const PingSelection::m_saveData[1]; // 0x7AE098
extern SaveData const PingSelectionList::m_saveData[2]; // 0x7AE0D0

/* ---------- private variables */

_static
{
    extern PingManager *s_instance; // 0x84A880
    extern ATIPossibleVisFlag pingVisibilityFlags[17]; // 0x83C858
}

/* ---------- public code */

ATITemplatePing::ATITemplatePing(LuaConfig &, char const *) // 0x61A652
{
    mangled_assert("??0ATITemplatePing@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
}

bool PingManager::Startup() // 0x61B429
{
    mangled_assert("?Startup@PingManager@@SG_NXZ");
    todo("implement");
}

bool PingManager::Shutdown() // 0x61B40F
{
    mangled_assert("?Shutdown@PingManager@@SG_NXZ");
    todo("implement");
}

bool PingManager::SaveModule(SaveGameData *saveGameData, SaveType saveType) // 0x61B404
{
    mangled_assert("?SaveModule@PingManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool PingManager::RestoreModule(SaveGameData *saveGameData) // 0x61B3F4
{
    mangled_assert("?RestoreModule@PingManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingManager::restore(SaveGameData *) // 0x61C98C
{
    mangled_assert("?restore@PingManager@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingManager::save(SaveGameData *, SaveType) // 0x61CB28
{
    mangled_assert("?save@PingManager@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void PingManager::savePingMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x619E51
{
    mangled_assert("?savePingMap@PingManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void PingManager::restorePingMap(void *objectPtr, SaveGameData *saveGameData) // 0x619EA8
{
    mangled_assert("?restorePingMap@PingManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

PingManager::PingManager() // 0x61AA7B
{
    mangled_assert("??0PingManager@@AAE@XZ");
    todo("implement");
}

PingManager::~PingManager() // 0x61B015
{
    mangled_assert("??1PingManager@@EAE@XZ");
    todo("implement");
}

_inline PingSelectionList::~PingSelectionList() // 0x61B178
{
    mangled_assert("??1PingSelectionList@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

PingManager *PingManager::Instance() // 0x61B3EE
{
    mangled_assert("?Instance@PingManager@@SGPAV1@XZ");
    todo("implement");
}

unsigned __int32 PingManager::addPointPing(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *) // 0x61B93B
{
    mangled_assert("?addPointPing@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
}

unsigned __int32 PingManager::addPointPing(wchar_t const *, char const *, vector3 const &, matrix3 const *) // 0x61B99E
{
    mangled_assert("?addPointPing@PingManager@@QAEIPB_WPBDABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
}

unsigned __int32 PingManager::addOwnerPing(wchar_t const *, ATITemplatePing *, Sob *, bool) // 0x61B8AD
{
    mangled_assert("?addOwnerPing@PingManager@@QAEIPB_WPAVATITemplatePing@@PAVSob@@_N@Z");
    todo("implement");
}

unsigned __int32 PingManager::addOwnerPing(wchar_t const *, char const *, Sob *, bool) // 0x61B917
{
    mangled_assert("?addOwnerPing@PingManager@@QAEIPB_WPBDPAVSob@@_N@Z");
    todo("implement");
}

unsigned __int32 PingManager::addSelectionPing(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61B9C2
{
    mangled_assert("?addSelectionPing@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
}

unsigned __int32 PingManager::addSelectionPing(wchar_t const *, char const *, Selection const &) // 0x61BA22
{
    mangled_assert("?addSelectionPing@PingManager@@QAEIPB_WPBDABVSelection@@@Z");
    todo("implement");
}

unsigned __int32 PingManager::addSelectionPingList(wchar_t const *, char const *, Selection const &) // 0x61BAA2
{
    mangled_assert("?addSelectionPingList@PingManager@@QAEIPB_WPBDABVSelection@@@Z");
    todo("implement");
}

unsigned __int32 PingManager::addSelectionPingList(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61BA42
{
    mangled_assert("?addSelectionPingList@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
}

PingBase *PingManager::findPing(unsigned __int32) // 0x61BED0
{
    mangled_assert("?findPing@PingManager@@AAEPAVPingBase@@I@Z");
    todo("implement");
}

__int32 PingManager::taskFunction(float) // 0x61CD1E
{
    mangled_assert("?taskFunction@PingManager@@UAEHM@Z");
    todo("implement");
}

bool PingManager::removePing(unsigned __int32) // 0x61C0AE
{
    mangled_assert("?removePing@PingManager@@QAE_NI@Z");
    todo("implement");
}

bool PingManager::removePing(Sob *) // 0x61C0F2
{
    mangled_assert("?removePing@PingManager@@QAE_NPAVSob@@@Z");
    todo("implement");
}

bool PingManager::setPingLabel(unsigned __int32, bool) // 0x61CCCB
{
    mangled_assert("?setPingLabel@PingManager@@QAE_NI_N@Z");
    todo("implement");
}

bool PingManager::setPingParameter(unsigned __int32, PingManager::PingParameter, float) // 0x61CCEB
{
    mangled_assert("?setPingParameter@PingManager@@QAE_NIW4PingParameter@1@M@Z");
    todo("implement");
}

bool PingManager::setPingDescription(unsigned __int32, unsigned __int32, wchar_t const *) // 0x61CC8A
{
    mangled_assert("?setPingDescription@PingManager@@QAE_NIIPB_W@Z");
    todo("implement");
}

ATITemplatePing *PingManager::findTemplate(char const *) const // 0x61BEFA
{
    mangled_assert("?findTemplate@PingManager@@QBEPAVATITemplatePing@@PBD@Z");
    todo("implement");
}

void PingManager::render(Camera const *, float, float) // 0x61C522
{
    mangled_assert("?render@PingManager@@QAEXPBVCamera@@MM@Z");
    todo("implement");
}

void PingManager::addMetaSelTargs(Camera const *, bool) // 0x61B79A
{
    mangled_assert("?addMetaSelTargs@PingManager@@QAEXPBVCamera@@_N@Z");
    todo("implement");
}

PingBase::PingBase(wchar_t const *, ATITemplatePing *) // 0x61A979
{
    mangled_assert("??0PingBase@@QAE@PB_WPAVATITemplatePing@@@Z");
    todo("implement");
}

PingBase::PingBase(SaveGameData *) // 0x61A90B
{
    mangled_assert("??0PingBase@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PingBase::postRestore() // 0x61C00D
{
    mangled_assert("?postRestore@PingBase@@UAEXXZ");
    todo("implement");
}

void PingBase::saveTemplateName(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x619F09
{
    mangled_assert("?saveTemplateName@PingBase@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void PingBase::restoreTemplateName(void *objectPtr, SaveGameData *saveGameData) // 0x619F2A
{
    mangled_assert("?restoreTemplateName@PingBase@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingBase::restore(SaveGameData *) // 0x61C94E
{
    mangled_assert("?restore@PingBase@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingBase::save(SaveGameData *, SaveType) // 0x61CAF3
{
    mangled_assert("?save@PingBase@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PingBase::~PingBase() // 0x61AFA8
{
    mangled_assert("??1PingBase@@UAE@XZ");
    todo("implement");
}

float PingBase::evaluateSize(float) // 0x61BE26
{
    mangled_assert("?evaluateSize@PingBase@@QAEMM@Z");
    todo("implement");
}

bool PingBase::update(Camera const *, float) // 0x61CDC1
{
    mangled_assert("?update@PingBase@@UAE_NPBVCamera@@M@Z");
    todo("implement");
}

void PingBase::render(Camera const *, float, float, unsigned __int32) // 0x61C1A2
{
    mangled_assert("?render@PingBase@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
}

PingPoint::PingPoint(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *) // 0x61ACCD
{
    mangled_assert("??0PingPoint@@QAE@PB_WPAVATITemplatePing@@ABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
}

PingPoint::PingPoint(SaveGameData *) // 0x61ACB5
{
    mangled_assert("??0PingPoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PingPoint::postRestore() // 0x61C04D
{
    mangled_assert("?postRestore@PingPoint@@UAEXXZ");
    todo("implement");
}

bool PingPoint::restore(SaveGameData *) // 0x61CA0C
{
    mangled_assert("?restore@PingPoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingPoint::save(SaveGameData *, SaveType) // 0x61CB97
{
    mangled_assert("?save@PingPoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PingOwner::PingOwner(wchar_t const *, ATITemplatePing *, Sob *) // 0x61AC3D
{
    mangled_assert("??0PingOwner@@QAE@PB_WPAVATITemplatePing@@PAVSob@@@Z");
    todo("implement");
}

bool PingOwner::update(Camera const *, float) // 0x61CDD1
{
    mangled_assert("?update@PingOwner@@UAE_NPBVCamera@@M@Z");
    todo("implement");
}

void PingOwner::render(Camera const *, float, float, unsigned __int32) // 0x61C838
{
    mangled_assert("?render@PingOwner@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
}

PingOwner::PingOwner(SaveGameData *) // 0x61ABFC
{
    mangled_assert("??0PingOwner@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PingOwner::postRestore() // 0x61C048
{
    mangled_assert("?postRestore@PingOwner@@UAEXXZ");
    todo("implement");
}

bool PingOwner::restore(SaveGameData *) // 0x61C9BF
{
    mangled_assert("?restore@PingOwner@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingOwner::save(SaveGameData *, SaveType) // 0x61CB50
{
    mangled_assert("?save@PingOwner@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PingSelection::PingSelection(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61ADA5
{
    mangled_assert("??0PingSelection@@QAE@PB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
}

bool PingSelection::update(Camera const *, float) // 0x61CE1D
{
    mangled_assert("?update@PingSelection@@UAE_NPBVCamera@@M@Z");
    todo("implement");
}

void PingSelection::render(Camera const *, float, float, unsigned __int32) // 0x61C876
{
    mangled_assert("?render@PingSelection@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
}

PingSelection::PingSelection(SaveGameData *) // 0x61AD66
{
    mangled_assert("??0PingSelection@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PingSelection::postRestore() // 0x61C052
{
    mangled_assert("?postRestore@PingSelection@@UAEXXZ");
    todo("implement");
}

bool PingSelection::restore(SaveGameData *) // 0x61CA59
{
    mangled_assert("?restore@PingSelection@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingSelection::save(SaveGameData *, SaveType) // 0x61CBDE
{
    mangled_assert("?save@PingSelection@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

PingSelectionList::PingSelectionList(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61AE71
{
    mangled_assert("??0PingSelectionList@@QAE@PB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<unsigned int const ,PingBase *>,std::allocator<std::pair<unsigned int const ,PingBase *> > >::~_Tree_buy<std::pair<unsigned int const ,PingBase *>,std::allocator<std::pair<unsigned int const ,PingBase *> > >() // 0x61AF1C
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVPingBase@@@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> >,0> >() // 0x61AF25
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVPingBase@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > >::~map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > >() // 0x61AF2E
{
    mangled_assert("??1?$map@IPAVPingBase@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ATITemplatePing::~ATITemplatePing() // 0x61AF38
{
    mangled_assert("??1ATITemplatePing@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool PingSelectionList::update(Camera const *, float) // 0x61CE55
{
    mangled_assert("?update@PingSelectionList@@UAE_NPBVCamera@@M@Z");
    todo("implement");
}

void PingSelectionList::render(Camera const *, float, float, unsigned __int32) // 0x61C8E1
{
    mangled_assert("?render@PingSelectionList@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
}

PingSelectionList::PingSelectionList(SaveGameData *) // 0x61AE21
{
    mangled_assert("??0PingSelectionList@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void PingSelectionList::postRestore() // 0x61C057
{
    mangled_assert("?postRestore@PingSelectionList@@UAEXXZ");
    todo("implement");
}

bool PingSelectionList::restore(SaveGameData *) // 0x61CAA6
{
    mangled_assert("?restore@PingSelectionList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool PingSelectionList::save(SaveGameData *, SaveType) // 0x61CC25
{
    mangled_assert("?save@PingSelectionList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
