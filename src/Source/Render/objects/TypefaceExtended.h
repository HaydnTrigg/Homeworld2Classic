#if 0
#ifndef __TYPEFACEEXTENDED_H__
#define __TYPEFACEEXTENDED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TypefaceExtended :
    public Typeface
{
public:
    TypefaceExtended(TypefaceExtended const &); /* compiler_generated() */
    TypefaceExtended(float, float);
    bool SetSystemFont(char const *, unsigned __int32, bool, bool, unsigned char);
    ~TypefaceExtended();
protected:
    virtual Glyph *buildGlyph(wchar_t, unsigned __int32, unsigned __int32) override;
    virtual bool queryLetterSize(wchar_t, unsigned __int32 &, unsigned __int32 &);
private:
    static unsigned __int32 const s_textureSize;
    typedef __int32 FontID;
    typedef std::vector<RectanglePacker,std::allocator<RectanglePacker> > PackerCont;
    std::vector<RectanglePacker,std::allocator<RectanglePacker> > m_packers; // 0x5C
    __int32 m_fontID; // 0x68
public:
    TypefaceExtended &operator=(TypefaceExtended const &); /* compiler_generated() */
};
static_assert(sizeof(TypefaceExtended) == 108, "Invalid TypefaceExtended size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TYPEFACEEXTENDED_H__
#endif
