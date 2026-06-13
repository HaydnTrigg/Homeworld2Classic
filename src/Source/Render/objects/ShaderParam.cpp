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

_extern _sub_10093220(ShaderParam *const, ShaderParam::paramType, char *, void *);
ShaderParam::ShaderParam(ShaderParam::paramType, char *, void *) // 0x10093220
{
    mangled_assert("??0ShaderParam@@QAE@W4paramType@0@PADPAX@Z");
    todo("implement");
    _sub_10093220(this, arg, arg, arg);
}

_extern void _sub_100932D0(ShaderParam *const);
ShaderParam::~ShaderParam() // 0x100932D0
{
    mangled_assert("??1ShaderParam@@QAE@XZ");
    todo("implement");
    _sub_100932D0(this);
}

_extern void _sub_10093320(ShaderParam *const, void *);
void ShaderParam::addInstance(void *) // 0x10093320
{
    mangled_assert("?addInstance@ShaderParam@@QAEXPAX@Z");
    todo("implement");
    _sub_10093320(this, arg);
}

_extern void *_sub_100933A0(ShaderParam *const);
void *ShaderParam::getValue() // 0x100933A0
{
    mangled_assert("?getValue@ShaderParam@@QAEPAXXZ");
    todo("implement");
    void * __result = _sub_100933A0(this);
    return __result;
}

_extern void _sub_100933B0(ShaderParam *const, void *);
void ShaderParam::setValue(void *) // 0x100933B0
{
    mangled_assert("?setValue@ShaderParam@@QAEXPAX@Z");
    todo("implement");
    _sub_100933B0(this, arg);
}

_extern void _sub_100933D0(ShaderParam *const);
void ShaderParam::updateInstances() // 0x100933D0
{
    mangled_assert("?updateInstances@ShaderParam@@QAEXXZ");
    todo("implement");
    _sub_100933D0(this);
}

_extern ShaderParam *_sub_10093350(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, char *);
ShaderParam *findShaderParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &paramList, char *name) // 0x10093350
{
    mangled_assert("?findShaderParam@@YGPAVShaderParam@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@PAD@Z");
    todo("implement");
    ShaderParam * __result = _sub_10093350(paramList, name);
    return __result;
}

/* ---------- private code */
#endif
