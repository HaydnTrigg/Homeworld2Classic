#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <stdexcept>
#include <xstring>
#include <boost\type_traits\remove_cv.hpp>
#include <xmemory0>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <pch.h>
#include <Collision\BVH\octree.h>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <Collision\BVH\span.h>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <Collision\BVH\Internal\span_i.h>
#include <crtdefs.h>
#include <winsock2.h>
#include <boost\type_traits\is_enum.hpp>
#include <Collision\BVH\proxy.h>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <Collision\intersect.h>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <Collision\primitivesfwd.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <poppack.h>
#include <Mathlib\matrix3.h>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <LevelManager.h>
#include <boost\ref.hpp>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <new>
#include <Interpolation.h>
#include <profileapi.h>
#include <boost\type_traits\is_pointer.hpp>
#include <exception>
#include <xstddef>
#include <synchapi.h>
#include <type_traits>
#include <mmsystem.h>
#include <Collision\Primitives\aabb.h>
#include <mmsyscom.h>
#include <process.h>
#include <Collision\Primitives\obb.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <savestream.h>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <Race.h>
#include <combaseapi.h>
#include <platform\timer.h>
#include <xutility>
#include <platform\platformexports.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <utility>
#include <iosfwd>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <NetworkDP8\source\blowfish.h>
#include <vector>
#include <stdarg.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <SquadronList.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <boost\type_traits\is_volatile.hpp>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <oaidl.h>
#include <list>
#include <commdlg.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\pending\ct_if.hpp>
#include <dpapi.h>
#include <propidl.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessionenum.h>
#include <LevelDesc.h>
#include <SelTarg.h>
#include <Mathlib\vector4.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <Hash.h>
#include <prim.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <fileio\md5.h>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <GameObj.h>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <xtree>
#include <task.h>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <stack>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\scoped_ptr.hpp>
#include <gamestructimpl.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\assert.hpp>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <Badge.h>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <guiddef.h>
#include <stralign.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <jobapi.h>
#include <recorder.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\profiling.h>
#include <orders.h>
#include <util\types.h>
#include <apiset.h>
#include <orders_base.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
#include <sobid.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <atltransactionmanager.h>
#include <boost\type_traits\is_convertible.hpp>
#include <NetworkDP8\source\playerdesc.h>
#include <wow64apiset.h>
#include <ktmw32.h>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\is_empty.hpp>
#include <atliface.h>
#include <boost\type_traits\is_float.hpp>
#include <boost\cstdint.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <boost\config.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <GameOptions.h>
#include <datetimeapi.h>
#include <shtypes.h>
#include <cassert>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <seInterface2\PatchID.h>
#include <SOBGroupManager.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <seInterface2\PatchBase.h>
#include <hash_map>
#include <kernelspecs.h>
#include <urlmon.h>
#include <seInterface2\SoundParams.h>
#include <xhash>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <Mathlib\quat.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <boost\static_assert.hpp>
#include <HyperspaceManager.h>
#include <atltrace.h>
#include <oleacc.h>
#include <atlconv.h>
#include <winsock.h>
#include <atlalloc.h>
#include <platform\cmdline.h>
#include <nb30.h>
#include <wincrypt.h>
#include <assist\typemagic.h>
#include <NetworkDP8\source\authentication.h>
#include <timeapi.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <NetworkDP8\source\session.h>
#include <MultiplierTypes.h>
#include <NetworkDP8\source\directplay.h>
#include <Collision\BVH\bvh.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <GameRulesLibrary.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <savegameimpl.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <savegamedata.h>
#include <pathpoints.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <debug\db.h>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <fixedpoint.h>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <util\fixed.h>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <boost\function\detail\prologue.hpp>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <dbdefines.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <UnitCaps\UnitCaps.h>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <selection.h>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <savegamedef.h>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <boost\detail\shared_count.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <util\statmonitor.h>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <gamemsg.h>
#include <util\utilexports.h>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <Universe.h>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <Waypoint.h>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <config.h>
#include <SobUnmoveable.h>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <gameSettings.h>
#include <wchar.h>
#include <sob.h>
#include <boost\utility.hpp>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <syncChecking.h>
#include <sobstatic.h>
#include <securitybaseapi.h>
#include <boost\utility\addressof.hpp>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\workaround.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <boost\function\detail\maybe_include.hpp>
#include <boost\function\function_template.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern MD5Hash GameSettings::s_dummyGuid; // 0x843AD0
extern char const GameSettings::m_saveToken[13]; // 0x78A948
extern SaveData const GameSettings::m_saveData[15]; // 0x78A958

/* ---------- private variables */

