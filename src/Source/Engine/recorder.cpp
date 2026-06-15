#if 0
/* ---------- headers */

#include "decomp.h"
#include <NetworkDP8\source\authentication.h>
#include <xiosbase>
#include <assist\stlexsmallvector.h>
#include <timeapi.h>
#include <xlocale>
#include <NetworkDP8\source\session.h>
#include <stdexcept>
#include <xstring>
#include <NetworkDP8\source\directplay.h>
#include <xmemory0>
#include <Interpolation.h>
#include <securityappcontainer.h>
#include <rpcsal.h>
#include <boost\thread\thread.hpp>
#include <pch.h>
#include <fibersapi.h>
#include <boost\function.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\preprocessor\iterate.hpp>
#include <fileio\filepath.h>
#include <crtdefs.h>
#include <boost\preprocessor\iteration\iterate.hpp>
#include <Collision\Primitives\aabb.h>
#include <winver.h>
#include <boost\preprocessor\arithmetic\dec.hpp>
#include <Collision\Primitives\obb.h>
#include <verrsrc.h>
#include <oleauto.h>
#include <boost\preprocessor\config\config.hpp>
#include <winioctl.h>
#include <servprov.h>
#include <boost\preprocessor\arithmetic\inc.hpp>
#include <realtimeapiset.h>
#include <tvout.h>
#include <boost\preprocessor\array\elem.hpp>
#include <mciapi.h>
#include <comcat.h>
#include <boost\preprocessor\array\data.hpp>
#include <direct.h>
#include <platform\timer.h>
#include <winuser.h>
#include <boost\preprocessor\tuple\elem.hpp>
#include <Mathlib\matrix3.h>
#include <platform\platformexports.h>
#include <cguid.h>
#include <boost\preprocessor\array\size.hpp>
#include <atlsimpcoll.h>
#include <boost\preprocessor\cat.hpp>
#include <util\statmonitor.h>
#include <consoleapi.h>
#include <boost\preprocessor\slot\slot.hpp>
#include <util\utilexports.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <boost\preprocessor\slot\detail\def.hpp>
#include <boost\type_traits\is_same.hpp>
#include <boost\function\detail\prologue.hpp>
#include <new>
#include <gameSettings.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <statreg.h>
#include <boost\function\function_base.hpp>
#include <LevelDesc.h>
#include <boost\type_traits\arithmetic_traits.hpp>
#include <SquadronList.h>
#include <xstddef>
#include <Hash.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <atlwinverapi.h>
#include <boost\type_traits\is_arithmetic.hpp>
#include <boost\mem_fn.hpp>
#include <type_traits>
#include <fileio\md5.h>
#include <prsht.h>
#include <boost\type_traits\is_integral.hpp>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\get_pointer.hpp>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <boost\preprocessor\enum.hpp>
#include <NetworkDP8\source\message.h>
#include <xlocinfo>
#include <wingdi.h>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <boost\preprocessor\repetition\enum.hpp>
#include <rpc.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <boost\preprocessor\debug\error.hpp>
#include <pshpack4.h>
#include <boost\preprocessor\detail\auto_rec.hpp>
#include <joystickapi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\preprocessor\control\iif.hpp>
#include <rpcdce.h>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <boost\preprocessor\punctuation\comma_if.hpp>
#include <xutility>
#include <winerror.h>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\preprocessor\control\if.hpp>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <winefs.h>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\preprocessor\logical\bool.hpp>
#include <vector>
#include <NetworkDP8\networkdp8.h>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <boost\preprocessor\facilities\empty.hpp>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <NetworkDP8\source\address.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <boost\preprocessor\punctuation\comma.hpp>
#include <SelTarg.h>
#include <atlbase.h>
#include <boost\mpl\bool.hpp>
#include <boost\preprocessor\repetition\repeat.hpp>
#include <prim.h>
#include <atldef.h>
#include <atlcomcli.h>
#include <boost\mpl\bool_fwd.hpp>
#include <boost\preprocessor\tuple\eat.hpp>
#include <atlrc.h>
#include <olectl.h>
#include <boost\preprocessor\tuple\rem.hpp>
#include <new.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <ocidl.h>
#include <boost\preprocessor\enum_params.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\preprocessor\repetition\enum_params.hpp>
#include <boost\type_traits\is_array.hpp>
#include <boost\preprocessor\repeat.hpp>
#include <boost\type_traits\config.hpp>
#include <boost\preprocessor\inc.hpp>
#include <securitybaseapi.h>
#include <boost\preprocessor\iteration\detail\iter\forward1.hpp>
#include <boost\mpl\aux_\config\static_constant.hpp>
#include <boost\preprocessor\iteration\detail\bounds\lower1.hpp>
#include <boost\thread\mutex.hpp>
#include <list>
#include <Collision\Primitives\capsule.h>
#include <boost\preprocessor\slot\detail\shared.hpp>
#include <boost\thread\detail\lock.hpp>
#include <Collision\Primitives\segment.h>
#include <oleidl.h>
#include <mcx.h>
#include <boost\preprocessor\iteration\detail\bounds\upper1.hpp>
#include <boost\thread\exceptions.hpp>
#include <Collision\BVH\profiling.h>
#include <boost\function\detail\function_iterate.hpp>
#include <boost\thread\detail\config.hpp>
#include <orders.h>
#include <boost\function\detail\maybe_include.hpp>
#include <orders_base.h>
#include <boost\function\function_template.hpp>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <debugapi.h>
#include <boost\type_traits\is_class.hpp>
#include <fileapi.h>
#include <boost\type_traits\is_union.hpp>
#include <boost\type_traits\remove_cv.hpp>
#include <map>
#include <gamestructimpl.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <xtree>
#include <Badge.h>
#include <cderr.h>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <seInterface2\PatchID.h>
#include <SOBGroupManager.h>
#include <boost\scoped_ptr.hpp>
#include <dde.h>
#include <objidl.h>
#include <msxml.h>
#include <seInterface2\PatchBase.h>
#include <hash_map>
#include <winsock2.h>
#include <boost\assert.hpp>
#include <boost\type_traits\is_enum.hpp>
#include <seInterface2\SoundParams.h>
#include <xhash>
#include <winapifamily.h>
#include <boost\type_traits\add_reference.hpp>
#include <platform\cmdline.h>
#include <windows.h>
#include <boost\type_traits\is_reference.hpp>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <winsmcrd.h>
#include <dplay8.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <dpaddr.h>
#include <Mathlib\vector2.h>
#include <HyperspaceManager.h>
#include <util\types.h>
#include <poppack.h>
#include <xfacet>
#include <boost\type_traits\detail\type_trait_def.hpp>
#include <boost\ref.hpp>
#include <gameRandom.h>
#include <App\AppObj.h>
#include <boost\cstdint.hpp>
#include <random.h>
#include <platform\appinterface.h>
#include <mmiscapi2.h>
#include <ime_cmodes.h>
#include <boost\config.hpp>
#include <profileapi.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <cassert>
#include <boost\type_traits\is_pointer.hpp>
#include <MultiplierTypes.h>
#include <synchapi.h>
#include <assert.h>
#include <Collision\BVH\bvh.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <process.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <ws2def.h>
#include <boost\static_assert.hpp>
#include <ole2.h>
#include <inaddr.h>
#include <objbase.h>
#include <atlbase.inl>
#include <Mathlib\quat.h>
#include <combaseapi.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <qos.h>
#include <wnnc.h>
#include <NetworkDP8\source\exception.h>
#include <NetworkDP8\source\blowfish.h>
#include <stdarg.h>
#include <windef.h>
#include <fixedpoint.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <util\fixed.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <profile\profile.h>
#include <specstrings_strict.h>
#include <iostream>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <driverspecs.h>
#include <objidlbase.h>
#include <sdv_driverspecs.h>
#include <ncrypt.h>
#include <boost\type_traits\has_trivial_copy.hpp>
#include <dbdefines.h>
#include <boost\type_traits\is_volatile.hpp>
#include <UnitCaps\UnitCaps.h>
#include <threadpoolapiset.h>
#include <unknwnbase.h>
#include <GameObj.h>
#include <oaidl.h>
#include <task.h>
#include <commdlg.h>
#include <stack>
#include <namespaceapi.h>
#include <pathpoints.h>
#include <ktmtypes.h>
#include <gamemsg.h>
#include <boost\pending\ct_if.hpp>
#include <debug\db.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <NetworkDP8\source\sessionenum.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <NetworkDP8\source\sessioninfo.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <imm.h>
#include <boost\type_traits\is_stateless.hpp>
#include <minwinbase.h>
#include <boost\type_traits\has_trivial_constructor.hpp>
#include <fileio\filestream.h>
#include <atlcore.h>
#include <boost\type_traits\is_pod.hpp>
#include <winscard.h>
#include <tchar.h>
#include <boost\type_traits\is_scalar.hpp>
#include <wtypes.h>
#include <mbstring.h>
#include <boost\shared_ptr.hpp>
#include <Universe.h>
#include <util\colour.h>
#include <errhandlingapi.h>
#include <rpcndr.h>
#include <boost\type_traits\has_trivial_destructor.hpp>
#include <sobtypes.h>
#include <Waypoint.h>
#include <boost\throw_exception.hpp>
#include <processenv.h>
#include <rpcnsip.h>
#include <boost\type_traits\intrinsics.hpp>
#include <selection.h>
#include <SobUnmoveable.h>
#include <guiddef.h>
#include <stralign.h>
#include <savegamedef.h>
#include <sob.h>
#include <boost\detail\shared_count.hpp>
#include <sobstatic.h>
#include <jobapi.h>
#include <version.h>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\lwm_win32.hpp>
#include <apiset.h>
#include <winsvc.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <NetworkDP8\source\sessiondesc.h>
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
#include <boost\type_traits\is_member_pointer.hpp>
#include <NetworkDP8\source\criticalsection.h>
#include <winnls.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <datetimeapi.h>
#include <shtypes.h>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <system_error>
#include <recorder.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <config.h>
#include <kernelspecs.h>
#include <urlmon.h>
#include <syncChecking.h>
#include <Collision\BVH\octree.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <sstream>
#include <Collision\BVH\span.h>
#include <libloaderapi.h>
#include <wchar.h>
#include <Collision\BVH\Internal\span_i.h>
#include <sysinfoapi.h>
#include <boost\utility.hpp>
#include <boost\type_traits\is_fundamental.hpp>
#include <Collision\BVH\proxy.h>
#include <atlchecked.h>
#include <boost\type_traits\is_void.hpp>
#include <boost\type_traits\ice.hpp>
#include <boost\utility\addressof.hpp>
#include <Collision\intersect.h>
#include <winreg.h>
#include <bcrypt.h>
#include <atlexcept.h>
#include <boost\detail\workaround.hpp>
#include <boost\type_traits\detail\ice_and.hpp>
#include <istream>
#include <Collision\primitivesfwd.h>
#include <atltrace.h>
#include <oleacc.h>
#include <ostream>
#include <atlconv.h>
#include <ios>
#include <winsock.h>
#include <atlalloc.h>
#include <nb30.h>
#include <wincrypt.h>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

