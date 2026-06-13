#if 0
/* ---------- headers */

#include "decomp.h"
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <xstring>
#include <winuser.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <consoleapi.h>
#include <crtdefs.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <Mathlib\matrix3.h>
#include <wingdi.h>
#include <util\dictionary.h>
#include <rpc.h>
#include <urlmon.h>
#include <boost\pool\pool.hpp>
#include <util\utilexports.h>
#include <pshpack4.h>
#include <boost\pool\detail\ct_gcd_lcm.hpp>
#include <joystickapi.h>
#include <boost\static_assert.hpp>
#include <xfunctional>
#include <rpcdce.h>
#include <Camera\OrbitParameters.h>
#include <new>
#include <winerror.h>
#include <bcrypt.h>
#include <xstddef>
#include <type_traits>
#include <ddeml.h>
#include <lzexpand.h>
#include <wincrypt.h>
#include <profile\profile.h>
#include <iostream>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <SimVis\EffectLod.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\pool\detail\gcd_lcm.hpp>
#include <debugapi.h>
#include <fileapi.h>
#include <math.h>
#include <cguid.h>
#include <CameraCommand.h>
#include <list>
#include <CameraHW.h>
#include <sobid.h>
#include <boost\pool\object_pool.hpp>
#include <cderr.h>
#include <Camera\CameraOrbitTarget.h>
#include <boost\pool\poolfwd.hpp>
#include <dde.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <Camera\Camera.h>
#include <boost\pool\detail\mutex.hpp>
#include <boost\pool\simple_segregated_storage.hpp>
#include <Camera\Frustum.h>
#include <windows.h>
#include <Camera\Plane3.h>
#include <winapifamily.h>
#include <Mathlib\vector3.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <Mathlib\vector4.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <poppack.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <mmiscapi2.h>
#include <lua.h>
#include <profileapi.h>
#include <winefs.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <boost\config.hpp>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <stdarg.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <fileio\filepath.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <boost\type_traits\detail\ice_not.hpp>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <winnls.h>
#include <shellapi.h>
#include <datetimeapi.h>
#include <boost\detail\shared_count.hpp>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <boost\detail\lwm_win32.hpp>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <boost\pool\detail\pool_construct_simple.inc>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <winsock.h>
#include <oaidl.h>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <nb30.h>
#include <commdlg.h>
#include <task.h>
#include <SimVis\LodFX.h>
#include <stack>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <imm.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > > EffectLodMap;
typedef boost::object_pool<EffectLod,boost::default_user_allocator_new_delete> EffectLodPool;
typedef std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DataCont;
typedef EffectLod element_type;

/* ---------- prototypes */


_static void BuildFilename(char const *lod, char *buffer, unsigned __int32 len);

/* ---------- globals */

extern LodFX *LodFX::s_instance; // 0x844780

/* ---------- private variables */

/* ---------- public code */

_extern _sub_51D0AA(LodFX::Data *const);
_inline LodFX::Data::Data() // 0x51D0AA
{
    mangled_assert("??0Data@LodFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51D0AA(this);
}

_extern bool _sub_51D8FB();
bool LodFX::Startup() // 0x51D8FB
{
    mangled_assert("?Startup@LodFX@@SG_NXZ");
    todo("implement");
    bool __result = _sub_51D8FB();
    return __result;
}

_extern bool _sub_51D8D7();
bool LodFX::Shutdown() // 0x51D8D7
{
    mangled_assert("?Shutdown@LodFX@@SG_NXZ");
    todo("implement");
    bool __result = _sub_51D8D7();
    return __result;
}

_extern LodFX *_sub_51D65A();
LodFX *LodFX::Instance() // 0x51D65A
{
    mangled_assert("?Instance@LodFX@@SGPAV1@XZ");
    todo("implement");
    LodFX * __result = _sub_51D65A();
    return __result;
}

_extern _sub_51D0DF(LodFX *const);
LodFX::LodFX() // 0x51D0DF
{
    mangled_assert("??0LodFX@@IAE@XZ");
    todo("implement");
    _sub_51D0DF(this);
}

_extern void _sub_51D177(std::_Tree_buy<std::pair<unsigned long const ,EffectLod const *>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > > *const);
_inline std::_Tree_buy<std::pair<unsigned long const ,EffectLod const *>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > >::~_Tree_buy<std::pair<unsigned long const ,EffectLod const *>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > >() // 0x51D177
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBKPBVEffectLod@@@std@@V?$allocator@U?$pair@$$CBKPBVEffectLod@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51D177(this);
}

