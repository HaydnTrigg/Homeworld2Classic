#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\FxGL\FXRing.h>
#include <map>
#include <bitset>
#include <Render\FxGL\FXProperty.h>
#include <boost\scoped_ptr.hpp>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <limits>
#include <platform\osdef.h>
#include <Render\FxGL\FXHyperspace.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <Render\FxGL\FXDynamicsGravwell.h>
#include <Render\FxGL\fxsound.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\FxGL\sphere.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <xmemory>
#include <util\types.h>
#include <Render\FxGL\FXGL.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <math.h>
#include <Render\FxGL\FXLoad.h>
#include <string.h>
#include <Render\FxGL\FXConditional.h>
#include <Mathlib\vector3.h>
#include <Camera\CameraUtil.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <Render\FxGL\FXSpray.h>
#include <Render\FxGL\FXTrail.h>
#include <Render\FxGL\FXCombo.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <Render\FxGL\FXDynamicsPlanar.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <profile\profile.h>
#include <Camera\Camera.h>
#include <fileio\bytestream.h>
#include <iostream>
#include <boost\detail\shared_count.hpp>
#include <xtr1common>
#include <Camera\Frustum.h>
#include <assist\fixedstring.h>
#include <Camera\Plane3.h>
#include <assist\stlexstring.h>
#include <boost\detail\lwm_win32.hpp>
#include <Render\FxGL\FXDynamics.h>
#include <Render\FxGL\fxtimeinterface.h>
#include <fileio\logfile.h>
#include <boost\checked_delete.hpp>
#include <Render\FxGL\FXBeam.h>
#include <Render\gl\r_types.h>
#include <Render\FxGL\FXLight.h>
#include <Mathlib\matvec.h>
#include <Render\objects\light.h>
#include <Mathlib\vector2.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <Render\FxGL\FXLensFlare.h>
#include <Render\FxGL\FXShader.h>
#include <Render\FxGL\FXDynamicsLocal.h>
#include <debug\db.h>
#include <assist\typemagic.h>
#include <hash_map>
#include <xhash>
#include <list>
#include <wchar.h>
#include <string>
#include <memory\memoryfsalloc.h>
#include <iterator>
#include <memory\memorysmall.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::FXHead
{
    unsigned __int32 cacheId; // 0x0
    float timeBirth; // 0x4
    std::list<FXManager::Handle,mempool_fs_alloc<FXManager::Handle> > children; // 0x8
    FXHead(`anonymous-namespace'::FXHead const &); /* compiler_generated() */
    FXHead();
    FXManager::Object *ObjectPtr();
    FXManager::Object const *ObjectPtr() const;
    ~FXHead(); /* compiler_generated() */
    `anonymous-namespace'::FXHead &operator=(`anonymous-namespace'::FXHead const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FXHead) == 20, "Invalid `anonymous-namespace'::FXHead size");

struct `anonymous-namespace'::FXCache
{
    FXManager::Handle hObject; // 0x0
    FXManager::Dynamics *pDynamics; // 0x8
    float elapsedSeconds; // 0xC
    Spheref cullingSphere; // 0x10
    bool dead : 1; // 0x20
    bool forceUpdate : 1; // 0x20
    bool visible : 1; // 0x20
    bool onscreen : 1; // 0x20
    bool distanceCulled : 1; // 0x20
    bool noRender : 1; // 0x20
    bool farMode : 1; // 0x20
    FXCache(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FXCache) == 36, "Invalid `anonymous-namespace'::FXCache size");

struct `anonymous-namespace'::FXUpdate
{
    FXManager::Handle handle; // 0x0
    FXManager::Dynamics *dynamics; // 0x8
    float elapsedSeconds; // 0xC
    FXUpdate(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FXUpdate) == 16, "Invalid `anonymous-namespace'::FXUpdate size");

struct `anonymous-namespace'::FXRender
{
    FXManager::Handle handle; // 0x0
    FXManager::Type const *type; // 0x8
    float timeBirth; // 0xC
    float distanceOpacity; // 0x10
    bool operator<(`anonymous-namespace'::FXRender const &) const;
    FXRender(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FXRender) == 20, "Invalid `anonymous-namespace'::FXRender size");

/* ---------- prototypes */


_static void UpdateDead(std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > &deadList, FXMemory &memory);
_static void LightingInit(bool bEnable);
_static void DisplayInit(Camera const *camera, float alternateFOV);

/* ---------- globals */

extern FXManager::Handle FXManager::InvalidHandle; // 0x84CBB8

/* ---------- private variables */

_static
{
    extern MemPoolSmall s_poolDynamics; // 0x84CBB0
    extern char s_folder[260]; // 0x840FC8
    extern FXManager *s_instance; // 0x84CBAC
    extern MemPoolSmall s_poolChildren; // 0x84CBB4
    extern char const *BADFX; // 0x8410CC
    extern float const UPDATE_LATENT; // 0x7BD37C
    extern float const UPDATE_CLAMP; // 0x7BD380
    extern float const UPDATE_SPLIT; // 0x7BD384
    extern float const DISTCULLING_MIDAREA; // 0x7BD388
    extern float const DISTCULLING_MINAREA; // 0x7BD38C
    extern float const SIZE_ESTIMATE; // 0x7BD390
}

