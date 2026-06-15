#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <list>
#include <map>
#include <xtree>
#include <Objects\ShaderParam.h>
#include <Objects\Objects.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern ShaderParam *findShaderParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &paramList, char *name);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned __int32 shaderDataLengths[3]; // 0x1010D948
}

/* ---------- public code */

ShaderParam::ShaderParam(ShaderParam::paramType, char *, void *) // 0x10093220
{
    mangled_assert("??0ShaderParam@@QAE@W4paramType@0@PADPAX@Z");
    todo("implement");
}

ShaderParam::~ShaderParam() // 0x100932D0
{
    mangled_assert("??1ShaderParam@@QAE@XZ");
    todo("implement");
}

void ShaderParam::addInstance(void *) // 0x10093320
{
    mangled_assert("?addInstance@ShaderParam@@QAEXPAX@Z");
    todo("implement");
}

void *ShaderParam::getValue() // 0x100933A0
{
    mangled_assert("?getValue@ShaderParam@@QAEPAXXZ");
    todo("implement");
}

void ShaderParam::setValue(void *) // 0x100933B0
{
    mangled_assert("?setValue@ShaderParam@@QAEXPAX@Z");
    todo("implement");
}

void ShaderParam::updateInstances() // 0x100933D0
{
    mangled_assert("?updateInstances@ShaderParam@@QAEXXZ");
    todo("implement");
}

ShaderParam *findShaderParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &paramList, char *name) // 0x10093350
{
    mangled_assert("?findShaderParam@@YGPAVShaderParam@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@PAD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
