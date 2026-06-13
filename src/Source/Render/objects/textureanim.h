#if 0
#ifndef __TEXTUREANIM_H__
#define __TEXTUREANIM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TextureAnim
{
public:
    enum UVIndex
    {
        UV_LeftTop = 0,
        UV_RightTop,
        UV_RightBottom,
        UV_LeftBottom,
    };
    typedef vector2 QuadUV[4];
    static TextureAnim *loadAnimation(char const *);
    TextureAnim(TextureAnim const &); /* compiler_generated() */
    TextureAnim();
    ~TextureAnim();
    void setFPS(float);
    void setStartFrame(unsigned __int32);
    void setLayout(unsigned __int32, unsigned __int32);
    void addTexture(Texture *, unsigned __int32, unsigned __int32);
    unsigned __int32 getNumTextures();
    unsigned __int32 calculateFrame(float);
    Texture *getTexture(float);
    Texture *getTexture(unsigned __int32);
    bool getUV(float, vector2 &[4]);
    bool getUV(unsigned __int32, vector2 &[4]);
    void bind(float);
    TextureAnim &operator=(TextureAnim const &);
private:
    static bool loadFlipTextures(LuaConfig &, char const *, TextureAnim *);
    static bool loadLayoutTextures(LuaConfig &, char const *, TextureAnim *);
    struct Frame
    {
        Texture *m_texture; // 0x0
        unsigned __int32 m_row; // 0x4
        unsigned __int32 m_col; // 0x8
    };
    static_assert(sizeof(Frame) == 12, "Invalid Frame size");
    typedef std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > TextureCont;
    float m_fps; // 0x0
    unsigned __int32 m_startFrame; // 0x4
    unsigned __int32 m_loopCount; // 0x8
    unsigned __int32 m_numRows; // 0xC
    unsigned __int32 m_numCols; // 0x10
    std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > m_textures; // 0x14
};
static_assert(sizeof(TextureAnim) == 32, "Invalid TextureAnim size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TEXTUREANIM_H__
/* combined */
#ifndef __TEXTUREANIM_H__
#define __TEXTUREANIM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TextureAnim
{
public:
    enum UVIndex
    {
        UV_LeftTop = 0,
        UV_RightTop,
        UV_RightBottom,
        UV_LeftBottom,
    };
    typedef vector2 QuadUV[4];
    static TextureAnim *loadAnimation(char const *filename);
    _inline TextureAnim(TextureAnim const &); /* compiler_generated() */
    TextureAnim();
    ~TextureAnim();
    void setFPS(float);
    void setStartFrame(unsigned __int32);
    void setLayout(unsigned __int32, unsigned __int32);
    void addTexture(Texture *, unsigned __int32, unsigned __int32);
    unsigned __int32 getNumTextures();
    unsigned __int32 calculateFrame(float);
    Texture *getTexture(float);
    Texture *getTexture(unsigned __int32);
    bool getUV(float, vector2 &[4]);
    bool getUV(unsigned __int32, vector2 &[4]);
    void bind(float);
    TextureAnim &operator=(TextureAnim const &);
private:
    static bool loadFlipTextures(LuaConfig &lc, char const *filename, TextureAnim *pTextureAnim);
    static bool loadLayoutTextures(LuaConfig &lc, char const *filename, TextureAnim *pTextureAnim);
    struct Frame
    {
        Texture *m_texture; // 0x0
        unsigned __int32 m_row; // 0x4
        unsigned __int32 m_col; // 0x8
    };
    static_assert(sizeof(Frame) == 12, "Invalid Frame size");
    typedef std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > TextureCont;
    float m_fps; // 0x0
    unsigned __int32 m_startFrame; // 0x4
    unsigned __int32 m_loopCount; // 0x8
    unsigned __int32 m_numRows; // 0xC
    unsigned __int32 m_numCols; // 0x10
    std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > m_textures; // 0x14
};
static_assert(sizeof(TextureAnim) == 32, "Invalid TextureAnim size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TEXTUREANIM_H__
#endif
