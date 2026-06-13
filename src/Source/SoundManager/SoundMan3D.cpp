#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <assist\typemagic.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\sedefinesshared.h>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <xutility>
#include <iosfwd>
#include <debug\db.h>
#include <boost\scoped_array.hpp>
#include <algorithm>
#include <Engine\random.h>
#include <assist\gbitset.h>
#include <SoundManager\pch.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <SoundManager\SoundEntityHandle.h>
#include <math.h>
#include <SoundManager\soundmandata.h>
#include <SoundManager\SoundEntity.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <util\types.h>
#include <boost\shared_array.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\noncopyable.hpp>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > SpeechIDMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern SoundEntityHandle _sub_6CCF57(SoundManager *const, PatchID const &, vector3 const &);
SoundEntityHandle SoundManager::AddEmmiter(PatchID const &, vector3 const &) // 0x6CCF57
{
    mangled_assert("?AddEmmiter@SoundManager@@QAE?AVSoundEntityHandle@@ABVPatchID@@ABVvector3@@@Z");
    todo("implement");
    SoundEntityHandle __result = _sub_6CCF57(this, arg, arg);
    return __result;
}

_extern long _sub_6CD09F(SoundManager *const, PatchID const &, vector3 const &, long, __int32, bool);
long SoundManager::PlayPatch(PatchID const &, vector3 const &, long, __int32, bool) // 0x6CD09F
{
    mangled_assert("?PlayPatch@SoundManager@@QAEJABVPatchID@@ABVvector3@@JH_N@Z");
    todo("implement");
    long __result = _sub_6CD09F(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6CD1A6(SoundManager *const, char const *, vector3 const &, long, __int32, bool);
long SoundManager::PlayPatch(char const *, vector3 const &, long, __int32, bool) // 0x6CD1A6
{
    mangled_assert("?PlayPatch@SoundManager@@QAEJPBDABVvector3@@JH_N@Z");
    todo("implement");
    long __result = _sub_6CD1A6(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_6CD482(SoundManager *const, long, vector3 const &);
bool SoundManager::SetPatchPosition(long, vector3 const &) // 0x6CD482
{
    mangled_assert("?SetPatchPosition@SoundManager@@QAE_NJABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6CD482(this, arg, arg);
    return __result;
}

_extern void _sub_6CD201(SoundManager *const, SoundEntityHandle const &, bool);
void SoundManager::RemoveEmmiter(SoundEntityHandle const &, bool) // 0x6CD201
{
    mangled_assert("?RemoveEmmiter@SoundManager@@QAEXABVSoundEntityHandle@@_N@Z");
    todo("implement");
    _sub_6CD201(this, arg, arg);
}

_extern void _sub_6CD22F(SoundManager *const, vector3 const &, vector3 const &, vector3 const &, float);
void SoundManager::SetCamera(vector3 const &, vector3 const &, vector3 const &, float) // 0x6CD22F
{
    mangled_assert("?SetCamera@SoundManager@@QAEXABVvector3@@00M@Z");
    todo("implement");
    _sub_6CD22F(this, arg, arg, arg, arg);
}

_extern void _sub_6CD370(SoundManager *const, vector3 const &, vector3 const &, vector3 const &, vector3 const &, float);
void SoundManager::SetCameraIC(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float) // 0x6CD370
{
    mangled_assert("?SetCameraIC@SoundManager@@QAEXABVvector3@@000M@Z");
    todo("implement");
    _sub_6CD370(this, arg, arg, arg, arg, arg);
}

_extern void _sub_6CD463(SoundManager *const, float, bool);
void SoundManager::SetNearestEntity(float, bool) // 0x6CD463
{
    mangled_assert("?SetNearestEntity@SoundManager@@QAEXM_N@Z");
    todo("implement");
    _sub_6CD463(this, arg, arg);
}

_extern void _sub_6CD517(SoundManager *const, long, float);
void SoundManager::StopPatch(long, float) // 0x6CD517
{
    mangled_assert("?StopPatch@SoundManager@@QAEXJM@Z");
    todo("implement");
    _sub_6CD517(this, arg, arg);
}

_extern long _sub_6CD035(SoundManager *const, SoundEntityHandle const &, vector3 const &);
long SoundManager::EmmiterSetPosition(SoundEntityHandle const &, vector3 const &) // 0x6CD035
{
    mangled_assert("?EmmiterSetPosition@SoundManager@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CD035(this, arg, arg);
    return __result;
}

_extern long _sub_6CD068(SoundManager *const, SoundEntityHandle const &, vector3 const &);
long SoundManager::EmmiterSetVelocity(SoundEntityHandle const &, vector3 const &) // 0x6CD068
{
    mangled_assert("?EmmiterSetVelocity@SoundManager@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CD068(this, arg, arg);
    return __result;
}

_extern long _sub_6CD002(SoundManager *const, SoundEntityHandle const &, vector3 const &);
long SoundManager::EmmiterSetHeading(SoundEntityHandle const &, vector3 const &) // 0x6CD002
{
    mangled_assert("?EmmiterSetHeading@SoundManager@@QAEJABVSoundEntityHandle@@ABVvector3@@@Z");
    todo("implement");
    long __result = _sub_6CD002(this, arg, arg);
    return __result;
}

_extern long _sub_6CCFCF(SoundManager *const, SoundEntityHandle const &, bool);
long SoundManager::EmmiterMute(SoundEntityHandle const &, bool) // 0x6CCFCF
{
    mangled_assert("?EmmiterMute@SoundManager@@QAEJABVSoundEntityHandle@@_N@Z");
    todo("implement");
    long __result = _sub_6CCFCF(this, arg, arg);
    return __result;
}

_extern bool _sub_6CCFA1(SoundManager *const, SoundEntityHandle const &);
bool SoundManager::EmmiterIsValid(SoundEntityHandle const &) // 0x6CCFA1
{
    mangled_assert("?EmmiterIsValid@SoundManager@@QAE_NABVSoundEntityHandle@@@Z");
    todo("implement");
    bool __result = _sub_6CCFA1(this, arg);
    return __result;
}

/* ---------- private code */
#endif
