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
#include <new>
#include <seInterface2\sedefinesshared.h>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefines.h>
#include <profile\profile.h>
#include <iostream>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <debug\db.h>
#include <boost\scoped_array.hpp>
#include <algorithm>
#include <Engine\random.h>
#include <assist\gbitset.h>
#include <SoundManager\pch.h>
#include <SoundManager\soundmandata.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SoundParamManager.h>
#include <bitset>
#include <math.h>
#include <map>
#include <SoundManager\SoundEntityHandle.h>
#include <xtree>
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

_extern long _sub_6CD62C(SoundManager *const, PatchID const &);
long SoundManager::MusicPlayMovieTrack(PatchID const &) // 0x6CD62C
{
    mangled_assert("?MusicPlayMovieTrack@SoundManager@@QAEJABVPatchID@@@Z");
    todo("implement");
    long __result = _sub_6CD62C(this, arg);
    return __result;
}

_extern long _sub_6CD640(SoundManager *const, PatchID const &, float);
long SoundManager::MusicPlayNIS(PatchID const &, float) // 0x6CD640
{
    mangled_assert("?MusicPlayNIS@SoundManager@@QAEJABVPatchID@@M@Z");
    todo("implement");
    long __result = _sub_6CD640(this, arg, arg);
    return __result;
}

_extern void _sub_6CD71F(SoundManager *const);
void SoundManager::MusicStartFE() // 0x6CD71F
{
    mangled_assert("?MusicStartFE@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CD71F(this);
}

_extern void _sub_6CD7BF(SoundManager *const);
void SoundManager::MusicStopFE() // 0x6CD7BF
{
    mangled_assert("?MusicStopFE@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CD7BF(this);
}

_extern void _sub_6CD6F9(SoundManager *const, float);
void SoundManager::MusicSetVolume(float) // 0x6CD6F9
{
    mangled_assert("?MusicSetVolume@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CD6F9(this, arg);
}

_extern float _sub_6CD546(SoundManager *const);
float SoundManager::MusicGetVolume() // 0x6CD546
{
    mangled_assert("?MusicGetVolume@SoundManager@@QAEMXZ");
    todo("implement");
    float __result = _sub_6CD546(this);
    return __result;
}

_extern void _sub_6CD7E3(SoundManager *const, PatchID const &);
void SoundManager::SetBattleTrack(PatchID const &) // 0x6CD7E3
{
    mangled_assert("?SetBattleTrack@SoundManager@@QAEXABVPatchID@@@Z");
    todo("implement");
    _sub_6CD7E3(this, arg);
}

_extern void _sub_6CD7F0(SoundManager *const, PatchID const &);
void SoundManager::SetLevelTrack(PatchID const &) // 0x6CD7F0
{
    mangled_assert("?SetLevelTrack@SoundManager@@QAEXABVPatchID@@@Z");
    todo("implement");
    _sub_6CD7F0(this, arg);
}

_extern void _sub_6CD537(SoundManager *const, bool);
void SoundManager::BattleMusic(bool) // 0x6CD537
{
    mangled_assert("?BattleMusic@SoundManager@@QAEX_N@Z");
    todo("implement");
    _sub_6CD537(this, arg);
}

_extern void _sub_6CD61F(SoundManager *const);
void SoundManager::MusicPlayDefault() // 0x6CD61F
{
    mangled_assert("?MusicPlayDefault@SoundManager@@QAEXXZ");
    todo("implement");
    _sub_6CD61F(this);
}

_extern void _sub_6CDA8A(SoundManager *const, float, bool);
void SoundManager::internalMusicUpdate(float, bool) // 0x6CDA8A
{
    mangled_assert("?internalMusicUpdate@SoundManager@@AAEXM_N@Z");
    todo("implement");
    _sub_6CDA8A(this, arg, arg);
}

_extern void _sub_6CD54C(SoundManager *const, PatchID const &, SoundManager::MusicType, float, __int32);
void SoundManager::MusicPlay(PatchID const &, SoundManager::MusicType, float, __int32) // 0x6CD54C
{
    mangled_assert("?MusicPlay@SoundManager@@QAEXABVPatchID@@W4MusicType@1@MH@Z");
    todo("implement");
    _sub_6CD54C(this, arg, arg, arg, arg);
}

_extern void _sub_6CD739(SoundManager *const, float);
void SoundManager::MusicStop(float) // 0x6CD739
{
    mangled_assert("?MusicStop@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CD739(this, arg);
}

_extern void _sub_6CD7FD(SoundManager *const, PatchID const &);
void SoundManager::StingerPlay(PatchID const &) // 0x6CD7FD
{
    mangled_assert("?StingerPlay@SoundManager@@QAEXABVPatchID@@@Z");
    todo("implement");
    _sub_6CD7FD(this, arg);
}

_extern void _sub_6CD8D7(SoundManager *const, float);
void SoundManager::StingerStop(float) // 0x6CD8D7
{
    mangled_assert("?StingerStop@SoundManager@@QAEXM@Z");
    todo("implement");
    _sub_6CD8D7(this, arg);
}

_extern void _sub_6CD90A(SoundManager *const, float);
void SoundManager::internalBattlePlay(float) // 0x6CD90A
{
    mangled_assert("?internalBattlePlay@SoundManager@@AAEXM@Z");
    todo("implement");
    _sub_6CD90A(this, arg);
}

_extern void _sub_6CDA5E(SoundManager *const, long *, float);
void SoundManager::internalMusicStop(long *, float) // 0x6CDA5E
{
    mangled_assert("?internalMusicStop@SoundManager@@AAEXPAJM@Z");
    todo("implement");
    _sub_6CDA5E(this, arg, arg);
}

_extern void _sub_6CD99D(SoundManager *const, long, float);
void SoundManager::internalMusicPause(long, float) // 0x6CD99D
{
    mangled_assert("?internalMusicPause@SoundManager@@AAEXJM@Z");
    todo("implement");
    _sub_6CD99D(this, arg, arg);
}

_extern float _sub_6CDC6C(SoundManager *const, MusicTuning &);
float SoundManager::internalMusicVol(MusicTuning &) // 0x6CDC6C
{
    mangled_assert("?internalMusicVol@SoundManager@@AAEMAAVMusicTuning@@@Z");
    todo("implement");
    float __result = _sub_6CDC6C(this, arg);
    return __result;
}

_extern void _sub_6CD9D5(SoundManager *const, float, __int32);
void SoundManager::internalMusicPlay(float, __int32) // 0x6CD9D5
{
    mangled_assert("?internalMusicPlay@SoundManager@@AAEXMH@Z");
    todo("implement");
    _sub_6CD9D5(this, arg, arg);
}

/* ---------- private code */
#endif
