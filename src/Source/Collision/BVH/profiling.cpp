#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmiscapi2.h>
#include <profileapi.h>
#include <winefs.h>
#include <Collision\pch.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <xatomic0.h>
#include <crtdefs.h>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <oleidl.h>
#include <mcx.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <playsoundapi.h>
#include <new>
#include <handleapi.h>
#include <math.h>
#include <xstddef>
#include <typeinfo>
#include <threadpoolapiset.h>
#include <xmemory>
#include <xmemory0>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <boost\cstdint.hpp>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <windows.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <vector>
#include <excpt.h>
#include <processenv.h>
#include <Collision\BVH\profiling.h>
#include <string>
#include <iterator>
#include <share.h>
#include <guiddef.h>
#include <jobapi.h>
#include <istream>
#include <ostream>
#include <apiset.h>
#include <ios>
#include <wchar.h>
#include <ole2.h>
#include <xlocnum>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <streambuf>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <xiosbase>
#include <xlocale>
#include <stdexcept>
#include <winnls.h>
#include <shellapi.h>
#include <xstring>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <stdarg.h>
#include <xdebug>
#include <windef.h>
#include <unknwnbase.h>
#include <minwindef.h>
#include <winsock.h>
#include <oaidl.h>
#include <specstrings.h>
#include <nb30.h>
#include <commdlg.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <timeapi.h>
#include <sdv_driverspecs.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <xfacet>
#include <xutility>
#include <fibersapi.h>
#include <imm.h>
#include <utility>
#include <iosfwd>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <bcrypt.h>
#include <winnt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <ctype.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <xlocinfo>
#include <xlocinfo.h>
#include <locale.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <system_error>
#include <cerrno>
#include <poppack.h>
#include <errno.h>
#include <type_traits>

/* ---------- constants */

/* ---------- definitions */

typedef __int32 category;
typedef char _Byte;
typedef __int32 _Statype;
typedef __int32 result;
typedef __int32 *_Bool_type;
typedef std::error_code _Kty;
typedef unsigned __int32 io_state;
typedef void (*event_callback)(std::ios_base::event, std::ios_base &, __int32);
typedef std::basic_ios<char,std::char_traits<char> > _Myios;
typedef unsigned __int32 seek_dir;
typedef unsigned __int32 open_mode;
typedef std::basic_istream<char,std::char_traits<char> > istream_type;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_664191(Collision::Stopwatch *const);
Collision::Stopwatch::Stopwatch() // 0x664191
{
    mangled_assert("??0Stopwatch@Collision@@QAE@XZ");
    todo("implement");
    _sub_664191(this);
}

_extern void _sub_66461C(Collision::Stopwatch *const);
void Collision::Stopwatch::Start() // 0x66461C
{
    mangled_assert("?Start@Stopwatch@Collision@@QAEXXZ");
    todo("implement");
    _sub_66461C(this);
}

_extern void _sub_664624(Collision::Stopwatch *const);
void Collision::Stopwatch::Stop() // 0x664624
{
    mangled_assert("?Stop@Stopwatch@Collision@@QAEXXZ");
    todo("implement");
    _sub_664624(this);
}

_extern _sub_66414E(Collision::BVHStatistics *const);
Collision::BVHStatistics::BVHStatistics() // 0x66414E
{
    mangled_assert("??0BVHStatistics@Collision@@QAE@XZ");
    todo("implement");
    _sub_66414E(this);
}

_extern void _sub_6641D4(Collision::BVHStatistics const *const, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void Collision::BVHStatistics::GetStrings(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const // 0x6641D4
{
    mangled_assert("?GetStrings@BVHStatistics@Collision@@QBEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_6641D4(this, arg);
}

_extern float _sub_6645C2(Collision::BVHStatistics const *const);
float Collision::BVHStatistics::GetTotalTime() const // 0x6645C2
{
    mangled_assert("?GetTotalTime@BVHStatistics@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_6645C2(this);
    return __result;
}

_extern void _sub_6645C9(Collision::BVHStatistics *const);
void Collision::BVHStatistics::Reset() // 0x6645C9
{
    mangled_assert("?Reset@BVHStatistics@Collision@@QAEXXZ");
    todo("implement");
    _sub_6645C9(this);
}

/* ---------- private code */
#endif
