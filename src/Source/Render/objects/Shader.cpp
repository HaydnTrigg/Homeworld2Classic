#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <xstddef>
#include <platform\osdef.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <Mathlib\matvec.h>
#include <xmemory>
#include <Mathlib\vector2.h>
#include <Objects\ShaderPass.h>
#include <math.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <util\colour.h>
#include <list>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <map>
#include <xtree>
#include <profile\profile.h>
#include <iostream>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Objects\Shader.h>
#include <Objects\Objects.h>
#include <Mathlib\matrix3.h>
#include <Objects\Parsable.h>
#include <Objects\ShaderParam.h>
#include <Objects\Parser.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <gl\lotypes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern Shader *g_overrideShader; // 0x10132C00
}

/* ---------- public code */

_extern _sub_1008FFC0(Shader *const);
Shader::Shader() // 0x1008FFC0
{
    mangled_assert("??0Shader@@QAE@XZ");
    todo("implement");
    _sub_1008FFC0(this);
}

_extern void _sub_10090210(Shader *const);
Shader::~Shader() // 0x10090210
{
    mangled_assert("??1Shader@@QAE@XZ");
    todo("implement");
    _sub_10090210(this);
}

_extern void _sub_100906E0(Shader *const);
void Shader::flush() // 0x100906E0
{
    mangled_assert("?flush@Shader@@QAEXXZ");
    todo("implement");
    _sub_100906E0(this);
}

_extern char const *_sub_10090760(Shader *const);
char const *Shader::getName() // 0x10090760
{
    mangled_assert("?getName@Shader@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_10090760(this);
    return __result;
}

_extern void _sub_10090B90(Shader *const, char const *);
void Shader::setName(char const *) // 0x10090B90
{
    mangled_assert("?setName@Shader@@QAEXPBD@Z");
    todo("implement");
    _sub_10090B90(this, arg);
}

_extern void _sub_10090690(Shader *const, ShaderPass *);
void Shader::addPass(ShaderPass *) // 0x10090690
{
    mangled_assert("?addPass@Shader@@QAEXPAVShaderPass@@@Z");
    todo("implement");
    _sub_10090690(this, arg);
}

_extern __int32 _sub_10090780(Shader *const);
__int32 Shader::getNumPasses() // 0x10090780
{
    mangled_assert("?getNumPasses@Shader@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_10090780(this);
    return __result;
}

_extern ShaderPass *_sub_100907F0(Shader *const, __int32);
ShaderPass *Shader::getPass(__int32) // 0x100907F0
{
    mangled_assert("?getPass@Shader@@QAEPAVShaderPass@@H@Z");
    todo("implement");
    ShaderPass * __result = _sub_100907F0(this, arg);
    return __result;
}

_extern void _sub_10090810(Shader *const, Parser &, bool);
void Shader::parse(Parser &, bool) // 0x10090810
{
    mangled_assert("?parse@Shader@@QAEXAAVParser@@_N@Z");
    todo("implement");
    _sub_10090810(this, arg, arg);
}

_extern std::vector<ShaderParam *,std::allocator<ShaderParam *> > &_sub_100907E0(Shader *const);
std::vector<ShaderParam *,std::allocator<ShaderParam *> > &Shader::getParamList() // 0x100907E0
{
    mangled_assert("?getParamList@Shader@@QAEAAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@XZ");
    todo("implement");
    std::vector<ShaderParam *,std::allocator<ShaderParam *> > & __result = _sub_100907E0(this);
    return __result;
}

_extern _sub_10090000(ShaderInstance *const, Shader *);
ShaderInstance::ShaderInstance(Shader *) // 0x10090000
{
    mangled_assert("??0ShaderInstance@@QAE@PAVShader@@@Z");
    todo("implement");
    _sub_10090000(this, arg);
}

_extern void _sub_100902C0(ShaderInstance *const);
ShaderInstance::~ShaderInstance() // 0x100902C0
{
    mangled_assert("??1ShaderInstance@@QAE@XZ");
    todo("implement");
    _sub_100902C0(this);
}

_extern char const *_sub_10090770(ShaderInstance *const);
char const *ShaderInstance::getName() // 0x10090770
{
    mangled_assert("?getName@ShaderInstance@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_10090770(this);
    return __result;
}

_extern void _sub_10090BB0(ShaderInstance *const, char const *);
void ShaderInstance::setName(char const *) // 0x10090BB0
{
    mangled_assert("?setName@ShaderInstance@@QAEXPBD@Z");
    todo("implement");
    _sub_10090BB0(this, arg);
}

_extern void _sub_100906A0(ShaderInstance *const);
void ShaderInstance::applyParams() // 0x100906A0
{
    mangled_assert("?applyParams@ShaderInstance@@QAEXXZ");
    todo("implement");
    _sub_100906A0(this);
}

_extern void _sub_10090BE0(ShaderInstance *const, __int32, void *);
void ShaderInstance::setParam(__int32, void *) // 0x10090BE0
{
    mangled_assert("?setParam@ShaderInstance@@QAEXHPAX@Z");
    todo("implement");
    _sub_10090BE0(this, arg, arg);
}

_extern Shader *_sub_10090800(ShaderInstance *const);
Shader *ShaderInstance::getShader() // 0x10090800
{
    mangled_assert("?getShader@ShaderInstance@@QAEPAVShader@@XZ");
    todo("implement");
    Shader * __result = _sub_10090800(this);
    return __result;
}

_extern void _sub_10090BD0(Shader *);
void Shader::setOverrideShader(Shader *shader) // 0x10090BD0
{
    mangled_assert("?setOverrideShader@Shader@@SGXPAV1@@Z");
    todo("implement");
    _sub_10090BD0(shader);
}

_extern void _sub_100906D0();
void Shader::clearOverrideShader() // 0x100906D0
{
    mangled_assert("?clearOverrideShader@Shader@@SGXXZ");
    todo("implement");
    _sub_100906D0();
}

_extern ShaderParam *_sub_10090790(ShaderInstance *const, char *);
ShaderParam *ShaderInstance::getParam(char *) // 0x10090790
{
    mangled_assert("?getParam@ShaderInstance@@QAEPAVShaderParam@@PAD@Z");
    todo("implement");
    ShaderParam * __result = _sub_10090790(this, arg);
    return __result;
}

/* ---------- private code */
#endif
