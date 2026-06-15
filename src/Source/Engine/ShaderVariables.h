#if 0
#ifndef __SHADERVARIABLES_H__
#define __SHADERVARIABLES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ShaderVariables
{
    SV_Block_EngineShader = 0,
    SV_Block_Bridge,
    SV_Block_Thruster,
    SV_Block_ThrusterLight,
    SV_Block_ThrusterAdditiveLight,
    SV_Block_SubSystem,
    SV_Block_Badge,
    SV_Block_BadgeAdditiveLight,
    SV_Var_DiffuseOn,
    SV_Var_DiffuseOff,
    SV_Var_GlowOn,
    SV_Var_GlowOff,
    SV_Var_Thrust,
    SV_Var_Badge,
    SV_Var_Bright,
    SV_Var_TeamBase,
    SV_Var_TeamStripe,
    SV_Var_C,
    SV_Var_Diffuse0,
    SV_Var_Glow0,
    SV_Var_Weight,
    SV_Var_NormCube,
    SV_Var_PassThrough3D,
    SV_Var_Shadow,
    SV_Var_FillLight,
    SV_Var_Ambient,
    SV_Var_KeyLight,
    SV_Var_CubeMap,
    SV_Var_Fade,
    SV_Var_DiffuseColour,
    SV_Var_EmissionColour,
    SV_Var_Mask,
    SV_Var_Diffuse,
    SV_Var_Glow,
    SV_Var_FogColour,
    SV_Var_AdditiveColour,
    SV_Block_Ship,
    SV_Block_ShadowLight,
    SV_Var_Dummy,
    SV_Var_ShadowColour,
    SV_Block_Resource,
    SV_Block_ResourceNM,
    SV_Var_DiffuseA,
    SV_Var_DiffuseB,
    SV_Var_Normals,
};

/* ---------- definitions */

struct Internal::VariableNameKey
{
    char const *name; // 0x0
    ShaderVariables index; // 0x4
    unsigned long key; // 0x8
};
static_assert(sizeof(Internal::VariableNameKey) == 12, "Invalid Internal::VariableNameKey size");

/* ---------- prototypes */

extern _inline unsigned long shaderVarGetKey(ShaderVariables v);

/* ---------- globals */

/* ---------- public code */

_inline unsigned long shaderVarGetKey(ShaderVariables v) // 0x4795B7
{
    mangled_assert("?shaderVarGetKey@@YGKW4ShaderVariables@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SHADERVARIABLES_H__
#endif