_static
{
    extern GameSettings *s_instance; // 0x843AC8
}

/* ---------- public code */

_extern bool _sub_46A2F8();
bool GameSettings::Started() // 0x46A2F8
{
    mangled_assert("?Started@GameSettings@@SG_NXZ");
    todo("implement");
    bool __result = _sub_46A2F8();
    return __result;
}

_extern bool _sub_46A16A(MD5Hash const &);
bool GameSettings::Restart(MD5Hash const &gameRules) // 0x46A16A
{
    mangled_assert("?Restart@GameSettings@@SG_NABVMD5Hash@@@Z");
    todo("implement");
    bool __result = _sub_46A16A(gameRules);
    return __result;
}

_extern GameSettings *_sub_46A164();
GameSettings *GameSettings::Instance() // 0x46A164
{
    mangled_assert("?Instance@GameSettings@@SGPAV1@XZ");
    todo("implement");
    GameSettings * __result = _sub_46A164();
    return __result;
}

_extern bool _sub_46A2DE();
bool GameSettings::Shutdown() // 0x46A2DE
{
    mangled_assert("?Shutdown@GameSettings@@SG_NXZ");
    todo("implement");
    bool __result = _sub_46A2DE();
    return __result;
}

_extern _sub_469F1E(GameSettings *const, MD5Hash const &);
GameSettings::GameSettings(MD5Hash const &) // 0x469F1E
{
    mangled_assert("??0GameSettings@@QAE@ABVMD5Hash@@@Z");
    todo("implement");
    _sub_469F1E(this, arg);
}

