#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <Objects\Parser.h>
#include <Objects\Parsable.h>
#include <Objects\Objects.h>
#include <Objects\ShaderParam.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern Parser &_sub_1008A390(Parser *const, Parser const &);
_inline Parser &Parser::operator=(Parser const &) // 0x1008A390
{
    mangled_assert("??4Parser@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Parser & __result = _sub_1008A390(this, arg);
    return __result;
}

_extern void (*_sub_1008A3B0(Parsable *const, char const *, parsablekey_s *))(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void (*Parsable::findFunc(char const *, parsablekey_s *))(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &) // 0x1008A3B0
{
    mangled_assert("?findFunc@Parsable@@IAEP6GXPAV1@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@ZPBDPAUparsablekey_s@@@Z");
    todo("implement");
    void (*)(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &) __result = _sub_1008A3B0(this, arg, arg);
    return __result;
}

_extern void _sub_1008A410(Parsable *const, Parser &, parsablekey_s *, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void Parsable::parseLine(Parser &, parsablekey_s *, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &) // 0x1008A410
{
    mangled_assert("?parseLine@Parsable@@IAEXAAVParser@@PAUparsablekey_s@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_1008A410(this, arg, arg, arg);
}

/* ---------- private code */
#endif
