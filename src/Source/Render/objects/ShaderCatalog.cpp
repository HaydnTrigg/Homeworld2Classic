#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <Objects\ShaderPass.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <string.h>
#include <list>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Objects\Shader.h>
#include <Mathlib\matrix3.h>
#include <Objects\Parsable.h>
#include <Objects\ShaderParam.h>
#include <util\types.h>
#include <Objects\Parser.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <gl\lotypes.h>
#include <Objects\ShaderCatalog.h>
#include <Objects\Objects.h>
#include <string>
#include <platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > NameToShaderMap;

/* ---------- prototypes */

extern bool shaderCatalogStartup();
extern bool shaderCatalogShutdown();

_static void makeNicePath(char const *inputPath, char *outputPath, __int32 outputSize);

/* ---------- globals */

extern stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > ShaderCatalog::m_nameToShaderMap; // 0x10132C08
extern ShaderCatalog *ShaderCatalog::s_instance; // 0x10132C04

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_100931B0();
bool shaderCatalogStartup() // 0x100931B0
{
    mangled_assert("?shaderCatalogStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100931B0();
    return __result;
}

_extern bool _sub_10093160();
bool shaderCatalogShutdown() // 0x10093160
{
    mangled_assert("?shaderCatalogShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10093160();
    return __result;
}

_extern _sub_100919C0(ShaderCatalog *const);
ShaderCatalog::ShaderCatalog() // 0x100919C0
{
    mangled_assert("??0ShaderCatalog@@QAE@XZ");
    todo("implement");
    _sub_100919C0(this);
}

_extern void _sub_10091A30(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > >() // 0x10091A30
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10091A30(this);
}

_extern void _sub_10091A40(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > >() // 0x10091A40
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10091A40(this);
}

_extern void _sub_10091AB0(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *>() // 0x10091AB0
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10091AB0(this);
}

_extern void _sub_10091AE0(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *>() // 0x10091AE0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShader@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10091AE0(this);
}

_extern void _sub_10091B40(ShaderCatalog *const);
ShaderCatalog::~ShaderCatalog() // 0x10091B40
{
    mangled_assert("??1ShaderCatalog@@QAE@XZ");
    todo("implement");
    _sub_10091B40(this);
}

_extern ShaderCatalog *_sub_10092C50();
ShaderCatalog *ShaderCatalog::instance() // 0x10092C50
{
    mangled_assert("?instance@ShaderCatalog@@SGPAV1@XZ");
    todo("implement");
    ShaderCatalog * __result = _sub_10092C50();
    return __result;
}

_extern ShaderCatalog *_sub_10092C10();
ShaderCatalog *ShaderCatalog::i() // 0x10092C10
{
    mangled_assert("?i@ShaderCatalog@@SGPAV1@XZ");
    todo("implement");
    ShaderCatalog * __result = _sub_10092C10();
    return __result;
}

_extern bool _sub_10092FD0(ShaderCatalog *const);
bool ShaderCatalog::release() // 0x10092FD0
{
    mangled_assert("?release@ShaderCatalog@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_10092FD0(this);
    return __result;
}

_extern void _sub_100928E0(ShaderCatalog *const);
void ShaderCatalog::debugShaders() // 0x100928E0
{
    mangled_assert("?debugShaders@ShaderCatalog@@QAEXXZ");
    todo("implement");
    _sub_100928E0(this);
}

_extern void _sub_10092A30(ShaderCatalog *const, bool);
void ShaderCatalog::flushShaders(bool) // 0x10092A30
{
    mangled_assert("?flushShaders@ShaderCatalog@@QAEX_N@Z");
    todo("implement");
    _sub_10092A30(this, arg);
}

_extern Shader *_sub_10092AE0(ShaderCatalog *const, char const *, bool);
Shader *ShaderCatalog::getShader(char const *, bool) // 0x10092AE0
{
    mangled_assert("?getShader@ShaderCatalog@@QAEPAVShader@@PBD_N@Z");
    todo("implement");
    Shader * __result = _sub_10092AE0(this, arg, arg);
    return __result;
}

_extern Shader *_sub_10092C70(ShaderCatalog *const, char const *, bool);
Shader *ShaderCatalog::loadShader(char const *, bool) // 0x10092C70
{
    mangled_assert("?loadShader@ShaderCatalog@@AAEPAVShader@@PBD_N@Z");
    todo("implement");
    Shader * __result = _sub_10092C70(this, arg, arg);
    return __result;
}

_extern bool _sub_10093000(ShaderCatalog *const, char const *);
bool ShaderCatalog::reloadShader(char const *) // 0x10093000
{
    mangled_assert("?reloadShader@ShaderCatalog@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_10093000(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_10092EC0(char const *, char *, __int32);
_static void makeNicePath(char const *inputPath, char *outputPath, __int32 outputSize) // 0x10092EC0
{
    mangled_assert("makeNicePath");
    todo("implement");
    _sub_10092EC0(inputPath, outputPath, outputSize);
}
#endif
