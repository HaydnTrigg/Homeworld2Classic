#if 0
#ifndef __COMPILEDTEXT_H__
#define __COMPILEDTEXT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompiledText
{
public:
    struct ColourLess
    {
        bool operator()(vector4 const &, vector4 const &) const;
    };
    static_assert(sizeof(ColourLess) == 1, "Invalid ColourLess size");
    typedef std::vector<FatVertex,std::allocator<FatVertex> > Vertices;
    typedef std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > VColourMap;
    typedef std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > VTextureMap;
    typedef std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > VTypefaceMap;
    void clear();
    std::vector<FatVertex,std::allocator<FatVertex> > &getVertices(Typeface *, __int32, vector4 const &);
    void print(rndTable *);
    std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > m_vTypefaceMap; // 0x0
    CompiledText(CompiledText const &); /* compiler_generated() */
    CompiledText(); /* compiler_generated() */
    ~CompiledText(); /* compiler_generated() */
    CompiledText &operator=(CompiledText const &); /* compiler_generated() */
};
static_assert(sizeof(CompiledText) == 8, "Invalid CompiledText size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COMPILEDTEXT_H__
/* combined */
#ifndef __COMPILEDTEXT_H__
#define __COMPILEDTEXT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompiledText
{
public:
    struct ColourLess
    {
        bool operator()(vector4 const &, vector4 const &) const;
    };
    static_assert(sizeof(ColourLess) == 1, "Invalid ColourLess size");
    typedef std::vector<FatVertex,std::allocator<FatVertex> > Vertices;
    typedef std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > VColourMap;
    typedef std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > VTextureMap;
    typedef std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > VTypefaceMap;
    void clear();
    std::vector<FatVertex,std::allocator<FatVertex> > &getVertices(Typeface *, __int32, vector4 const &);
    void print(rndTable *);
    std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > m_vTypefaceMap; // 0x0
    _inline CompiledText(CompiledText const &); /* compiler_generated() */
    _inline CompiledText(); /* compiler_generated() */
    _inline ~CompiledText(); /* compiler_generated() */
    _inline CompiledText &operator=(CompiledText const &); /* compiler_generated() */
};
static_assert(sizeof(CompiledText) == 8, "Invalid CompiledText size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_1002B320(CompiledText::ColourLess const *const, vector4 const &, vector4 const &);
_inline bool CompiledText::ColourLess::operator()(vector4 const &, vector4 const &) const // 0x1002B320
{
    mangled_assert("??RColourLess@CompiledText@@QBE_NABVvector4@@0@Z");
    todo("implement");
    bool __result = _sub_1002B320(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __COMPILEDTEXT_H__
#endif
