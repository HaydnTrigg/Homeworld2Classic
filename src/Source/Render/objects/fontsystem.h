#if 0
#ifndef __FONTSYSTEM_H__
#define __FONTSYSTEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FontSystem :
    public Core
{
public:
    static bool Startup();
    static bool Shutdown();
    FontSystem(FontSystem const &); /* compiler_generated() */
    FontSystem();
    virtual ~FontSystem() override;
    enum Style
    {
        STYLE_Normal = 0,
        STYLE_Bold,
        STYLE_Italic,
        STYLE_Underline,
    };
    enum Justification
    {
        JUST_Left = 0,
        JUST_Right,
        JUST_Center,
    };
    static FontSystem *instance();
    static bool release();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > FontNameMap;
    void setFontNameMap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *);
    bool loadBitmapFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool reloadAllBitmapFonts();
    void setAll(bool);
    void setResolution(__int32, __int32);
    void setProjection(bool, float);
    void setBlending(bool);
    void setColour(vector4 const &);
    void setColour(float, float, float, float);
    void setShadowColour(vector4 const &);
    void setShadowColour(float, float, float, float);
    bool setFont(char const *);
    bool setFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool setStyle(FontSystem::Style);
    void setJustification(FontSystem::Justification);
    void setDropShadow(bool);
    void setDropShadowOffset(float, float);
    void stateSaver(bool);
    bool hasStyle(FontSystem::Style);
    void print(unsigned __int32);
    void print(float, float, char const *);
    void print(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void print(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void print(float, float, wchar_t const *);
    void printFancy(float, float, char const *);
    void printFancy(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void printFancy(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void printFancy(float, float, wchar_t const *);
    void printSubString(float, float, char const *, __int32);
    void printSubString(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32);
    void printSubString(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32);
    void printSubString(float, float, wchar_t const *, __int32);
    float getFontHeight();
    void getPrintSize(char const *, float *, float *);
    void getPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
    void getPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
    void getPrintSize(wchar_t const *, float *, float *);
    void getPrintFancySize(char const *, float *, float *);
    void getPrintFancySize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
    void getPrintFancySize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
    void getPrintFancySize(wchar_t const *, float *, float *);
    void getSubStringPrintSize(char const *, __int32, float *, float *);
    void getSubStringPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, float *, float *);
    void getSubStringPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32, float *, float *);
    void getSubStringPrintSize(wchar_t const *, __int32, float *, float *);
    void wrapStringFancy(wchar_t const *, float, wchar_t *, unsigned __int32);
    void getPrintCharOffset(wchar_t const *, __int32, float *);
    void getPrintFancyCharOffset(wchar_t const *, __int32, float *, float *);
    void resetStatCount();
    void getStatCount(__int32 &);
    typedef unsigned __int32 LabelHandle;
    static unsigned __int32 const INVALID_HANDLE;
    unsigned __int32 labelCreate();
    void labelDestroy(unsigned __int32);
    void compile(unsigned __int32, float, float, vector4 const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void compile(unsigned __int32, float, float, vector4 const &, char const *);
    void compile(unsigned __int32, float, float, vector4 const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void compile(unsigned __int32, float, float, vector4 const &, wchar_t const *);
    void compileFancy(unsigned __int32, float, float, vector4 const &, wchar_t const *);
    static void makeNotFancy(wchar_t *, unsigned __int32, wchar_t const *);
protected:
    static FontSystem *create();
private:
    void freeBitmaps();
    BitmapFont *getLoadedFont(char const *);
    __int32 parseColour(wchar_t const *, vector4 &);
    __int32 parseStyle(wchar_t const *, Typeface **);
    static FontSystem *s_instance;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > BitmapFontList;
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > m_bitmapFonts; // 0x4
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *m_nameMap; // 0xC
    __int32 m_iNumChars; // 0x10
    __int32 m_screenWidth; // 0x14
    __int32 m_screenHeight; // 0x18
    BitmapFont *m_pCurrentFont; // 0x1C
    Typeface *m_pCurrentTypeface; // 0x20
    vector4 m_colour; // 0x24
    FontSystem::Style m_style; // 0x34
    FontSystem::Justification m_just; // 0x38
    bool m_bDropShadow; // 0x3C
    vector4 m_shadowColour; // 0x40
    float m_dropShadowX; // 0x50
    float m_dropShadowY; // 0x54
    bool m_bSaved; // 0x58
    BitmapFont *m_pSavedFont; // 0x5C
    Typeface *m_pSavedTypeface; // 0x60
    vector4 m_savedColour; // 0x64
    FontSystem::Style m_savedStyle; // 0x74
    FontSystem::Justification m_savedJust; // 0x78
    bool m_bSavedDropShadow; // 0x7C
    vector4 m_savedShadowColour; // 0x80
    float m_savedDropShadowX; // 0x90
    float m_savedDropShadowY; // 0x94
    matrix4 m_projection; // 0x98
    bool m_bRememberBlend; // 0xD8
    unsigned __int32 m_textureUnitMode; // 0xDC
    unsigned __int32 m_oldSrcBlend; // 0xE0
    unsigned __int32 m_oldDestBlend; // 0xE4
    bool m_bDepthbuffer; // 0xE8
    bool m_bCull; // 0xE9
    bool m_bLighting; // 0xEA
    bool m_bTexture0; // 0xEB
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parameterString; // 0xEC
    std::vector<FontSystem::Label,std::allocator<FontSystem::Label> > m_labels; // 0x104
    std::vector<unsigned int,std::allocator<unsigned int> > m_freeLabels; // 0x110
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > s_defaultFilename;
    static vector4 s_lastColour;
    static Typeface *s_lastTypeface;
    struct Label
    {
        Label(FontSystem::Label const &); /* compiler_generated() */
        Label();
        CompiledText m_normalText; // 0x0
        bool m_bDropShadow; // 0x8
        CompiledText m_shadowText; // 0xC
        ClipRect m_clipRect; // 0x14
        ~Label(); /* compiler_generated() */
        FontSystem::Label &operator=(FontSystem::Label const &); /* compiler_generated() */
    };
    static_assert(sizeof(Label) == 44, "Invalid Label size");
    void compileText(FontSystem::Label &, float, float, wchar_t const *, __int32);
public:
    FontSystem &operator=(FontSystem const &); /* compiler_generated() */
};
static_assert(sizeof(FontSystem) == 284, "Invalid FontSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FONTSYSTEM_H__
/* combined */
#ifndef __FONTSYSTEM_H__
#define __FONTSYSTEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FontSystem :
    public Core
{
public:
    static bool Startup();
    static bool Shutdown();
    _inline FontSystem(FontSystem const &); /* compiler_generated() */
    FontSystem();
    virtual ~FontSystem() override;
    enum Style
    {
        STYLE_Normal = 0,
        STYLE_Bold,
        STYLE_Italic,
        STYLE_Underline,
    };
    enum Justification
    {
        JUST_Left = 0,
        JUST_Right,
        JUST_Center,
    };
    static FontSystem *instance();
    static bool release();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > FontNameMap;
    void setFontNameMap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *);
    bool loadBitmapFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool reloadAllBitmapFonts();
    void setAll(bool);
    void setResolution(__int32, __int32);
    void setProjection(bool, float);
    void setBlending(bool);
    void setColour(vector4 const &);
    void setColour(float, float, float, float);
    void setShadowColour(vector4 const &);
    void setShadowColour(float, float, float, float);
    bool setFont(char const *);
    bool setFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool setStyle(FontSystem::Style);
    void setJustification(FontSystem::Justification);
    void setDropShadow(bool);
    void setDropShadowOffset(float, float);
    void stateSaver(bool);
    bool hasStyle(FontSystem::Style);
    void print(unsigned __int32);
    void print(float, float, char const *);
    void print(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void print(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void print(float, float, wchar_t const *);
    void printFancy(float, float, char const *);
    void printFancy(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void printFancy(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void printFancy(float, float, wchar_t const *);
    void printSubString(float, float, char const *, __int32);
    void printSubString(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32);
    void printSubString(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32);
    void printSubString(float, float, wchar_t const *, __int32);
    float getFontHeight();
    void getPrintSize(char const *, float *, float *);
    void getPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
    void getPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
    void getPrintSize(wchar_t const *, float *, float *);
    void getPrintFancySize(char const *, float *, float *);
    void getPrintFancySize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
    void getPrintFancySize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
    void getPrintFancySize(wchar_t const *, float *, float *);
    void getSubStringPrintSize(char const *, __int32, float *, float *);
    void getSubStringPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, float *, float *);
    void getSubStringPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32, float *, float *);
    void getSubStringPrintSize(wchar_t const *, __int32, float *, float *);
    void wrapStringFancy(wchar_t const *, float, wchar_t *, unsigned __int32);
    void getPrintCharOffset(wchar_t const *, __int32, float *);
    void getPrintFancyCharOffset(wchar_t const *, __int32, float *, float *);
    void resetStatCount();
    void getStatCount(__int32 &);
    typedef unsigned __int32 LabelHandle;
    static unsigned __int32 const INVALID_HANDLE;
    unsigned __int32 labelCreate();
    void labelDestroy(unsigned __int32);
    void compile(unsigned __int32, float, float, vector4 const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void compile(unsigned __int32, float, float, vector4 const &, char const *);
    void compile(unsigned __int32, float, float, vector4 const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    void compile(unsigned __int32, float, float, vector4 const &, wchar_t const *);
    void compileFancy(unsigned __int32, float, float, vector4 const &, wchar_t const *);
    static void makeNotFancy(wchar_t *notFancy, unsigned __int32 length, wchar_t const *fancy);
protected:
    static FontSystem *create();
private:
    void freeBitmaps();
    BitmapFont *getLoadedFont(char const *);
    __int32 parseColour(wchar_t const *, vector4 &);
    __int32 parseStyle(wchar_t const *, Typeface **);
    static FontSystem *s_instance;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > BitmapFontList;
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > m_bitmapFonts; // 0x4
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *m_nameMap; // 0xC
    __int32 m_iNumChars; // 0x10
    __int32 m_screenWidth; // 0x14
    __int32 m_screenHeight; // 0x18
    BitmapFont *m_pCurrentFont; // 0x1C
    Typeface *m_pCurrentTypeface; // 0x20
    vector4 m_colour; // 0x24
    FontSystem::Style m_style; // 0x34
    FontSystem::Justification m_just; // 0x38
    bool m_bDropShadow; // 0x3C
    vector4 m_shadowColour; // 0x40
    float m_dropShadowX; // 0x50
    float m_dropShadowY; // 0x54
    bool m_bSaved; // 0x58
    BitmapFont *m_pSavedFont; // 0x5C
    Typeface *m_pSavedTypeface; // 0x60
    vector4 m_savedColour; // 0x64
    FontSystem::Style m_savedStyle; // 0x74
    FontSystem::Justification m_savedJust; // 0x78
    bool m_bSavedDropShadow; // 0x7C
    vector4 m_savedShadowColour; // 0x80
    float m_savedDropShadowX; // 0x90
    float m_savedDropShadowY; // 0x94
    matrix4 m_projection; // 0x98
    bool m_bRememberBlend; // 0xD8
    unsigned __int32 m_textureUnitMode; // 0xDC
    unsigned __int32 m_oldSrcBlend; // 0xE0
    unsigned __int32 m_oldDestBlend; // 0xE4
    bool m_bDepthbuffer; // 0xE8
    bool m_bCull; // 0xE9
    bool m_bLighting; // 0xEA
    bool m_bTexture0; // 0xEB
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_parameterString; // 0xEC
    std::vector<FontSystem::Label,std::allocator<FontSystem::Label> > m_labels; // 0x104
    std::vector<unsigned int,std::allocator<unsigned int> > m_freeLabels; // 0x110
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > s_defaultFilename;
    static vector4 s_lastColour;
    static Typeface *s_lastTypeface;
    struct Label
    {
        _inline Label(FontSystem::Label const &); /* compiler_generated() */
        _inline Label();
        CompiledText m_normalText; // 0x0
        bool m_bDropShadow; // 0x8
        CompiledText m_shadowText; // 0xC
        ClipRect m_clipRect; // 0x14
        _inline ~Label(); /* compiler_generated() */
        _inline FontSystem::Label &operator=(FontSystem::Label const &); /* compiler_generated() */
    };
    static_assert(sizeof(Label) == 44, "Invalid Label size");
    void compileText(FontSystem::Label &, float, float, wchar_t const *, __int32);
public:
    _inline FontSystem &operator=(FontSystem const &); /* compiler_generated() */
};
static_assert(sizeof(FontSystem) == 284, "Invalid FontSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FontSystem::Label::Label() // 0x1004BAA0
{
    mangled_assert("??0Label@FontSystem@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FONTSYSTEM_H__
#endif
