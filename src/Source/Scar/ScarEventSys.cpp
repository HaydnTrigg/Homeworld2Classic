#if 0
/* ---------- headers */

#include "decomp.h"
#include <SoundManager\SoundEntityHandle.h>
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\sob.h>
#include <bitset>
#include <Engine\MainUI.h>
#include <Engine\Selector.h>
#include <luaconfig\luabinding.h>
#include <Engine\MetaSelTarg.h>
#include <Mathlib\matrix4.h>
#include <new>
#include <assist\stlexvector.h>
#include <xstddef>
#include <type_traits>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <algorithm>
#include <xutility>
#include <boost\scoped_array.hpp>
#include <utility>
#include <iosfwd>
#include <map>
#include <xtree>
#include <xmemory>
#include <platform\timer.h>
#include <Scar\ScarEventSys.h>
#include <Engine\SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Engine\savestream.h>
#include <fileio\bytestream.h>
#include <Camera\OrbitParameters.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <vector>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\abilities.h>
#include <Scar\ScarEvent.h>
#include <util\colour.h>
#include <Mathlib\vector2.h>
#include <Engine\sobtypes.h>
#include <util\types.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\SoundParams.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <boost\smart_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <Engine\savegameimpl.h>
#include <Engine\savegamedata.h>
#include <list>
#include <boost\shared_array.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>

/* ---------- constants */

/* ---------- definitions */

struct NameSearchPred
{
    _inline NameSearchPred(char const *);
    bool operator()(ScarEvent *);
private:
    char const *m_name; // 0x0
};
static_assert(sizeof(NameSearchPred) == 4, "Invalid NameSearchPred size");

/* ---------- prototypes */

/* ---------- globals */

extern char const ScarEventSystem::m_saveToken[0]; // 0x7C56D4
extern SaveData const ScarEventSystem::m_saveData[1]; // 0x7C56B4

/* ---------- private variables */

/* ---------- public code */

void ScarEventSystem::Initialize(LuaConfig *) // 0x7288F5
{
    mangled_assert("?Initialize@ScarEventSystem@@QAEXPAVLuaConfig@@@Z");
    todo("implement");
}

void ScarEventSystem::Shutdown() // 0x728AF5
{
    mangled_assert("?Shutdown@ScarEventSystem@@QAEXXZ");
    todo("implement");
}

void ScarEventSystem::Load(LuaConfig *) // 0x728A08
{
    mangled_assert("?Load@ScarEventSystem@@AAEXPAVLuaConfig@@@Z");
    todo("implement");
}

_inline NameSearchPred::NameSearchPred(char const *) // 0x728605
{
    mangled_assert("??0NameSearchPred@@QAE@PBD@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,ScarEventSystem> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,ScarEventSystem> >() // 0x728610
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVScarEventSystem@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1MemberConst<char const *,bool,ScarEventSystem> >::~ObjInternal1<char const *,bool,LuaBinding::Functor1MemberConst<char const *,bool,ScarEventSystem> >() // 0x728616
{
    mangled_assert("??1?$ObjInternal1@PBD_NV?$Functor1MemberConst@PBD_NVScarEventSystem@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline bool NameSearchPred::operator()(ScarEvent *) // 0x728787
{
    mangled_assert("??RNameSearchPred@@QAE_NPAVScarEvent@@@Z");
    todo("implement");
}

void ScarEventSystem::StartEvent(char const *) // 0x728AFD
{
    mangled_assert("?StartEvent@ScarEventSystem@@QAEXPBD@Z");
    todo("implement");
}

bool ScarEventSystem::IsEventDone(char const *) const // 0x7289CE
{
    mangled_assert("?IsEventDone@ScarEventSystem@@QBE_NPBD@Z");
    todo("implement");
}

void ScarEventSystem::StopEvent(char const *) // 0x728B37
{
    mangled_assert("?StopEvent@ScarEventSystem@@QAEXPBD@Z");
    todo("implement");
}

void ScarEventSystem::Update() // 0x728B6F
{
    mangled_assert("?Update@ScarEventSystem@@QAEXXZ");
    todo("implement");
}

ScarEventSystem::~ScarEventSystem() // 0x728625
{
    mangled_assert("??1ScarEventSystem@@UAE@XZ");
    todo("implement");
}

void ScarEventSystem::saveEventSys(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x72800F
{
    mangled_assert("?saveEventSys@ScarEventSystem@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ScarEventSystem::restoreEventSys(void *objectPtr, SaveGameData *saveGameData) // 0x7280D7
{
    mangled_assert("?restoreEventSys@ScarEventSystem@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void ScarEventSystem::postRestore() // 0x728D89
{
    mangled_assert("?postRestore@ScarEventSystem@@UAEXXZ");
    todo("implement");
}

bool ScarEventSystem::restore(SaveGameData *) // 0x728DDC
{
    mangled_assert("?restore@ScarEventSystem@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ScarEventSystem::save(SaveGameData *, SaveType) // 0x728E1A
{
    mangled_assert("?save@ScarEventSystem@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
