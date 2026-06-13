#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <cameracommandextupdate.h>
#include <debug\ctassert.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <util\colour.h>
#include <Graphics\BackgroundFX.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::Entry
{
    FXManager::Handle m_handle; // 0x0
    vector3 m_direction; // 0x8
    matrix3 m_orientation; // 0x14
    bool m_bActive; // 0x38
    Entry(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::Entry) == 60, "Invalid `anonymous-namespace'::Entry size");

typedef std::vector<`anonymous namespace'::Entry,std::allocator<`anonymous namespace'::Entry> > EntryCont;
typedef `anonymous-namespace'::Entry ?A0xddf81223::Entry;

class BackgroundFXUpdate :
    public CameraCommandExtUpdate
{
public:
    BackgroundFXUpdate(BackgroundFXUpdate const &); /* compiler_generated() */
    _inline BackgroundFXUpdate();
    _inline void SetOwner(BackgroundFX *);
    virtual _inline void Update(Camera const &) override;
private:
    BackgroundFX *m_owner; // 0x4
public:
    virtual _inline ~BackgroundFXUpdate() override; /* compiler_generated() */
    BackgroundFXUpdate &operator=(BackgroundFXUpdate const &); /* compiler_generated() */
};
static_assert(sizeof(BackgroundFXUpdate) == 8, "Invalid BackgroundFXUpdate size");

/* ---------- prototypes */

/* ---------- globals */

extern BackgroundFX *BackgroundFX::s_instance; // 0x846650

/* ---------- private variables */

/* ---------- public code */

_extern _sub_56B27C(BackgroundFXUpdate *const);
_inline BackgroundFXUpdate::BackgroundFXUpdate() // 0x56B27C
{
    mangled_assert("??0BackgroundFXUpdate@@QAE@XZ");
    todo("implement");
    _sub_56B27C(this);
}

_extern _sub_56B285(CameraCommandExtUpdate *const);
_inline CameraCommandExtUpdate::CameraCommandExtUpdate() // 0x56B285
{
    mangled_assert("??0CameraCommandExtUpdate@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56B285(this);
}

_extern _sub_56B28E(BackgroundFX::Data *const);
_inline BackgroundFX::Data::Data() // 0x56B28E
{
    mangled_assert("??0Data@BackgroundFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56B28E(this);
}

_extern void _sub_56B50C(BackgroundFXUpdate *const, BackgroundFX *);
_inline void BackgroundFXUpdate::SetOwner(BackgroundFX *) // 0x56B50C
{
    mangled_assert("?SetOwner@BackgroundFXUpdate@@QAEXPAVBackgroundFX@@@Z");
    todo("implement");
    _sub_56B50C(this, arg);
}

_extern void _sub_56B736(BackgroundFXUpdate *const, Camera const &);
_inline void BackgroundFXUpdate::Update(Camera const &) // 0x56B736
{
    mangled_assert("?Update@BackgroundFXUpdate@@UAEXABVCamera@@@Z");
    todo("implement");
    _sub_56B736(this, arg);
}

_extern _sub_56B248(BackgroundFX *const);
BackgroundFX::BackgroundFX() // 0x56B248
{
    mangled_assert("??0BackgroundFX@@QAE@XZ");
    todo("implement");
    _sub_56B248(this);
}

_extern void _sub_56B2B1(BackgroundFX *const);
BackgroundFX::~BackgroundFX() // 0x56B2B1
{
    mangled_assert("??1BackgroundFX@@QAE@XZ");
    todo("implement");
    _sub_56B2B1(this);
}

_extern void _sub_56B2CE(BackgroundFXUpdate *const);
_inline BackgroundFXUpdate::~BackgroundFXUpdate() // 0x56B2CE
{
    mangled_assert("??1BackgroundFXUpdate@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56B2CE(this);
}

_extern void _sub_56B2DC(BackgroundFX::Data *const);
_inline BackgroundFX::Data::~Data() // 0x56B2DC
{
    mangled_assert("??1Data@BackgroundFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56B2DC(this);
}

_extern CameraCommandExtUpdate *_sub_56B4FF(BackgroundFX *const);
CameraCommandExtUpdate *BackgroundFX::GetUpdater() // 0x56B4FF
{
    mangled_assert("?GetUpdater@BackgroundFX@@QAEPAVCameraCommandExtUpdate@@XZ");
    todo("implement");
    CameraCommandExtUpdate * __result = _sub_56B4FF(this);
    return __result;
}

_extern bool _sub_56B53A();
bool BackgroundFX::Startup() // 0x56B53A
{
    mangled_assert("?Startup@BackgroundFX@@SG_NXZ");
    todo("implement");
    bool __result = _sub_56B53A();
    return __result;
}

_extern bool _sub_56B516();
bool BackgroundFX::Shutdown() // 0x56B516
{
    mangled_assert("?Shutdown@BackgroundFX@@SG_NXZ");
    todo("implement");
    bool __result = _sub_56B516();
    return __result;
}

_extern BackgroundFX *_sub_56B506();
BackgroundFX *BackgroundFX::Instance() // 0x56B506
{
    mangled_assert("?Instance@BackgroundFX@@SGPAV1@XZ");
    todo("implement");
    BackgroundFX * __result = _sub_56B506();
    return __result;
}

_extern void _sub_56B5B1(BackgroundFX *const, Camera const &);
void BackgroundFX::Update(Camera const &) // 0x56B5B1
{
    mangled_assert("?Update@BackgroundFX@@UAEXABVCamera@@@Z");
    todo("implement");
    _sub_56B5B1(this, arg);
}

_extern unsigned __int32 _sub_56B36D(BackgroundFX *const, char const *, vector3 const &, matrix3 const &, float);
unsigned __int32 BackgroundFX::AddFX(char const *, vector3 const &, matrix3 const &, float) // 0x56B36D
{
    mangled_assert("?AddFX@BackgroundFX@@QAEIPBDABVvector3@@ABVmatrix3@@M@Z");
    todo("implement");
    unsigned __int32 __result = _sub_56B36D(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_56B580(BackgroundFX *const, unsigned __int32);
void BackgroundFX::StopFX(unsigned __int32) // 0x56B580
{
    mangled_assert("?StopFX@BackgroundFX@@QAEXI@Z");
    todo("implement");
    _sub_56B580(this, arg);
}

_extern void _sub_56B4CE(BackgroundFX *const, unsigned __int32);
void BackgroundFX::DestroyFX(unsigned __int32) // 0x56B4CE
{
    mangled_assert("?DestroyFX@BackgroundFX@@QAEXI@Z");
    todo("implement");
    _sub_56B4CE(this, arg);
}

/* ---------- private code */
#endif
