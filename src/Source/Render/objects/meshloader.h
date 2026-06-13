#if 0
#ifndef __MESHLOADER_H__
#define __MESHLOADER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MeshLoader :
    public Core
{
public:
    static void addIFFParseHandlers(IFF *, Mesh **, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    static void setTextureCallback(void (*)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *));
    static void callTextureCallback(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *);
    MeshLoader(MeshLoader const &); /* compiler_generated() */
    MeshLoader(); /* compiler_generated() */
    virtual ~MeshLoader() override; /* compiler_generated() */
    MeshLoader &operator=(MeshLoader const &); /* compiler_generated() */
};
static_assert(sizeof(MeshLoader) == 4, "Invalid MeshLoader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESHLOADER_H__
/* combined */
#ifndef __MESHLOADER_H__
#define __MESHLOADER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MeshLoader :
    public Core
{
public:
    static void addIFFParseHandlers(IFF *iff, Mesh **ppMesh, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *errMsg);
    static void setTextureCallback(void (*proc)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, Texture *));
    static void callTextureCallback(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, Texture *tex);
    _inline MeshLoader(MeshLoader const &); /* compiler_generated() */
    _inline MeshLoader(); /* compiler_generated() */
    virtual _inline ~MeshLoader() override; /* compiler_generated() */
    _inline MeshLoader &operator=(MeshLoader const &); /* compiler_generated() */
};
static_assert(sizeof(MeshLoader) == 4, "Invalid MeshLoader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MESHLOADER_H__
#endif
