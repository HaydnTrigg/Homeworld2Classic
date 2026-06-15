#if 0
#ifndef __BITMAPFONT_H__
#define __BITMAPFONT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BitmapFont
{
public:
    BitmapFont(BitmapFont const &); /* compiler_generated() */
    BitmapFont();
    ~BitmapFont();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFilename() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFontname() const;
    __int32 getResolution() const;
    bool hasNormal();
    bool hasBold();
    bool hasItalic();
    bool hasUnderline();
    Typeface *getTypeface(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    Typeface *getNormalTypeface();
    Typeface *getBoldTypeface();
    Typeface *getItalicTypeface();
    Typeface *getUnderlineTypeface();
    bool load(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, __int32);
    void addTypeface(Typeface *);
    void setFontname(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > TypefaceList;
private:
    Typeface *createExtended(bool, bool, bool);
    Typeface *findBestTypeface(char const *);
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > m_typefaces; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x20
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fontname; // 0x38
    __int32 m_res; // 0x50
    Typeface *m_pNormalTypeface; // 0x54
    Typeface *m_pBoldTypeface; // 0x58
    Typeface *m_pItalicTypeface; // 0x5C
    Typeface *m_pUnderlineTypeface; // 0x60
    static __int32 handleFONT_NAME(IFF *, IFFChunk *, void *, void *);
    static __int32 handleFONT_ATTR(IFF *, IFFChunk *, void *, void *);
    static __int32 handleFONT_TYPE(IFF *, IFFChunk *, void *, void *);
    static __int32 handleFONT(IFF *, IFFChunk *, void *, void *);
public:
    BitmapFont &operator=(BitmapFont const &); /* compiler_generated() */
};
static_assert(sizeof(BitmapFont) == 100, "Invalid BitmapFont size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BITMAPFONT_H__
/* combined */
#ifndef __BITMAPFONT_H__
#define __BITMAPFONT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BitmapFont
{
public:
    BitmapFont(BitmapFont const &); /* compiler_generated() */
    BitmapFont();
    ~BitmapFont();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFilename() const;
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFontname() const;
    __int32 getResolution() const;
    bool hasNormal();
    bool hasBold();
    bool hasItalic();
    bool hasUnderline();
    Typeface *getTypeface(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    Typeface *getNormalTypeface();
    Typeface *getBoldTypeface();
    Typeface *getItalicTypeface();
    Typeface *getUnderlineTypeface();
    bool load(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, __int32);
    void addTypeface(Typeface *);
    _inline void setFontname(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > TypefaceList;
private:
    Typeface *createExtended(bool, bool, bool);
    Typeface *findBestTypeface(char const *);
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > m_typefaces; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x20
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fontname; // 0x38
    __int32 m_res; // 0x50
    Typeface *m_pNormalTypeface; // 0x54
    Typeface *m_pBoldTypeface; // 0x58
    Typeface *m_pItalicTypeface; // 0x5C
    Typeface *m_pUnderlineTypeface; // 0x60
    static __int32 handleFONT_NAME(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleFONT_ATTR(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleFONT_TYPE(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 handleFONT(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
public:
    BitmapFont &operator=(BitmapFont const &); /* compiler_generated() */
};
static_assert(sizeof(BitmapFont) == 100, "Invalid BitmapFont size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &BitmapFont::getFontname() const // 0x1004D180
{
    mangled_assert("?getFontname@BitmapFont@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline void BitmapFont::setFontname(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004F570
{
    mangled_assert("?setFontname@BitmapFont@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __BITMAPFONT_H__
#endif