class RecordedGame
{
public:
    RecordedGame(RecordedGame &); /* compiler_generated() */
    _inline RecordedGame();
    _inline ~RecordedGame();
    _inline Recorder::RecordPacket *gotoNextPacket();
    _inline Recorder::RecordPacket *getCurRecordedPacket();
    bool isOutOfSync();
    class RecordedGameHeader
    {
    public:
        _inline ~RecordedGameHeader();
        long m_version; // 0x0
        unsigned __int32 m_ordersBufferLen; // 0x4
        unsigned __int32 m_localPlayerID; // 0x8
        unsigned __int32 m_lastFrame; // 0xC
        __int32 m_outOfSyncFrame; // 0x10
        GameSettings m_gameSettings; // 0x14
        RecordedGameHeader(RecordedGame::RecordedGameHeader &); /* compiler_generated() */
        _inline RecordedGameHeader(); /* compiler_generated() */
        RecordedGame::RecordedGameHeader &operator=(RecordedGame::RecordedGameHeader &); /* compiler_generated() */
    };
    static_assert(sizeof(RecordedGameHeader) == 1440, "Invalid RecordedGameHeader size");
    RecordedGame::RecordedGameHeader m_header; // 0x0
    char *m_ordersBuffer; // 0x5A0
    char *m_ordersBufferCursor; // 0x5A4
    RecordedGame &operator=(RecordedGame &); /* compiler_generated() */
};
static_assert(sizeof(RecordedGame) == 1448, "Invalid RecordedGame size");

typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > _Mystr;
typedef __int32 openmode;
typedef std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char> > _Mysb;
typedef __int32 iostate;
typedef std::ctype<char> _Ctype;
typedef std::_Timevec _Timevec;
typedef __int32 fmtflags;
typedef __int32 int_type;
typedef std::fpos<int> pos_type;
typedef long long off_type;
typedef __int32 seekdir;
typedef __int32 _Strstate;

/* ---------- prototypes */

/* ---------- globals */

extern Recorder *Recorder::ms_instance; // 0x84AA34

/* ---------- private variables */

_static
{
    extern char const kRecGameLoadDir[17]; // 0x7AECFC
    extern char const kRecGameSnapshot[43]; // 0x7AED10
    extern char const kRecGameDefaultName[38]; // 0x7AED3C
}

/* ---------- public code */

_inline RecordedGame::RecordedGame() // 0x623A7E
{
    mangled_assert("??0RecordedGame@@QAE@XZ");
    todo("implement");
}

_inline RecordedGame::RecordedGameHeader::RecordedGameHeader() // 0x623AAB
{
    mangled_assert("??0RecordedGameHeader@RecordedGame@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RecordedGame::~RecordedGame() // 0x623ADF
{
    mangled_assert("??1RecordedGame@@QAE@XZ");
    todo("implement");
}

_inline Recorder::RecordPacket *RecordedGame::gotoNextPacket() // 0x623D00
{
    mangled_assert("?gotoNextPacket@RecordedGame@@QAEPAURecordPacket@Recorder@@XZ");
    todo("implement");
}

_inline Recorder::RecordPacket *RecordedGame::getCurRecordedPacket() // 0x623CD5
{
    mangled_assert("?getCurRecordedPacket@RecordedGame@@QAEPAURecordPacket@Recorder@@XZ");
    todo("implement");
}

_inline RecordedGame::RecordedGameHeader::~RecordedGameHeader() // 0x623B03
{
    mangled_assert("??1RecordedGameHeader@RecordedGame@@QAE@XZ");
    todo("implement");
}

Recorder *Recorder::i() // 0x623D1C
{
    mangled_assert("?i@Recorder@@SGPAV1@XZ");
    todo("implement");
}

void Recorder::release() // 0x624144
{
    mangled_assert("?release@Recorder@@SGXXZ");
    todo("implement");
}

Recorder::Recorder() // 0x623ABF
{
    mangled_assert("??0Recorder@@AAE@XZ");
    todo("implement");
}

Recorder::~Recorder() // 0x623B0B
{
    mangled_assert("??1Recorder@@AAE@XZ");
    todo("implement");
}

_inline GameSettings &GameSettings::operator=(GameSettings &) // 0x623B3A
{
    mangled_assert("??4GameSettings@@QAEAAV0@AAV0@@Z");
    compiler_generated();
    todo("implement");
}

bool Recorder::startRecorderInGame() // 0x6246FB
{
    mangled_assert("?startRecorderInGame@Recorder@@SG_NXZ");
    todo("implement");
}

bool Recorder::shutdownRecorderInGame() // 0x6244E2
{
    mangled_assert("?shutdownRecorderInGame@Recorder@@SG_NXZ");
    todo("implement");
}

void Recorder::saveGameSettings() // 0x624166
{
    mangled_assert("?saveGameSettings@Recorder@@QAEXXZ");
    todo("implement");
}

bool Recorder::saveRecordedGameAs(char const *) const // 0x624379
{
    mangled_assert("?saveRecordedGameAs@Recorder@@QBE_NPBD@Z");
    todo("implement");
}

Recorder::RecordedGameState Recorder::loadRecordedGame(char const *, bool) // 0x623D42
{
    mangled_assert("?loadRecordedGame@Recorder@@QAE?AW4RecordedGameState@1@PBD_N@Z");
    todo("implement");
}

void Recorder::savePacket(Order const *) // 0x6242A7
{
    mangled_assert("?savePacket@Recorder@@QAEXPBVOrder@@@Z");
    todo("implement");
}

void Recorder::updateSwitchPlayer() // 0x624720
{
    mangled_assert("?updateSwitchPlayer@Recorder@@QAEXXZ");
    todo("implement");
}

long Recorder::playRecordedGame(long) // 0x623FB4
{
    mangled_assert("?playRecordedGame@Recorder@@QAEJJ@Z");
    todo("implement");
}

bool Recorder::enableRecorder(bool) // 0x623C87
{
    mangled_assert("?enableRecorder@Recorder@@QAE_N_N@Z");
    todo("implement");
}

unsigned __int32 Recorder::getMaxFrame() const // 0x623CF3
{
    mangled_assert("?getMaxFrame@Recorder@@QBEIXZ");
    todo("implement");
}

long Recorder::getRecordSystemVersion() const // 0x623CFA
{
    mangled_assert("?getRecordSystemVersion@Recorder@@ABEJXZ");
    todo("implement");
}

unsigned __int32 Recorder::getLocalPlayerID() const // 0x623CEF
{
    mangled_assert("?getLocalPlayerID@Recorder@@QBEIXZ");
    todo("implement");
}

void Recorder::setLocalPlayerID(unsigned __int32) // 0x6244C6
{
    mangled_assert("?setLocalPlayerID@Recorder@@QAEXI@Z");
    todo("implement");
}

void Recorder::snapshot(unsigned __int32, bool) // 0x624590
{
    mangled_assert("?snapshot@Recorder@@QAEXI_N@Z");
    todo("implement");
}

bool Recorder::shutdown() // 0x6244DA
{
    mangled_assert("?shutdown@Recorder@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif
