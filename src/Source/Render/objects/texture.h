#if 0
#ifndef __TEXTURE_H__
#define __TEXTURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Texture :
    public Core
{
private:
    Texture(Texture const &);
    Texture(__int32 const, TextureTarget const);
    virtual ~Texture() override;
public:
    virtual bool release() override;
    virtual bool reference();
    void setTextureRegistry(TextureRegistry *);
    bool bind() const;
    bool bind(__int32) const;
    unsigned __int32 getHandle();
    void copyData(TextureFormat, __int32, __int32, __int32);
    void copySubData(TextureFormat, __int32, __int32, __int32, __int32, __int32);
    void setData(TextureFormat, __int32, __int32, __int32, __int32, void const *);
    void setSubData(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *);
    static void setFilter(TextureFilter);
    static void setFilter(TextureFilter, TextureFilter);
    static void setWrap(TextureWrap);
    static void setWrap(TextureWrap, TextureWrap, TextureWrap);
    static void setAnisotropy(unsigned __int32);
    void setPriority(float) const;
    void setMaxLevel(unsigned __int32);
    void setBaseLevel(unsigned __int32);
    bool setTexture(TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    bool setTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    bool setSubTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    __int32 getWidth() const;
    __int32 getHeight() const;
    __int32 getDepth() const;
    TextureFormat getFormat() const;
    unsigned __int32 getBitsPerPixel() const;
    static void setUnit(__int32);
    static void setUnitMode(__int32, TextureMode);
    static void setUnitMode(TextureMode);
    static void setTexgen(__int32, TexgenMode, vector4 const &);
    static void setTexgen(TexgenMode, vector4 const &);
    static __int32 getNumUnits();
    static void genMipmaps(Texture *, TextureFormat, __int32, __int32, unsigned __int32 const *, unsigned __int32 *, bool);
    static void genMipmap(TextureFormat, __int32, __int32, void const *, __int32, __int32, void *, bool);
    TextureTarget getTextureTarget() const;
    void setTextureTarget(TextureTarget const);
private:
    __int32 m_width; // 0x4
    __int32 m_height; // 0x8
    __int32 m_depth; // 0xC
    TextureFormat m_format; // 0x10
    unsigned __int32 m_bitsPerPixel; // 0x14
    unsigned __int32 m_handle; // 0x18
    TextureTarget m_textureTarget; // 0x1C
    TextureRegistry *m_pRegistry; // 0x20
    Texture &operator=(Texture const &);
};
static_assert(sizeof(Texture) == 36, "Invalid Texture size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TEXTURE_H__
/* combined */
#ifndef __TEXTURE_H__
#define __TEXTURE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Texture :
    public Core
{
private:
    Texture(Texture const &);
    Texture(__int32 const, TextureTarget const);
    virtual ~Texture() override;
public:
    virtual bool release() override;
    virtual bool reference();
    void setTextureRegistry(TextureRegistry *);
    bool bind() const;
    bool bind(__int32) const;
    _inline unsigned __int32 getHandle();
    void copyData(TextureFormat, __int32, __int32, __int32);
    void copySubData(TextureFormat, __int32, __int32, __int32, __int32, __int32);
    void setData(TextureFormat, __int32, __int32, __int32, __int32, void const *);
    void setSubData(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *);
    static _inline void setFilter(TextureFilter filter);
    static void setFilter(TextureFilter minFilter, TextureFilter magFilter);
    static _inline void setWrap(TextureWrap wrap);
    static void setWrap(TextureWrap sWrap, TextureWrap tWrap, TextureWrap rWrap);
    static void setAnisotropy(unsigned __int32 level);
    void setPriority(float) const;
    void setMaxLevel(unsigned __int32);
    void setBaseLevel(unsigned __int32);
    bool setTexture(TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    bool setTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    bool setSubTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap);
    _inline __int32 getWidth() const;
    _inline __int32 getHeight() const;
    _inline __int32 getDepth() const;
    _inline TextureFormat getFormat() const;
    _inline unsigned __int32 getBitsPerPixel() const;
    static void setUnit(__int32 textureUnit);
    static void setUnitMode(__int32 textureUnit, TextureMode mode);
    static void setUnitMode(TextureMode mode);
    static void setTexgen(__int32 textureUnit, TexgenMode mode, vector4 const &plane);
    static void setTexgen(TexgenMode mode, vector4 const &plane);
    static __int32 getNumUnits();
    static void genMipmaps(Texture *tex, TextureFormat format, __int32 width, __int32 height, unsigned __int32 const *data, unsigned __int32 *tempData, bool bilinear);
    static void genMipmap(TextureFormat format, __int32 inWidth, __int32 inHeight, void const *inData, __int32 outWidth, __int32 outHeight, void *outData, bool bilinear);
    _inline TextureTarget getTextureTarget() const;
    _inline void setTextureTarget(TextureTarget const);
private:
    __int32 m_width; // 0x4
    __int32 m_height; // 0x8
    __int32 m_depth; // 0xC
    TextureFormat m_format; // 0x10
    unsigned __int32 m_bitsPerPixel; // 0x14
    unsigned __int32 m_handle; // 0x18
    TextureTarget m_textureTarget; // 0x1C
    TextureRegistry *m_pRegistry; // 0x20
    Texture &operator=(Texture const &);
};
static_assert(sizeof(Texture) == 36, "Invalid Texture size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 Texture::getHandle() // 0x10019270
{
    mangled_assert("?getHandle@Texture@@QAEIXZ");
    todo("implement");
}

_inline void Texture::setFilter(TextureFilter filter) // 0x1001BA30
{
    mangled_assert("?setFilter@Texture@@SGXW4TextureFilter@@@Z");
    todo("implement");
}

_inline void Texture::setWrap(TextureWrap wrap) // 0x1001BB80
{
    mangled_assert("?setWrap@Texture@@SGXW4TextureWrap@@@Z");
    todo("implement");
}

_inline __int32 Texture::getWidth() const // 0x10019550
{
    mangled_assert("?getWidth@Texture@@QBEHXZ");
    todo("implement");
}

_inline __int32 Texture::getHeight() const // 0x10019280
{
    mangled_assert("?getHeight@Texture@@QBEHXZ");
    todo("implement");
}

_inline __int32 Texture::getDepth() const // 0x10019200
{
    mangled_assert("?getDepth@Texture@@QBEHXZ");
    todo("implement");
}

_inline TextureFormat Texture::getFormat() const // 0x10019260
{
    mangled_assert("?getFormat@Texture@@QBE?AW4TextureFormat@@XZ");
    todo("implement");
}

_inline unsigned __int32 Texture::getBitsPerPixel() const // 0x10019110
{
    mangled_assert("?getBitsPerPixel@Texture@@QBEIXZ");
    todo("implement");
}

_inline TextureTarget Texture::getTextureTarget() const // 0x100194A0
{
    mangled_assert("?getTextureTarget@Texture@@QBE?AW4TextureTarget@@XZ");
    todo("implement");
}

_inline void Texture::setTextureTarget(TextureTarget const) // 0x1001BB10
{
    mangled_assert("?setTextureTarget@Texture@@QAEXW4TextureTarget@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __TEXTURE_H__
#endif
