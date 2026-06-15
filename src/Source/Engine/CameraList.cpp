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

CameraList::CameraList() // 0x4E0ABD
{
    mangled_assert("??0CameraList@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<FocalPoint *,std::allocator<FocalPoint *> >::~_List_buy<FocalPoint *,std::allocator<FocalPoint *> >() // 0x4E0AF4
{
    mangled_assert("??1?$_List_buy@PAVFocalPoint@@V?$allocator@PAVFocalPoint@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

CameraList::CameraList(unsigned __int32) // 0x4E0A8D
{
    mangled_assert("??0CameraList@@QAE@I@Z");
    todo("implement");
}

CameraList::~CameraList() // 0x4E0B0F
{
    mangled_assert("??1CameraList@@QAE@XZ");
    todo("implement");
}

_inline FocalPoint::~FocalPoint() // 0x4E0B47
{
    mangled_assert("??1FocalPoint@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool CameraList::initialize(unsigned __int32) // 0x4E0F5A
{
    mangled_assert("?initialize@CameraList@@QAE_NI@Z");
    todo("implement");
}

FocalPoint *CameraList::append(Selection const &) // 0x4E0C8A
{
    mangled_assert("?append@CameraList@@QAEPAVFocalPoint@@ABVSelection@@@Z");
    todo("implement");
}

FocalPoint *CameraList::append(vector3 const &) // 0x4E0D25
{
    mangled_assert("?append@CameraList@@QAEPAVFocalPoint@@ABVvector3@@@Z");
    todo("implement");
}

void CameraList::appendMatchingCameraAttributes(FocalPoint &, float, float, float, vector3 const &, vector3 const &) // 0x4E0E3D
{
    mangled_assert("?appendMatchingCameraAttributes@CameraList@@QAEXAAVFocalPoint@@MMMABVvector3@@1@Z");
    todo("implement");
}

FocalPoint *CameraList::appendMatchingCamera(Selection const &, OrbitParameters const &, vector3 const &) // 0x4E0DA1
{
    mangled_assert("?appendMatchingCamera@CameraList@@QAEPAVFocalPoint@@ABVSelection@@ABVOrbitParameters@@ABVvector3@@@Z");
    todo("implement");
}

FocalPoint *CameraList::appendMatchingCamera(vector3 const &, OrbitParameters const &, vector3 const &) // 0x4E0DEF
{
    mangled_assert("?appendMatchingCamera@CameraList@@QAEPAVFocalPoint@@ABVvector3@@ABVOrbitParameters@@0@Z");
    todo("implement");
}

void CameraList::purge() // 0x4E10DA
{
    mangled_assert("?purge@CameraList@@QAEXXZ");
    todo("implement");
}

void CameraList::popFront() // 0x4E0FFF
{
    mangled_assert("?popFront@CameraList@@QAEXXZ");
    todo("implement");
}

void CameraList::removeEverythingAfterCurrent() // 0x4E1126
{
    mangled_assert("?removeEverythingAfterCurrent@CameraList@@AAEXXZ");
    todo("implement");
}

void CameraList::next(bool) // 0x4E0F7F
{
    mangled_assert("?next@CameraList@@QAEX_N@Z");
    todo("implement");
}

void CameraList::previous(bool) // 0x4E1056
{
    mangled_assert("?previous@CameraList@@QAEX_N@Z");
    todo("implement");
}

FocalPoint *CameraList::getCurrent() // 0x4E0F30
{
    mangled_assert("?getCurrent@CameraList@@QAEPAVFocalPoint@@XZ");
    todo("implement");
}

Selection *CameraList::getFocusSelection() // 0x4E0F3F
{
    mangled_assert("?getFocusSelection@CameraList@@QAEPAVSelection@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
