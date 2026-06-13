#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Render\GL\r_macros.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void rglCombinerParameteriv(unsigned __int32 pname, __int32 const *params);
extern void rglCombinerParameterfv(unsigned __int32 pname, float const *params);
extern void rglCombinerParameterf(unsigned __int32 pname, float param);
extern void rglCombinerParameteri(unsigned __int32 pname, unsigned __int32 param);
extern void rglCombinerInput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage);
extern void rglCombinerOutput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 abOutput, unsigned __int32 cdOutput, unsigned __int32 sumOutput, unsigned __int32 scale, unsigned __int32 bias, bool abDotProduct, bool cdDotProduct, bool muxSum);
extern void rglFinalCombinerInput(unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage);
extern void rglGetCombinerInputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, float *params);
extern void rglGetCombinerInputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, __int32 *params);
extern void rglGetCombinerOutputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, float *params);
extern void rglGetCombinerOutputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, __int32 *params);
extern void rglGetFinalCombinerInputParameterfv(CombinerVariable variable, CombinerInputParam pname, float *params);
extern void rglGetFinalCombinerInputParameteriv(CombinerVariable variable, CombinerInputParam pname, __int32 *params);
extern void rglCombinerStageParameterfv(unsigned __int32 stage, unsigned __int32 pname, float const *params);
extern void rglGetCombinerStageParameterfv(CombinerStage stage, CombinerConstColor pname, float *params);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_1000C32D(unsigned __int32, __int32 const *);
void rglCombinerParameteriv(unsigned __int32 pname, __int32 const *params) // 0x1000C32D
{
    mangled_assert("?rglCombinerParameteriv@@YGXIPBH@Z");
    todo("implement");
    _sub_1000C32D(pname, params);
}

_extern void _sub_1000C321(unsigned __int32, float const *);
void rglCombinerParameterfv(unsigned __int32 pname, float const *params) // 0x1000C321
{
    mangled_assert("?rglCombinerParameterfv@@YGXIPBM@Z");
    todo("implement");
    _sub_1000C321(pname, params);
}

_extern void _sub_1000C306(unsigned __int32, float);
void rglCombinerParameterf(unsigned __int32 pname, float param) // 0x1000C306
{
    mangled_assert("?rglCombinerParameterf@@YGXIM@Z");
    todo("implement");
    _sub_1000C306(pname, param);
}

_extern void _sub_1000C327(unsigned __int32, unsigned __int32);
void rglCombinerParameteri(unsigned __int32 pname, unsigned __int32 param) // 0x1000C327
{
    mangled_assert("?rglCombinerParameteri@@YGXII@Z");
    todo("implement");
    _sub_1000C327(pname, param);
}

_extern void _sub_1000C2FA(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
void rglCombinerInput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage) // 0x1000C2FA
{
    mangled_assert("?rglCombinerInput@@YGXIIIIII@Z");
    todo("implement");
    _sub_1000C2FA(stage, portion, variable, input, mapping, componentUsage);
}

_extern void _sub_1000C300(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool);
void rglCombinerOutput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 abOutput, unsigned __int32 cdOutput, unsigned __int32 sumOutput, unsigned __int32 scale, unsigned __int32 bias, bool abDotProduct, bool cdDotProduct, bool muxSum) // 0x1000C300
{
    mangled_assert("?rglCombinerOutput@@YGXIIIIIII_N00@Z");
    todo("implement");
    _sub_1000C300(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

_extern void _sub_1000C339(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
void rglFinalCombinerInput(unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage) // 0x1000C339
{
    mangled_assert("?rglFinalCombinerInput@@YGXIIII@Z");
    todo("implement");
    _sub_1000C339(variable, input, mapping, componentUsage);
}

_extern void _sub_1000C33F(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, float *);
void rglGetCombinerInputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, float *params) // 0x1000C33F
{
    mangled_assert("?rglGetCombinerInputParameterfv@@YGXW4CombinerStage@@IW4CombinerVariable@@W4CombinerInputParam@@PAM@Z");
    todo("implement");
    _sub_1000C33F(stage, portion, variable, pname, params);
}

_extern void _sub_1000C345(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, __int32 *);
void rglGetCombinerInputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, __int32 *params) // 0x1000C345
{
    mangled_assert("?rglGetCombinerInputParameteriv@@YGXW4CombinerStage@@IW4CombinerVariable@@W4CombinerInputParam@@PAH@Z");
    todo("implement");
    _sub_1000C345(stage, portion, variable, pname, params);
}

_extern void _sub_1000C34B(CombinerStage, unsigned __int32, CombinerOutputParam, float *);
void rglGetCombinerOutputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, float *params) // 0x1000C34B
{
    mangled_assert("?rglGetCombinerOutputParameterfv@@YGXW4CombinerStage@@IW4CombinerOutputParam@@PAM@Z");
    todo("implement");
    _sub_1000C34B(stage, portion, pname, params);
}

_extern void _sub_1000C351(CombinerStage, unsigned __int32, CombinerOutputParam, __int32 *);
void rglGetCombinerOutputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, __int32 *params) // 0x1000C351
{
    mangled_assert("?rglGetCombinerOutputParameteriv@@YGXW4CombinerStage@@IW4CombinerOutputParam@@PAH@Z");
    todo("implement");
    _sub_1000C351(stage, portion, pname, params);
}

_extern void _sub_1000C35D(CombinerVariable, CombinerInputParam, float *);
void rglGetFinalCombinerInputParameterfv(CombinerVariable variable, CombinerInputParam pname, float *params) // 0x1000C35D
{
    mangled_assert("?rglGetFinalCombinerInputParameterfv@@YGXW4CombinerVariable@@W4CombinerInputParam@@PAM@Z");
    todo("implement");
    _sub_1000C35D(variable, pname, params);
}

_extern void _sub_1000C363(CombinerVariable, CombinerInputParam, __int32 *);
void rglGetFinalCombinerInputParameteriv(CombinerVariable variable, CombinerInputParam pname, __int32 *params) // 0x1000C363
{
    mangled_assert("?rglGetFinalCombinerInputParameteriv@@YGXW4CombinerVariable@@W4CombinerInputParam@@PAH@Z");
    todo("implement");
    _sub_1000C363(variable, pname, params);
}

_extern void _sub_1000C333(unsigned __int32, unsigned __int32, float const *);
void rglCombinerStageParameterfv(unsigned __int32 stage, unsigned __int32 pname, float const *params) // 0x1000C333
{
    mangled_assert("?rglCombinerStageParameterfv@@YGXIIPBM@Z");
    todo("implement");
    _sub_1000C333(stage, pname, params);
}

_extern void _sub_1000C357(CombinerStage, CombinerConstColor, float *);
void rglGetCombinerStageParameterfv(CombinerStage stage, CombinerConstColor pname, float *params) // 0x1000C357
{
    mangled_assert("?rglGetCombinerStageParameterfv@@YGXW4CombinerStage@@W4CombinerConstColor@@PAM@Z");
    todo("implement");
    _sub_1000C357(stage, pname, params);
}

/* ---------- private code */
#endif
