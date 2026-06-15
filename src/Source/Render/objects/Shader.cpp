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

Shader::Shader() // 0x1008FFC0
{
    mangled_assert("??0Shader@@QAE@XZ");
    todo("implement");
}

Shader::~Shader() // 0x10090210
{
    mangled_assert("??1Shader@@QAE@XZ");
    todo("implement");
}

void Shader::flush() // 0x100906E0
{
    mangled_assert("?flush@Shader@@QAEXXZ");
    todo("implement");
}

char const *Shader::getName() // 0x10090760
{
    mangled_assert("?getName@Shader@@QAEPBDXZ");
    todo("implement");
}

void Shader::setName(char const *) // 0x10090B90
{
    mangled_assert("?setName@Shader@@QAEXPBD@Z");
    todo("implement");
}

void Shader::addPass(ShaderPass *) // 0x10090690
{
    mangled_assert("?addPass@Shader@@QAEXPAVShaderPass@@@Z");
    todo("implement");
}

__int32 Shader::getNumPasses() // 0x10090780
{
    mangled_assert("?getNumPasses@Shader@@QAEHXZ");
    todo("implement");
}

ShaderPass *Shader::getPass(__int32) // 0x100907F0
{
    mangled_assert("?getPass@Shader@@QAEPAVShaderPass@@H@Z");
    todo("implement");
}

void Shader::parse(Parser &, bool) // 0x10090810
{
    mangled_assert("?parse@Shader@@QAEXAAVParser@@_N@Z");
    todo("implement");
}

std::vector<ShaderParam *,std::allocator<ShaderParam *> > &Shader::getParamList() // 0x100907E0
{
    mangled_assert("?getParamList@Shader@@QAEAAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@XZ");
    todo("implement");
}

ShaderInstance::ShaderInstance(Shader *) // 0x10090000
{
    mangled_assert("??0ShaderInstance@@QAE@PAVShader@@@Z");
    todo("implement");
}

ShaderInstance::~ShaderInstance() // 0x100902C0
{
    mangled_assert("??1ShaderInstance@@QAE@XZ");
    todo("implement");
}

char const *ShaderInstance::getName() // 0x10090770
{
    mangled_assert("?getName@ShaderInstance@@QAEPBDXZ");
    todo("implement");
}

void ShaderInstance::setName(char const *) // 0x10090BB0
{
    mangled_assert("?setName@ShaderInstance@@QAEXPBD@Z");
    todo("implement");
}

void ShaderInstance::applyParams() // 0x100906A0
{
    mangled_assert("?applyParams@ShaderInstance@@QAEXXZ");
    todo("implement");
}

void ShaderInstance::setParam(__int32, void *) // 0x10090BE0
{
    mangled_assert("?setParam@ShaderInstance@@QAEXHPAX@Z");
    todo("implement");
}

Shader *ShaderInstance::getShader() // 0x10090800
{
    mangled_assert("?getShader@ShaderInstance@@QAEPAVShader@@XZ");
    todo("implement");
}

void Shader::setOverrideShader(Shader *shader) // 0x10090BD0
{
    mangled_assert("?setOverrideShader@Shader@@SGXPAV1@@Z");
    todo("implement");
}

void Shader::clearOverrideShader() // 0x100906D0
{
    mangled_assert("?clearOverrideShader@Shader@@SGXXZ");
    todo("implement");
}

ShaderParam *ShaderInstance::getParam(char *) // 0x10090790
{
    mangled_assert("?getParam@ShaderInstance@@QAEPAVShaderParam@@PAD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
