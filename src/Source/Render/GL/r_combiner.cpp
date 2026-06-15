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

void rglCombinerParameteriv(unsigned __int32 pname, __int32 const *params) // 0x1000C32D
{
    mangled_assert("?rglCombinerParameteriv@@YGXIPBH@Z");
    todo("implement");
}

void rglCombinerParameterfv(unsigned __int32 pname, float const *params) // 0x1000C321
{
    mangled_assert("?rglCombinerParameterfv@@YGXIPBM@Z");
    todo("implement");
}

void rglCombinerParameterf(unsigned __int32 pname, float param) // 0x1000C306
{
    mangled_assert("?rglCombinerParameterf@@YGXIM@Z");
    todo("implement");
}

void rglCombinerParameteri(unsigned __int32 pname, unsigned __int32 param) // 0x1000C327
{
    mangled_assert("?rglCombinerParameteri@@YGXII@Z");
    todo("implement");
}

void rglCombinerInput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage) // 0x1000C2FA
{
    mangled_assert("?rglCombinerInput@@YGXIIIIII@Z");
    todo("implement");
}

void rglCombinerOutput(unsigned __int32 stage, unsigned __int32 portion, unsigned __int32 abOutput, unsigned __int32 cdOutput, unsigned __int32 sumOutput, unsigned __int32 scale, unsigned __int32 bias, bool abDotProduct, bool cdDotProduct, bool muxSum) // 0x1000C300
{
    mangled_assert("?rglCombinerOutput@@YGXIIIIIII_N00@Z");
    todo("implement");
}

void rglFinalCombinerInput(unsigned __int32 variable, unsigned __int32 input, unsigned __int32 mapping, unsigned __int32 componentUsage) // 0x1000C339
{
    mangled_assert("?rglFinalCombinerInput@@YGXIIII@Z");
    todo("implement");
}

void rglGetCombinerInputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, float *params) // 0x1000C33F
{
    mangled_assert("?rglGetCombinerInputParameterfv@@YGXW4CombinerStage@@IW4CombinerVariable@@W4CombinerInputParam@@PAM@Z");
    todo("implement");
}

void rglGetCombinerInputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerVariable variable, CombinerInputParam pname, __int32 *params) // 0x1000C345
{
    mangled_assert("?rglGetCombinerInputParameteriv@@YGXW4CombinerStage@@IW4CombinerVariable@@W4CombinerInputParam@@PAH@Z");
    todo("implement");
}

void rglGetCombinerOutputParameterfv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, float *params) // 0x1000C34B
{
    mangled_assert("?rglGetCombinerOutputParameterfv@@YGXW4CombinerStage@@IW4CombinerOutputParam@@PAM@Z");
    todo("implement");
}

void rglGetCombinerOutputParameteriv(CombinerStage stage, unsigned __int32 portion, CombinerOutputParam pname, __int32 *params) // 0x1000C351
{
    mangled_assert("?rglGetCombinerOutputParameteriv@@YGXW4CombinerStage@@IW4CombinerOutputParam@@PAH@Z");
    todo("implement");
}

void rglGetFinalCombinerInputParameterfv(CombinerVariable variable, CombinerInputParam pname, float *params) // 0x1000C35D
{
    mangled_assert("?rglGetFinalCombinerInputParameterfv@@YGXW4CombinerVariable@@W4CombinerInputParam@@PAM@Z");
    todo("implement");
}

void rglGetFinalCombinerInputParameteriv(CombinerVariable variable, CombinerInputParam pname, __int32 *params) // 0x1000C363
{
    mangled_assert("?rglGetFinalCombinerInputParameteriv@@YGXW4CombinerVariable@@W4CombinerInputParam@@PAH@Z");
    todo("implement");
}

void rglCombinerStageParameterfv(unsigned __int32 stage, unsigned __int32 pname, float const *params) // 0x1000C333
{
    mangled_assert("?rglCombinerStageParameterfv@@YGXIIPBM@Z");
    todo("implement");
}

void rglGetCombinerStageParameterfv(CombinerStage stage, CombinerConstColor pname, float *params) // 0x1000C357
{
    mangled_assert("?rglGetCombinerStageParameterfv@@YGXW4CombinerStage@@W4CombinerConstColor@@PAM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
