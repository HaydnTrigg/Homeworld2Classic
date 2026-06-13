#if 0
/* ---------- headers */

#include "decomp.h"
#include <specstrings.h>
#include <handleapi.h>
#include <hash_map>
#include <specstrings_strict.h>
#include <xhash>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <profile\profile.h>
#include <xstring>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <iostream>
#include <xmemory0>
#include <Objects\StateBlock\StateBlockManager.h>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <namespaceapi.h>
#include <boost\throw_exception.hpp>
#include <ktmtypes.h>
#include <Objects\Shader.h>
#include <Objects\Parsable.h>
#include <boost\detail\shared_count.hpp>
#include <Objects\ShaderParam.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <winbase.h>
#include <boost\detail\lwm_win32.hpp>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <new>
#include <xstddef>
#include <guiddef.h>
#include <jobapi.h>
#include <type_traits>
#include <assist\typemagic.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <debug\ctmessage.h>
#include <vector>
#include <xmemory>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <math.h>
#include <list>
#include <Mathlib\matrix4.h>
#include <winreg.h>
#include <Mathlib\vector3.h>
#include <Objects\MeshLoader.h>
#include <securityappcontainer.h>
#include <memory>
#include <fibersapi.h>
#include <stdint.h>
#include <Objects\Material.h>
#include <map>
#include <xtree>
#include <Mathlib\matrix3.h>
#include <functional>
#include <xfunctional>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <Objects\Mesh.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <Objects\Renderable.h>
#include <memoryapi.h>
#include <Objects\Texture.h>
#include <Objects\ShaderCatalog.h>
#include <consoleapi.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <gl\lotypes.h>
#include <Objects\hw2ddraw.h>
#include <wingdi.h>
#include <assert.h>
#include <pshpack4.h>
#include <Objects\StateBlock\CompoundStateBlockInstance.h>
#include <algorithm>
#include <winerror.h>
#include <Objects\TextureRegistry.h>
#include <Objects\ShaderPass.h>
#include <util\types.h>
#include <debug\ctassert.h>
#include <ime_cmodes.h>
#include <gl\r_macros.h>
#include <Objects\MeshIFF.h>
#include <Objects\Objects.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <winuser.h>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <debugapi.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <fileapi.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\Layer.h>
#include <winnls.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <platform\osdef.h>
#include <winapifamily.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <debug\db.h>
#include <sdkddkver.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <excpt.h>
#include <poppack.h>
#include <util\utilexports.h>
#include <Objects\StateBlock\stateBlock.h>
#include <imm.h>
#include <bitset>
#include <tuple>
#include <Mathlib\matvec.h>
#include <profileapi.h>
#include <Mathlib\vector2.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <synchapi.h>
#include <fileio\bytestream.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <Objects\Image.h>
#include <gl\r_defines.h>
#include <boost\checked_delete.hpp>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <util\colour.h>
#include <wchar.h>
#include <string>
#include <pshpack8.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <fileio\iff.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>

/* ---------- constants */

/* ---------- definitions */

struct shaderAlternativeStrings
{
    StateBlock_Type type; // 0x0
    char const *alternative; // 0x4
};
static_assert(sizeof(shaderAlternativeStrings) == 8, "Invalid shaderAlternativeStrings size");

struct shaderAlternative
{
    char const *name; // 0x0
    shaderAlternativeStrings string[2]; // 0x4
};
static_assert(sizeof(shaderAlternative) == 20, "Invalid shaderAlternative size");

/* ---------- prototypes */

