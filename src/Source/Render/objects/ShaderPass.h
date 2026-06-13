#if 0
#ifndef __SHADERPASS_H__
#define __SHADERPASS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct CombinerParamBlock
{
    unsigned __int32 m_param; // 0x0
    union
    {
        float m_floatVal; // 0x4
        __int32 m_intVal; // 0x4
    };
};
static_assert(sizeof(CombinerParamBlock) == 8, "Invalid CombinerParamBlock size");

struct CombinerParamArrayBlock
{
    unsigned __int32 m_param; // 0x0
    union
    {
        float m_floatVal[4]; // 0x4
        __int32 m_inVal[4]; // 0x4
    };
};
static_assert(sizeof(CombinerParamArrayBlock) == 20, "Invalid CombinerParamArrayBlock size");

struct CombinerInputBlock
{
    CombinerStage m_stage; // 0x0
    unsigned __int32 m_portion; // 0x4
    CombinerVariable m_variable; // 0x8
    CombinerInput m_input; // 0xC
    CombinerMapping m_mapping; // 0x10
    unsigned __int32 m_componentUsage; // 0x14
};
static_assert(sizeof(CombinerInputBlock) == 24, "Invalid CombinerInputBlock size");

struct CombinerOutputBlock
{
    CombinerStage m_stage; // 0x0
    unsigned __int32 m_portion; // 0x4
    CombinerOutput m_abOutput; // 0x8
    CombinerOutput m_cdOutput; // 0xC
    CombinerOutput m_sumOutput; // 0x10
    CombinerScale m_scale; // 0x14
    CombinerBias m_bias; // 0x18
    __int32 m_abDotProduct; // 0x1C
    __int32 m_cdDotProduct; // 0x20
    __int32 m_muxSum; // 0x24
};
static_assert(sizeof(CombinerOutputBlock) == 40, "Invalid CombinerOutputBlock size");

struct FinalCombinerInputBlock
{
    CombinerVariable m_variable; // 0x0
    CombinerInput m_input; // 0x4
    CombinerMapping m_mapping; // 0x8
    unsigned __int32 m_componentUsage; // 0xC
};
static_assert(sizeof(FinalCombinerInputBlock) == 16, "Invalid FinalCombinerInputBlock size");

struct CombinerState
{
    std::vector<CombinerParamBlock,std::allocator<CombinerParamBlock> > m_params; // 0x0
    std::vector<CombinerParamArrayBlock,std::allocator<CombinerParamArrayBlock> > m_paramArrays; // 0xC
    std::vector<CombinerInputBlock,std::allocator<CombinerInputBlock> > m_inputs; // 0x18
    std::vector<CombinerOutputBlock,std::allocator<CombinerOutputBlock> > m_outputs; // 0x24
    std::vector<FinalCombinerInputBlock,std::allocator<FinalCombinerInputBlock> > m_finalInputs; // 0x30
    _inline CombinerState(CombinerState const &); /* compiler_generated() */
    _inline CombinerState(); /* compiler_generated() */
    _inline ~CombinerState(); /* compiler_generated() */
    _inline CombinerState &operator=(CombinerState const &); /* compiler_generated() */
};
static_assert(sizeof(CombinerState) == 60, "Invalid CombinerState size");

class ShaderPass :
    public Core,
    public Parsable
{
public:
    _inline ShaderPass(ShaderPass const &); /* compiler_generated() */
    ShaderPass();
    virtual ~ShaderPass() override;
    static ShaderPass *create();
    void beginState(float);
    void endState();
    void parsePass(Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
    float evaluateFunc(float);
    Texture *pTexture; // 0x4
    char map[64]; // 0x8
    Texture *pTexture1; // 0x48
    char map1[64]; // 0x4C
    unsigned __int32 flags; // 0x8C
    BlendFunc srcBlend; // 0x90
    BlendFunc destBlend; // 0x94
    __int32 tcMod; // 0x98
    float degreesPerSecond; // 0x9C
    float scale[2]; // 0xA0
    float speed[2]; // 0xA8
    __int32 func; // 0xB0
    float base; // 0xB4
    float amplitude; // 0xB8
    float phase; // 0xBC
    float frequency; // 0xC0
    float m[2][2]; // 0xC4
    float t[2]; // 0xD4
    __int32 startFrame; // 0xDC
    __int32 loopCount; // 0xE0
    __int32 numAnimFrames; // 0xE4
    float animFPS; // 0xE8
    std::vector<Texture *,std::allocator<Texture *> > animTextures; // 0xEC
    float alphaRef; // 0xF8
    ComparisonFunc alphaFunc; // 0xFC
    ComparisonFunc depthFunc; // 0x100
    PolyfillMode fillMode; // 0x104
    PolyfillMode prevFillMode; // 0x108
    __int32 lineWidth; // 0x10C
    CullMode cullMode; // 0x110
    vector4 ambient; // 0x114
    vector4 diffuse; // 0x124
    vector4 specular; // 0x134
    vector4 shininess; // 0x144
    vector4 vertexCol; // 0x154
    bool lit; // 0x164
    CombinerState m_combiner; // 0x168
    _inline ShaderPass &operator=(ShaderPass const &); /* compiler_generated() */
};
static_assert(sizeof(ShaderPass) == 420, "Invalid ShaderPass size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHADERPASS_H__
#endif
