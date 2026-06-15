#if 0
/* ---------- headers */

#include "decomp.h"
#include <winioctl.h>
#include <servprov.h>
#include <boost\pool\detail\gcd_lcm.hpp>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <debugapi.h>
#include <fileapi.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <cguid.h>
#include <xmemory0>
#include <pch.h>
#include <boost\pool\pool.hpp>
#include <cderr.h>
#include <boost\type_traits\detail\ice_or.hpp>
#include <boost\pool\poolfwd.hpp>
#include <crtdefs.h>
#include <dde.h>
#include <boost\pool\simple_segregated_storage.hpp>
#include <boost\pool\detail\mutex.hpp>
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
#include <Mathlib\matrix3.h>
#include <poppack.h>
#include <boost\checked_delete.hpp>
#include <mmiscapi2.h>
#include <new>
#include <profileapi.h>
#include <winefs.h>
#include <exception>
#include <xstddef>
#include <synchapi.h>
#include <inaddr.h>
#include <type_traits>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Decal\DecalRefMeshRegistry.h>
#include <xutility>
#include <Decal\DecalRefMesh.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <wnnc.h>
#include <xmemory>
#include <stdarg.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <specstrings.h>
#include <playsoundapi.h>
#include <savestream.h>
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
#include <Mathlib\vector3.h>
#include <winsmcrd.h>
#include <Mathlib\vector4.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <boost\scoped_ptr.hpp>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <guiddef.h>
#include <Mathlib\vector2.h>
#include <jobapi.h>
#include <util\types.h>
#include <apiset.h>
#include <ole2.h>
#include <boost\type_traits\detail\ice_not.hpp>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <boost\config.hpp>
#include <winnls.h>
#include <shellapi.h>
#include <datetimeapi.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <platform\osdef.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <winsock.h>
#include <oaidl.h>
#include <nb30.h>
#include <commdlg.h>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <Mathlib\mathlibdll.h>
#include <securityappcontainer.h>
#include <renderer.h>
#include <Mathlib\fastmath.h>
#include <fibersapi.h>
#include <imm.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <savegamedata.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <Render\gl\lotypes.h>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <util\colour.h>
#include <Render\gl\r_types.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <boost\pool\detail\ct_gcd_lcm.hpp>
#include <pshpack4.h>
#include <boost\static_assert.hpp>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <oleauto.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const kDecalObjToken[9]; // 0x7A6334
    extern boost::pool<boost::default_user_allocator_new_delete> s_decalPool; // 0x83AB40
    extern __int32 const kSaveLoadVersion; // 0x7A6340
}

/* ---------- public code */

_inline DecalManager::Data::Data() // 0x5C14BD
{
    mangled_assert("??0Data@DecalManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DecalManager::DecalManager() // 0x5C14C9
{
    mangled_assert("??0DecalManager@@QAE@XZ");
    todo("implement");
}

DecalManager::~DecalManager() // 0x5C155B
{
    mangled_assert("??1DecalManager@@QAE@XZ");
    todo("implement");
}

void DecalManager::Initialize(unsigned __int32) // 0x5C17D8
{
    mangled_assert("?Initialize@DecalManager@@QAEXI@Z");
    todo("implement");
}

DecalManager::Object *DecalManager::DecalNew() // 0x5C1758
{
    mangled_assert("?DecalNew@DecalManager@@QAEPAVObject@1@XZ");
    todo("implement");
}

void DecalManager::DecalDestroy(DecalManager::Object *) // 0x5C173B
{
    mangled_assert("?DecalDestroy@DecalManager@@QAEXPAVObject@1@@Z");
    todo("implement");
}

VertexPool &DecalManager::GetVertexPool() // 0x5C17D5
{
    mangled_assert("?GetVertexPool@DecalManager@@QAEAAVVertexPool@@XZ");
    todo("implement");
}

void DecalManager::RenderBegin(unsigned __int32) // 0x5C1930
{
    mangled_assert("?RenderBegin@DecalManager@@QAEXI@Z");
    todo("implement");
}

void DecalManager::RenderEnd() // 0x5C1937
{
    mangled_assert("?RenderEnd@DecalManager@@QAEXXZ");
    todo("implement");
}

DecalManager::Object::Object(DecalManager *) // 0x5C150A
{
    mangled_assert("??0Object@DecalManager@@AAE@PAV1@@Z");
    todo("implement");
}

_inline DecalManager::Object::TextureCoords::TextureCoords() // 0x5C1546
{
    mangled_assert("??0TextureCoords@Object@DecalManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DecalManager::Data::~Data() // 0x5C1556
{
    mangled_assert("??1Data@DecalManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DecalManager::Object::~Object() // 0x5C1563
{
    mangled_assert("??1Object@DecalManager@@AAE@XZ");
    todo("implement");
}

void DecalManager::Object::freeVertices() // 0x5C1EB1
{
    mangled_assert("?freeVertices@Object@DecalManager@@AAEXXZ");
    todo("implement");
}

bool DecalManager::Object::SetMesh(DecalRefMesh const *, std::vector<FatVertex,std::allocator<FatVertex> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &) // 0x5C1B36
{
    mangled_assert("?SetMesh@Object@DecalManager@@QAE_NPBVDecalRefMesh@@ABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@5@2@Z");
    todo("implement");
}

void DecalManager::Object::GetMesh(std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &) const // 0x5C17A1
{
    mangled_assert("?GetMesh@Object@DecalManager@@QBEXAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@4@1@Z");
    todo("implement");
}

std::vector<unsigned short,std::allocator<unsigned short> > const &DecalManager::Object::GetTriIndices() const // 0x5C17D1
{
    mangled_assert("?GetTriIndices@Object@DecalManager@@QBEABV?$vector@GV?$allocator@G@std@@@std@@XZ");
    todo("implement");
}

unsigned __int32 DecalManager::Object::GetNumTriangles() const // 0x5C17C8
{
    mangled_assert("?GetNumTriangles@Object@DecalManager@@QBEIXZ");
    todo("implement");
}

void DecalManager::Object::Render() // 0x5C17EA
{
    mangled_assert("?Render@Object@DecalManager@@QAEXXZ");
    todo("implement");
}

DecalManager::Object &DecalManager::Object::operator=(DecalManager::Object const &) // 0x5C15B8
{
    mangled_assert("??4Object@DecalManager@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

bool DecalManager::Object::Save(SaveGameData *) const // 0x5C1A82
{
    mangled_assert("?Save@Object@DecalManager@@QBE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DecalManager::Object::Restore(SaveGameData *) // 0x5C193E
{
    mangled_assert("?Restore@Object@DecalManager@@QAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DecalManager::Object::RestoreMesh() // 0x5C19CF
{
    mangled_assert("?RestoreMesh@Object@DecalManager@@QAE_NXZ");
    todo("implement");
}

void DecalManager::Object::getVertices(DecalRefMesh const *, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<DecalManager::Object::TextureCoords,std::allocator<DecalManager::Object::TextureCoords> > const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &) const // 0x5C1EE7
{
    mangled_assert("?getVertices@Object@DecalManager@@ABEXPBVDecalRefMesh@@ABV?$vector@GV?$allocator@G@std@@@std@@ABV?$vector@UTextureCoords@Object@DecalManager@@V?$allocator@UTextureCoords@Object@DecalManager@@@std@@@5@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@5@AAV45@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
