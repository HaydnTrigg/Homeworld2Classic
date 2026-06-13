#if 0
#ifndef __TEXTUREPROXY_H__
#define __TEXTUREPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TextureProxy
{
public:
    static void SetGameRes(__int32);
    TextureProxy(TextureAnim *);
    TextureProxy(Texture *);
    TextureProxy(TextureProxy const &);
    TextureProxy();
    ~TextureProxy();
    bool Load(char const *, char const *);
    void SetTexture(Texture *);
    void SetTextureAnim(TextureAnim *);
    void TexAnimReset();
    unsigned __int32 TexAnimGetNumFrames() const;
    unsigned __int32 TexAnimGetCurrFrame() const;
    bool NeedsUpdate() const;
    void Update(float);
    void SetTime(float);
    Texture *GetTexture() const;
    float GetUVScale() const;
    TextureProxy &operator=(TextureProxy const &);
private:
    void clear();
    Texture *LoadMultiResTexture(char const *, float &, char const *);
    Texture *m_pTex; // 0x0
    TextureAnim *m_pTexAnim; // 0x4
    float m_localTime; // 0x8
    float m_uvScale; // 0xC
};
static_assert(sizeof(TextureProxy) == 16, "Invalid TextureProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TEXTUREPROXY_H__
/* combined */
#ifndef __TEXTUREPROXY_H__
#define __TEXTUREPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TextureProxy
{
public:
    static void SetGameRes(__int32 gameRes);
    TextureProxy(TextureAnim *);
    TextureProxy(Texture *);
    _inline TextureProxy(TextureProxy const &);
    TextureProxy();
    ~TextureProxy();
    bool Load(char const *, char const *);
    void SetTexture(Texture *);
    void SetTextureAnim(TextureAnim *);
    void TexAnimReset();
    unsigned __int32 TexAnimGetNumFrames() const;
    unsigned __int32 TexAnimGetCurrFrame() const;
    _inline bool NeedsUpdate() const;
    void Update(float);
    void SetTime(float);
    Texture *GetTexture() const;
    _inline float GetUVScale() const;
    TextureProxy &operator=(TextureProxy const &);
private:
    void clear();
    Texture *LoadMultiResTexture(char const *, float &, char const *);
    Texture *m_pTex; // 0x0
    TextureAnim *m_pTexAnim; // 0x4
    float m_localTime; // 0x8
    float m_uvScale; // 0xC
};
static_assert(sizeof(TextureProxy) == 16, "Invalid TextureProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1002EA50(TextureProxy *const, TextureProxy const &);
_inline TextureProxy::TextureProxy(TextureProxy const &) // 0x1002EA50
{
    mangled_assert("??0TextureProxy@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002EA50(this, arg);
}

_extern bool _sub_10030930(TextureProxy const *const);
_inline bool TextureProxy::NeedsUpdate() const // 0x10030930
{
    mangled_assert("?NeedsUpdate@TextureProxy@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10030930(this);
    return __result;
}

_extern float _sub_10030920(TextureProxy const *const);
_inline float TextureProxy::GetUVScale() const // 0x10030920
{
    mangled_assert("?GetUVScale@TextureProxy@@QBEMXZ");
    todo("implement");
    float __result = _sub_10030920(this);
    return __result;
}

/* ---------- private code */

#endif // __TEXTUREPROXY_H__
#endif
