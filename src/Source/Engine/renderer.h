#if 0
#ifndef __RENDERER_H__
#define __RENDERER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ViewportState
{
    float nearClip; // 0x0
    float farClip; // 0x4
    float verticalFOV; // 0x8
    float aspectRatio; // 0xC
    matrix4 projectionMatrix2D; // 0x10
    matrix4 projectionMatrix3D; // 0x50
    _inline ViewportState(); /* compiler_generated() */
};
static_assert(sizeof(ViewportState) == 144, "Invalid ViewportState size");

class PartialRenderState
{
private:
    BlendFunc srcBlend; // 0x0
    BlendFunc destBlend; // 0x4
    MaterialSide side; // 0x8
    __int32 textureUnit; // 0xC
    vector4 ambient0; // 0x10
    vector4 diffuse0; // 0x20
    vector4 specular0; // 0x30
    vector4 shininess0; // 0x40
    vector4 emission0; // 0x50
    vector4 ambient1; // 0x60
    vector4 diffuse1; // 0x70
    vector4 specular1; // 0x80
    vector4 shininess1; // 0x90
    vector4 emission1; // 0xA0
    bool bDepth; // 0xB0
    bool bLighting; // 0xB1
    TextureMode m_textureMode[4]; // 0xB4
    TextureTarget m_textureTarget[4]; // 0xC4
    unsigned __int32 m_glTextureTarget[4]; // 0xD4
    unsigned __int32 m_glSpecificTextureTarget[4]; // 0xE4
    bool bCull; // 0xF4
    bool bGouraud; // 0xF5
    bool bBlend; // 0xF6
    bool bRegisterCombiner; // 0xF7
    bool bRegisterCombiner2; // 0xF8
    bool bSeparateSpecular; // 0xF9
    bool bColourMaterial; // 0xFA
    bool bCombine; // 0xFB
    bool bTextureCap[4]; // 0xFC
    bool bTexture3DCap[4]; // 0x100
    bool bTextureCubeCap[4]; // 0x104
    bool bTexGen[4]; // 0x108
    bool bOffsetFill; // 0x10C
public:
    _inline PartialRenderState();
    _inline ~PartialRenderState();
    _inline void getCurrentState();
    _inline void restoreState();
};
static_assert(sizeof(PartialRenderState) == 272, "Invalid PartialRenderState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_492CB1(PartialRenderState *const);
_inline PartialRenderState::PartialRenderState() // 0x492CB1
{
    mangled_assert("??0PartialRenderState@@QAE@XZ");
    todo("implement");
    _sub_492CB1(this);
}

_extern void _sub_492D79(PartialRenderState *const);
_inline PartialRenderState::~PartialRenderState() // 0x492D79
{
    mangled_assert("??1PartialRenderState@@QAE@XZ");
    todo("implement");
    _sub_492D79(this);
}

_extern void _sub_4952F9(PartialRenderState *const);
_inline void PartialRenderState::getCurrentState() // 0x4952F9
{
    mangled_assert("?getCurrentState@PartialRenderState@@QAEXXZ");
    todo("implement");
    _sub_4952F9(this);
}

_extern void _sub_495F62(PartialRenderState *const);
_inline void PartialRenderState::restoreState() // 0x495F62
{
    mangled_assert("?restoreState@PartialRenderState@@QAEXXZ");
    todo("implement");
    _sub_495F62(this);
}

/* ---------- private code */

#endif // __RENDERER_H__
#endif
