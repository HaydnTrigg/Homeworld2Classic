#if 0
/* ---------- headers */

#include "decomp.h"
#include <datetimeapi.h>
#include <Render\gl\r_types.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <Mathlib\matvec.h>
#include <kernelspecs.h>
#include <xstring>
#include <basetsd.h>
#include <pshpack2.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <libloaderapi.h>
#include <Camera\Camera.h>
#include <pch.h>
#include <sysinfoapi.h>
#include <Camera\Frustum.h>
#include <objidlbase.h>
#include <Camera\Plane3.h>
#include <crtdefs.h>
#include <winreg.h>
#include <ncrypt.h>
#include <profile\profile.h>
#include <Render\gl\r_defines.h>
#include <iostream>
#include <Render\gl\glext.h>
#include <unknwnbase.h>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <Mathlib\matrix3.h>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <boost\checked_delete.hpp>
#include <unknwn.h>
#include <Render\FxGL\FXManager.h>
#include <BattleScar\BattleScarLoad.h>
#include <securityappcontainer.h>
#include <Render\FxGL\VarMulti.h>
#include <fibersapi.h>
#include <imm.h>
#include <new>
#include <exception>
#include <xstddef>
#include <BattleScar\BattleScarInternal.h>
#include <winver.h>
#include <winscard.h>
#include <type_traits>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <winuser.h>
#include <xutility>
#include <consoleapi.h>
#include <utility>
#include <savegame.h>
#include <iosfwd>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <vector>
#include <task.h>
#include <platform\osdef.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <stack>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <debug\ctassert.h>
#include <wingdi.h>
#include <savestream.h>
#include <rpc.h>
#include <urlmon.h>
#include <boost\pool\detail\ct_gcd_lcm.hpp>
#include <BattleScar\BattleScarStats.h>
#include <pshpack4.h>
#include <boost\static_assert.hpp>
#include <joystickapi.h>
#include <rpcdce.h>
#include <list>
#include <winerror.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <Mathlib\vector3.h>
#include <wincrypt.h>
#include <Mathlib\vector4.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <map>
#include <xtree>
#include <boost\bind\mem_fn_cc.hpp>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <boost\scoped_ptr.hpp>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <oleauto.h>
#include <Mathlib\vector2.h>
#include <winioctl.h>
#include <servprov.h>
#include <boost\pool\detail\gcd_lcm.hpp>
#include <util\types.h>
#include <debugapi.h>
#include <fileapi.h>
#include <cguid.h>
#include <BattleScar\BattleScarOption.h>
#include <boost\pool\pool.hpp>
#include <cderr.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <boost\config.hpp>
#include <boost\pool\poolfwd.hpp>
#include <dde.h>
#include <boost\pool\simple_segregated_storage.hpp>
#include <boost\pool\detail\mutex.hpp>
#include <windows.h>
#include <boost\mem_fn.hpp>
#include <winapifamily.h>
#include <boost\get_pointer.hpp>
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
#include <boost\bind\mem_fn_template.hpp>
#include <mmiscapi2.h>
#include <profileapi.h>
#include <winefs.h>
#include <Collision\primitivesfwd.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <hw2box\hw2box.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <savegamedata.h>
#include <Collision\Primitives\sphere.h>
#include <stdarg.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <debug\db.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <util\colour.h>
#include <objidl.h>
#include <msxml.h>
#include <namespaceapi.h>
#include <savegamedef.h>
#include <ktmtypes.h>
#include <renderer.h>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <Render\objects\textureregistry.h>
#include <processenv.h>
#include <hash_map>
#include <guiddef.h>
#include <xhash>
#include <BattleScar\BattleScarManager.h>
#include <jobapi.h>
#include <platform\cmdline.h>
#include <Decal\DecalManager.h>
#include <BattleScar\BattleScarUtil.h>
#include <platform\platformexports.h>
#include <Decal\VertexPool.h>
#include <Render\objects\texture.h>
#include <apiset.h>
#include <Render\objects\objects.h>
#include <ole2.h>
#include <boost\type_traits\detail\ice_not.hpp>
#include <Render\objects\core.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <Render\gl\types.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <algorithm>
#include <Render\gl\lotypes.h>
#include <winnls.h>
#include <shellapi.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LessCaseInsensitiveString
{
public:
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(`anonymous-namespace'::LessCaseInsensitiveString) == 1, "Invalid `anonymous-namespace'::LessCaseInsensitiveString size");

struct FXObjDestroyer
{
    void operator()(BattleScarManager::Object::FXInstance &);
};
static_assert(sizeof(FXObjDestroyer) == 1, "Invalid FXObjDestroyer size");

typedef std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > HandleList;
typedef `anonymous-namespace'::LessCaseInsensitiveString ?A0x9f2bef27::LessCaseInsensitiveString;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BattleScarManager::Type *,`anonymous namespace'::LessCaseInsensitiveString,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *> > > TypeMap;

/* ---------- prototypes */

/* ---------- globals */

extern char const BattleScarManager::m_saveToken[18]; // 0x79F9B4
extern SaveData const BattleScarManager::m_saveData[1]; // 0x79F9C8

/* ---------- private variables */

_static
{
    extern BattleScarManager *s_pInstance; // 0x844994
    extern boost::pool<boost::default_user_allocator_new_delete> s_decalPool; // 0x839AA8
    extern __int32 const kManagerVersion; // 0x79F9E8
    extern __int32 const kObjectVersion; // 0x79F9EC
    extern __int32 const kDecalVersion; // 0x79F9F0
    extern char const kObjectToken[4]; // 0x79F9F4
    extern char const kDecalToken[6]; // 0x79F9F8
    extern char const kHandleListToken[6]; // 0x79FA00
    extern bool s_bHealthCap; // 0x839AA4
    extern bool s_bTriCap; // 0x839AA5
}

/* ---------- public code */

_extern BattleScarManager *_sub_55B801();
BattleScarManager *BattleScarManager::instance() // 0x55B801
{
    mangled_assert("?instance@BattleScarManager@@SGPAV1@XZ");
    todo("implement");
    BattleScarManager * __result = _sub_55B801();
    return __result;
}

_extern bool _sub_55CA00();
bool BattleScarManager::startup() // 0x55CA00
{
    mangled_assert("?startup@BattleScarManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_55CA00();
    return __result;
}

_extern bool _sub_55C9D6();
bool BattleScarManager::shutdown() // 0x55C9D6
{
    mangled_assert("?shutdown@BattleScarManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_55C9D6();
    return __result;
}

_extern bool _sub_55C848(SaveGameData *, SaveType);
bool BattleScarManager::saveSingleton(SaveGameData *saveGameData, SaveType saveType) // 0x55C848
{
    mangled_assert("?saveSingleton@BattleScarManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_55C848(saveGameData, saveType);
    return __result;
}

_extern bool _sub_55C558(SaveGameData *);
bool BattleScarManager::restoreSingleton(SaveGameData *saveGameData) // 0x55C558
{
    mangled_assert("?restoreSingleton@BattleScarManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_55C558(saveGameData);
    return __result;
}

_extern _sub_559DC3(BattleScarManager *const);
BattleScarManager::BattleScarManager() // 0x559DC3
{
    mangled_assert("??0BattleScarManager@@AAE@XZ");
    todo("implement");
    _sub_559DC3(this);
}

_extern _sub_559EC5(BattleScarManager::Data *const);
_inline BattleScarManager::Data::Data() // 0x559EC5
{
    mangled_assert("??0Data@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_559EC5(this);
}

_extern void _sub_55A112(BattleScarManager *const);
BattleScarManager::~BattleScarManager() // 0x55A112
{
    mangled_assert("??1BattleScarManager@@EAE@XZ");
    todo("implement");
    _sub_55A112(this);
}

_extern void _sub_55A1A5(BattleScarManager::Data *const);
_inline BattleScarManager::Data::~Data() // 0x55A1A5
{
    mangled_assert("??1Data@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A1A5(this);
}

_extern void _sub_55B303(BattleScarManager *const, bool);
void BattleScarManager::enableNewScar(bool) // 0x55B303
{
    mangled_assert("?enableNewScar@BattleScarManager@@QAEX_N@Z");
    todo("implement");
    _sub_55B303(this, arg);
}

_extern bool _sub_55B80A(BattleScarManager *const);
bool BattleScarManager::isNewScarEnabled() // 0x55B80A
{
    mangled_assert("?isNewScarEnabled@BattleScarManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_55B80A(this);
    return __result;
}

_extern void _sub_55B310(BattleScarManager *const, bool);
void BattleScarManager::enableRender(bool) // 0x55B310
{
    mangled_assert("?enableRender@BattleScarManager@@QAEX_N@Z");
    todo("implement");
    _sub_55B310(this, arg);
}

_extern bool _sub_55B811(BattleScarManager const *const);
bool BattleScarManager::isRenderEnabled() const // 0x55B811
{
    mangled_assert("?isRenderEnabled@BattleScarManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_55B811(this);
    return __result;
}

_extern void _sub_55C866(BattleScarManager *const, float);
void BattleScarManager::setDetail(float) // 0x55C866
{
    mangled_assert("?setDetail@BattleScarManager@@QAEXM@Z");
    todo("implement");
    _sub_55C866(this, arg);
}

_extern float _sub_55B7D7(BattleScarManager const *const);
float BattleScarManager::getDetail() const // 0x55B7D7
{
    mangled_assert("?getDetail@BattleScarManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_55B7D7(this);
    return __result;
}

_extern void _sub_55C877(BattleScarManager *const, char const *);
void BattleScarManager::setFolder(char const *) // 0x55C877
{
    mangled_assert("?setFolder@BattleScarManager@@QAEXPBD@Z");
    todo("implement");
    _sub_55C877(this, arg);
}

_extern char const *_sub_55B7DE(BattleScarManager const *const);
char const *BattleScarManager::getFolder() const // 0x55B7DE
{
    mangled_assert("?getFolder@BattleScarManager@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_55B7DE(this);
    return __result;
}

_extern BattleScarManager::Type *_sub_55CAD5(BattleScarManager *const, char const *);
BattleScarManager::Type *BattleScarManager::typeGet(char const *) // 0x55CAD5
{
    mangled_assert("?typeGet@BattleScarManager@@QAEPAVType@1@PBD@Z");
    todo("implement");
    BattleScarManager::Type * __result = _sub_55CAD5(this, arg);
    return __result;
}

_extern BattleScarManager::Type *_sub_55CAF4(BattleScarManager *const, char const *);
BattleScarManager::Type *BattleScarManager::typeLoad(char const *) // 0x55CAF4
{
    mangled_assert("?typeLoad@BattleScarManager@@AAEPAVType@1@PBD@Z");
    todo("implement");
    BattleScarManager::Type * __result = _sub_55CAF4(this, arg);
    return __result;
}

_extern BattleScarManager::Type *_sub_55CA8F(BattleScarManager *const, char const *);
BattleScarManager::Type *BattleScarManager::typeFind(char const *) // 0x55CA8F
{
    mangled_assert("?typeFind@BattleScarManager@@AAEPAVType@1@PBD@Z");
    todo("implement");
    BattleScarManager::Type * __result = _sub_55CA8F(this, arg);
    return __result;
}

_extern BattleScarManager::Handle _sub_55BA1B(BattleScarManager *const, BattleScarManager::Type *);
BattleScarManager::Handle BattleScarManager::objectCreate(BattleScarManager::Type *) // 0x55BA1B
{
    mangled_assert("?objectCreate@BattleScarManager@@QAE?AUHandle@1@PAVType@1@@Z");
    todo("implement");
    BattleScarManager::Handle __result = _sub_55BA1B(this, arg);
    return __result;
}

_extern bool _sub_55BB6D(BattleScarManager const *const, BattleScarManager::Handle const &);
bool BattleScarManager::objectIsDead(BattleScarManager::Handle const &) const // 0x55BB6D
{
    mangled_assert("?objectIsDead@BattleScarManager@@QBE_NABUHandle@1@@Z");
    todo("implement");
    bool __result = _sub_55BB6D(this, arg);
    return __result;
}

_extern void _sub_55BBA8(BattleScarManager const *const, BattleScarManager::Handle const &, matrix4 const &);
void BattleScarManager::objectSetTransform(BattleScarManager::Handle const &, matrix4 const &) const // 0x55BBA8
{
    mangled_assert("?objectSetTransform@BattleScarManager@@QBEXABUHandle@1@ABVmatrix4@@@Z");
    todo("implement");
    _sub_55BBA8(this, arg, arg);
}

_extern void _sub_55BB91(BattleScarManager const *const, BattleScarManager::Handle const &, float);
void BattleScarManager::objectSetOpacity(BattleScarManager::Handle const &, float) const // 0x55BB91
{
    mangled_assert("?objectSetOpacity@BattleScarManager@@QBEXABUHandle@1@M@Z");
    todo("implement");
    _sub_55BB91(this, arg, arg);
}

_extern void _sub_55BBBF(BattleScarManager const *const, BattleScarManager::Handle const &, bool);
void BattleScarManager::objectSetVisibility(BattleScarManager::Handle const &, bool) const // 0x55BBBF
{
    mangled_assert("?objectSetVisibility@BattleScarManager@@QBEXABUHandle@1@_N@Z");
    todo("implement");
    _sub_55BBBF(this, arg, arg);
}

_extern float _sub_55BB4F(BattleScarManager const *const, BattleScarManager::Handle const &);
float BattleScarManager::objectGetDamage(BattleScarManager::Handle const &) const // 0x55BB4F
{
    mangled_assert("?objectGetDamage@BattleScarManager@@QBEMABUHandle@1@@Z");
    todo("implement");
    float __result = _sub_55BB4F(this, arg);
    return __result;
}

_extern __int32 _sub_55BB5E(BattleScarManager const *const, BattleScarManager::Handle const &);
__int32 BattleScarManager::objectGetNumTriangles(BattleScarManager::Handle const &) const // 0x55BB5E
{
    mangled_assert("?objectGetNumTriangles@BattleScarManager@@QBEHABUHandle@1@@Z");
    todo("implement");
    __int32 __result = _sub_55BB5E(this, arg);
    return __result;
}

_extern float _sub_55BB40(BattleScarManager const *const, BattleScarManager::Handle const &);
float BattleScarManager::objectGetBirthTime(BattleScarManager::Handle const &) const // 0x55BB40
{
    mangled_assert("?objectGetBirthTime@BattleScarManager@@QBEMABUHandle@1@@Z");
    todo("implement");
    float __result = _sub_55BB40(this, arg);
    return __result;
}

_extern void _sub_55BA8D(BattleScarManager *const, BattleScarManager::Handle const &);
void BattleScarManager::objectDestroy(BattleScarManager::Handle const &) // 0x55BA8D
{
    mangled_assert("?objectDestroy@BattleScarManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_55BA8D(this, arg);
}

_extern void _sub_55BB7E(BattleScarManager *const, BattleScarManager::Handle const &);
void BattleScarManager::objectRemoveFX(BattleScarManager::Handle const &) // 0x55BB7E
{
    mangled_assert("?objectRemoveFX@BattleScarManager@@QAEXABUHandle@1@@Z");
    todo("implement");
    _sub_55BB7E(this, arg);
}

_extern void _sub_55BFBA(BattleScarManager *const, Camera const *);
void BattleScarManager::render(Camera const *) // 0x55BFBA
{
    mangled_assert("?render@BattleScarManager@@QAEXPBVCamera@@@Z");
    todo("implement");
    _sub_55BFBA(this, arg);
}

_extern void _sub_55C859(BattleScarManager *const, bool);
void BattleScarManager::setClipPlane0(bool) // 0x55C859
{
    mangled_assert("?setClipPlane0@BattleScarManager@@QAEX_N@Z");
    todo("implement");
    _sub_55C859(this, arg);
}

_extern void _sub_55C14E(BattleScarManager *const);
void BattleScarManager::renderBegin() // 0x55C14E
{
    mangled_assert("?renderBegin@BattleScarManager@@AAEXXZ");
    todo("implement");
    _sub_55C14E(this);
}

_extern void _sub_55C17A(BattleScarManager *const);
void BattleScarManager::renderEnd() // 0x55C17A
{
    mangled_assert("?renderEnd@BattleScarManager@@AAEXXZ");
    todo("implement");
    _sub_55C17A(this);
}

_extern void _sub_55BC84(BattleScarManager *const, char const *, BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
void BattleScarManager::onWeaponHit(char const *, BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &) // 0x55BC84
{
    mangled_assert("?onWeaponHit@BattleScarManager@@QAEXPBDABUDamageInfo@1@MJHMMAAVBattleScarStats@@AAV?$vector@UDamageTarget@BattleScarManager@@V?$allocator@UDamageTarget@BattleScarManager@@@std@@@std@@AAW4DamageResult@1@@Z");
    todo("implement");
    _sub_55BC84(this, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_55B9C3(BattleScarManager const *const, float, BattleScarStats const &);
bool BattleScarManager::needRepair(float, BattleScarStats const &) const // 0x55B9C3
{
    mangled_assert("?needRepair@BattleScarManager@@QBE_NMABVBattleScarStats@@@Z");
    todo("implement");
    bool __result = _sub_55B9C3(this, arg, arg);
    return __result;
}

_extern void _sub_55BC1D(BattleScarManager const *const, float, float, BattleScarStats &, std::vector<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> >,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > > > &);
void BattleScarManager::onRepair(float, float, BattleScarStats &, std::vector<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> >,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > > > &) const // 0x55BC1D
{
    mangled_assert("?onRepair@BattleScarManager@@QBEXMMAAVBattleScarStats@@AAV?$vector@V?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@V?$allocator@V?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_55BC1D(this, arg, arg, arg, arg);
}

_extern void _sub_55AEDC(BattleScarManager const *const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, float);
void BattleScarManager::addToRender(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, float) const // 0x55AEDC
{
    mangled_assert("?addToRender@BattleScarManager@@QBEXAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@M@Z");
    todo("implement");
    _sub_55AEDC(this, arg, arg);
}

_extern void _sub_55CB8F(BattleScarManager const *const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
void BattleScarManager::validate(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const // 0x55CB8F
{
    mangled_assert("?validate@BattleScarManager@@QBEXAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    _sub_55CB8F(this, arg);
}

_extern void _sub_55C8AD(BattleScarManager const *const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, matrix4 const &);
void BattleScarManager::setTransform(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, matrix4 const &) const // 0x55C8AD
{
    mangled_assert("?setTransform@BattleScarManager@@QBEXAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@ABVmatrix4@@@Z");
    todo("implement");
    _sub_55C8AD(this, arg, arg);
}

_extern void _sub_55BF5F(BattleScarManager *const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
void BattleScarManager::removeFX(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) // 0x55BF5F
{
    mangled_assert("?removeFX@BattleScarManager@@QAEXAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    _sub_55BF5F(this, arg);
}

_extern void _sub_55BF33(BattleScarManager *const);
void BattleScarManager::reloadTextures() // 0x55BF33
{
    mangled_assert("?reloadTextures@BattleScarManager@@QAEXXZ");
    todo("implement");
    _sub_55BF33(this);
}

_extern void _sub_55BE45(BattleScarManager *const);
void BattleScarManager::postRestore() // 0x55BE45
{
    mangled_assert("?postRestore@BattleScarManager@@UAEXXZ");
    todo("implement");
    _sub_55BE45(this);
}

_extern DecalManager *_sub_55B7D0(BattleScarManager *const);
DecalManager *BattleScarManager::getDecalManager() // 0x55B7D0
{
    mangled_assert("?getDecalManager@BattleScarManager@@QAEPAVDecalManager@@XZ");
    todo("implement");
    DecalManager * __result = _sub_55B7D0(this);
    return __result;
}

_extern void _sub_558C85(void *, SaveGameData *, SaveType);
void BattleScarManager::saveData(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x558C85
{
    mangled_assert("?saveData@BattleScarManager@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_558C85(objectPtr, saveGameData, savetype);
}

_extern void _sub_558D2D(void *, SaveGameData *);
void BattleScarManager::restoreData(void *objectPtr, SaveGameData *saveGameData) // 0x558D2D
{
    mangled_assert("?restoreData@BattleScarManager@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_558D2D(objectPtr, saveGameData);
}

_extern bool _sub_55C24B(BattleScarManager *const, SaveGameData *);
bool BattleScarManager::restore(SaveGameData *) // 0x55C24B
{
    mangled_assert("?restore@BattleScarManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_55C24B(this, arg);
    return __result;
}

_extern bool _sub_55C5EE(BattleScarManager *const, SaveGameData *, SaveType);
bool BattleScarManager::save(SaveGameData *, SaveType) // 0x55C5EE
{
    mangled_assert("?save@BattleScarManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_55C5EE(this, arg, arg);
    return __result;
}

_extern bool _sub_55C568(BattleScarManager const *const, SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const &);
bool BattleScarManager::save(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const &) const // 0x55C568
{
    mangled_assert("?save@BattleScarManager@@QBE_NPAVSaveGameData@@ABV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_55C568(this, arg, arg);
    return __result;
}

_extern bool _sub_55C1E2(BattleScarManager const *const, SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
bool BattleScarManager::restore(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const // 0x55C1E2
{
    mangled_assert("?restore@BattleScarManager@@QBE_NPAVSaveGameData@@AAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_55C1E2(this, arg, arg);
    return __result;
}

_extern void _sub_55BDBE(BattleScarManager const *const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
void BattleScarManager::postRestore(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const // 0x55BDBE
{
    mangled_assert("?postRestore@BattleScarManager@@QBEXAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    _sub_55BDBE(this, arg);
}

_extern _sub_55A033(BattleScarManager::Type *const, char const *);
BattleScarManager::Type::Type(char const *) // 0x55A033
{
    mangled_assert("??0Type@BattleScarManager@@QAE@PBD@Z");
    todo("implement");
    _sub_55A033(this, arg);
}

_extern void _sub_55A069(std::_List_buy<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > *const);
_inline std::_List_buy<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> >::~_List_buy<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> >() // 0x55A069
{
    mangled_assert("??1?$_List_buy@PAVDecal@Object@BattleScarManager@@V?$allocator@PAVDecal@Object@BattleScarManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A069(this);
}

_extern void _sub_55A072(std::_List_buy<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > *const);
_inline std::_List_buy<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> >::~_List_buy<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> >() // 0x55A072
{
    mangled_assert("??1?$_List_buy@UFXInstance@Object@BattleScarManager@@V?$allocator@UFXInstance@Object@BattleScarManager@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A072(this);
}

_extern void _sub_55A07B(std::_List_buy<Collision::Sphere,std::allocator<Collision::Sphere> > *const);
_inline std::_List_buy<Collision::Sphere,std::allocator<Collision::Sphere> >::~_List_buy<Collision::Sphere,std::allocator<Collision::Sphere> >() // 0x55A07B
{
    mangled_assert("??1?$_List_buy@VSphere@Collision@@V?$allocator@VSphere@Collision@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A07B(this);
}

_extern void _sub_55A0AB(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *> > >() // 0x55A0AB
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVType@BattleScarManager@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVType@BattleScarManager@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A0AB(this);
}

_extern void _sub_55A2B3(BattleScarManager::Type *const);
BattleScarManager::Type::~Type() // 0x55A2B3
{
    mangled_assert("??1Type@BattleScarManager@@UAE@XZ");
    todo("implement");
    _sub_55A2B3(this);
}

_extern void _sub_55A0F8(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BattleScarManager::Type *>() // 0x55A0F8
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVType@BattleScarManager@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A0F8(this);
}

_extern void _sub_55A0FD(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BattleScarManager::Type *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BattleScarManager::Type *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BattleScarManager::Type *>() // 0x55A0FD
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVType@BattleScarManager@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A0FD(this);
}

_extern void _sub_55BCEF(BattleScarManager::Type *const, BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
void BattleScarManager::Type::onWeaponHit(BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &) // 0x55BCEF
{
    mangled_assert("?onWeaponHit@Type@BattleScarManager@@UAEXABUDamageInfo@2@MJHMMAAVBattleScarStats@@AAV?$vector@UDamageTarget@BattleScarManager@@V?$allocator@UDamageTarget@BattleScarManager@@@std@@@std@@AAW4DamageResult@2@@Z");
    todo("implement");
    _sub_55BCEF(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_55B818(BattleScarManager::Type const *const, BattleScarManager::DamageInfo const &, float, __int32, float, float, BattleScarStats const &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > const &, BattleScarManager::DamageResult &);
bool BattleScarManager::Type::isScaringDamage(BattleScarManager::DamageInfo const &, float, __int32, float, float, BattleScarStats const &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > const &, BattleScarManager::DamageResult &) const // 0x55B818
{
    mangled_assert("?isScaringDamage@Type@BattleScarManager@@IBE_NABUDamageInfo@2@MHMMABVBattleScarStats@@ABV?$vector@UDamageTarget@BattleScarManager@@V?$allocator@UDamageTarget@BattleScarManager@@@std@@@std@@AAW4DamageResult@2@@Z");
    todo("implement");
    bool __result = _sub_55B818(this, arg, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_55BBD6(BattleScarManager::Type *const, BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &);
void BattleScarManager::Type::onNewScar(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &) // 0x55BBD6
{
    mangled_assert("?onNewScar@Type@BattleScarManager@@IAEXABUDamageInfo@2@MHJAAVBattleScarStats@@AAV?$vector@UDamageTarget@BattleScarManager@@V?$allocator@UDamageTarget@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    _sub_55BBD6(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_55A76A(FXObjDestroyer *const, BattleScarManager::Object::FXInstance &);
_inline void FXObjDestroyer::operator()(BattleScarManager::Object::FXInstance &) // 0x55A76A
{
    mangled_assert("??RFXObjDestroyer@@QAEXAAUFXInstance@Object@BattleScarManager@@@Z");
    todo("implement");
    _sub_55A76A(this, arg);
}

_extern BattleScarManager::Object::Decal *_sub_55B0BE();
BattleScarManager::Object::Decal *BattleScarManager::Object::Decal::construct() // 0x55B0BE
{
    mangled_assert("?construct@Decal@Object@BattleScarManager@@SGPAV123@XZ");
    todo("implement");
    BattleScarManager::Object::Decal * __result = _sub_55B0BE();
    return __result;
}

_extern void _sub_55B217(BattleScarManager::Object::Decal *);
void BattleScarManager::Object::Decal::destroy(BattleScarManager::Object::Decal *d) // 0x55B217
{
    mangled_assert("?destroy@Decal@Object@BattleScarManager@@SGXPAV123@@Z");
    todo("implement");
    _sub_55B217(d);
}

_extern _sub_559F17(BattleScarManager::Object::Decal *const);
BattleScarManager::Object::Decal::Decal() // 0x559F17
{
    mangled_assert("??0Decal@Object@BattleScarManager@@AAE@XZ");
    todo("implement");
    _sub_559F17(this);
}

_extern _sub_559F6C(BattleScarManager::Object::FXInstance *const, BattleScarManager::Object::FXInstance const &);
_inline BattleScarManager::Object::FXInstance::FXInstance(BattleScarManager::Object::FXInstance const &) // 0x559F6C
{
    mangled_assert("??0FXInstance@Object@BattleScarManager@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
    _sub_559F6C(this, arg);
}

_extern _sub_559FA0(BattleScarManager::Object::FXInstance *const);
_inline BattleScarManager::Object::FXInstance::FXInstance() // 0x559FA0
{
    mangled_assert("??0FXInstance@Object@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_559FA0(this);
}

_extern _sub_559FB7(BattleScarManager::Object::History *const);
_inline BattleScarManager::Object::History::History() // 0x559FB7
{
    mangled_assert("??0History@Object@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_559FB7(this);
}

_extern void _sub_55A1ED(BattleScarManager::Object::Decal *const);
BattleScarManager::Object::Decal::~Decal() // 0x55A1ED
{
    mangled_assert("??1Decal@Object@BattleScarManager@@AAE@XZ");
    todo("implement");
    _sub_55A1ED(this);
}

_extern void _sub_55A25B(BattleScarManager::Object::FXInstance *const);
_inline BattleScarManager::Object::FXInstance::~FXInstance() // 0x55A25B
{
    mangled_assert("??1FXInstance@Object@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55A25B(this);
}

_extern BattleScarManager::Object::Decal &_sub_55A3F1(BattleScarManager::Object::Decal *const, BattleScarManager::Object::Decal const &);
BattleScarManager::Object::Decal &BattleScarManager::Object::Decal::operator=(BattleScarManager::Object::Decal const &) // 0x55A3F1
{
    mangled_assert("??4Decal@Object@BattleScarManager@@QAEAAV012@ABV012@@Z");
    todo("implement");
    BattleScarManager::Object::Decal & __result = _sub_55A3F1(this, arg);
    return __result;
}

_extern BattleScarManager::Object::FXInstance &_sub_55A44D(BattleScarManager::Object::FXInstance *const, BattleScarManager::Object::FXInstance const &);
_inline BattleScarManager::Object::FXInstance &BattleScarManager::Object::FXInstance::operator=(BattleScarManager::Object::FXInstance const &) // 0x55A44D
{
    mangled_assert("??4FXInstance@Object@BattleScarManager@@QAEAAU012@ABU012@@Z");
    compiler_generated();
    todo("implement");
    BattleScarManager::Object::FXInstance & __result = _sub_55A44D(this, arg);
    return __result;
}

_extern float _sub_55B234(BattleScarManager::Object::Decal const *const, vector3 const &);
float BattleScarManager::Object::Decal::distanceSqr(vector3 const &) const // 0x55B234
{
    mangled_assert("?distanceSqr@Decal@Object@BattleScarManager@@QBEMABVvector3@@@Z");
    todo("implement");
    float __result = _sub_55B234(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_55B7EA(BattleScarManager::Object::Decal const *const);
unsigned __int32 BattleScarManager::Object::Decal::getNumTriangles() const // 0x55B7EA
{
    mangled_assert("?getNumTriangles@Decal@Object@BattleScarManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_55B7EA(this);
    return __result;
}

_extern void _sub_55C9AA(BattleScarManager::Object::Decal *const, bool);
void BattleScarManager::Object::Decal::setVisible(bool) // 0x55C9AA
{
    mangled_assert("?setVisible@Decal@Object@BattleScarManager@@QAEX_N@Z");
    todo("implement");
    _sub_55C9AA(this, arg);
}

_extern bool _sub_55C623(BattleScarManager::Object::Decal const *const, SaveGameData *);
bool BattleScarManager::Object::Decal::save(SaveGameData *) const // 0x55C623
{
    mangled_assert("?save@Decal@Object@BattleScarManager@@QBE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_55C623(this, arg);
    return __result;
}

_extern bool _sub_55C289(BattleScarManager::Object::Decal *const, SaveGameData *, BattleScarManager::Object const *);
bool BattleScarManager::Object::Decal::restore(SaveGameData *, BattleScarManager::Object const *) // 0x55C289
{
    mangled_assert("?restore@Decal@Object@BattleScarManager@@QAE_NPAVSaveGameData@@PBV23@@Z");
    todo("implement");
    bool __result = _sub_55C289(this, arg, arg);
    return __result;
}

_extern _sub_559FBA(BattleScarManager::Object *const, BattleScarManager::Type const *, BattleScarManager::Handle const &);
BattleScarManager::Object::Object(BattleScarManager::Type const *, BattleScarManager::Handle const &) // 0x559FBA
{
    mangled_assert("??0Object@BattleScarManager@@IAE@PBVType@1@ABUHandle@1@@Z");
    todo("implement");
    _sub_559FBA(this, arg, arg);
}

_extern void _sub_55A260(BattleScarManager::Object *const);
BattleScarManager::Object::~Object() // 0x55A260
{
    mangled_assert("??1Object@BattleScarManager@@MAE@XZ");
    todo("implement");
    _sub_55A260(this);
}

_extern void _sub_55C8D6(BattleScarManager::Object *const, matrix4 const &);
void BattleScarManager::Object::setTransform(matrix4 const &) // 0x55C8D6
{
    mangled_assert("?setTransform@Object@BattleScarManager@@QAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_55C8D6(this, arg);
}

_extern void _sub_55C97D(BattleScarManager::Object *const, bool);
void BattleScarManager::Object::setVisibility(bool) // 0x55C97D
{
    mangled_assert("?setVisibility@Object@BattleScarManager@@QAEX_N@Z");
    todo("implement");
    _sub_55C97D(this, arg);
}

_extern BattleScarManager::Object::Decal *_sub_55B133(BattleScarManager::Object *const);
BattleScarManager::Object::Decal *BattleScarManager::Object::createDecal() // 0x55B133
{
    mangled_assert("?createDecal@Object@BattleScarManager@@QAEPAVDecal@12@XZ");
    todo("implement");
    BattleScarManager::Object::Decal * __result = _sub_55B133(this);
    return __result;
}

_extern BattleScarManager::Object::Decal *_sub_55B2D6(BattleScarManager::Object *const, BattleScarManager::Object::Decal const *);
BattleScarManager::Object::Decal *BattleScarManager::Object::duplicateDecal(BattleScarManager::Object::Decal const *) // 0x55B2D6
{
    mangled_assert("?duplicateDecal@Object@BattleScarManager@@QAEPAVDecal@12@PBV312@@Z");
    todo("implement");
    BattleScarManager::Object::Decal * __result = _sub_55B2D6(this, arg);
    return __result;
}

_extern std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > const &_sub_55B7C9(BattleScarManager::Object const *const);
std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > const &BattleScarManager::Object::getDecalList() const // 0x55B7C9
{
    mangled_assert("?getDecalList@Object@BattleScarManager@@QBEABV?$list@PAVDecal@Object@BattleScarManager@@V?$allocator@PAVDecal@Object@BattleScarManager@@@std@@@std@@XZ");
    todo("implement");
    std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > const & __result = _sub_55B7C9(this);
    return __result;
}

_extern std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > &_sub_55B7C2(BattleScarManager::Object *const);
std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > &BattleScarManager::Object::getDecalList() // 0x55B7C2
{
    mangled_assert("?getDecalList@Object@BattleScarManager@@QAEAAV?$list@PAVDecal@Object@BattleScarManager@@V?$allocator@PAVDecal@Object@BattleScarManager@@@std@@@std@@XZ");
    todo("implement");
    std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > & __result = _sub_55B7C2(this);
    return __result;
}

_extern BattleScarManager::Object::Decal *_sub_55BD94(BattleScarManager::Object *const);
BattleScarManager::Object::Decal *BattleScarManager::Object::popbackDecal() // 0x55BD94
{
    mangled_assert("?popbackDecal@Object@BattleScarManager@@QAEPAVDecal@12@XZ");
    todo("implement");
    BattleScarManager::Object::Decal * __result = _sub_55BD94(this);
    return __result;
}

_extern void _sub_55BF21(BattleScarManager::Object *const, BattleScarManager::Object::Decal *);
void BattleScarManager::Object::pushbackDecal(BattleScarManager::Object::Decal *) // 0x55BF21
{
    mangled_assert("?pushbackDecal@Object@BattleScarManager@@QAEXPAVDecal@12@@Z");
    todo("implement");
    _sub_55BF21(this, arg);
}

_extern void _sub_55B1C4(BattleScarManager::Object *const);
void BattleScarManager::Object::deleteFirstDecal() // 0x55B1C4
{
    mangled_assert("?deleteFirstDecal@Object@BattleScarManager@@QAEXXZ");
    todo("implement");
    _sub_55B1C4(this);
}

_extern void _sub_55B1ED(BattleScarManager::Object *const);
void BattleScarManager::Object::deleteLastDecal() // 0x55B1ED
{
    mangled_assert("?deleteLastDecal@Object@BattleScarManager@@QAEXXZ");
    todo("implement");
    _sub_55B1ED(this);
}

_extern void _sub_55B109(BattleScarManager::Object *const);
void BattleScarManager::Object::countDecalTriangles() // 0x55B109
{
    mangled_assert("?countDecalTriangles@Object@BattleScarManager@@QAEXXZ");
    todo("implement");
    _sub_55B109(this);
}

_extern void _sub_55BF84(BattleScarManager::Object *const);
void BattleScarManager::Object::removeFX() // 0x55BF84
{
    mangled_assert("?removeFX@Object@BattleScarManager@@QAEXXZ");
    todo("implement");
    _sub_55BF84(this);
}

_extern bool _sub_55C6F8(BattleScarManager::Object const *const, SaveGameData *);
bool BattleScarManager::Object::save(SaveGameData *) const // 0x55C6F8
{
    mangled_assert("?save@Object@BattleScarManager@@UBE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_55C6F8(this, arg);
    return __result;
}

_extern bool _sub_55C42A(BattleScarManager::Object *const, SaveGameData *);
bool BattleScarManager::Object::restore(SaveGameData *) // 0x55C42A
{
    mangled_assert("?restore@Object@BattleScarManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_55C42A(this, arg);
    return __result;
}

_extern bool _sub_55BE46(BattleScarManager::Object *const);
bool BattleScarManager::Object::postRestoreValidate() // 0x55BE46
{
    mangled_assert("?postRestoreValidate@Object@BattleScarManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_55BE46(this);
    return __result;
}

/* ---------- private code */
#endif
