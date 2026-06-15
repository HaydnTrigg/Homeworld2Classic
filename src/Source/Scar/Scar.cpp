#if 0
/* ---------- headers */

#include "decomp.h"
#include <Scar\LuaSubtitle.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Scar\LuaObjectives.h>
#include <xstring>
#include <xmemory0>
#include <Scar\LuaUniverse.h>
#include <securitybaseapi.h>
#include <Scar\pch.h>
#include <Scar\LuaSobGroupQuery.h>
#include <crtdefs.h>
#include <Engine\LuaTools\LuaRulesProfiler.h>
#include <Scar\LuaSobGroupActions.h>
#include <fileio\filepath.h>
#include <imm.h>
#include <Scar\LuaSensor.h>
#include <Scar\LuaPing.h>
#include <debugapi.h>
#include <luaconfig\luabinding.h>
#include <fileapi.h>
#include <Scar\LuaHyperspace.h>
#include <Scar\LuaCamera.h>
#include <stralign.h>
#include <Scar\LuaSound.h>
#include <new>
#include <Engine\region.h>
#include <Scar\LuaFX.h>
#include <windows.h>
#include <xstddef>
#include <platform\keydefines.h>
#include <winapifamily.h>
#include <threadpoollegacyapiset.h>
#include <winsvc.h>
#include <type_traits>
#include <sdkddkver.h>
#include <excpt.h>
#include <Engine\GameObj.h>
#include <Scar\LuaATI.h>
#include <poppack.h>
#include <Engine\config.h>
#include <Engine\task.h>
#include <Scar\Graphics\LuaLight.h>
#include <stack>
#include <Engine\CPUPlayer\LuaCPU.h>
#include <xutility>
#include <utility>
#include <boost\config.hpp>
#include <iosfwd>
#include <Engine\NIS\LuaNIS.h>
#include <profileapi.h>
#include <map>
#include <xtree>
#include <Engine\KeyBindings.h>
#include <synchapi.h>
#include <xmemory>
#include <platform\timer.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Scar\Scar.h>
#include <Scar\ScarEventSys.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <fileio\bytestream.h>
#include <wnnc.h>
#include <string.h>
#include <fileio\fileioexports.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <vector>
#include <sdv_driverspecs.h>
#include <Engine\savestream.h>
#include <Engine\App\LuaGameSettings.h>
#include <threadpoolapiset.h>
#include <boost\detail\workaround.hpp>
#include <UserInterface\LuaUserInterface.h>
#include <namespaceapi.h>
#include <Engine\Menus\LuaMenuSupport.h>
#include <ktmtypes.h>
#include <Engine\Stats\luastatlogging.h>
#include <Mathlib\vector3.h>
#include <profile\profile.h>
#include <winbase.h>
#include <wincon.h>
#include <Mathlib\vector4.h>
#include <iostream>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <util\colour.h>
#include <Scar\LuaRuleSystem.h>
#include <boost\utility.hpp>
#include <errhandlingapi.h>
#include <boost\utility\addressof.hpp>
#include <processenv.h>
#include <guiddef.h>
#include <cstdarg>
#include <boost\utility\base_from_member.hpp>
#include <stdarg.h>
#include <jobapi.h>
#include <boost\utility_fwd.hpp>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <wow64apiset.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <util\statmonitor.h>
#include <kernelspecs.h>
#include <util\utilexports.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <mcx.h>
#include <Engine\prim.h>
#include <winreg.h>
#include <Engine\savegamedef.h>
#include <boost\next_prior.hpp>
#include <assist\typemagic.h>
#include <boost\noncopyable.hpp>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\savegameimpl.h>
#include <fileio\ramstream.h>
#include <winver.h>
#include <verrsrc.h>
#include <Engine\savegamedata.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <consoleapi.h>
#include <assist\stlexsmallvector.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <debug\dbcrt.h>
#include <memoryapi.h>
#include <Scar\Scar.pch>
#include <wingdi.h>
#include <pshpack4.h>
#include <list>
#include <winerror.h>
#include <Scar\LuaCampaign.h>
#include <Scar\LuaPlayer.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern char const *scarstrrchr(char const *str, char t);
extern void scarTracefAux(char const *format, ...);

/* ---------- globals */

extern SaveData const Scar::m_saveData[4]; // 0x7C53C0
extern char const Scar::m_saveToken[5]; // 0x7C5440

/* ---------- private variables */

_static
{
    extern char const *LUALIB_LIST[21]; // 0x861310
    extern Scar *s_instance; // 0x861308
}

