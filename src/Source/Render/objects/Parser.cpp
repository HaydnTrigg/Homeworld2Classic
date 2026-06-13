#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <algorithm>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Objects\Parser.h>
#include <Objects\ShaderParam.h>
#include <Objects\Objects.h>
#include <debug\db.h>
#include <wchar.h>
#include <assist\typemagic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_1008A4E0(Parser *const);
Parser::Parser() // 0x1008A4E0
{
    mangled_assert("??0Parser@@QAE@XZ");
    todo("implement");
    _sub_1008A4E0(this);
}

_extern _sub_1008A4C0(Parser *const, char const *);
Parser::Parser(char const *) // 0x1008A4C0
{
    mangled_assert("??0Parser@@QAE@PBD@Z");
    todo("implement");
    _sub_1008A4C0(this, arg);
}

_extern _sub_1008A490(Parser *const, char *);
Parser::Parser(char *) // 0x1008A490
{
    mangled_assert("??0Parser@@QAE@PAD@Z");
    todo("implement");
    _sub_1008A490(this, arg);
}

_extern void _sub_1008A510(Parser *const);
Parser::~Parser() // 0x1008A510
{
    mangled_assert("??1Parser@@QAE@XZ");
    todo("implement");
    _sub_1008A510(this);
}

_extern __int32 _sub_1008A590(Parser *const, char const *);
__int32 Parser::loadFile(char const *) // 0x1008A590
{
    mangled_assert("?loadFile@Parser@@QAEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_1008A590(this, arg);
    return __result;
}

_extern void _sub_1008ACB0(Parser *const, char *);
void Parser::setData(char *) // 0x1008ACB0
{
    mangled_assert("?setData@Parser@@QAEXPAD@Z");
    todo("implement");
    _sub_1008ACB0(this, arg);
}

_extern char *_sub_1008AAC0(Parser *const, char **);
char *Parser::return_token(char **) // 0x1008AAC0
{
    mangled_assert("?return_token@Parser@@AAEPADPAPAD@Z");
    todo("implement");
    char * __result = _sub_1008AAC0(this, arg);
    return __result;
}

_extern char *_sub_1008A580(Parser *const);
char *Parser::lexan() // 0x1008A580
{
    mangled_assert("?lexan@Parser@@AAEPADXZ");
    todo("implement");
    char * __result = _sub_1008A580(this);
    return __result;
}

_extern char *_sub_1008AAB0(Parser *const);
char *Parser::returnLookahead() // 0x1008AAB0
{
    mangled_assert("?returnLookahead@Parser@@QAEPADXZ");
    todo("implement");
    char * __result = _sub_1008AAB0(this);
    return __result;
}

_extern __int32 _sub_1008A970(Parser *const, char const *);
__int32 Parser::matchString(char const *) // 0x1008A970
{
    mangled_assert("?matchString@Parser@@QAEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_1008A970(this, arg);
    return __result;
}

_extern __int32 _sub_1008A540(Parser *const, char const *);
__int32 Parser::isNextMatch(char const *) // 0x1008A540
{
    mangled_assert("?isNextMatch@Parser@@QAEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_1008A540(this, arg);
    return __result;
}

_extern __int32 _sub_1008A670(Parser *const);
__int32 Parser::matchAny() // 0x1008A670
{
    mangled_assert("?matchAny@Parser@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_1008A670(this);
    return __result;
}

_extern __int32 _sub_1008A7D0(Parser *const, __int32 *);
__int32 Parser::matchInt(__int32 *) // 0x1008A7D0
{
    mangled_assert("?matchInt@Parser@@QAEHPAH@Z");
    todo("implement");
    __int32 __result = _sub_1008A7D0(this, arg);
    return __result;
}

_extern __int32 _sub_1008A700(Parser *const, float *);
__int32 Parser::matchFloat(float *) // 0x1008A700
{
    mangled_assert("?matchFloat@Parser@@QAEHPAM@Z");
    todo("implement");
    __int32 __result = _sub_1008A700(this, arg);
    return __result;
}

_extern __int32 _sub_1008A690(Parser *const, __int32 *);
__int32 Parser::matchBoolean(__int32 *) // 0x1008A690
{
    mangled_assert("?matchBoolean@Parser@@QAEHPAH@Z");
    todo("implement");
    __int32 __result = _sub_1008A690(this, arg);
    return __result;
}

_extern __int32 _sub_1008A9B0(Parser *const, float *);
__int32 Parser::matchVector3(float *) // 0x1008A9B0
{
    mangled_assert("?matchVector3@Parser@@QAEHPAM@Z");
    todo("implement");
    __int32 __result = _sub_1008A9B0(this, arg);
    return __result;
}

_extern __int32 _sub_1008A8E0(Parser *const, float *);
__int32 Parser::matchQuat(float *) // 0x1008A8E0
{
    mangled_assert("?matchQuat@Parser@@QAEHPAM@Z");
    todo("implement");
    __int32 __result = _sub_1008A8E0(this, arg);
    return __result;
}

_extern __int32 _sub_1008A8A0(Parser *const);
__int32 Parser::matchLine() // 0x1008A8A0
{
    mangled_assert("?matchLine@Parser@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_1008A8A0(this);
    return __result;
}

_extern __int32 _sub_1008A570(Parser *const);
__int32 Parser::lenDataLeft() // 0x1008A570
{
    mangled_assert("?lenDataLeft@Parser@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_1008A570(this);
    return __result;
}

_extern char *_sub_1008AA30(Parser *const);
char *Parser::returnDataLeft() // 0x1008AA30
{
    mangled_assert("?returnDataLeft@Parser@@QAEPADXZ");
    todo("implement");
    char * __result = _sub_1008AA30(this);
    return __result;
}

_extern void _sub_1008AA40(Parser *const, char *, __int32);
void Parser::returnLine(char *, __int32) // 0x1008AA40
{
    mangled_assert("?returnLine@Parser@@QAEXPADH@Z");
    todo("implement");
    _sub_1008AA40(this, arg, arg);
}

_extern __int32 _sub_1008A810(Parser *const, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, __int32 *);
__int32 Parser::matchIntParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, __int32 *) // 0x1008A810
{
    mangled_assert("?matchIntParam@Parser@@QAEHAAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@PAH@Z");
    todo("implement");
    __int32 __result = _sub_1008A810(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008A740(Parser *const, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, float *);
__int32 Parser::matchFloatParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, float *) // 0x1008A740
{
    mangled_assert("?matchFloatParam@Parser@@QAEHAAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@PAM@Z");
    todo("implement");
    __int32 __result = _sub_1008A740(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
