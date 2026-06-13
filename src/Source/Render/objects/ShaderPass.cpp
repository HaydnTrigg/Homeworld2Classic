#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <winerror.h>
#include <xhash>
#include <xstring>
#include <ime_cmodes.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <platform\osdef.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <winuser.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <debugapi.h>
#include <gl\glexterns.inc>
#include <fileapi.h>
#include <xstddef>
#include <type_traits>
#include <Objects\ShaderPass.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <util\colour.h>
#include <gl\gls.h>
#include <winnls.h>
#include <Mathlib\vector4.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <xutility>
#include <Mathlib\mathlibdll.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <utility>
#include <Mathlib\fastmath.h>
#include <winapifamily.h>
#include <vector>
#include <iosfwd>
#include <sdkddkver.h>
#include <xmemory>
#include <excpt.h>
#include <poppack.h>
#include <imm.h>
#include <profileapi.h>
#include <math.h>
#include <synchapi.h>
#include <list>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winbase.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <Objects\Texture.h>
#include <minwinbase.h>
#include <Objects\TextureRegistry.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <util\types.h>
#include <processenv.h>
#include <Mathlib\matrix4.h>
#include <guiddef.h>
#include <jobapi.h>
#include <Mathlib\vector3.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <Mathlib\matrix3.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <winreg.h>
#include <Objects\Core.h>
#include <Objects\Constructor.h>
#include <gl\types.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <Mathlib\mathutil.h>
#include <Objects\Parsable.h>
#include <Objects\ShaderParam.h>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <string>
#include <consoleapi.h>
#include <wingdi.h>
#include <Objects\Parser.h>
#include <pshpack4.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<ShaderParam *,std::allocator<ShaderParam *> > ShaderParamList;
typedef void (*ParsableFunc_t)(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
typedef parsablekey_s parsablekey_t;
typedef std::vector<CombinerParamBlock,std::allocator<CombinerParamBlock> > CombinerParamList;
typedef std::vector<CombinerParamArrayBlock,std::allocator<CombinerParamArrayBlock> > CombinerParamArrayList;
typedef std::vector<CombinerInputBlock,std::allocator<CombinerInputBlock> > CombinerInputList;
typedef std::vector<CombinerOutputBlock,std::allocator<CombinerOutputBlock> > CombinerOutputList;
typedef std::vector<FinalCombinerInputBlock,std::allocator<FinalCombinerInputBlock> > FinalCombinerInputList;

/* ---------- prototypes */

extern void ShaderPass_map(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_map1(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_alphaFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_rgbGen(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_blendFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_depthFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_depthWrite(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_lit(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_cull(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_fill(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_ambient(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_diffuse(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_specular(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_shininess(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_vertexCol(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_lineWidth(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_tcMod(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_animMap(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_clampmap(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_tcGen(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_enableCombiner(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_combinerParam(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern bool matchCombinerStage(Parser &parser, CombinerStage &stage);
extern bool matchCombinerPortion(Parser &parser, unsigned __int32 &portion);
extern bool matchCombinerVariable(Parser &parser, CombinerVariable &var);
extern bool matchCombinerInput(Parser &parser, CombinerInput &input);
extern bool matchCombinerMapping(Parser &parser, CombinerMapping &map);
extern bool matchCombinerCompUsage(Parser &parser, unsigned __int32 &compUsage);
extern bool matchCombinerScale(Parser &parser, CombinerScale &scale);
extern bool matchCombinerBias(Parser &parser, CombinerBias &bias);
extern bool matchCombinerOutput(Parser &parser, CombinerOutput &output);
extern void ShaderPass_combinerInput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_combinerOutput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);
extern void ShaderPass_finalCombinerInput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params);

/* ---------- globals */

extern unsigned __int32 const SHADERPASS_LIGHTMAP; // 0x100E5440
extern unsigned __int32 const SHADERPASS_BLEND; // 0x100E5444
extern unsigned __int32 const SHADERPASS_ALPHAFUNC; // 0x100E5448
extern unsigned __int32 const SHADERPASS_TCMOD; // 0x100E544C
extern unsigned __int32 const SHADERPASS_ANIMMAP; // 0x100E5450
extern unsigned __int32 const SHADERPASS_TCGEN_ENV; // 0x100E5454
extern unsigned __int32 const SHADERPASS_DEPTHFUNC; // 0x100E5458
extern unsigned __int32 const SHADERPASS_DEPTHWRITE; // 0x100E545C
extern unsigned __int32 const SHADERPASS_CLAMP; // 0x100E5460
extern unsigned __int32 const SHADERPASS_LIT; // 0x100E5464
extern unsigned __int32 const SHADERPASS_CULL; // 0x100E5468
extern unsigned __int32 const SHADERPASS_FILL; // 0x100E546C
extern unsigned __int32 const SHADERPASS_AMBIENT; // 0x100E5470
extern unsigned __int32 const SHADERPASS_DIFFUSE; // 0x100E5474
extern unsigned __int32 const SHADERPASS_SPECULAR; // 0x100E5478
extern unsigned __int32 const SHADERPASS_SHININESS; // 0x100E547C
extern unsigned __int32 const SHADERPASS_VERTEXCOL; // 0x100E5480
extern unsigned __int32 const SHADERPASS_LINEWIDTH; // 0x100E5484
extern unsigned __int32 const SHADERPASS_COMBINER; // 0x100E5488
extern unsigned __int32 const SHADERPASS_MAP1; // 0x100E548C
extern unsigned __int32 const SHADERPASS_TCMOD_ROTATE; // 0x100E5490
extern unsigned __int32 const SHADERPASS_TCMOD_SCALE; // 0x100E5494
extern unsigned __int32 const SHADERPASS_TCMOD_SCROLL; // 0x100E5498
extern unsigned __int32 const SHADERPASS_TCMOD_STRETCH; // 0x100E549C
extern unsigned __int32 const SHADERPASS_TCMOD_TURB; // 0x100E54A0
extern unsigned __int32 const SHADERPASS_TCMOD_TRANSFORM; // 0x100E54A4
extern unsigned __int32 const SHADERPASS_FUNC_SIN; // 0x100E54A8
extern unsigned __int32 const SHADERPASS_FUNC_TRIANGLE; // 0x100E54AC
extern unsigned __int32 const SHADERPASS_FUNC_SQUARE; // 0x100E54B0
extern unsigned __int32 const SHADERPASS_FUNC_SAWTOOTH; // 0x100E54B4
extern unsigned __int32 const SHADERPASS_FUNC_INVERSESAWTOOTH; // 0x100E54B8

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132C28
    extern parsablekey_s shaderpasskeys[27]; // 0x1010D958
}

/* ---------- public code */

_extern _sub_10095000(CombinerState *const);
_inline CombinerState::CombinerState() // 0x10095000
{
    mangled_assert("??0CombinerState@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10095000(this);
}

_extern _sub_10095070(ShaderPass *const);
ShaderPass::ShaderPass() // 0x10095070
{
    mangled_assert("??0ShaderPass@@QAE@XZ");
    todo("implement");
    _sub_10095070(this);
}

_extern void _sub_10095250(ShaderPass *const);
ShaderPass::~ShaderPass() // 0x10095250
{
    mangled_assert("??1ShaderPass@@UAE@XZ");
    todo("implement");
    _sub_10095250(this);
}

_extern ShaderPass *_sub_10096F30();
ShaderPass *ShaderPass::create() // 0x10096F30
{
    mangled_assert("?create@ShaderPass@@SGPAV1@XZ");
    todo("implement");
    ShaderPass * __result = _sub_10096F30();
    return __result;
}

_extern void _sub_10097A00(ShaderPass *const, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass::parsePass(Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &) // 0x10097A00
{
    mangled_assert("?parsePass@ShaderPass@@QAEXAAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10097A00(this, arg, arg);
}

_extern float _sub_10097200(ShaderPass *const, float);
float ShaderPass::evaluateFunc(float) // 0x10097200
{
    mangled_assert("?evaluateFunc@ShaderPass@@QAEMM@Z");
    todo("implement");
    float __result = _sub_10097200(this, arg);
    return __result;
}

_extern void _sub_100961F0(ShaderPass *const, float);
void ShaderPass::beginState(float) // 0x100961F0
{
    mangled_assert("?beginState@ShaderPass@@QAEXM@Z");
    todo("implement");
    _sub_100961F0(this, arg);
}

_extern void _sub_10096F60(ShaderPass *const);
void ShaderPass::endState() // 0x10096F60
{
    mangled_assert("?endState@ShaderPass@@QAEXXZ");
    todo("implement");
    _sub_10096F60(this);
}

_extern void _sub_10093410(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_map(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093410
{
    mangled_assert("?ShaderPass_map@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093410(parsable, parser, params);
}

_extern void _sub_100934B0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_map1(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x100934B0
{
    mangled_assert("?ShaderPass_map1@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_100934B0(parsable, parser, params);
}

_extern void _sub_10093540(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_alphaFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093540
{
    mangled_assert("?ShaderPass_alphaFunc@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093540(parsable, parser, params);
}

_extern void _sub_10093600(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_rgbGen(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093600
{
    mangled_assert("?ShaderPass_rgbGen@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093600(parsable, parser, params);
}

_extern void _sub_10093690(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_blendFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093690
{
    mangled_assert("?ShaderPass_blendFunc@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093690(parsable, parser, params);
}

_extern void _sub_10093910(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_depthFunc(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093910
{
    mangled_assert("?ShaderPass_depthFunc@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093910(parsable, parser, params);
}

_extern void _sub_10093980(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_depthWrite(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093980
{
    mangled_assert("?ShaderPass_depthWrite@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093980(parsable, parser, params);
}

_extern void _sub_10093E50(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_lit(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093E50
{
    mangled_assert("?ShaderPass_lit@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093E50(parsable, parser, params);
}

_extern void _sub_10093EA0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_cull(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093EA0
{
    mangled_assert("?ShaderPass_cull@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093EA0(parsable, parser, params);
}

_extern void _sub_10093F20(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_fill(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093F20
{
    mangled_assert("?ShaderPass_fill@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093F20(parsable, parser, params);
}

_extern void _sub_10093F80(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_ambient(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093F80
{
    mangled_assert("?ShaderPass_ambient@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093F80(parsable, parser, params);
}

_extern void _sub_10093FE0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_diffuse(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093FE0
{
    mangled_assert("?ShaderPass_diffuse@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093FE0(parsable, parser, params);
}

_extern void _sub_10094040(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_specular(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094040
{
    mangled_assert("?ShaderPass_specular@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094040(parsable, parser, params);
}

_extern void _sub_100940A0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_shininess(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x100940A0
{
    mangled_assert("?ShaderPass_shininess@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_100940A0(parsable, parser, params);
}

_extern void _sub_100940D0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_vertexCol(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x100940D0
{
    mangled_assert("?ShaderPass_vertexCol@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_100940D0(parsable, parser, params);
}

_extern void _sub_10094120(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_lineWidth(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094120
{
    mangled_assert("?ShaderPass_lineWidth@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094120(parsable, parser, params);
}

_extern void _sub_100939B0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_tcMod(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x100939B0
{
    mangled_assert("?ShaderPass_tcMod@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_100939B0(parsable, parser, params);
}

_extern void _sub_10093C50(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_animMap(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093C50
{
    mangled_assert("?ShaderPass_animMap@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093C50(parsable, parser, params);
}

_extern void _sub_10093DE0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_clampmap(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093DE0
{
    mangled_assert("?ShaderPass_clampmap@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093DE0(parsable, parser, params);
}

_extern void _sub_10093E10(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_tcGen(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10093E10
{
    mangled_assert("?ShaderPass_tcGen@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10093E10(parsable, parser, params);
}

_extern void _sub_10094150(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_enableCombiner(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094150
{
    mangled_assert("?ShaderPass_enableCombiner@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094150(parsable, parser, params);
}

_extern void _sub_10094190(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_combinerParam(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094190
{
    mangled_assert("?ShaderPass_combinerParam@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094190(parsable, parser, params);
}

_extern bool _sub_100978C0(Parser &, CombinerStage &);
bool matchCombinerStage(Parser &parser, CombinerStage &stage) // 0x100978C0
{
    mangled_assert("?matchCombinerStage@@YG_NAAVParser@@AAW4CombinerStage@@@Z");
    todo("implement");
    bool __result = _sub_100978C0(parser, stage);
    return __result;
}

_extern bool _sub_100977E0(Parser &, unsigned __int32 &);
bool matchCombinerPortion(Parser &parser, unsigned __int32 &portion) // 0x100977E0
{
    mangled_assert("?matchCombinerPortion@@YG_NAAVParser@@AAI@Z");
    todo("implement");
    bool __result = _sub_100977E0(parser, portion);
    return __result;
}

_extern bool _sub_10097910(Parser &, CombinerVariable &);
bool matchCombinerVariable(Parser &parser, CombinerVariable &var) // 0x10097910
{
    mangled_assert("?matchCombinerVariable@@YG_NAAVParser@@AAW4CombinerVariable@@@Z");
    todo("implement");
    bool __result = _sub_10097910(parser, var);
    return __result;
}

_extern bool _sub_10097450(Parser &, CombinerInput &);
bool matchCombinerInput(Parser &parser, CombinerInput &input) // 0x10097450
{
    mangled_assert("?matchCombinerInput@@YG_NAAVParser@@AAW4CombinerInput@@@Z");
    todo("implement");
    bool __result = _sub_10097450(parser, input);
    return __result;
}

_extern bool _sub_100975E0(Parser &, CombinerMapping &);
bool matchCombinerMapping(Parser &parser, CombinerMapping &map) // 0x100975E0
{
    mangled_assert("?matchCombinerMapping@@YG_NAAVParser@@AAW4CombinerMapping@@@Z");
    todo("implement");
    bool __result = _sub_100975E0(parser, map);
    return __result;
}

_extern bool _sub_100973E0(Parser &, unsigned __int32 &);
bool matchCombinerCompUsage(Parser &parser, unsigned __int32 &compUsage) // 0x100973E0
{
    mangled_assert("?matchCombinerCompUsage@@YG_NAAVParser@@AAI@Z");
    todo("implement");
    bool __result = _sub_100973E0(parser, compUsage);
    return __result;
}

_extern bool _sub_10097830(Parser &, CombinerScale &);
bool matchCombinerScale(Parser &parser, CombinerScale &scale) // 0x10097830
{
    mangled_assert("?matchCombinerScale@@YG_NAAVParser@@AAW4CombinerScale@@@Z");
    todo("implement");
    bool __result = _sub_10097830(parser, scale);
    return __result;
}

_extern bool _sub_10097390(Parser &, CombinerBias &);
bool matchCombinerBias(Parser &parser, CombinerBias &bias) // 0x10097390
{
    mangled_assert("?matchCombinerBias@@YG_NAAVParser@@AAW4CombinerBias@@@Z");
    todo("implement");
    bool __result = _sub_10097390(parser, bias);
    return __result;
}

_extern bool _sub_100976F0(Parser &, CombinerOutput &);
bool matchCombinerOutput(Parser &parser, CombinerOutput &output) // 0x100976F0
{
    mangled_assert("?matchCombinerOutput@@YG_NAAVParser@@AAW4CombinerOutput@@@Z");
    todo("implement");
    bool __result = _sub_100976F0(parser, output);
    return __result;
}

_extern void _sub_10094350(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_combinerInput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094350
{
    mangled_assert("?ShaderPass_combinerInput@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094350(parsable, parser, params);
}

_extern void _sub_10094450(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_combinerOutput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x10094450
{
    mangled_assert("?ShaderPass_combinerOutput@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_10094450(parsable, parser, params);
}

_extern void _sub_100945D0(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
void ShaderPass_finalCombinerInput(Parsable *parsable, Parser &parser, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &params) // 0x100945D0
{
    mangled_assert("?ShaderPass_finalCombinerInput@@YGXPAVParsable@@AAVParser@@AAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@@Z");
    todo("implement");
    _sub_100945D0(parsable, parser, params);
}

/* ---------- private code */
#endif
