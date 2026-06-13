#if 0
#ifndef __FXSHADER_H__
#define __FXSHADER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXShader
{
public:
    typedef vector2 QuadUV[4];
    FXShader();
    ~FXShader();
    void setTexture(Texture *);
    void setTextureAnim(TextureAnim *);
    void setBlend(BlendFunc, BlendFunc);
    void setWrapMode(TextureWrap);
    void setFilterMode(TextureFilter);
    unsigned __int32 getNumTextures() const;
    Texture *getTexture(unsigned __int32);
    Texture *getTexture(float);
    bool getUV(unsigned __int32, vector2 &[4]);
    bool getUV(float, vector2 &[4]);
    void apply(Texture *);
    void apply(float);
    static void resetStats();
    static unsigned __int32 getNumApplies();
private:
    void setCaps(Texture *);
    Texture *m_texture; // 0x0
    TextureAnim *m_textureAnim; // 0x4
    BlendFunc m_srcBlend; // 0x8
    BlendFunc m_destBlend; // 0xC
    TextureWrap m_wrapMode; // 0x10
    TextureFilter m_filterMode; // 0x14
    static unsigned __int32 s_numApplies;
};
static_assert(sizeof(FXShader) == 24, "Invalid FXShader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXSHADER_H__
#endif
