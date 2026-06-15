#if 0
#ifndef __TYPEFACE_H__
#define __TYPEFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Glyph
{
public:
    Glyph();
    wchar_t letter; // 0x0
    unsigned __int32 iImage; // 0x4
    unsigned __int32 x; // 0x8
    unsigned __int32 y; // 0xC
    unsigned __int32 w; // 0x10
    unsigned __int32 h; // 0x14
    float left; // 0x18
    float right; // 0x1C
    float kerning; // 0x20
    float top; // 0x24
    float baseline; // 0x28
    float bottom; // 0x2C
    bool red; // 0x30
    float tX; // 0x34
    float tY; // 0x38
    float tWidth; // 0x3C
    float tHeight; // 0x40
    float width; // 0x44
    float height; // 0x48
    __int32 index; // 0x4C
};
static_assert(sizeof(Glyph) == 80, "Invalid Glyph size");

class Typeface
{
public:
    Typeface(Typeface const &); /* compiler_generated() */
    Typeface(float, float);
    ~Typeface();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    bool HasLetter(wchar_t) const;
    void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addTexture(Texture *);
    Glyph *addGlyph(Glyph *);
    bool load(IFF *);
    float getHeight() const;
    void getPrintSize(float &, float &, wchar_t const *, __int32);
    void print(rndTable *, std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > &);
    void print(rndTable *, float, float, vector4, wchar_t const *, __int32);
    void compile(CompiledText &, float, float, vector4 &, wchar_t const *, __int32);
private:
    Glyph *getGlyph(wchar_t);
public:
    Glyph const *getGlyph(wchar_t) const;
    float getScreenWidth() const;
    float getScreenHeight() const;
protected:
    virtual Glyph *buildGlyph(wchar_t, unsigned __int32, unsigned __int32);
    __int32 parseTag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, __int32);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::vector<Texture *,std::allocator<Texture *> > m_textures; // 0x1C
    stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > m_glyphs; // 0x28
    float m_rowHeight; // 0x48
    float m_ascent; // 0x4C
    float m_decent; // 0x50
    float m_kerning; // 0x54
    float m_baseline; // 0x58
    typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
    typedef stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > GlyphMap;
private:
    static float ms_screenWidth;
    static float ms_screenHeight;
public:
    Typeface &operator=(Typeface const &); /* compiler_generated() */
};
static_assert(sizeof(Typeface) == 92, "Invalid Typeface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TYPEFACE_H__
/* combined */
#ifndef __TYPEFACE_H__
#define __TYPEFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Glyph
{
public:
    _inline Glyph();
    wchar_t letter; // 0x0
    unsigned __int32 iImage; // 0x4
    unsigned __int32 x; // 0x8
    unsigned __int32 y; // 0xC
    unsigned __int32 w; // 0x10
    unsigned __int32 h; // 0x14
    float left; // 0x18
    float right; // 0x1C
    float kerning; // 0x20
    float top; // 0x24
    float baseline; // 0x28
    float bottom; // 0x2C
    bool red; // 0x30
    float tX; // 0x34
    float tY; // 0x38
    float tWidth; // 0x3C
    float tHeight; // 0x40
    float width; // 0x44
    float height; // 0x48
    __int32 index; // 0x4C
};
static_assert(sizeof(Glyph) == 80, "Invalid Glyph size");

class Typeface
{
public:
    _inline Typeface(Typeface const &); /* compiler_generated() */
    Typeface(float, float);
    ~Typeface();
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    bool HasLetter(wchar_t) const;
    void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addTexture(Texture *);
    Glyph *addGlyph(Glyph *);
    bool load(IFF *);
    float getHeight() const;
    void getPrintSize(float &, float &, wchar_t const *, __int32);
    void print(rndTable *, std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > &);
    void print(rndTable *, float, float, vector4, wchar_t const *, __int32);
    void compile(CompiledText &, float, float, vector4 &, wchar_t const *, __int32);
private:
    Glyph *getGlyph(wchar_t);
public:
    Glyph const *getGlyph(wchar_t) const;
    _inline float getScreenWidth() const;
    _inline float getScreenHeight() const;
protected:
    virtual Glyph *buildGlyph(wchar_t, unsigned __int32, unsigned __int32);
    __int32 parseTag(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, __int32);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    std::vector<Texture *,std::allocator<Texture *> > m_textures; // 0x1C
    stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > m_glyphs; // 0x28
    float m_rowHeight; // 0x48
    float m_ascent; // 0x4C
    float m_decent; // 0x50
    float m_kerning; // 0x54
    float m_baseline; // 0x58
    typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
    typedef stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > GlyphMap;
private:
    static float ms_screenWidth;
    static float ms_screenHeight;
public:
    _inline Typeface &operator=(Typeface const &); /* compiler_generated() */
};
static_assert(sizeof(Typeface) == 92, "Invalid Typeface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Glyph::Glyph() // 0x100A32E0
{
    mangled_assert("??0Glyph@@QAE@XZ");
    todo("implement");
}

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &Typeface::getName() const // 0x10026AB0
{
    mangled_assert("?getName@Typeface@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline float Typeface::getScreenWidth() const // 0x10026B00
{
    mangled_assert("?getScreenWidth@Typeface@@QBEMXZ");
    todo("implement");
}

_inline float Typeface::getScreenHeight() const // 0x10026AF0
{
    mangled_assert("?getScreenHeight@Typeface@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TYPEFACE_H__
#endif
