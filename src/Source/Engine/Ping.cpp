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

_extern _sub_61A652(ATITemplatePing *const, LuaConfig &, char const *);
ATITemplatePing::ATITemplatePing(LuaConfig &, char const *) // 0x61A652
{
    mangled_assert("??0ATITemplatePing@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_61A652(this, arg, arg);
}

_extern bool _sub_61B429();
bool PingManager::Startup() // 0x61B429
{
    mangled_assert("?Startup@PingManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_61B429();
    return __result;
}

_extern bool _sub_61B40F();
bool PingManager::Shutdown() // 0x61B40F
{
    mangled_assert("?Shutdown@PingManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_61B40F();
    return __result;
}

_extern bool _sub_61B404(SaveGameData *, SaveType);
bool PingManager::SaveModule(SaveGameData *saveGameData, SaveType saveType) // 0x61B404
{
    mangled_assert("?SaveModule@PingManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61B404(saveGameData, saveType);
    return __result;
}

_extern bool _sub_61B3F4(SaveGameData *);
bool PingManager::RestoreModule(SaveGameData *saveGameData) // 0x61B3F4
{
    mangled_assert("?RestoreModule@PingManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61B3F4(saveGameData);
    return __result;
}

_extern bool _sub_61C98C(PingManager *const, SaveGameData *);
bool PingManager::restore(SaveGameData *) // 0x61C98C
{
    mangled_assert("?restore@PingManager@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61C98C(this, arg);
    return __result;
}

_extern bool _sub_61CB28(PingManager *const, SaveGameData *, SaveType);
bool PingManager::save(SaveGameData *, SaveType) // 0x61CB28
{
    mangled_assert("?save@PingManager@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CB28(this, arg, arg);
    return __result;
}

_extern void _sub_619E51(void *, SaveGameData *, SaveType);
void PingManager::savePingMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x619E51
{
    mangled_assert("?savePingMap@PingManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_619E51(objectPtr, saveGameData, savetype);
}

_extern void _sub_619EA8(void *, SaveGameData *);
void PingManager::restorePingMap(void *objectPtr, SaveGameData *saveGameData) // 0x619EA8
{
    mangled_assert("?restorePingMap@PingManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_619EA8(objectPtr, saveGameData);
}

_extern _sub_61AA7B(PingManager *const);
PingManager::PingManager() // 0x61AA7B
{
    mangled_assert("??0PingManager@@AAE@XZ");
    todo("implement");
    _sub_61AA7B(this);
}

_extern void _sub_61B015(PingManager *const);
PingManager::~PingManager() // 0x61B015
{
    mangled_assert("??1PingManager@@EAE@XZ");
    todo("implement");
    _sub_61B015(this);
}

_extern void _sub_61B178(PingSelectionList *const);
_inline PingSelectionList::~PingSelectionList() // 0x61B178
{
    mangled_assert("??1PingSelectionList@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61B178(this);
}

_extern PingManager *_sub_61B3EE();
PingManager *PingManager::Instance() // 0x61B3EE
{
    mangled_assert("?Instance@PingManager@@SGPAV1@XZ");
    todo("implement");
    PingManager * __result = _sub_61B3EE();
    return __result;
}

_extern unsigned __int32 _sub_61B93B(PingManager *const, wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *);
unsigned __int32 PingManager::addPointPing(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *) // 0x61B93B
{
    mangled_assert("?addPointPing@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61B93B(this, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61B99E(PingManager *const, wchar_t const *, char const *, vector3 const &, matrix3 const *);
unsigned __int32 PingManager::addPointPing(wchar_t const *, char const *, vector3 const &, matrix3 const *) // 0x61B99E
{
    mangled_assert("?addPointPing@PingManager@@QAEIPB_WPBDABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61B99E(this, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61B8AD(PingManager *const, wchar_t const *, ATITemplatePing *, Sob *, bool);
unsigned __int32 PingManager::addOwnerPing(wchar_t const *, ATITemplatePing *, Sob *, bool) // 0x61B8AD
{
    mangled_assert("?addOwnerPing@PingManager@@QAEIPB_WPAVATITemplatePing@@PAVSob@@_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61B8AD(this, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61B917(PingManager *const, wchar_t const *, char const *, Sob *, bool);
unsigned __int32 PingManager::addOwnerPing(wchar_t const *, char const *, Sob *, bool) // 0x61B917
{
    mangled_assert("?addOwnerPing@PingManager@@QAEIPB_WPBDPAVSob@@_N@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61B917(this, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61B9C2(PingManager *const, wchar_t const *, ATITemplatePing *, Selection const &);
unsigned __int32 PingManager::addSelectionPing(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61B9C2
{
    mangled_assert("?addSelectionPing@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61B9C2(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61BA22(PingManager *const, wchar_t const *, char const *, Selection const &);
unsigned __int32 PingManager::addSelectionPing(wchar_t const *, char const *, Selection const &) // 0x61BA22
{
    mangled_assert("?addSelectionPing@PingManager@@QAEIPB_WPBDABVSelection@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61BA22(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61BAA2(PingManager *const, wchar_t const *, char const *, Selection const &);
unsigned __int32 PingManager::addSelectionPingList(wchar_t const *, char const *, Selection const &) // 0x61BAA2
{
    mangled_assert("?addSelectionPingList@PingManager@@QAEIPB_WPBDABVSelection@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61BAA2(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_61BA42(PingManager *const, wchar_t const *, ATITemplatePing *, Selection const &);
unsigned __int32 PingManager::addSelectionPingList(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61BA42
{
    mangled_assert("?addSelectionPingList@PingManager@@QAEIPB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_61BA42(this, arg, arg, arg);
    return __result;
}

_extern PingBase *_sub_61BED0(PingManager *const, unsigned __int32);
PingBase *PingManager::findPing(unsigned __int32) // 0x61BED0
{
    mangled_assert("?findPing@PingManager@@AAEPAVPingBase@@I@Z");
    todo("implement");
    PingBase * __result = _sub_61BED0(this, arg);
    return __result;
}

_extern __int32 _sub_61CD1E(PingManager *const, float);
__int32 PingManager::taskFunction(float) // 0x61CD1E
{
    mangled_assert("?taskFunction@PingManager@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_61CD1E(this, arg);
    return __result;
}

_extern bool _sub_61C0AE(PingManager *const, unsigned __int32);
bool PingManager::removePing(unsigned __int32) // 0x61C0AE
{
    mangled_assert("?removePing@PingManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_61C0AE(this, arg);
    return __result;
}

_extern bool _sub_61C0F2(PingManager *const, Sob *);
bool PingManager::removePing(Sob *) // 0x61C0F2
{
    mangled_assert("?removePing@PingManager@@QAE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_61C0F2(this, arg);
    return __result;
}

_extern bool _sub_61CCCB(PingManager *const, unsigned __int32, bool);
bool PingManager::setPingLabel(unsigned __int32, bool) // 0x61CCCB
{
    mangled_assert("?setPingLabel@PingManager@@QAE_NI_N@Z");
    todo("implement");
    bool __result = _sub_61CCCB(this, arg, arg);
    return __result;
}

_extern bool _sub_61CCEB(PingManager *const, unsigned __int32, PingManager::PingParameter, float);
bool PingManager::setPingParameter(unsigned __int32, PingManager::PingParameter, float) // 0x61CCEB
{
    mangled_assert("?setPingParameter@PingManager@@QAE_NIW4PingParameter@1@M@Z");
    todo("implement");
    bool __result = _sub_61CCEB(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_61CC8A(PingManager *const, unsigned __int32, unsigned __int32, wchar_t const *);
bool PingManager::setPingDescription(unsigned __int32, unsigned __int32, wchar_t const *) // 0x61CC8A
{
    mangled_assert("?setPingDescription@PingManager@@QAE_NIIPB_W@Z");
    todo("implement");
    bool __result = _sub_61CC8A(this, arg, arg, arg);
    return __result;
}

_extern ATITemplatePing *_sub_61BEFA(PingManager const *const, char const *);
ATITemplatePing *PingManager::findTemplate(char const *) const // 0x61BEFA
{
    mangled_assert("?findTemplate@PingManager@@QBEPAVATITemplatePing@@PBD@Z");
    todo("implement");
    ATITemplatePing * __result = _sub_61BEFA(this, arg);
    return __result;
}

_extern void _sub_61C522(PingManager *const, Camera const *, float, float);
void PingManager::render(Camera const *, float, float) // 0x61C522
{
    mangled_assert("?render@PingManager@@QAEXPBVCamera@@MM@Z");
    todo("implement");
    _sub_61C522(this, arg, arg, arg);
}

_extern void _sub_61B79A(PingManager *const, Camera const *, bool);
void PingManager::addMetaSelTargs(Camera const *, bool) // 0x61B79A
{
    mangled_assert("?addMetaSelTargs@PingManager@@QAEXPBVCamera@@_N@Z");
    todo("implement");
    _sub_61B79A(this, arg, arg);
}

_extern _sub_61A979(PingBase *const, wchar_t const *, ATITemplatePing *);
PingBase::PingBase(wchar_t const *, ATITemplatePing *) // 0x61A979
{
    mangled_assert("??0PingBase@@QAE@PB_WPAVATITemplatePing@@@Z");
    todo("implement");
    _sub_61A979(this, arg, arg);
}

_extern _sub_61A90B(PingBase *const, SaveGameData *);
PingBase::PingBase(SaveGameData *) // 0x61A90B
{
    mangled_assert("??0PingBase@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_61A90B(this, arg);
}

_extern void _sub_61C00D(PingBase *const);
void PingBase::postRestore() // 0x61C00D
{
    mangled_assert("?postRestore@PingBase@@UAEXXZ");
    todo("implement");
    _sub_61C00D(this);
}

_extern void _sub_619F09(void *, SaveGameData *, SaveType);
void PingBase::saveTemplateName(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x619F09
{
    mangled_assert("?saveTemplateName@PingBase@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_619F09(objectPtr, saveGameData, savetype);
}

_extern void _sub_619F2A(void *, SaveGameData *);
void PingBase::restoreTemplateName(void *objectPtr, SaveGameData *saveGameData) // 0x619F2A
{
    mangled_assert("?restoreTemplateName@PingBase@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_619F2A(objectPtr, saveGameData);
}

_extern bool _sub_61C94E(PingBase *const, SaveGameData *);
bool PingBase::restore(SaveGameData *) // 0x61C94E
{
    mangled_assert("?restore@PingBase@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61C94E(this, arg);
    return __result;
}

_extern bool _sub_61CAF3(PingBase *const, SaveGameData *, SaveType);
bool PingBase::save(SaveGameData *, SaveType) // 0x61CAF3
{
    mangled_assert("?save@PingBase@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CAF3(this, arg, arg);
    return __result;
}

_extern void _sub_61AFA8(PingBase *const);
PingBase::~PingBase() // 0x61AFA8
{
    mangled_assert("??1PingBase@@UAE@XZ");
    todo("implement");
    _sub_61AFA8(this);
}

_extern float _sub_61BE26(PingBase *const, float);
float PingBase::evaluateSize(float) // 0x61BE26
{
    mangled_assert("?evaluateSize@PingBase@@QAEMM@Z");
    todo("implement");
    float __result = _sub_61BE26(this, arg);
    return __result;
}

_extern bool _sub_61CDC1(PingBase *const, Camera const *, float);
bool PingBase::update(Camera const *, float) // 0x61CDC1
{
    mangled_assert("?update@PingBase@@UAE_NPBVCamera@@M@Z");
    todo("implement");
    bool __result = _sub_61CDC1(this, arg, arg);
    return __result;
}

_extern void _sub_61C1A2(PingBase *const, Camera const *, float, float, unsigned __int32);
void PingBase::render(Camera const *, float, float, unsigned __int32) // 0x61C1A2
{
    mangled_assert("?render@PingBase@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
    _sub_61C1A2(this, arg, arg, arg, arg);
}

_extern _sub_61ACCD(PingPoint *const, wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *);
PingPoint::PingPoint(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *) // 0x61ACCD
{
    mangled_assert("??0PingPoint@@QAE@PB_WPAVATITemplatePing@@ABVvector3@@PBVmatrix3@@@Z");
    todo("implement");
    _sub_61ACCD(this, arg, arg, arg, arg);
}

_extern _sub_61ACB5(PingPoint *const, SaveGameData *);
PingPoint::PingPoint(SaveGameData *) // 0x61ACB5
{
    mangled_assert("??0PingPoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_61ACB5(this, arg);
}

_extern void _sub_61C04D(PingPoint *const);
void PingPoint::postRestore() // 0x61C04D
{
    mangled_assert("?postRestore@PingPoint@@UAEXXZ");
    todo("implement");
    _sub_61C04D(this);
}

_extern bool _sub_61CA0C(PingPoint *const, SaveGameData *);
bool PingPoint::restore(SaveGameData *) // 0x61CA0C
{
    mangled_assert("?restore@PingPoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61CA0C(this, arg);
    return __result;
}

_extern bool _sub_61CB97(PingPoint *const, SaveGameData *, SaveType);
bool PingPoint::save(SaveGameData *, SaveType) // 0x61CB97
{
    mangled_assert("?save@PingPoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CB97(this, arg, arg);
    return __result;
}

_extern _sub_61AC3D(PingOwner *const, wchar_t const *, ATITemplatePing *, Sob *);
PingOwner::PingOwner(wchar_t const *, ATITemplatePing *, Sob *) // 0x61AC3D
{
    mangled_assert("??0PingOwner@@QAE@PB_WPAVATITemplatePing@@PAVSob@@@Z");
    todo("implement");
    _sub_61AC3D(this, arg, arg, arg);
}

_extern bool _sub_61CDD1(PingOwner *const, Camera const *, float);
bool PingOwner::update(Camera const *, float) // 0x61CDD1
{
    mangled_assert("?update@PingOwner@@UAE_NPBVCamera@@M@Z");
    todo("implement");
    bool __result = _sub_61CDD1(this, arg, arg);
    return __result;
}

_extern void _sub_61C838(PingOwner *const, Camera const *, float, float, unsigned __int32);
void PingOwner::render(Camera const *, float, float, unsigned __int32) // 0x61C838
{
    mangled_assert("?render@PingOwner@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
    _sub_61C838(this, arg, arg, arg, arg);
}

_extern _sub_61ABFC(PingOwner *const, SaveGameData *);
PingOwner::PingOwner(SaveGameData *) // 0x61ABFC
{
    mangled_assert("??0PingOwner@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_61ABFC(this, arg);
}

_extern void _sub_61C048(PingOwner *const);
void PingOwner::postRestore() // 0x61C048
{
    mangled_assert("?postRestore@PingOwner@@UAEXXZ");
    todo("implement");
    _sub_61C048(this);
}

_extern bool _sub_61C9BF(PingOwner *const, SaveGameData *);
bool PingOwner::restore(SaveGameData *) // 0x61C9BF
{
    mangled_assert("?restore@PingOwner@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61C9BF(this, arg);
    return __result;
}

_extern bool _sub_61CB50(PingOwner *const, SaveGameData *, SaveType);
bool PingOwner::save(SaveGameData *, SaveType) // 0x61CB50
{
    mangled_assert("?save@PingOwner@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CB50(this, arg, arg);
    return __result;
}

_extern _sub_61ADA5(PingSelection *const, wchar_t const *, ATITemplatePing *, Selection const &);
PingSelection::PingSelection(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61ADA5
{
    mangled_assert("??0PingSelection@@QAE@PB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
    _sub_61ADA5(this, arg, arg, arg);
}

_extern bool _sub_61CE1D(PingSelection *const, Camera const *, float);
bool PingSelection::update(Camera const *, float) // 0x61CE1D
{
    mangled_assert("?update@PingSelection@@UAE_NPBVCamera@@M@Z");
    todo("implement");
    bool __result = _sub_61CE1D(this, arg, arg);
    return __result;
}

_extern void _sub_61C876(PingSelection *const, Camera const *, float, float, unsigned __int32);
void PingSelection::render(Camera const *, float, float, unsigned __int32) // 0x61C876
{
    mangled_assert("?render@PingSelection@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
    _sub_61C876(this, arg, arg, arg, arg);
}

_extern _sub_61AD66(PingSelection *const, SaveGameData *);
PingSelection::PingSelection(SaveGameData *) // 0x61AD66
{
    mangled_assert("??0PingSelection@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_61AD66(this, arg);
}

_extern void _sub_61C052(PingSelection *const);
void PingSelection::postRestore() // 0x61C052
{
    mangled_assert("?postRestore@PingSelection@@UAEXXZ");
    todo("implement");
    _sub_61C052(this);
}

_extern bool _sub_61CA59(PingSelection *const, SaveGameData *);
bool PingSelection::restore(SaveGameData *) // 0x61CA59
{
    mangled_assert("?restore@PingSelection@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61CA59(this, arg);
    return __result;
}

_extern bool _sub_61CBDE(PingSelection *const, SaveGameData *, SaveType);
bool PingSelection::save(SaveGameData *, SaveType) // 0x61CBDE
{
    mangled_assert("?save@PingSelection@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CBDE(this, arg, arg);
    return __result;
}

_extern _sub_61AE71(PingSelectionList *const, wchar_t const *, ATITemplatePing *, Selection const &);
PingSelectionList::PingSelectionList(wchar_t const *, ATITemplatePing *, Selection const &) // 0x61AE71
{
    mangled_assert("??0PingSelectionList@@QAE@PB_WPAVATITemplatePing@@ABVSelection@@@Z");
    todo("implement");
    _sub_61AE71(this, arg, arg, arg);
}

_extern void _sub_61AF1C(std::_Tree_buy<std::pair<unsigned int const ,PingBase *>,std::allocator<std::pair<unsigned int const ,PingBase *> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,PingBase *>,std::allocator<std::pair<unsigned int const ,PingBase *> > >::~_Tree_buy<std::pair<unsigned int const ,PingBase *>,std::allocator<std::pair<unsigned int const ,PingBase *> > >() // 0x61AF1C
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVPingBase@@@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61AF1C(this);
}

_extern void _sub_61AF25(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> >,0> >() // 0x61AF25
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVPingBase@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61AF25(this);
}

_extern void _sub_61AF2E(std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > *const);
_inline std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > >::~map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > >() // 0x61AF2E
{
    mangled_assert("??1?$map@IPAVPingBase@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVPingBase@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61AF2E(this);
}

_extern void _sub_61AF38(ATITemplatePing *const);
_inline ATITemplatePing::~ATITemplatePing() // 0x61AF38
{
    mangled_assert("??1ATITemplatePing@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61AF38(this);
}

_extern bool _sub_61CE55(PingSelectionList *const, Camera const *, float);
bool PingSelectionList::update(Camera const *, float) // 0x61CE55
{
    mangled_assert("?update@PingSelectionList@@UAE_NPBVCamera@@M@Z");
    todo("implement");
    bool __result = _sub_61CE55(this, arg, arg);
    return __result;
}

_extern void _sub_61C8E1(PingSelectionList *const, Camera const *, float, float, unsigned __int32);
void PingSelectionList::render(Camera const *, float, float, unsigned __int32) // 0x61C8E1
{
    mangled_assert("?render@PingSelectionList@@UAEXPBVCamera@@MMI@Z");
    todo("implement");
    _sub_61C8E1(this, arg, arg, arg, arg);
}

_extern _sub_61AE21(PingSelectionList *const, SaveGameData *);
PingSelectionList::PingSelectionList(SaveGameData *) // 0x61AE21
{
    mangled_assert("??0PingSelectionList@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_61AE21(this, arg);
}

_extern void _sub_61C057(PingSelectionList *const);
void PingSelectionList::postRestore() // 0x61C057
{
    mangled_assert("?postRestore@PingSelectionList@@UAEXXZ");
    todo("implement");
    _sub_61C057(this);
}

_extern bool _sub_61CAA6(PingSelectionList *const, SaveGameData *);
bool PingSelectionList::restore(SaveGameData *) // 0x61CAA6
{
    mangled_assert("?restore@PingSelectionList@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_61CAA6(this, arg);
    return __result;
}

_extern bool _sub_61CC25(PingSelectionList *const, SaveGameData *, SaveType);
bool PingSelectionList::save(SaveGameData *, SaveType) // 0x61CC25
{
    mangled_assert("?save@PingSelectionList@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_61CC25(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
