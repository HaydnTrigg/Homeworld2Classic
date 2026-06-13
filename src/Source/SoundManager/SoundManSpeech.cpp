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
#include <vector>
#include <new>
#include <xmemory>
#include <seInterface2\sedefinesshared.h>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <Engine\App\AppObj.h>
#include <platform\appinterface.h>
#include <xutility>
#include <iosfwd>
#include <debug\db.h>
#include <seInterface2\sedefines.h>
#include <boost\scoped_array.hpp>
#include <algorithm>
#include <Engine\random.h>
#include <assist\gbitset.h>
#include <string>
#include <SoundManager\pch.h>
#include <SoundManager\soundmandata.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SoundParamManager.h>
#include <bitset>
#include <math.h>
#include <SoundManager\SoundEntityHandle.h>
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

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6CDF0D(SpeechQueue *const, SpeechQueue const &);
_inline SpeechQueue::SpeechQueue(SpeechQueue const &) // 0x6CDF0D
{
    mangled_assert("??0SpeechQueue@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_6CDF0D(this, arg);
}

_extern SpeechQueue &_sub_6CDFE9(SpeechQueue *const, SpeechQueue const &);
_inline SpeechQueue &SpeechQueue::operator=(SpeechQueue const &) // 0x6CDFE9
{
    mangled_assert("??4SpeechQueue@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SpeechQueue & __result = _sub_6CDFE9(this, arg);
    return __result;
}

_extern void _sub_6CE37E(SoundManager *const);
void SoundManager::SpeechExitIntelEvent() // 0x6CE37E
{
    mangled_assert("?SpeechExitIntelEvent@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CE37E(this);
}

_extern void _sub_6CE33B(SoundManager *const);
void SoundManager::SpeechEnterIntelEvent() // 0x6CE33B
{
    mangled_assert("?SpeechEnterIntelEvent@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CE33B(this);
}

_extern void _sub_6CE2E6(SoundManager *const);
void SoundManager::SpeechClear() // 0x6CE2E6
{
    mangled_assert("?SpeechClear@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CE2E6(this);
}

_extern void _sub_6CE617(SoundManager *const, float);
void SoundManager::SpeechSetVolume(float) // 0x6CE617
{
    mangled_assert("?SpeechSetVolume@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CE617(this, arg);
}

_extern float _sub_6CE388(SoundManager *const);
float SoundManager::SpeechGetVolume() // 0x6CE388
{
    mangled_assert("?SpeechGetVolume@SoundManager@@QAEMXZ");
    todo("implement");
    float __result = _sub_6CE388(this);
    return __result;
}

_extern long _sub_6CE3E2(SoundManager *const, PatchID const &);
long SoundManager::SpeechPlayMovieSpeech(PatchID const &) // 0x6CE3E2
{
    mangled_assert("?SpeechPlayMovieSpeech@SoundManager@@QAEJABVPatchID@@@Z");
    todo("implement");
    long __result = _sub_6CE3E2(this, arg);
    return __result;
}

_extern long _sub_6CE16C(SoundManager *const, char const *, float, float, void (*)(long), long, char const *);
long SoundManager::SpeechAllShipsPlay(char const *, float, float, void (*)(long), long, char const *) // 0x6CE16C
{
    mangled_assert("?SpeechAllShipsPlay@SoundManager@@QAEJPBDMMP6GXJ@ZJ0@Z");
    todo("implement");
    long __result = _sub_6CE16C(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6CE544(SoundManager *const, char const *, void (*)(long));
long SoundManager::SpeechPlaySubtitled(char const *, void (*)(long)) // 0x6CE544
{
    mangled_assert("?SpeechPlaySubtitled@SoundManager@@QAEJPBDP6GXJ@Z@Z");
    todo("implement");
    long __result = _sub_6CE544(this, arg, arg);
    return __result;
}

_extern long _sub_6CE38E(SoundManager *const, PatchID const &, long, void (*)(long), __int32, float, float, long);
long SoundManager::SpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, long) // 0x6CE38E
{
    mangled_assert("?SpeechPlay@SoundManager@@QAEJABVPatchID@@JP6GXJ@ZHMMJ@Z");
    todo("implement");
    long __result = _sub_6CE38E(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern long _sub_6CE981(SoundManager *const, PatchID const &, long, void (*)(long), __int32, float, float, float, long);
long SoundManager::internalSpeechPlay(PatchID const &, long, void (*)(long), __int32, float, float, float, long) // 0x6CE981
{
    mangled_assert("?internalSpeechPlay@SoundManager@@AAEJABVPatchID@@JP6GXJ@ZHMMMJ@Z");
    todo("implement");
    long __result = _sub_6CE981(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_6CE6C5(SoundManager *const, float);
void SoundManager::SpeechUpdate(float) // 0x6CE6C5
{
    mangled_assert("?SpeechUpdate@SoundManager@@AAEXM@Z");
    todo("implement");
    _sub_6CE6C5(this, arg);
}

_extern void _sub_6CE26F(long);
void SoundManager::SpeechCallback(long handle) // 0x6CE26F
{
    mangled_assert("?SpeechCallback@SoundManager@@CGXJ@Z");
    todo("implement");
    _sub_6CE26F(handle);
}

_extern void _sub_6CE424(SoundManager *const);
void SoundManager::SpeechPlayNextQueue() // 0x6CE424
{
    mangled_assert("?SpeechPlayNextQueue@SoundManager@@AAEXXZ");
    todo("implement");
    _sub_6CE424(this);
}

_extern void _sub_6CE63D(SoundManager *const, long);
void SoundManager::SpeechStop(long) // 0x6CE63D
{
    mangled_assert("?SpeechStop@SoundManager@@QAEXJ@Z");
    todo("implement");
    _sub_6CE63D(this, arg);
}

_extern SpeechQueue *_sub_6CE0C0(SoundManager *const, long);
SpeechQueue *SoundManager::FindSpeechQueue(long) // 0x6CE0C0
{
    mangled_assert("?FindSpeechQueue@SoundManager@@AAEPAVSpeechQueue@@J@Z");
    todo("implement");
    SpeechQueue * __result = _sub_6CE0C0(this, arg);
    return __result;
}

_extern SpeechQueue *_sub_6CE0FB(SoundManager *const);
SpeechQueue *SoundManager::GetCurrentSpeech() // 0x6CE0FB
{
    mangled_assert("?GetCurrentSpeech@SoundManager@@AAEPAVSpeechQueue@@XZ");
    todo("implement");
    SpeechQueue * __result = _sub_6CE0FB(this);
    return __result;
}

_extern void _sub_6CEBF0(SoundManager *const, long);
void SoundManager::internalSpeechRemoveLinks(long) // 0x6CEBF0
{
    mangled_assert("?internalSpeechRemoveLinks@SoundManager@@AAEXJ@Z");
    todo("implement");
    _sub_6CEBF0(this, arg);
}

/* ---------- private code */
#endif
