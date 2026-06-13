#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Camera\OrbitParameters.h>
#include <boost\scoped_ptr.hpp>
#include <task.h>
#include <stack>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <FocalPoint.h>
#include <sobid.h>
#include <CameraList.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<FocalPoint *,std::allocator<FocalPoint *> > FocalPointList;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<FocalPoint *> > > FocalPointListIterator;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4E0ABD(CameraList *const);
CameraList::CameraList() // 0x4E0ABD
{
    mangled_assert("??0CameraList@@QAE@XZ");
    todo("implement");
    _sub_4E0ABD(this);
}

_extern void _sub_4E0AF4(std::_List_buy<FocalPoint *,std::allocator<FocalPoint *> > *const);
_inline std::_List_buy<FocalPoint *,std::allocator<FocalPoint *> >::~_List_buy<FocalPoint *,std::allocator<FocalPoint *> >() // 0x4E0AF4
{
    mangled_assert("??1?$_List_buy@PAVFocalPoint@@V?$allocator@PAVFocalPoint@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4E0AF4(this);
}

_extern _sub_4E0A8D(CameraList *const, unsigned __int32);
CameraList::CameraList(unsigned __int32) // 0x4E0A8D
{
    mangled_assert("??0CameraList@@QAE@I@Z");
    todo("implement");
    _sub_4E0A8D(this, arg);
}

_extern void _sub_4E0B0F(CameraList *const);
CameraList::~CameraList() // 0x4E0B0F
{
    mangled_assert("??1CameraList@@QAE@XZ");
    todo("implement");
    _sub_4E0B0F(this);
}

_extern void _sub_4E0B47(FocalPoint *const);
_inline FocalPoint::~FocalPoint() // 0x4E0B47
{
    mangled_assert("??1FocalPoint@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4E0B47(this);
}

_extern bool _sub_4E0F5A(CameraList *const, unsigned __int32);
bool CameraList::initialize(unsigned __int32) // 0x4E0F5A
{
    mangled_assert("?initialize@CameraList@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4E0F5A(this, arg);
    return __result;
}

_extern FocalPoint *_sub_4E0C8A(CameraList *const, Selection const &);
FocalPoint *CameraList::append(Selection const &) // 0x4E0C8A
{
    mangled_assert("?append@CameraList@@QAEPAVFocalPoint@@ABVSelection@@@Z");
    todo("implement");
    FocalPoint * __result = _sub_4E0C8A(this, arg);
    return __result;
}

_extern FocalPoint *_sub_4E0D25(CameraList *const, vector3 const &);
FocalPoint *CameraList::append(vector3 const &) // 0x4E0D25
{
    mangled_assert("?append@CameraList@@QAEPAVFocalPoint@@ABVvector3@@@Z");
    todo("implement");
    FocalPoint * __result = _sub_4E0D25(this, arg);
    return __result;
}

_extern void _sub_4E0E3D(CameraList *const, FocalPoint &, float, float, float, vector3 const &, vector3 const &);
void CameraList::appendMatchingCameraAttributes(FocalPoint &, float, float, float, vector3 const &, vector3 const &) // 0x4E0E3D
{
    mangled_assert("?appendMatchingCameraAttributes@CameraList@@QAEXAAVFocalPoint@@MMMABVvector3@@1@Z");
    todo("implement");
    _sub_4E0E3D(this, arg, arg, arg, arg, arg, arg);
}

_extern FocalPoint *_sub_4E0DA1(CameraList *const, Selection const &, OrbitParameters const &, vector3 const &);
FocalPoint *CameraList::appendMatchingCamera(Selection const &, OrbitParameters const &, vector3 const &) // 0x4E0DA1
{
    mangled_assert("?appendMatchingCamera@CameraList@@QAEPAVFocalPoint@@ABVSelection@@ABVOrbitParameters@@ABVvector3@@@Z");
    todo("implement");
    FocalPoint * __result = _sub_4E0DA1(this, arg, arg, arg);
    return __result;
}

_extern FocalPoint *_sub_4E0DEF(CameraList *const, vector3 const &, OrbitParameters const &, vector3 const &);
FocalPoint *CameraList::appendMatchingCamera(vector3 const &, OrbitParameters const &, vector3 const &) // 0x4E0DEF
{
    mangled_assert("?appendMatchingCamera@CameraList@@QAEPAVFocalPoint@@ABVvector3@@ABVOrbitParameters@@0@Z");
    todo("implement");
    FocalPoint * __result = _sub_4E0DEF(this, arg, arg, arg);
    return __result;
}

_extern void _sub_4E10DA(CameraList *const);
void CameraList::purge() // 0x4E10DA
{
    mangled_assert("?purge@CameraList@@QAEXXZ");
    todo("implement");
    _sub_4E10DA(this);
}

_extern void _sub_4E0FFF(CameraList *const);
void CameraList::popFront() // 0x4E0FFF
{
    mangled_assert("?popFront@CameraList@@QAEXXZ");
    todo("implement");
    _sub_4E0FFF(this);
}

_extern void _sub_4E1126(CameraList *const);
void CameraList::removeEverythingAfterCurrent() // 0x4E1126
{
    mangled_assert("?removeEverythingAfterCurrent@CameraList@@AAEXXZ");
    todo("implement");
    _sub_4E1126(this);
}

_extern void _sub_4E0F7F(CameraList *const, bool);
void CameraList::next(bool) // 0x4E0F7F
{
    mangled_assert("?next@CameraList@@QAEX_N@Z");
    todo("implement");
    _sub_4E0F7F(this, arg);
}

_extern void _sub_4E1056(CameraList *const, bool);
void CameraList::previous(bool) // 0x4E1056
{
    mangled_assert("?previous@CameraList@@QAEX_N@Z");
    todo("implement");
    _sub_4E1056(this, arg);
}

_extern FocalPoint *_sub_4E0F30(CameraList *const);
FocalPoint *CameraList::getCurrent() // 0x4E0F30
{
    mangled_assert("?getCurrent@CameraList@@QAEPAVFocalPoint@@XZ");
    todo("implement");
    FocalPoint * __result = _sub_4E0F30(this);
    return __result;
}

_extern Selection *_sub_4E0F3F(CameraList *const);
Selection *CameraList::getFocusSelection() // 0x4E0F3F
{
    mangled_assert("?getFocusSelection@CameraList@@QAEPAVSelection@@XZ");
    todo("implement");
    Selection * __result = _sub_4E0F3F(this);
    return __result;
}

/* ---------- private code */
#endif