_extern void _sub_51D180(std::_Tree_comp<0,std::_Tmap_traits<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> >,0> >() // 0x51D180
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@KPBVEffectLod@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPBVEffectLod@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51D180(this);
}

_extern void _sub_51D189(std::map<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > > *const);
_inline std::map<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > >::~map<unsigned long,EffectLod const *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,EffectLod const *> > >() // 0x51D189
{
    mangled_assert("??1?$map@KPBVEffectLod@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPBVEffectLod@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51D189(this);
}

_extern void _sub_51D25A(LodFX::Data *const);
_inline LodFX::Data::~Data() // 0x51D25A
{
    mangled_assert("??1Data@LodFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51D25A(this);
}

_extern void _sub_51D28C(LodFX *const);
LodFX::~LodFX() // 0x51D28C
{
    mangled_assert("??1LodFX@@IAE@XZ");
    todo("implement");
    _sub_51D28C(this);
}

_extern void _sub_51D540(LodFX *const, bool);
void LodFX::ForceFull(bool) // 0x51D540
{
    mangled_assert("?ForceFull@LodFX@@QAEX_N@Z");
    todo("implement");
    _sub_51D540(this, arg);
}

_extern void _sub_51D4FF(LodFX *const);
void LodFX::Flush() // 0x51D4FF
{
    mangled_assert("?Flush@LodFX@@QAEXXZ");
    todo("implement");
    _sub_51D4FF(this);
}

_extern char const *_sub_51D56B(LodFX *const, char const *, vector3 const &);
char const *LodFX::GetFX(char const *, vector3 const &) // 0x51D56B
{
    mangled_assert("?GetFX@LodFX@@QAEPBDPBDABVvector3@@@Z");
    todo("implement");
    char const * __result = _sub_51D56B(this, arg, arg);
    return __result;
}

_extern EffectLod *_sub_51D493(LodFX *const);
EffectLod *LodFX::AllocateLod() // 0x51D493
{
    mangled_assert("?AllocateLod@LodFX@@AAEPAVEffectLod@@XZ");
    todo("implement");
    EffectLod * __result = _sub_51D493(this);
    return __result;
}

_extern void _sub_51D4EB(LodFX *const, EffectLod const *);
void LodFX::DeallocateLod(EffectLod const *) // 0x51D4EB
{
    mangled_assert("?DeallocateLod@LodFX@@AAEXPBVEffectLod@@@Z");
    todo("implement");
    _sub_51D4EB(this, arg);
}

_extern EffectLod const *_sub_51D660(LodFX *const, char const *);
EffectLod const *LodFX::LoadLod(char const *) // 0x51D660
{
    mangled_assert("?LoadLod@LodFX@@AAEPBVEffectLod@@PBD@Z");
    todo("implement");
    EffectLod const * __result = _sub_51D660(this, arg);
    return __result;
}

_extern char const *_sub_51D4BA(LodFX *const, EffectLod const &, float);
char const *LodFX::CalcFX(EffectLod const &, float) // 0x51D4BA
{
    mangled_assert("?CalcFX@LodFX@@AAEPBDABVEffectLod@@M@Z");
    todo("implement");
    char const * __result = _sub_51D4BA(this, arg, arg);
    return __result;
}

_extern void _sub_51D86E(LodFX *const, char const *);
void LodFX::Precache(char const *) // 0x51D86E
{
    mangled_assert("?Precache@LodFX@@QAEXPBD@Z");
    todo("implement");
    _sub_51D86E(this, arg);
}

/* ---------- private code */

_extern void _sub_51D49D(char const *, char *, unsigned __int32);
_static void BuildFilename(char const *lod, char *buffer, unsigned __int32 len) // 0x51D49D
{
    mangled_assert("BuildFilename");
    todo("implement");
    _sub_51D49D(lod, buffer, len);
}
#endif