_extern _sub_469FAF(Saveable *const);
_inline Saveable::Saveable() // 0x469FAF
{
    mangled_assert("??0Saveable@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_469FAF(this);
}

_extern void _sub_469FC5(GameSettings *const);
GameSettings::~GameSettings() // 0x469FC5
{
    mangled_assert("??1GameSettings@@UAE@XZ");
    todo("implement");
    _sub_469FC5(this);
}

_extern void _sub_469FEF(MD5Hash *const);
_inline MD5Hash::~MD5Hash() // 0x469FEF
{
    mangled_assert("??1MD5Hash@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_469FEF(this);
}

_extern void _sub_469DF9(void *, SaveGameData *, SaveType);
void GameSettings::saveMD5(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x469DF9
{
    mangled_assert("?saveMD5@GameSettings@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_469DF9(objectPtr, saveGameData, savetype);
}

_extern void _sub_469E37(void *, SaveGameData *);
void GameSettings::loadMD5(void *objectPtr, SaveGameData *saveGameData) // 0x469E37
{
    mangled_assert("?loadMD5@GameSettings@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_469E37(objectPtr, saveGameData);
}

_extern bool _sub_46A734(GameSettings *const, SaveGameData *);
bool GameSettings::restore(SaveGameData *) // 0x46A734
{
    mangled_assert("?restore@GameSettings@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_46A734(this, arg);
    return __result;
}

_extern bool _sub_46A772(GameSettings *const, SaveGameData *, SaveType);
bool GameSettings::save(SaveGameData *, SaveType) // 0x46A772
{
    mangled_assert("?save@GameSettings@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_46A772(this, arg, arg);
    return __result;
}

_extern void _sub_46A566(GameSettings *const);
void GameSettings::postRestore() // 0x46A566
{
    mangled_assert("?postRestore@GameSettings@@UAEXXZ");
    todo("implement");
    _sub_46A566(this);
}

_extern void _sub_46A5A6(GameSettings *const);
void GameSettings::reset() // 0x46A5A6
{
    mangled_assert("?reset@GameSettings@@QAEXXZ");
    todo("implement");
    _sub_46A5A6(this);
}

_extern LevelDesc const *_sub_46A432(GameSettings const *const);
LevelDesc const *GameSettings::getLevelDesc() const // 0x46A432
{
    mangled_assert("?getLevelDesc@GameSettings@@QBEPBVLevelDesc@@XZ");
    todo("implement");
    LevelDesc const * __result = _sub_46A432(this);
    return __result;
}

_extern void _sub_46A7CE(GameSettings *const, MD5Hash const &, unsigned __int32);
void GameSettings::setLevel(MD5Hash const &, unsigned __int32) // 0x46A7CE
{
    mangled_assert("?setLevel@GameSettings@@QAEXABVMD5Hash@@I@Z");
    todo("implement");
    _sub_46A7CE(this, arg, arg);
}

_extern GameSettings::GameRubric _sub_46A42E(GameSettings const *const);
GameSettings::GameRubric GameSettings::getGameRubric() const // 0x46A42E
{
    mangled_assert("?getGameRubric@GameSettings@@QBE?AW4GameRubric@1@XZ");
    todo("implement");
    GameSettings::GameRubric __result = _sub_46A42E(this);
    return __result;
}

_extern void _sub_46A7C4(GameSettings *const, GameSettings::GameRubric);
void GameSettings::setGameRubric(GameSettings::GameRubric) // 0x46A7C4
{
    mangled_assert("?setGameRubric@GameSettings@@QAEXW4GameRubric@1@@Z");
    todo("implement");
    _sub_46A7C4(this, arg);
}

_extern GameSettings::MultiplayerType _sub_46A471(GameSettings const *const);
GameSettings::MultiplayerType GameSettings::getMultiplayerType() const // 0x46A471
{
    mangled_assert("?getMultiplayerType@GameSettings@@QBE?AW4MultiplayerType@1@XZ");
    todo("implement");
    GameSettings::MultiplayerType __result = _sub_46A471(this);
    return __result;
}

_extern void _sub_46A838(GameSettings *const, GameSettings::MultiplayerType);
void GameSettings::setMultiplayerType(GameSettings::MultiplayerType) // 0x46A838
{
    mangled_assert("?setMultiplayerType@GameSettings@@QAEXW4MultiplayerType@1@@Z");
    todo("implement");
    _sub_46A838(this, arg);
}

_extern unsigned __int32 _sub_46A46A(GameSettings const *const);
unsigned __int32 GameSettings::getMaxPlayers() const // 0x46A46A
{
    mangled_assert("?getMaxPlayers@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A46A(this);
    return __result;
}

_extern unsigned __int32 _sub_46A3D3(GameSettings const *const);
unsigned __int32 GameSettings::findMissingPlayerSlot() const // 0x46A3D3
{
    mangled_assert("?findMissingPlayerSlot@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A3D3(this);
    return __result;
}

_extern unsigned __int32 _sub_46A475(GameSettings const *const);
unsigned __int32 GameSettings::getNumHumanPlayers() const // 0x46A475
{
    mangled_assert("?getNumHumanPlayers@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A475(this);
    return __result;
}

_extern unsigned __int32 _sub_46A0F4(GameSettings const *const);
unsigned __int32 GameSettings::GetLocalPlayerIndex() const // 0x46A0F4
{
    mangled_assert("?GetLocalPlayerIndex@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A0F4(this);
    return __result;
}

_extern GamePlayerInfo *_sub_46A090(GameSettings *const, unsigned __int32);
GamePlayerInfo *GameSettings::GetGPInfoFromPlayerID(unsigned __int32) // 0x46A090
{
    mangled_assert("?GetGPInfoFromPlayerID@GameSettings@@QAEPAVGamePlayerInfo@@I@Z");
    todo("implement");
    GamePlayerInfo * __result = _sub_46A090(this, arg);
    return __result;
}

_extern GamePlayerInfo const *_sub_46A0AD(GameSettings const *const, unsigned __int32);
GamePlayerInfo const *GameSettings::GetGPInfoFromPlayerID(unsigned __int32) const // 0x46A0AD
{
    mangled_assert("?GetGPInfoFromPlayerID@GameSettings@@QBEPBVGamePlayerInfo@@I@Z");
    todo("implement");
    GamePlayerInfo const * __result = _sub_46A0AD(this, arg);
    return __result;
}

_extern void _sub_46A842(GameSettings *const, unsigned __int32, PlayerSlotType);
void GameSettings::setPlayerType(unsigned __int32, PlayerSlotType) // 0x46A842
{
    mangled_assert("?setPlayerType@GameSettings@@QAEXIW4PlayerSlotType@@@Z");
    todo("implement");
    _sub_46A842(this, arg, arg);
}

_extern PlayerSlotType _sub_46A494(GameSettings const *const, unsigned __int32);
PlayerSlotType GameSettings::getPlayerType(unsigned __int32) const // 0x46A494
{
    mangled_assert("?getPlayerType@GameSettings@@QBE?AW4PlayerSlotType@@I@Z");
    todo("implement");
    PlayerSlotType __result = _sub_46A494(this, arg);
    return __result;
}

_extern void _sub_46A7AD(GameSettings *const, bool);
void GameSettings::setAlliedVictory(bool) // 0x46A7AD
{
    mangled_assert("?setAlliedVictory@GameSettings@@QAEX_N@Z");
    todo("implement");
    _sub_46A7AD(this, arg);
}

_extern bool _sub_46A55F(GameSettings const *const);
bool GameSettings::isAlliedVictory() const // 0x46A55F
{
    mangled_assert("?isAlliedVictory@GameSettings@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46A55F(this);
    return __result;
}

_extern void _sub_46A86C(GameSettings *const, unsigned __int32, unsigned __int32);
void GameSettings::setSetting(unsigned __int32, unsigned __int32) // 0x46A86C
{
    mangled_assert("?setSetting@GameSettings@@QAEXII@Z");
    todo("implement");
    _sub_46A86C(this, arg, arg);
}

_extern unsigned __int32 _sub_46A4E3(GameSettings const *const, unsigned __int32);
unsigned __int32 GameSettings::getSetting(unsigned __int32) const // 0x46A4E3
{
    mangled_assert("?getSetting@GameSettings@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_46A4E3(this, arg);
    return __result;
}

_extern void _sub_46A87B(GameSettings *const, char const *, char const *);
void GameSettings::setSetting(char const *, char const *) // 0x46A87B
{
    mangled_assert("?setSetting@GameSettings@@QAEXPBD0@Z");
    todo("implement");
    _sub_46A87B(this, arg, arg);
}

_extern char const *_sub_46A4EE(GameSettings const *const, char const *, char const *);
char const *GameSettings::getSetting(char const *, char const *) const // 0x46A4EE
{
    mangled_assert("?getSetting@GameSettings@@QBEPBDPBD0@Z");
    todo("implement");
    char const * __result = _sub_46A4EE(this, arg, arg);
    return __result;
}

_extern void _sub_46A6E5(GameSettings *const, unsigned __int32);
void GameSettings::resetPlayer(unsigned __int32) // 0x46A6E5
{
    mangled_assert("?resetPlayer@GameSettings@@QAEXI@Z");
    todo("implement");
    _sub_46A6E5(this, arg);
}

_extern void _sub_46A7F1(GameSettings *const, unsigned __int32);
void GameSettings::setMaxPlayers(unsigned __int32) // 0x46A7F1
{
    mangled_assert("?setMaxPlayers@GameSettings@@QAEXI@Z");
    todo("implement");
    _sub_46A7F1(this, arg);
}

_extern unsigned __int32 _sub_46A3F6(GameSettings const *const);
unsigned __int32 GameSettings::findUnusedTeam() const // 0x46A3F6
{
    mangled_assert("?findUnusedTeam@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A3F6(this);
    return __result;
}

_extern void _sub_46A307(GameSettings *const, unsigned __int32, unsigned __int32, PlayerSlotType, wchar_t const *);
void GameSettings::addPlayer(unsigned __int32, unsigned __int32, PlayerSlotType, wchar_t const *) // 0x46A307
{
    mangled_assert("?addPlayer@GameSettings@@QAEXIIW4PlayerSlotType@@PB_W@Z");
    todo("implement");
    _sub_46A307(this, arg, arg, arg, arg);
}

_extern void _sub_46A27A(GameSettings *const, __int32, __int32, __int32, wchar_t const *, unsigned __int32);
void GameSettings::SetHumanPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32) // 0x46A27A
{
    mangled_assert("?SetHumanPlayer@GameSettings@@QAEXHHHPB_WI@Z");
    todo("implement");
    _sub_46A27A(this, arg, arg, arg, arg, arg);
}

_extern void _sub_46A213(GameSettings *const, __int32, __int32, __int32, wchar_t const *, unsigned __int32, __int32);
void GameSettings::SetCPUPlayer(__int32, __int32, __int32, wchar_t const *, unsigned __int32, __int32) // 0x46A213
{
    mangled_assert("?SetCPUPlayer@GameSettings@@QAEXHHHPB_WIH@Z");
    todo("implement");
    _sub_46A213(this, arg, arg, arg, arg, arg, arg);
}

_extern unsigned __int32 _sub_46A0CA(GameSettings const *const, unsigned __int32);
unsigned __int32 GameSettings::GetIndexFromNetworkID(unsigned __int32) const // 0x46A0CA
{
    mangled_assert("?GetIndexFromNetworkID@GameSettings@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_46A0CA(this, arg);
    return __result;
}

_extern void _sub_46A857(GameSettings *const, char const *);
void GameSettings::setScriptFile(char const *) // 0x46A857
{
    mangled_assert("?setScriptFile@GameSettings@@QAEXPBD@Z");
    todo("implement");
    _sub_46A857(this, arg);
}

_extern char const *_sub_46A4A9(GameSettings const *const);
char const *GameSettings::getScriptFile() const // 0x46A4A9
{
    mangled_assert("?getScriptFile@GameSettings@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_46A4A9(this);
    return __result;
}

_extern void _sub_46A7B7(GameSettings *const, bool);
void GameSettings::setDebugOutOfSync(bool) // 0x46A7B7
{
    mangled_assert("?setDebugOutOfSync@GameSettings@@QAEX_N@Z");
    todo("implement");
    _sub_46A7B7(this, arg);
}

_extern bool _sub_46A427(GameSettings const *const);
bool GameSettings::getDebugOutOfSync() const // 0x46A427
{
    mangled_assert("?getDebugOutOfSync@GameSettings@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46A427(this);
    return __result;
}

_extern void _sub_46A3AE(GameSettings *const, bool);
void GameSettings::enableSyncErrorRecovery(bool) // 0x46A3AE
{
    mangled_assert("?enableSyncErrorRecovery@GameSettings@@QAEX_N@Z");
    todo("implement");
    _sub_46A3AE(this, arg);
}

_extern bool _sub_46A36C(GameSettings const *const);
bool GameSettings::allowSyncErrorRecovery() const // 0x46A36C
{
    mangled_assert("?allowSyncErrorRecovery@GameSettings@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46A36C(this);
    return __result;
}

_extern unsigned __int32 _sub_46A551(GameSettings const *const);
unsigned __int32 GameSettings::getSyncErrorRecoveryFramePeriod() const // 0x46A551
{
    mangled_assert("?getSyncErrorRecoveryFramePeriod@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A551(this);
    return __result;
}

_extern void _sub_46A96F(GameSettings *const, unsigned __int32);
void GameSettings::setSyncErrorRecoveryFramePeriod(unsigned __int32) // 0x46A96F
{
    mangled_assert("?setSyncErrorRecoveryFramePeriod@GameSettings@@QAEXI@Z");
    todo("implement");
    _sub_46A96F(this, arg);
}

_extern unsigned __int32 _sub_46A558(GameSettings const *const);
unsigned __int32 GameSettings::getSyncErrorRecoveryNbAllowedPerPeriod() const // 0x46A558
{
    mangled_assert("?getSyncErrorRecoveryNbAllowedPerPeriod@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A558(this);
    return __result;
}

_extern void _sub_46A97C(GameSettings *const, unsigned __int32);
void GameSettings::setSyncErrorRecoveryNbAllowedPerPeriod(unsigned __int32) // 0x46A97C
{
    mangled_assert("?setSyncErrorRecoveryNbAllowedPerPeriod@GameSettings@@QAEXI@Z");
    todo("implement");
    _sub_46A97C(this, arg);
}

_extern void _sub_46A962(GameSettings *const, SyncCheckingLevel);
void GameSettings::setSyncCheckingLevel(SyncCheckingLevel) // 0x46A962
{
    mangled_assert("?setSyncCheckingLevel@GameSettings@@QAEXW4SyncCheckingLevel@@@Z");
    todo("implement");
    _sub_46A962(this, arg);
}

_extern SyncCheckingLevel _sub_46A54A(GameSettings const *const);
SyncCheckingLevel GameSettings::getSyncCheckingLevel() const // 0x46A54A
{
    mangled_assert("?getSyncCheckingLevel@GameSettings@@QBE?AW4SyncCheckingLevel@@XZ");
    todo("implement");
    SyncCheckingLevel __result = _sub_46A54A(this);
    return __result;
}

_extern void _sub_46A955(GameSettings *const, unsigned __int32);
void GameSettings::setSyncCheckingBufferSize(unsigned __int32) // 0x46A955
{
    mangled_assert("?setSyncCheckingBufferSize@GameSettings@@QAEXI@Z");
    todo("implement");
    _sub_46A955(this, arg);
}

_extern unsigned __int32 _sub_46A543(GameSettings const *const);
unsigned __int32 GameSettings::getSyncCheckingBufferSize() const // 0x46A543
{
    mangled_assert("?getSyncCheckingBufferSize@GameSettings@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46A543(this);
    return __result;
}

_extern _sub_469F06(GameResult *const);
GameResult::GameResult() // 0x469F06
{
    mangled_assert("??0GameResult@@QAE@XZ");
    todo("implement");
    _sub_469F06(this);
}

_extern void _sub_46A2D4(GameResult *const, bool);
void GameResult::SetScenarioSuccess(bool) // 0x46A2D4
{
    mangled_assert("?SetScenarioSuccess@GameResult@@QAEX_N@Z");
    todo("implement");
    _sub_46A2D4(this, arg);
}

_extern bool _sub_46A160(GameResult const *const);
bool GameResult::GetScenarioSuccess() const // 0x46A160
{
    mangled_assert("?GetScenarioSuccess@GameResult@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_46A160(this);
    return __result;
}

/* ---------- private code */
#endif