/* ---------- public code */

Scar::Scar() // 0x726D34
{
    mangled_assert("??0Scar@@AAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal1<int,void,LuaBinding::Functor1MemberNonConst<int,void,Scar> >::~ObjInternal1<int,void,LuaBinding::Functor1MemberNonConst<int,void,Scar> >() // 0x726E2E
{
    mangled_assert("??1?$ObjInternal1@HXV?$Functor1MemberNonConst@HXVScar@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<int,char const *,void,LuaBinding::Functor2MemberNonConst<int,char const *,void,Scar> >::~ObjInternal2<int,char const *,void,LuaBinding::Functor2MemberNonConst<int,char const *,void,Scar> >() // 0x726E34
{
    mangled_assert("??1?$ObjInternal2@HPBDXV?$Functor2MemberNonConst@HPBDXVScar@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x726E3A
{
    mangled_assert("??1?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Scar::~Scar() // 0x726E47
{
    mangled_assert("??1Scar@@EAE@XZ");
    todo("implement");
}

bool Scar::Startup() // 0x727432
{
    mangled_assert("?Startup@Scar@@SG_NXZ");
    todo("implement");
}

bool Scar::Shutdown() // 0x7273C7
{
    mangled_assert("?Shutdown@Scar@@SG_NXZ");
    todo("implement");
}

Scar *Scar::i() // 0x7275BA
{
    mangled_assert("?i@Scar@@SGPAV1@XZ");
    todo("implement");
}

void Scar::update(float) // 0x7277E9
{
    mangled_assert("?update@Scar@@QAEXM@Z");
    todo("implement");
}

void Scar::DumpRules() // 0x7271A0
{
    mangled_assert("?DumpRules@Scar@@QAEXXZ");
    todo("implement");
}

bool Scar::LoadScript(char const *) // 0x727226
{
    mangled_assert("?LoadScript@Scar@@QAE_NPBD@Z");
    todo("implement");
}

bool Scar::StartScript() // 0x7273E1
{
    mangled_assert("?StartScript@Scar@@QAE_NXZ");
    todo("implement");
}

void Scar::DoStartOrLoad() // 0x727177
{
    mangled_assert("?DoStartOrLoad@Scar@@QAEXXZ");
    todo("implement");
}

void Scar::Reload() // 0x727320
{
    mangled_assert("?Reload@Scar@@QAEXXZ");
    todo("implement");
}

void Scar::ReloadFile(char const *) // 0x727356
{
    mangled_assert("?ReloadFile@Scar@@QAEXPBD@Z");
    todo("implement");
}

void Scar::BindKeyEvent(__int32, char const *) // 0x72709B
{
    mangled_assert("?BindKeyEvent@Scar@@AAEXHPBD@Z");
    todo("implement");
}

void Scar::UnBindKeyEvent(__int32) // 0x72746B
{
    mangled_assert("?UnBindKeyEvent@Scar@@AAEXH@Z");
    todo("implement");
}

void Scar::HandleInput(__int32 keyId, __int32 eventType) // 0x7271A8
{
    mangled_assert("?HandleInput@Scar@@SGXHH@Z");
    todo("implement");
}

char const *scarstrrchr(char const *str, char t) // 0x7277BA
{
    mangled_assert("?scarstrrchr@@YGPBDPBDD@Z");
    todo("implement");
}

void scarTracefAux(char const *format, ...) // 0x72767B
{
    mangled_assert("?scarTracefAux@@YAXPBDZZ");
    todo("implement");
}

bool Scar::Save(SaveGameData *saveGameData, SaveType saveType) // 0x7273AF
{
    mangled_assert("?Save@Scar@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool Scar::Restore(SaveGameData *saveGameData) // 0x72739B
{
    mangled_assert("?Restore@Scar@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

void Scar::saveLuaState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x7265DD
{
    mangled_assert("?saveLuaState@Scar@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void Scar::restoreLuaState(void *objectPtr, SaveGameData *saveGameData) // 0x72669D
{
    mangled_assert("?restoreLuaState@Scar@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void Scar::postRestore() // 0x7275FB
{
    mangled_assert("?postRestore@Scar@@UAEXXZ");
    todo("implement");
}

bool Scar::restore(SaveGameData *) // 0x7275FC
{
    mangled_assert("?restore@Scar@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Scar::save(SaveGameData *, SaveType) // 0x72763A
{
    mangled_assert("?save@Scar@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