/* ---------- public code */

_extern _sub_6DBD8F(FXManager *const);
FXManager::FXManager() // 0x6DBD8F
{
    mangled_assert("??0FXManager@@AAE@XZ");
    todo("implement");
    _sub_6DBD8F(this);
}

_extern _sub_6DBB1A(boost::shared_ptr<FXManager::Dynamics> *const, boost::shared_ptr<FXManager::Dynamics> const &);
_inline boost::shared_ptr<FXManager::Dynamics>::shared_ptr<FXManager::Dynamics>(boost::shared_ptr<FXManager::Dynamics> const &) // 0x6DBB1A
{
    mangled_assert("??0?$shared_ptr@VDynamics@FXManager@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6DBB1A(this, arg);
}

_extern _sub_6DBB44(boost::shared_ptr<FXManager::Type> *const, boost::shared_ptr<FXManager::Type> const &);
_inline boost::shared_ptr<FXManager::Type>::shared_ptr<FXManager::Type>(boost::shared_ptr<FXManager::Type> const &) // 0x6DBB44
{
    mangled_assert("??0?$shared_ptr@VType@FXManager@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6DBB44(this, arg);
}

_extern _sub_6DBBF4(Camera *const, Camera const &);
_inline Camera::Camera(Camera const &) // 0x6DBBF4
{
    mangled_assert("??0Camera@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_6DBBF4(this, arg);
}

_extern _sub_6DBCAE(FXManager::Data *const);
_inline FXManager::Data::Data() // 0x6DBCAE
{
    mangled_assert("??0Data@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBCAE(this);
}

_extern void _sub_6DC201(FXManager *const);
FXManager::~FXManager() // 0x6DC201
{
    mangled_assert("??1FXManager@@AAE@XZ");
    todo("implement");
    _sub_6DC201(this);
}

_extern FXManager *_sub_6DD206();
FXManager *FXManager::Instance() // 0x6DD206
{
    mangled_assert("?Instance@FXManager@@SGPAV1@XZ");
    todo("implement");
    FXManager * __result = _sub_6DD206();
    return __result;
}

_extern bool _sub_6DCE5D();
bool FXManager::Initialize() // 0x6DCE5D
{
    mangled_assert("?Initialize@FXManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6DCE5D();
    return __result;
}

_extern bool _sub_6DE365();
bool FXManager::Shutdown() // 0x6DE365
{
    mangled_assert("?Shutdown@FXManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6DE365();
    return __result;
}

_extern void _sub_6DE33A(FXManager *const, float);
void FXManager::SetUpdateClamp(float) // 0x6DE33A
{
    mangled_assert("?SetUpdateClamp@FXManager@@QAEXM@Z");
    todo("implement");
    _sub_6DE33A(this, arg);
}

_extern float _sub_6DCDD6(FXManager const *const);
float FXManager::GetAlternateFOV() const // 0x6DCDD6
{
    mangled_assert("?GetAlternateFOV@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCDD6(this);
    return __result;
}

_extern void _sub_6DE20B(FXManager *const, float);
void FXManager::SetAlternateFOV(float) // 0x6DE20B
{
    mangled_assert("?SetAlternateFOV@FXManager@@QAEXM@Z");
    todo("implement");
    _sub_6DE20B(this, arg);
}

_extern void _sub_6DE26D(FXManager *const, float);
void FXManager::SetFadePointDistance(float) // 0x6DE26D
{
    mangled_assert("?SetFadePointDistance@FXManager@@QAEXM@Z");
    todo("implement");
    _sub_6DE26D(this, arg);
}

_extern float _sub_6DCDE8(FXManager const *const);
float FXManager::GetFadePointDistance() const // 0x6DCDE8
{
    mangled_assert("?GetFadePointDistance@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCDE8(this);
    return __result;
}

_extern void _sub_6DE2D4(FXManager *const, float);
void FXManager::SetMaxPointDistance(float) // 0x6DE2D4
{
    mangled_assert("?SetMaxPointDistance@FXManager@@QAEXM@Z");
    todo("implement");
    _sub_6DE2D4(this, arg);
}

_extern float _sub_6DCE04(FXManager const *const);
float FXManager::GetMaxPointDistance() const // 0x6DCE04
{
    mangled_assert("?GetMaxPointDistance@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCE04(this);
    return __result;
}

_extern void _sub_6DE2C5(FXManager *const, __int32);
void FXManager::SetMaxLightPriority(__int32) // 0x6DE2C5
{
    mangled_assert("?SetMaxLightPriority@FXManager@@QAEXH@Z");
    todo("implement");
    _sub_6DE2C5(this, arg);
}

_extern __int32 _sub_6DCDFB(FXManager const *const);
__int32 FXManager::GetMaxLightPriority() const // 0x6DCDFB
{
    mangled_assert("?GetMaxLightPriority@FXManager@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_6DCDFB(this);
    return __result;
}

_extern void _sub_6DE285(FXManager *const, bool);
void FXManager::SetFarMode(bool) // 0x6DE285
{
    mangled_assert("?SetFarMode@FXManager@@QAEX_N@Z");
    todo("implement");
    _sub_6DE285(this, arg);
}

_extern void _sub_6DE318(FXManager *const, FXTimeInterface *);
void FXManager::SetTimeInterface(FXTimeInterface *) // 0x6DE318
{
    mangled_assert("?SetTimeInterface@FXManager@@QAEXPAVFXTimeInterface@@@Z");
    todo("implement");
    _sub_6DE318(this, arg);
}

_extern FXManager::Handle _sub_6DD552(FXManager *const, char const *, FXManager::Dynamics const *, __int32 const);
FXManager::Handle FXManager::ObjectCreate(char const *, FXManager::Dynamics const *, __int32 const) // 0x6DD552
{
    mangled_assert("?ObjectCreate@FXManager@@QAE?AUHandle@1@PBDPBVDynamics@1@H@Z");
    todo("implement");
    FXManager::Handle __result = _sub_6DD552(this, arg, arg, arg);
    return __result;
}

_extern FXManager::Handle _sub_6DD579(FXManager *const, char const *, FXManager::Dynamics const *, __int32 const);
FXManager::Handle FXManager::ObjectCreateFarMode(char const *, FXManager::Dynamics const *, __int32 const) // 0x6DD579
{
    mangled_assert("?ObjectCreateFarMode@FXManager@@QAE?AUHandle@1@PBDPBVDynamics@1@H@Z");
    todo("implement");
    FXManager::Handle __result = _sub_6DD579(this, arg, arg, arg);
    return __result;
}

_extern FXManager::Handle _sub_6DD79F(FXManager *const, char const *, FXManager::Dynamics const *, FXManager::Handle const &, float);
FXManager::Handle FXManager::ObjectCreateLink(char const *, FXManager::Dynamics const *, FXManager::Handle const &, float) // 0x6DD79F
{
    mangled_assert("?ObjectCreateLink@FXManager@@QAE?AUHandle@1@PBDPBVDynamics@1@ABU21@M@Z");
    todo("implement");
    FXManager::Handle __result = _sub_6DD79F(this, arg, arg, arg, arg);
    return __result;
}

_extern FXManager::Handle _sub_6DD5A0(FXManager *const, char const *, FXManager::Dynamics const *, FXManager::Handle const &, __int32 const, float const, bool);
FXManager::Handle FXManager::ObjectCreateInternal(char const *, FXManager::Dynamics const *, FXManager::Handle const &, __int32 const, float const, bool) // 0x6DD5A0
{
    mangled_assert("?ObjectCreateInternal@FXManager@@AAE?AUHandle@1@PBDPBVDynamics@1@ABU21@HM_N@Z");
    todo("implement");
    FXManager::Handle __result = _sub_6DD5A0(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_6DD81B(FXManager *const, FXManager::Handle const &);
void FXManager::ObjectDestroy(FXManager::Handle const &) // 0x6DD81B
{
    mangled_assert("?ObjectDestroy@FXManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_6DD81B(this, arg);
}

_extern void _sub_6DDE24(FXManager *const, FXManager::Handle const &);
void FXManager::ObjectStop(FXManager::Handle const &) // 0x6DDE24
{
    mangled_assert("?ObjectStop@FXManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_6DDE24(this, arg);
}

_extern bool _sub_6DDBA1(FXManager const *const, FXManager::Handle const &);
bool FXManager::ObjectIsDead(FXManager::Handle const &) const // 0x6DDBA1
{
    mangled_assert("?ObjectIsDead@FXManager@@QBE_NABUHandle@1@@Z");
    todo("implement");
    bool __result = _sub_6DDBA1(this, arg);
    return __result;
}

_extern void _sub_6DDD18(FXManager *const, FXManager::Handle const &, matrix4 const &);
void FXManager::ObjectSetTransform(FXManager::Handle const &, matrix4 const &) // 0x6DDD18
{
    mangled_assert("?ObjectSetTransform@FXManager@@QAEXABUHandle@1@ABVmatrix4@@@Z");
    todo("implement");
    _sub_6DDD18(this, arg, arg);
}

_extern void _sub_6DDD7E(FXManager *const, FXManager::Handle const &, vector3 const &);
void FXManager::ObjectSetVelocity(FXManager::Handle const &, vector3 const &) // 0x6DDD7E
{
    mangled_assert("?ObjectSetVelocity@FXManager@@QAEXABUHandle@1@ABVvector3@@@Z");
    todo("implement");
    _sub_6DDD7E(this, arg, arg);
}

_extern void _sub_6DDCEA(FXManager *const, FXManager::Handle const &, float);
void FXManager::ObjectSetScale(FXManager::Handle const &, float) // 0x6DDCEA
{
    mangled_assert("?ObjectSetScale@FXManager@@QAEXABUHandle@1@M@Z");
    todo("implement");
    _sub_6DDCEA(this, arg, arg);
}

_extern void _sub_6DDC96(FXManager *const, FXManager::Handle const &, float);
void FXManager::ObjectSetLength(FXManager::Handle const &, float) // 0x6DDC96
{
    mangled_assert("?ObjectSetLength@FXManager@@QAEXABUHandle@1@M@Z");
    todo("implement");
    _sub_6DDC96(this, arg, arg);
}

_extern void _sub_6DDC68(FXManager *const, FXManager::Handle const &, float);
void FXManager::ObjectSetHeight(FXManager::Handle const &, float) // 0x6DDC68
{
    mangled_assert("?ObjectSetHeight@FXManager@@QAEXABUHandle@1@M@Z");
    todo("implement");
    _sub_6DDC68(this, arg, arg);
}

_extern void _sub_6DDCC4(FXManager *const, FXManager::Handle const &, vector3 const &);
void FXManager::ObjectSetOffset(FXManager::Handle const &, vector3 const &) // 0x6DDCC4
{
    mangled_assert("?ObjectSetOffset@FXManager@@QAEXABUHandle@1@ABVvector3@@@Z");
    todo("implement");
    _sub_6DDCC4(this, arg, arg);
}

_extern void _sub_6DDBDF(FXManager *const, FXManager::Handle const &, float);
void FXManager::ObjectSetFadeT(FXManager::Handle const &, float) // 0x6DDBDF
{
    mangled_assert("?ObjectSetFadeT@FXManager@@QAEXABUHandle@1@M@Z");
    todo("implement");
    _sub_6DDBDF(this, arg, arg);
}

_extern void _sub_6DDDA4(FXManager *const, FXManager::Handle const &, bool);
void FXManager::ObjectSetVisible(FXManager::Handle const &, bool) // 0x6DDDA4
{
    mangled_assert("?ObjectSetVisible@FXManager@@QAEXABUHandle@1@_N@Z");
    todo("implement");
    _sub_6DDDA4(this, arg, arg);
}

_extern void _sub_6DDC0D(FXManager *const, FXManager::Handle const &, bool);
void FXManager::ObjectSetFarMode(FXManager::Handle const &, bool) // 0x6DDC0D
{
    mangled_assert("?ObjectSetFarMode@FXManager@@QAEXABUHandle@1@_N@Z");
    todo("implement");
    _sub_6DDC0D(this, arg, arg);
}

_extern bool _sub_6DDB71(FXManager const *const, FXManager::Handle const &, matrix4 &);
bool FXManager::ObjectGetTransform(FXManager::Handle const &, matrix4 &) const // 0x6DDB71
{
    mangled_assert("?ObjectGetTransform@FXManager@@QBE_NABUHandle@1@AAVmatrix4@@@Z");
    todo("implement");
    bool __result = _sub_6DDB71(this, arg, arg);
    return __result;
}

_extern float _sub_6DDB50(FXManager const *const, FXManager::Handle const &);
float FXManager::ObjectGetScale(FXManager::Handle const &) const // 0x6DDB50
{
    mangled_assert("?ObjectGetScale@FXManager@@QBEMABUHandle@1@@Z");
    todo("implement");
    float __result = _sub_6DDB50(this, arg);
    return __result;
}

_extern float _sub_6DDA8C(FXManager const *const, FXManager::Handle const &);
float FXManager::ObjectGetLength(FXManager::Handle const &) const // 0x6DDA8C
{
    mangled_assert("?ObjectGetLength@FXManager@@QBEMABUHandle@1@@Z");
    todo("implement");
    float __result = _sub_6DDA8C(this, arg);
    return __result;
}

_extern FXManager::Handle _sub_6DDB15(FXManager const *const, FXManager::Handle const &);
FXManager::Handle FXManager::ObjectGetParent(FXManager::Handle const &) const // 0x6DDB15
{
    mangled_assert("?ObjectGetParent@FXManager@@QBE?AUHandle@1@ABU21@@Z");
    todo("implement");
    FXManager::Handle __result = _sub_6DDB15(this, arg);
    return __result;
}

_extern float _sub_6DDA66(FXManager const *const, FXManager::Handle const &);
float FXManager::ObjectGetGravwellStrength(FXManager::Handle const &) const // 0x6DDA66
{
    mangled_assert("?ObjectGetGravwellStrength@FXManager@@QBEMABUHandle@1@@Z");
    todo("implement");
    float __result = _sub_6DDA66(this, arg);
    return __result;
}

_extern bool _sub_6DDAAD(FXManager const *const, FXManager::Handle const &, vector3 &);
bool FXManager::ObjectGetOffset(FXManager::Handle const &, vector3 &) const // 0x6DDAAD
{
    mangled_assert("?ObjectGetOffset@FXManager@@QBE_NABUHandle@1@AAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6DDAAD(this, arg, arg);
    return __result;
}

_extern bool _sub_6DDA37(FXManager const *const, FXManager::Handle const &, vector4 &);
bool FXManager::ObjectGetColour(FXManager::Handle const &, vector4 &) const // 0x6DDA37
{
    mangled_assert("?ObjectGetColour@FXManager@@QBE_NABUHandle@1@AAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_6DDA37(this, arg, arg);
    return __result;
}

_extern void _sub_6DD957(FXManager *const, __int32 const);
void FXManager::ObjectDestroyAll(__int32 const) // 0x6DD957
{
    mangled_assert("?ObjectDestroyAll@FXManager@@QAEXH@Z");
    todo("implement");
    _sub_6DD957(this, arg);
}

_extern void _sub_6DD9EE(FXManager *const, FXManager::Handle const &);
void FXManager::ObjectForceUpdate(FXManager::Handle const &) // 0x6DD9EE
{
    mangled_assert("?ObjectForceUpdate@FXManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_6DD9EE(this, arg);
}

_extern void _sub_6DD992(FXManager *const, FXManager::Handle const &);
void FXManager::ObjectForceDynamicsUpdate(FXManager::Handle const &) // 0x6DD992
{
    mangled_assert("?ObjectForceDynamicsUpdate@FXManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_6DD992(this, arg);
}

_extern void _sub_6DCD48(FXManager *const, FXManager::Dynamics *, __int32);
void FXManager::DynamicsSet(FXManager::Dynamics *, __int32) // 0x6DCD48
{
    mangled_assert("?DynamicsSet@FXManager@@QAEXPAVDynamics@1@H@Z");
    todo("implement");
    _sub_6DCD48(this, arg, arg);
}

_extern FXManager::Dynamics const *_sub_6DCD19(FXManager const *const, __int32);
FXManager::Dynamics const *FXManager::DynamicsGet(__int32) const // 0x6DCD19
{
    mangled_assert("?DynamicsGet@FXManager@@QBEPBVDynamics@1@H@Z");
    todo("implement");
    FXManager::Dynamics const * __result = _sub_6DCD19(this, arg);
    return __result;
}

_extern bool _sub_6DE6A1(FXManager *const, char const *);
bool FXManager::TypeExists(char const *) // 0x6DE6A1
{
    mangled_assert("?TypeExists@FXManager@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6DE6A1(this, arg);
    return __result;
}

_extern void _sub_6DE530(FXManager *const, FXManager::Type *);
void FXManager::TypeAdd(FXManager::Type *) // 0x6DE530
{
    mangled_assert("?TypeAdd@FXManager@@QAEXPAVType@1@@Z");
    todo("implement");
    _sub_6DE530(this, arg);
}

_extern FXManager::Type const *_sub_6DE78E(FXManager *const, char const *);
FXManager::Type const *FXManager::TypeGet(char const *) // 0x6DE78E
{
    mangled_assert("?TypeGet@FXManager@@QAEPBVType@1@PBD@Z");
    todo("implement");
    FXManager::Type const * __result = _sub_6DE78E(this, arg);
    return __result;
}

_extern void _sub_6DE7F1(FXManager *const, char const *);
void FXManager::TypePrecache(char const *) // 0x6DE7F1
{
    mangled_assert("?TypePrecache@FXManager@@QAEXPBD@Z");
    todo("implement");
    _sub_6DE7F1(this, arg);
}

_extern void _sub_6DE5F6(FXManager *const, char const *);
void FXManager::TypeDestroy(char const *) // 0x6DE5F6
{
    mangled_assert("?TypeDestroy@FXManager@@QAEXPBD@Z");
    todo("implement");
    _sub_6DE5F6(this, arg);
}

_extern void _sub_6DE67A(FXManager *const);
void FXManager::TypeDestroyAll() // 0x6DE67A
{
    mangled_assert("?TypeDestroyAll@FXManager@@QAEXXZ");
    todo("implement");
    _sub_6DE67A(this);
}

_extern void _sub_6DE773(FXManager *const);
void FXManager::TypeFlushAll() // 0x6DE773
{
    mangled_assert("?TypeFlushAll@FXManager@@QAEXXZ");
    todo("implement");
    _sub_6DE773(this);
}

_extern void _sub_6DE4DF(FXManager const *const, FXManager::Stats &);
void FXManager::StatsGet(FXManager::Stats &) const // 0x6DE4DF
{
    mangled_assert("?StatsGet@FXManager@@QBEXAAUStats@1@@Z");
    todo("implement");
    _sub_6DE4DF(this, arg);
}

_extern void _sub_6DE51B(FXManager *const);
void FXManager::StatsReset() // 0x6DE51B
{
    mangled_assert("?StatsReset@FXManager@@QAEXXZ");
    todo("implement");
    _sub_6DE51B(this);
}

_extern void _sub_6DE38D(FXManager const *const);
void FXManager::StatsDump() const // 0x6DE38D
{
    mangled_assert("?StatsDump@FXManager@@QBEXXZ");
    todo("implement");
    _sub_6DE38D(this);
}

_extern void _sub_6DCA8E(FXManager *const, FXManager::Caps, bool);
void FXManager::CapSet(FXManager::Caps, bool) // 0x6DCA8E
{
    mangled_assert("?CapSet@FXManager@@QAEXW4Caps@1@_N@Z");
    todo("implement");
    _sub_6DCA8E(this, arg, arg);
}

_extern bool _sub_6DCA81(FXManager const *const, FXManager::Caps);
bool FXManager::CapGet(FXManager::Caps) const // 0x6DCA81
{
    mangled_assert("?CapGet@FXManager@@QBE_NW4Caps@1@@Z");
    todo("implement");
    bool __result = _sub_6DCA81(this, arg);
    return __result;
}

_extern void _sub_6DE808(FXManager *const, __int32, float);
void FXManager::Update(__int32, float) // 0x6DE808
{
    mangled_assert("?Update@FXManager@@QAEXHM@Z");
    todo("implement");
    _sub_6DE808(this, arg, arg);
}

_extern void _sub_6DCA9B(FXManager *const, __int32, Frustum const &, Camera const *);
void FXManager::Display(__int32, Frustum const &, Camera const *) // 0x6DCA9B
{
    mangled_assert("?Display@FXManager@@QAEXHABVFrustum@@PBVCamera@@@Z");
    todo("implement");
    _sub_6DCA9B(this, arg, arg, arg);
}

_extern _sub_6DBE4D(FXManager::Object *const, FXManager::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
FXManager::Object::Object(FXManager::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32) // 0x6DBE4D
{
    mangled_assert("??0Object@FXManager@@IAE@PBVType@1@ABUHandle@1@1H@Z");
    todo("implement");
    _sub_6DBE4D(this, arg, arg, arg, arg);
}

_extern void _sub_6DC233(FXManager::Object *const);
FXManager::Object::~Object() // 0x6DC233
{
    mangled_assert("??1Object@FXManager@@MAE@XZ");
    todo("implement");
    _sub_6DC233(this);
}

_extern void _sub_6DC23A(FXManager::Type::Property *const);
_inline FXManager::Type::Property::~Property() // 0x6DC23A
{
    mangled_assert("??1Property@Type@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC23A(this);
}

_extern void _sub_6DE22B(FXManager::Object *const, float);
void FXManager::Object::SetCollisionRadius(float) // 0x6DE22B
{
    mangled_assert("?SetCollisionRadius@Object@FXManager@@MAEXM@Z");
    todo("implement");
    _sub_6DE22B(this, arg);
}

_extern void _sub_6DE254(FXManager::Object *const, float);
void FXManager::Object::SetCullingRadius(float) // 0x6DE254
{
    mangled_assert("?SetCullingRadius@Object@FXManager@@MAEXM@Z");
    todo("implement");
    _sub_6DE254(this, arg);
}

_extern void _sub_6DE35B(FXManager::Object *const, bool);
void FXManager::Object::SetVisible(bool) // 0x6DE35B
{
    mangled_assert("?SetVisible@Object@FXManager@@UAEX_N@Z");
    todo("implement");
    _sub_6DE35B(this, arg);
}

_extern void _sub_6DE313(FXManager::Object *const);
void FXManager::Object::SetStop() // 0x6DE313
{
    mangled_assert("?SetStop@Object@FXManager@@UAEXXZ");
    todo("implement");
    _sub_6DE313(this);
}

_extern void _sub_6DE327(FXManager::Object *const, matrix4 const &);
void FXManager::Object::SetTransform(matrix4 const &) // 0x6DE327
{
    mangled_assert("?SetTransform@Object@FXManager@@UAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_6DE327(this, arg);
}

_extern void _sub_6DE34A(FXManager::Object *const, vector3 const &);
void FXManager::Object::SetVelocity(vector3 const &) // 0x6DE34A
{
    mangled_assert("?SetVelocity@Object@FXManager@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6DE34A(this, arg);
}

_extern void _sub_6DE2FA(FXManager::Object *const, float);
void FXManager::Object::SetScale(float) // 0x6DE2FA
{
    mangled_assert("?SetScale@Object@FXManager@@UAEXM@Z");
    todo("implement");
    _sub_6DE2FA(this, arg);
}

_extern void _sub_6DE2AC(FXManager::Object *const, float);
void FXManager::Object::SetLength(float) // 0x6DE2AC
{
    mangled_assert("?SetLength@Object@FXManager@@UAEXM@Z");
    todo("implement");
    _sub_6DE2AC(this, arg);
}

_extern _sub_6DBEC9(FXManager::Type *const, char const *);
FXManager::Type::Type(char const *) // 0x6DBEC9
{
    mangled_assert("??0Type@FXManager@@QAE@PBD@Z");
    todo("implement");
    _sub_6DBEC9(this, arg);
}

_extern void _sub_6DBF85(std::_List_buy<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > > *const);
_inline std::_List_buy<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > >::~_List_buy<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > >() // 0x6DBF85
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBHV?$shared_ptr@VDynamics@FXManager@@@boost@@@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VDynamics@FXManager@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBF85(this);
}

_extern void _sub_6DBF8E(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > >() // 0x6DBF8E
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBF8E(this);
}

_extern void _sub_6DBF97(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> > >() // 0x6DBF97
{
    mangled_assert("??1?$_List_buy@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVarMulti@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVarMulti@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBF97(this);
}

_extern void _sub_6DBFA0(std::_List_buy<FXManager::Handle,mempool_fs_alloc<FXManager::Handle> > *const);
_inline std::_List_buy<FXManager::Handle,mempool_fs_alloc<FXManager::Handle> >::~_List_buy<FXManager::Handle,mempool_fs_alloc<FXManager::Handle> >() // 0x6DBFA0
{
    mangled_assert("??1?$_List_buy@UHandle@FXManager@@V?$mempool_fs_alloc@UHandle@FXManager@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBFA0(this);
}

_extern void _sub_6DBFB4(std::_List_buy<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > *const);
_inline std::_List_buy<FXManager::Type::Property,std::allocator<FXManager::Type::Property> >::~_List_buy<FXManager::Type::Property,std::allocator<FXManager::Type::Property> >() // 0x6DBFB4
{
    mangled_assert("??1?$_List_buy@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBFB4(this);
}

_extern void _sub_6DBFE4(std::_Tree_buy<std::pair<FXManager::Type const * const,unsigned int>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > > *const);
_inline std::_Tree_buy<std::pair<FXManager::Type const * const,unsigned int>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > >::~_Tree_buy<std::pair<FXManager::Type const * const,unsigned int>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > >() // 0x6DBFE4
{
    mangled_assert("??1?$_Tree_buy@U?$pair@QBVType@FXManager@@I@std@@V?$allocator@U?$pair@QBVType@FXManager@@I@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBFE4(this);
}

_extern void _sub_6DBFED(std::_Tree_comp<0,std::_Tmap_traits<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> >,0> >() // 0x6DBFED
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@PBVType@FXManager@@IU?$less@PBVType@FXManager@@@std@@V?$allocator@U?$pair@QBVType@FXManager@@I@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBFED(this);
}

_extern void _sub_6DBFF6(std::_Wrap_alloc<mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > > *const);
_inline std::_Wrap_alloc<mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > >::~_Wrap_alloc<mempool_fs_alloc<std::_List_node<FXManager::Handle,void *> > >() // 0x6DBFF6
{
    mangled_assert("??1?$_Wrap_alloc@V?$mempool_fs_alloc@U?$_List_node@UHandle@FXManager@@PAX@std@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DBFF6(this);
}

_extern void _sub_6DC009(stdext::hash_map<int,boost::shared_ptr<FXManager::Dynamics>,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > > *const);
_inline stdext::hash_map<int,boost::shared_ptr<FXManager::Dynamics>,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > >::~hash_map<int,boost::shared_ptr<FXManager::Dynamics>,stdext::hash_compare<int,std::less<int> >,std::allocator<std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > > >() // 0x6DC009
{
    mangled_assert("??1?$hash_map@HV?$shared_ptr@VDynamics@FXManager@@@boost@@V?$hash_compare@HU?$less@H@std@@@stdext@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VDynamics@FXManager@@@boost@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC009(this);
}

_extern void _sub_6DC00E(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type>,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type>,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type>,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > > >() // 0x6DC00E
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC00E(this);
}

_extern void _sub_6DC076(std::map<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > > *const);
_inline std::map<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > >::~map<FXManager::Type const *,unsigned int,std::less<FXManager::Type const *>,std::allocator<std::pair<FXManager::Type const * const,unsigned int> > >() // 0x6DC076
{
    mangled_assert("??1?$map@PBVType@FXManager@@IU?$less@PBVType@FXManager@@@std@@V?$allocator@U?$pair@QBVType@FXManager@@I@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC076(this);
}

_extern void _sub_6DC276(FXManager::Type *const);
FXManager::Type::~Type() // 0x6DC276
{
    mangled_assert("??1Type@FXManager@@UAE@XZ");
    todo("implement");
    _sub_6DC276(this);
}

_extern void _sub_6DC087(std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> > *const);
_inline std::pair<int const ,boost::shared_ptr<FXManager::Dynamics> >::~pair<int const ,boost::shared_ptr<FXManager::Dynamics> >() // 0x6DC087
{
    mangled_assert("??1?$pair@$$CBHV?$shared_ptr@VDynamics@FXManager@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC087(this);
}

_extern void _sub_6DC093(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<FXManager::Type> >() // 0x6DC093
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC093(this);
}

_extern void _sub_6DC0C8(std::pair<int,boost::shared_ptr<FXManager::Dynamics> > *const);
_inline std::pair<int,boost::shared_ptr<FXManager::Dynamics> >::~pair<int,boost::shared_ptr<FXManager::Dynamics> >() // 0x6DC0C8
{
    mangled_assert("??1?$pair@HV?$shared_ptr@VDynamics@FXManager@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC0C8(this);
}

_extern void _sub_6DC0D4(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<FXManager::Type> >() // 0x6DC0D4
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VType@FXManager@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC0D4(this);
}

_extern bool _sub_6DD529(FXManager::Type *const, char const *);
bool FXManager::Type::NameChange(char const *) // 0x6DD529
{
    mangled_assert("?NameChange@Type@FXManager@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6DD529(this, arg);
    return __result;
}

_extern void _sub_6DC109(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,VarMulti>() // 0x6DC109
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVarMulti@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC109(this);
}

_extern void _sub_6DC142(boost::shared_ptr<FXManager::Dynamics> *const);
_inline boost::shared_ptr<FXManager::Dynamics>::~shared_ptr<FXManager::Dynamics>() // 0x6DC142
{
    mangled_assert("??1?$shared_ptr@VDynamics@FXManager@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC142(this);
}

_extern void _sub_6DC14E(boost::shared_ptr<FXManager::Type> *const);
_inline boost::shared_ptr<FXManager::Type>::~shared_ptr<FXManager::Type>() // 0x6DC14E
{
    mangled_assert("??1?$shared_ptr@VType@FXManager@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC14E(this);
}

_extern void _sub_6DC15A(boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> > *const);
_inline boost::detail::sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >::~sp_counted_base_impl<FXManager::Dynamics *,boost::checked_deleter<FXManager::Dynamics> >() // 0x6DC15A
{
    mangled_assert("??1?$sp_counted_base_impl@PAVDynamics@FXManager@@U?$checked_deleter@VDynamics@FXManager@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC15A(this);
}

_extern void _sub_6DC161(boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> > *const);
_inline boost::detail::sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >::~sp_counted_base_impl<FXManager::Type *,boost::checked_deleter<FXManager::Type> >() // 0x6DC161
{
    mangled_assert("??1?$sp_counted_base_impl@PAVType@FXManager@@U?$checked_deleter@VType@FXManager@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC161(this);
}

_extern void _sub_6DC186(FXManager::Data *const);
_inline FXManager::Data::~Data() // 0x6DC186
{
    mangled_assert("??1Data@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6DC186(this);
}

_extern bool _sub_6DD20C(FXManager::Type const *const);
bool FXManager::Type::IsVisible() const // 0x6DD20C
{
    mangled_assert("?IsVisible@Type@FXManager@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6DD20C(this);
    return __result;
}

_extern bool _sub_6DD54F(FXManager::Type const *const);
bool FXManager::Type::NeverDistanceCulled() const // 0x6DD54F
{
    mangled_assert("?NeverDistanceCulled@Type@FXManager@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_6DD54F(this);
    return __result;
}

_extern char const *_sub_6DCDD0();
char const *FXManager::Type::Folder() // 0x6DCDD0
{
    mangled_assert("?Folder@Type@FXManager@@SGPBDXZ");
    todo("implement");
    char const * __result = _sub_6DCDD0();
    return __result;
}

_extern void _sub_6DE294(char const *);
void FXManager::Type::SetFolder(char const *str) // 0x6DE294
{
    mangled_assert("?SetFolder@Type@FXManager@@SGXPBD@Z");
    todo("implement");
    _sub_6DE294(str);
}

_extern bool _sub_6DE164(FXManager::Type const *);
bool FXManager::Type::SaveToFile(FXManager::Type const *type) // 0x6DE164
{
    mangled_assert("?SaveToFile@Type@FXManager@@SG_NPBV12@@Z");
    todo("implement");
    bool __result = _sub_6DE164(type);
    return __result;
}

_extern void _sub_6DD212(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void FXManager::Type::ListFromFolder(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &l) // 0x6DD212
{
    mangled_assert("?ListFromFolder@Type@FXManager@@SGXAAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6DD212(l);
}

_extern FXManager::Type *_sub_6DD2D0(char const *);
FXManager::Type *FXManager::Type::LoadFromFile(char const *nameOfType) // 0x6DD2D0
{
    mangled_assert("?LoadFromFile@Type@FXManager@@SGPAV12@PBD@Z");
    todo("implement");
    FXManager::Type * __result = _sub_6DD2D0(nameOfType);
    return __result;
}

_extern void _sub_6DE163(FXManager::Type *const);
void FXManager::Type::RenderStat() // 0x6DE163
{
    mangled_assert("?RenderStat@Type@FXManager@@UAEXXZ");
    todo("implement");
    _sub_6DE163(this);
}

_extern void _sub_6DC1F2(FXManager::Dynamics *const);
FXManager::Dynamics::~Dynamics() // 0x6DC1F2
{
    mangled_assert("??1Dynamics@FXManager@@UAE@XZ");
    todo("implement");
    _sub_6DC1F2(this);
}

_extern void *_sub_6DC284(unsigned __int32);
void *FXManager::Dynamics::operator new(unsigned __int32 s) // 0x6DC284
{
    mangled_assert("??2Dynamics@FXManager@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_6DC284(s);
    return __result;
}

_extern void _sub_6DC28F(void *, unsigned __int32);
void FXManager::Dynamics::operator delete(void *p, unsigned __int32 s) // 0x6DC28F
{
    mangled_assert("??3Dynamics@FXManager@@SGXPAXI@Z");
    todo("implement");
    _sub_6DC28F(p, s);
}

_extern boost::shared_ptr<FXManager::Dynamics> &_sub_6DC2AE(boost::shared_ptr<FXManager::Dynamics> *const, boost::shared_ptr<FXManager::Dynamics> const &);
_inline boost::shared_ptr<FXManager::Dynamics> &boost::shared_ptr<FXManager::Dynamics>::operator=(boost::shared_ptr<FXManager::Dynamics> const &) // 0x6DC2AE
{
    mangled_assert("??4?$shared_ptr@VDynamics@FXManager@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<FXManager::Dynamics> & __result = _sub_6DC2AE(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_6DE9BC(std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > &, FXMemory &);
_static void UpdateDead(std::vector<FXManager::Handle,std::allocator<FXManager::Handle> > &deadList, FXMemory &memory) // 0x6DE9BC
{
    mangled_assert("UpdateDead");
    todo("implement");
    _sub_6DE9BC(deadList, memory);
}

_extern void _sub_6DD20F(bool);
_static void LightingInit(bool bEnable) // 0x6DD20F
{
    mangled_assert("LightingInit");
    todo("implement");
    _sub_6DD20F(bEnable);
}

_extern void _sub_6DCC3B(Camera const *, float);
_static void DisplayInit(Camera const *camera, float alternateFOV) // 0x6DCC3B
{
    mangled_assert("DisplayInit");
    todo("implement");
    _sub_6DCC3B(camera, alternateFOV);
}
#endif
