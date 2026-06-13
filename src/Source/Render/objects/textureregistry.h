#if 0
#ifndef __TEXTUREREGISTRY_H__
#define __TEXTUREREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TexregElement
{
public:
    TexregElement(TexregElement const &);
    TexregElement();
    ~TexregElement();
    __int32 m_numRefs; // 0x0
    Texture *m_texture; // 0x4
};
static_assert(sizeof(TexregElement) == 8, "Invalid TexregElement size");

class TextureRegistry
{
public:
    static TextureRegistry *instance();
    static TextureRegistry *i();
    static bool release();
    enum LoadingStyle
    {
        LS_NoROT = 0,
        LS_PreferROT,
        LS_MostRecent,
        LS_AlwaysROT,
        LS_COUNT,
    };
    TextureRegistry(TextureRegistry const &); /* compiler_generated() */
    TextureRegistry();
    ~TextureRegistry();
    char const *genTextureName();
    Texture *createBlank(char const *, TextureTarget const, bool, char const *);
    Texture *find(char const *, bool, bool, bool, char const *);
    bool releaseTexture(Texture *);
    bool referenceTexture(Texture *);
    bool reloadTexture(Texture *);
    typedef void (*MipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *);
    void setMipMapEditCB(void (*)(TextureFormat, __int32, __int32, __int32, void *));
    void (*getMipMapEditCB())(TextureFormat, __int32, __int32, __int32, void *);
    void enableMipMapGen(bool);
    bool isMipMapGenEnabled() const;
private:
    void flushTextures();
    Texture *load(char const *, char const *, bool, char const *, bool);
    bool loadROT(Texture *, char const *);
    bool loadTGA(Texture *, char const *);
    bool loadDDS(Texture *, char const *);
    bool loadMTGA(Texture *, char const *);
    bool createMipsFromRaw(Texture *, TextureFormat const, unsigned char const *, __int32 const, __int32 const);
    bool getFileToLoad(char const *, char *);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > ElementMap;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > ElementMapI;
    typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > ElementMapCI;
    static TextureRegistry *s_instance;
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > m_elementMap; // 0x0
    void (*m_mipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *); // 0x20
    unsigned long m_texCount; // 0x24
    bool m_bGenMipMap; // 0x28
    TextureRegistry::LoadingStyle m_loadingStyle; // 0x2C
public:
    TextureRegistry &operator=(TextureRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(TextureRegistry) == 48, "Invalid TextureRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TEXTUREREGISTRY_H__
/* combined */
#ifndef __TEXTUREREGISTRY_H__
#define __TEXTUREREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TexregElement
{
public:
    _inline TexregElement(TexregElement const &);
    _inline TexregElement();
    _inline ~TexregElement();
    __int32 m_numRefs; // 0x0
    Texture *m_texture; // 0x4
};
static_assert(sizeof(TexregElement) == 8, "Invalid TexregElement size");

class TextureRegistry
{
public:
    static TextureRegistry *instance();
    static _inline TextureRegistry *i();
    static bool release();
    enum LoadingStyle
    {
        LS_NoROT = 0,
        LS_PreferROT,
        LS_MostRecent,
        LS_AlwaysROT,
        LS_COUNT,
    };
    _inline TextureRegistry(TextureRegistry const &); /* compiler_generated() */
    TextureRegistry();
    ~TextureRegistry();
    char const *genTextureName();
    Texture *createBlank(char const *, TextureTarget const, bool, char const *);
    Texture *find(char const *, bool, bool, bool, char const *);
    bool releaseTexture(Texture *);
    bool referenceTexture(Texture *);
    bool reloadTexture(Texture *);
    typedef void (*MipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *);
    _inline void setMipMapEditCB(void (*)(TextureFormat, __int32, __int32, __int32, void *));
    _inline void (*getMipMapEditCB())(TextureFormat, __int32, __int32, __int32, void *);
    void enableMipMapGen(bool);
    bool isMipMapGenEnabled() const;
private:
    void flushTextures();
    Texture *load(char const *, char const *, bool, char const *, bool);
    bool loadROT(Texture *, char const *);
    bool loadTGA(Texture *, char const *);
    bool loadDDS(Texture *, char const *);
    bool loadMTGA(Texture *, char const *);
    bool createMipsFromRaw(Texture *, TextureFormat const, unsigned char const *, __int32 const, __int32 const);
    bool getFileToLoad(char const *, char *);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > ElementMap;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > ElementMapI;
    typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > ElementMapCI;
    static TextureRegistry *s_instance;
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > m_elementMap; // 0x0
    void (*m_mipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *); // 0x20
    unsigned long m_texCount; // 0x24
    bool m_bGenMipMap; // 0x28
    TextureRegistry::LoadingStyle m_loadingStyle; // 0x2C
public:
    _inline TextureRegistry &operator=(TextureRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(TextureRegistry) == 48, "Invalid TextureRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_100A11F0(TexregElement *const);
_inline TexregElement::TexregElement() // 0x100A11F0
{
    mangled_assert("??0TexregElement@@QAE@XZ");
    todo("implement");
    _sub_100A11F0(this);
}

_extern _sub_1000D390(TexregElement *const, TexregElement const &);
_inline TexregElement::TexregElement(TexregElement const &) // 0x1000D390
{
    mangled_assert("??0TexregElement@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1000D390(this, arg);
}

_extern void _sub_1000E480(TexregElement *const);
_inline TexregElement::~TexregElement() // 0x1000E480
{
    mangled_assert("??1TexregElement@@QAE@XZ");
    todo("implement");
    _sub_1000E480(this);
}

_extern TextureRegistry *_sub_10019570();
_inline TextureRegistry *TextureRegistry::i() // 0x10019570
{
    mangled_assert("?i@TextureRegistry@@SGPAV1@XZ");
    todo("implement");
    TextureRegistry * __result = _sub_10019570();
    return __result;
}

_extern void _sub_1001BAA0(TextureRegistry *const, void (*)(TextureFormat, __int32, __int32, __int32, void *));
_inline void TextureRegistry::setMipMapEditCB(void (*)(TextureFormat, __int32, __int32, __int32, void *)) // 0x1001BAA0
{
    mangled_assert("?setMipMapEditCB@TextureRegistry@@QAEXP6GXW4TextureFormat@@HHHPAX@Z@Z");
    todo("implement");
    _sub_1001BAA0(this, arg);
}

_extern void (*_sub_100192E0(TextureRegistry *const))(TextureFormat, __int32, __int32, __int32, void *);
_inline void (*TextureRegistry::getMipMapEditCB())(TextureFormat, __int32, __int32, __int32, void *) // 0x100192E0
{
    mangled_assert("?getMipMapEditCB@TextureRegistry@@QAEP6GXW4TextureFormat@@HHHPAX@ZXZ");
    todo("implement");
    void (*)(TextureFormat, __int32, __int32, __int32, void *) __result = _sub_100192E0(this);
    return __result;
}

/* ---------- private code */

#endif // __TEXTUREREGISTRY_H__
#endif