extern float iffGetScale();
extern void iffSetScale(float s);
extern __int32 iffHandleLMIP(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern void cleanFilename(char *name);
extern __int32 handleSTAT(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handleSHAD(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 iffHandleSCAL(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

_static std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > _createShaderList();

/* ---------- globals */

extern bool gQuickLoad_SkipIffHandleLMIP; // 0x10132B74

/* ---------- private variables */

_static
{
    extern shaderAlternative const shadersWithAlternatives[9]; // 0x100E4DC8
    extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const alphaShader[1]; // 0x1010D8D0
    extern std::_Ignore ignore; // 0x10132B75
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132B76
    extern std::_Nil _Nil_obj; // 0x10132B77
    extern float scaleFactor; // 0x10132B78
}

/* ---------- public code */

_extern _sub_10082CB0(Shader *const, Shader const &);
_inline Shader::Shader(Shader const &) // 0x10082CB0
{
    mangled_assert("??0Shader@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10082CB0(this, arg);
}

_extern _sub_10082D30(ShaderInstance *const, ShaderInstance const &);
_inline ShaderInstance::ShaderInstance(ShaderInstance const &) // 0x10082D30
{
    mangled_assert("??0ShaderInstance@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10082D30(this, arg);
}

_extern void _sub_10082D90(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > >() // 0x10082D90
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10082D90(this);
}

_extern void _sub_10082DA0(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > >,0> >() // 0x10082DA0
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10082DA0(this);
}

_extern void _sub_10082DE0(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > >() // 0x10082DE0
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10082DE0(this);
}

_extern float _sub_10086090();
float iffGetScale() // 0x10086090
{
    mangled_assert("?iffGetScale@@YGMXZ");
    todo("implement");
    float __result = _sub_10086090();
    return __result;
}

_extern void _sub_10082E00(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >() // 0x10082E00
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10082E00(this);
}

_extern void _sub_10086150(float);
void iffSetScale(float s) // 0x10086150
{
    mangled_assert("?iffSetScale@@YGXM@Z");
    todo("implement");
    _sub_10086150(s);
}

_extern void _sub_10082E60(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > >() // 0x10082E60
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@U?$pair@W4StateBlock_Type@@PBD@std@@V?$allocator@U?$pair@W4StateBlock_Type@@PBD@std@@@2@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10082E60(this);
}

_extern Shader &_sub_10083360(Shader *const, Shader const &);
_inline Shader &Shader::operator=(Shader const &) // 0x10083360
{
    mangled_assert("??4Shader@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Shader & __result = _sub_10083360(this, arg);
    return __result;
}

_extern ShaderCatalog &_sub_100833B0(ShaderCatalog *const, ShaderCatalog const &);
_inline ShaderCatalog &ShaderCatalog::operator=(ShaderCatalog const &) // 0x100833B0
{
    mangled_assert("??4ShaderCatalog@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ShaderCatalog & __result = _sub_100833B0(this, arg);
    return __result;
}

_extern ShaderInstance &_sub_100833C0(ShaderInstance *const, ShaderInstance const &);
_inline ShaderInstance &ShaderInstance::operator=(ShaderInstance const &) // 0x100833C0
{
    mangled_assert("??4ShaderInstance@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ShaderInstance & __result = _sub_100833C0(this, arg);
    return __result;
}

_extern __int32 _sub_100860A0(IFF *, IFFChunk *, void *, void *);
__int32 iffHandleLMIP(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100860A0
{
    mangled_assert("?iffHandleLMIP@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_100860A0(iff, chunk, user0, user1);
    return __result;
}

_extern void _sub_10085040(char *);
void cleanFilename(char *name) // 0x10085040
{
    mangled_assert("?cleanFilename@@YGXPAD@Z");
    todo("implement");
    _sub_10085040(name);
}

_extern __int32 _sub_100858C0(IFF *, IFFChunk *, void *, void *);
__int32 handleSTAT(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100858C0
{
    mangled_assert("?handleSTAT@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_100858C0(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_10085890(IFF *, IFFChunk *, void *, void *);
__int32 handleSHAD(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10085890
{
    mangled_assert("?handleSHAD@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10085890(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_10086130(IFF *, IFFChunk *, void *, void *);
__int32 iffHandleSCAL(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10086130
{
    mangled_assert("?iffHandleSCAL@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10086130(iff, chunk, user0, user1);
    return __result;
}

/* ---------- private code */

_extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > _sub_10084B60();
_static std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > _createShaderList() // 0x10084B60
{
    mangled_assert("_createShaderList");
    todo("implement");
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::vector<std::pair<enum StateBlock_Type,char const *>,std::allocator<std::pair<enum StateBlock_Type,char const *> > > > > > __result = _sub_10084B60();
    return __result;
}
#endif
