#if 0
/* ---------- headers */

#include "decomp.h"
#include <Hash.h>
#include <fixedpoint.h>
#include <savestream.h>
#include <ole2.h>
#include <fileio\md5.h>
#include <assist\stlexsmallvector.h>
#include <util\fixed.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <gamestructimpl.h>
#include <winnls.h>
#include <shellapi.h>
#include <Badge.h>
#include <datetimeapi.h>
#include <crtdefs.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <GameObj.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <util\statmonitor.h>
#include <winreg.h>
#include <ncrypt.h>
#include <util\utilexports.h>
#include <Mathlib\matrix3.h>
#include <platform\timer.h>
#include <unknwnbase.h>
#include <platform\platformexports.h>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <new>
#include <timeapi.h>
#include <xstddef>
#include <dpapi.h>
#include <propidl.h>
#include <type_traits>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <imm.h>
#include <boost\static_assert.hpp>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <xutility>
#include <rpcndr.h>
#include <utility>
#include <iosfwd>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <vector>
#include <fileio\bytestream.h>
#include <mciapi.h>
#include <stralign.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <winuser.h>
#include <consoleapi.h>
#include <luaconfig\luabinding.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <seInterface2\PatchID.h>
#include <luaconfig\luaconfig.h>
#include <seInterface2\PatchBase.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <seInterface2\SoundParams.h>
#include <string.h>
#include <list>
#include <Collision\BVH\octree.h>
#include <wingdi.h>
#include <Collision\BVH\span.h>
#include <rpc.h>
#include <urlmon.h>
#include <Collision\BVH\Internal\span_i.h>
#include <pshpack4.h>
#include <Collision\BVH\proxy.h>
#include <joystickapi.h>
#include <Mathlib\vector3.h>
#include <Collision\intersect.h>
#include <rpcdce.h>
#include <Mathlib\vector4.h>
#include <Collision\primitivesfwd.h>
#include <winerror.h>
#include <bcrypt.h>
#include <map>
#include <ddeml.h>
#include <lzexpand.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Interpolation.h>
#include <Mathlib\vector2.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <util\types.h>
#include <Collision\Primitives\aabb.h>
#include <oleauto.h>
#include <boost\cstdint.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\config.hpp>
#include <sobid.h>
#include <debugapi.h>
#include <fileapi.h>
#include <gameSettings.h>
#include <cguid.h>
#include <config.h>
#include <syncChecking.h>
#include <cderr.h>
#include <dde.h>
#include <dbdefines.h>
#include <Mathlib\quat.h>
#include <UnitCaps\UnitCaps.h>
#include <Camera\OrbitParameters.h>
#include <windows.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <poppack.h>
#include <mmiscapi2.h>
#include <Universe.h>
#include <profileapi.h>
#include <winefs.h>
#include <Waypoint.h>
#include <SelTarg.h>
#include <SobUnmoveable.h>
#include <prim.h>
#include <synchapi.h>
#include <inaddr.h>
#include <sob.h>
#include <mmsystem.h>
#include <savegameimpl.h>
#include <sobstatic.h>
#include <mmsyscom.h>
#include <Collision\Primitives\sphere.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <savegamedatainfo.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Collision\Primitives\capsule.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <Collision\Primitives\segment.h>
#include <wnnc.h>
#include <Collision\BVH\profiling.h>
#include <CameraCommand.h>
#include <stdarg.h>
#include <CameraHW.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <campaign.h>
#include <Camera\CameraOrbitTarget.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <scripting.h>
#include <Camera\Camera.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <scriptaccess.h>
#include <Camera\Frustum.h>
#include <specstrings_strict.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <scripttypedef.h>
#include <Camera\Plane3.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <selection.h>
#include <driverspecs.h>
#include <savegamedef.h>
#include <sdv_driverspecs.h>
#include <fileio\filepath.h>
#include <boost\detail\shared_count.hpp>
#include <SOBGroupManager.h>
#include <lua.h>
#include <threadpoolapiset.h>
#include <boost\detail\lwm_win32.hpp>
#include <hash_map>
#include <xhash>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winsmcrd.h>
#include <HyperspaceManager.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <SquadronList.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <savegame.h>
#include <task.h>
#include <wchar.h>
#include <stack>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <LevelDesc.h>
#include <apiset.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > SaveObjectListIterator;

/* ---------- prototypes */

extern SaveStreamWriteMode getSaveMode();

_static bool operator<(_ULARGE_INTEGER const &a, _ULARGE_INTEGER const &b);
_static bool GameIO_DebugCheckCRC(SaveType save_type, unsigned __int32 compareCRC);

/* ---------- globals */

extern std::list<SaveObject *,std::allocator<SaveObject *> > SaveObject::s_list; // 0x84AEB8

/* ---------- private variables */

_static
{
    extern GameIO *s_instance; // 0x84AEB4
}

/* ---------- public code */

_extern GameIO *_sub_62750C();
GameIO *GameIO::i() // 0x62750C
{
    mangled_assert("?i@GameIO@@SGPAV1@XZ");
    todo("implement");
    GameIO * __result = _sub_62750C();
    return __result;
}

_extern bool _sub_6277E0();
bool GameIO::startup() // 0x6277E0
{
    mangled_assert("?startup@GameIO@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6277E0();
    return __result;
}

_extern bool _sub_6277C6();
bool GameIO::shutdown() // 0x6277C6
{
    mangled_assert("?shutdown@GameIO@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6277C6();
    return __result;
}

_extern bool _sub_627639();
bool GameIO::pregame() // 0x627639
{
    mangled_assert("?pregame@GameIO@@SG_NXZ");
    todo("implement");
    bool __result = _sub_627639();
    return __result;
}

_extern bool _sub_627636();
bool GameIO::postgame() // 0x627636
{
    mangled_assert("?postgame@GameIO@@SG_NXZ");
    todo("implement");
    bool __result = _sub_627636();
    return __result;
}

_extern bool _sub_62743C(SaveGameData *, SaveType);
bool GameIO::createIDMap(SaveGameData *saveGameData, SaveType saveType) // 0x62743C
{
    mangled_assert("?createIDMap@GameIO@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_62743C(saveGameData, saveType);
    return __result;
}

_extern bool _sub_627665(SaveGameData *);
bool GameIO::restoreIDMap(SaveGameData *saveGameData) // 0x627665
{
    mangled_assert("?restoreIDMap@GameIO@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_627665(saveGameData);
    return __result;
}

_extern bool _sub_6277B4(SaveGameData *, SaveType);
bool GameIO::saveObjectDatabase(SaveGameData *saveGameData, SaveType saveType) // 0x6277B4
{
    mangled_assert("?saveObjectDatabase@GameIO@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6277B4(saveGameData, saveType);
    return __result;
}

_extern bool _sub_627673(SaveGameData *);
bool GameIO::restoreObjectDatabase(SaveGameData *saveGameData) // 0x627673
{
    mangled_assert("?restoreObjectDatabase@GameIO@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_627673(saveGameData);
    return __result;
}

_extern bool _sub_6277B1(GameIO *const);
bool GameIO::saveGameIsSaving() // 0x6277B1
{
    mangled_assert("?saveGameIsSaving@GameIO@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6277B1(this);
    return __result;
}

_extern bool _sub_6274AB(GameIO *const, SaveGameData *, SaveType);
bool GameIO::generateSaveGame(SaveGameData *, SaveType) // 0x6274AB
{
    mangled_assert("?generateSaveGame@GameIO@@QAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_6274AB(this, arg, arg);
    return __result;
}

_extern bool _sub_627605(GameIO *const);
bool GameIO::loadGameIsLoading() // 0x627605
{
    mangled_assert("?loadGameIsLoading@GameIO@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_627605(this);
    return __result;
}

_extern bool _sub_627609(GameIO *const);
bool GameIO::loadGameIsLoadingInGame() // 0x627609
{
    mangled_assert("?loadGameIsLoadingInGame@GameIO@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_627609(this);
    return __result;
}

_extern SaveStreamWriteMode _sub_627508();
SaveStreamWriteMode getSaveMode() // 0x627508
{
    mangled_assert("?getSaveMode@@YG?AW4SaveStreamWriteMode@@XZ");
    todo("implement");
    SaveStreamWriteMode __result = _sub_627508();
    return __result;
}

_extern SaveGameResult _sub_6276A0(GameIO *const, char const *, SaveType);
SaveGameResult GameIO::saveGame(char const *, SaveType) // 0x6276A0
{
    mangled_assert("?saveGame@GameIO@@QAE?AW4SaveGameResult@@PBDW4SaveType@@@Z");
    todo("implement");
    SaveGameResult __result = _sub_6276A0(this, arg, arg);
    return __result;
}

_extern LoadGameResult _sub_62752F(GameIO *const, char const *);
LoadGameResult GameIO::loadGame(char const *) // 0x62752F
{
    mangled_assert("?loadGame@GameIO@@QAE?AW4LoadGameResult@@PBD@Z");
    todo("implement");
    LoadGameResult __result = _sub_62752F(this, arg);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > _sub_627681();
std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > SaveObject::s_listBegin() // 0x627681
{
    mangled_assert("?s_listBegin@SaveObject@@SG?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVSaveObject@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > __result = _sub_627681();
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > _sub_627691();
std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > SaveObject::s_listEnd() // 0x627691
{
    mangled_assert("?s_listEnd@SaveObject@@SG?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVSaveObject@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<SaveObject *> > > __result = _sub_627691();
    return __result;
}

_extern _sub_6271BA(SaveObject *const, bool);
SaveObject::SaveObject(bool) // 0x6271BA
{
    mangled_assert("??0SaveObject@@QAE@_N@Z");
    todo("implement");
    _sub_6271BA(this, arg);
}

_extern void _sub_627208(std::_List_buy<SaveObject *,std::allocator<SaveObject *> > *const);
_inline std::_List_buy<SaveObject *,std::allocator<SaveObject *> >::~_List_buy<SaveObject *,std::allocator<SaveObject *> >() // 0x627208
{
    mangled_assert("??1?$_List_buy@PAVSaveObject@@V?$allocator@PAVSaveObject@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_627208(this);
}

_extern void _sub_62723B(SaveObject *const);
SaveObject::~SaveObject() // 0x62723B
{
    mangled_assert("??1SaveObject@@UAE@XZ");
    todo("implement");
    _sub_62723B(this);
}

_extern void _sub_6272D9(SaveObject *const);
void SaveObject::Link() // 0x6272D9
{
    mangled_assert("?Link@SaveObject@@QAEXXZ");
    todo("implement");
    _sub_6272D9(this);
}

_extern void _sub_627307(SaveObject *const);
void SaveObject::Unlink() // 0x627307
{
    mangled_assert("?Unlink@SaveObject@@QAEXXZ");
    todo("implement");
    _sub_627307(this);
}

/* ---------- private code */

_extern bool _sub_62727C(_ULARGE_INTEGER const &, _ULARGE_INTEGER const &);
_static bool operator<(_ULARGE_INTEGER const &a, _ULARGE_INTEGER const &b) // 0x62727C
{
    mangled_assert("operator<");
    todo("implement");
    bool __result = _sub_62727C(a, b);
    return __result;
}

_extern bool _sub_6272D4(SaveType, unsigned __int32);
_static bool GameIO_DebugCheckCRC(SaveType save_type, unsigned __int32 compareCRC) // 0x6272D4
{
    mangled_assert("GameIO_DebugCheckCRC");
    todo("implement");
    bool __result = _sub_6272D4(save_type, compareCRC);
    return __result;
}
#endif
